// Fill out your copyright notice in the Description page of Project Settings.

#include "AgvActor.h"
#include "Components/SceneComponent.h"
#include "Components/SkeletalMeshComponent.h"
#include "Components/StaticMeshComponent.h"
#include "GameFramework/SpringArmComponent.h"
#include "Camera/CameraComponent.h"
#include "Animation/AnimationAsset.h"
#include "Engine/StaticMesh.h"
#include "Engine/GameInstance.h"
#include "Kismet/GameplayStatics.h"
#include "FactoryMap.h"
#include "FactoryStateSubsystem.h"

// Sets default values
AAgvActor::AAgvActor()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	SceneRoot = CreateDefaultSubobject<USceneComponent>(TEXT("SceneRoot"));
	SetRootComponent(SceneRoot);

	static ConstructorHelpers::FObjectFinder<UStaticMesh> CubeFinder(TEXT("/Engine/BasicShapes/Cube.Cube"));

	// JETANK 모델: 원점 = 바닥 중앙, 앞 = -Y, 1 BU = 100cm로 들어와 있음.
	// 90도 돌려 앞을 +X에 맞추고 0.2553배로 줄이면 폭 약 22cm, 길이 약 24cm.
	AgvMesh = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("AgvMesh"));
	AgvMesh->SetupAttachment(SceneRoot);
	AgvMesh->SetRelativeRotation(FRotator(0.0f, FactoryModel::AgvYaw, 0.0f));
	AgvMesh->SetRelativeScale3D(FVector(FactoryModel::Scale));
	AgvMesh->SetCollisionProfileName(TEXT("BlockAllDynamic"));

	// 싣고 있는 차체 (자리 표시용 흰 상자). 차대 윗면 약 15cm, 로봇팔 뒤쪽
	BodyMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("BodyMesh"));
	BodyMesh->SetupAttachment(AgvMesh);
	BodyMesh->SetMobility(EComponentMobility::Movable); // 실행 중 메시를 바꾸므로
	BodyMesh->SetCollisionEnabled(ECollisionEnabled::NoCollision);
	BodyMesh->SetVisibility(false);

	for (const TCHAR* Id : { TEXT("LOAD"), TEXT("P1"), TEXT("P2"), TEXT("P3"), TEXT("P4"), TEXT("INSP") })
	{
		BodyModelByStation.Add(FName(Id), nullptr);
	}

	const float K = FactoryModel::MapToWorld;

	// 3인칭 카메라 
	FollowArm = CreateDefaultSubobject<USpringArmComponent>(TEXT("FollowArm"));
	FollowArm->SetupAttachment(SceneRoot);
	FollowArm->SetRelativeLocation(FVector(0.0f, 0.0f, 15.0f * K));
	FollowArm->SetRelativeRotation(FRotator(-35.0f, 0.0f, 0.0f));
	FollowArm->TargetArmLength = 70.0f * K;
	FollowArm->bDoCollisionTest = false;
	FollowArm->bEnableCameraLag = true;
	FollowArm->bEnableCameraRotationLag = true;
	FollowArm->CameraRotationLagSpeed = 6.0f;
	FollowCam = CreateDefaultSubobject<UCameraComponent>(TEXT("FollowCam"));
	FollowCam->SetupAttachment(FollowArm, USpringArmComponent::SocketName);
	FollowCam->SetFieldOfView(70.0f);

	// 시점 카메라
	PovCam = CreateDefaultSubobject<UCameraComponent>(TEXT("PovCam"));
	PovCam->SetupAttachment(SceneRoot);
	PovCam->SetRelativeLocation(FVector(11.0f, 0.0f, 18.5f));
	PovCam->SetFieldOfView(80.0f);
	PovCam->SetAutoActivate(false);
}

// Called when the game starts or when spawned
void AAgvActor::BeginPlay()
{
	Super::BeginPlay();
	SetAnimMoving(false);

	Map = Cast<AFactoryMap>(UGameplayStatics::GetActorOfClass(this, AFactoryMap::StaticClass()));
	if (!Map)
	{
		UE_LOG(LogTemp, Warning, TEXT("%s: no FactoryMap in the level"), *GetName());
	}

	ViewState = FAgvState();
	ViewState.AgvId = AgvId;
	ViewState.LastStationId = TEXT("LOAD");
	
	if (UGameInstance* GameInstance = GetGameInstance())
	{
		if (UFactoryStateSubsystem* Store = GameInstance->GetSubsystem<UFactoryStateSubsystem>())
		{
			Store->OnAgvChanged.AddDynamic(this, &AAgvActor::HandleAgvChanged);
			FAgvState Existing;
			if (Store->GetAgvState(AgvId, Existing))
			{
				ViewState = Existing;
			}
		}
	}

	ApplyState(true); 
}

void AAgvActor::EndPlay(const EEndPlayReason::Type EndPlayReason)
{
	if (UGameInstance* GameInstance = GetGameInstance())
	{
		if (UFactoryStateSubsystem* Store = GameInstance->GetSubsystem<UFactoryStateSubsystem>())
		{
			Store->OnAgvChanged.RemoveDynamic(this, &AAgvActor::HandleAgvChanged);
		}
	}
	Super::EndPlay(EndPlayReason);
}

void AAgvActor::HandleAgvChanged(const FAgvState& NewState)
{
	if (NewState.AgvId != AgvId)
	{
		return; // 다른 AGV 소식
	}
	ViewState = NewState;
	ApplyState(false);
}

void AAgvActor::ApplyState(bool bSnap)
{
	UpdateBodyModel();

	if (!Map)
	{
		return;
	}

	if (ViewState.Motion == EAgvMotion::Moving && Map->HasStop(ViewState.NextStationId))
	{
		// 이동 중: 다음 정지 지점 쪽으로 추정해서 그리되, 그 지점을 지나치지 않음
		TargetDistance = Map->GetStopDistance(ViewState.NextStationId);
		bHasTarget = true;
		bTargetConfirmed = false;
	}
	else if (ViewState.Motion == EAgvMotion::Stopped && Map->HasStop(ViewState.LastStationId))
	{
		// 현장이 도착을 확인함
		TargetDistance = Map->GetStopDistance(ViewState.LastStationId);
		bHasTarget = true;
		bTargetConfirmed = true;
	}

	if (bSnap && bHasTarget)
	{
		CurrentDistance = TargetDistance;
	}
	ApplyTransform(0.0f, true);
}

void AAgvActor::Tick(float DeltaSeconds)
{
	Super::Tick(DeltaSeconds);

	if (!Map || !bHasTarget)
	{
		SetAnimMoving(false);
		return;
	}

	const float Remaining = Map->ForwardDistance(CurrentDistance, TargetDistance);
	// 데이터가 신선하지 않으면 추정 이동을 멈춤 (설계서 시나리오 D)
	const bool bMayMove = bTargetConfirmed || ViewState.Connection == EDataFreshness::Online;
	const bool bMovingNow = (Remaining > 0.01f && bMayMove);

	if (bMovingNow)
	{
		// 확인된 정지 지점: 0.5초 안쪽으로 따라잡음. 추정: 보통 속도
		const float Speed = bTargetConfirmed ? FMath::Max(MoveSpeed, Remaining / 0.5f) : MoveSpeed;
		const float Step = FMath::Min(Speed * DeltaSeconds, Remaining);
		CurrentDistance = Map->WrapDistance(CurrentDistance + Step);
	}

	SetAnimMoving(bMovingNow);
	ApplyTransform(DeltaSeconds, false);
}

void AAgvActor::ApplyTransform(float DeltaSeconds, bool bSnap)
{
	if (!Map)
	{
		return;
	}

	const FVector Location = Map->GetLocationAtDistance(CurrentDistance);
	const FRotator PathRotation = Map->GetRotationAtDistance(CurrentDistance);
	const FRotator Rotation = bSnap
		? PathRotation
		: FMath::RInterpTo(GetActorRotation(), PathRotation, DeltaSeconds, 8.0f);

	SetActorLocationAndRotation(Location, Rotation);
}

void AAgvActor::SetAnimMoving(bool bMoving)
{
	const int8 NewState = bMoving ? 1 : 0;
	if (NewState == AnimState)
	{
		return; // 바뀐 게 없으면 다시 재생하지 않음
	}
	AnimState = NewState;

	UAnimationAsset* Anim = bMoving ? MoveAnim.Get() : IdleAnim.Get();
	if (Anim)
	{
		AgvMesh->PlayAnimation(Anim, true);
	}
	else
	{
		AgvMesh->Stop();
	}
}

void AAgvActor::UseCamera(EAgvCameraMode Mode)
{
	// 이 액터가 화면 대상이면 켜져 있는 카메라가 쓰임
	const bool bPov = (Mode == EAgvCameraMode::Pov);
	PovCam->SetActive(bPov);
	FollowCam->SetActive(!bPov);
}

void AAgvActor::UpdateBodyModel()
{
	// LOAD에 서 있으면 새 차체를 실은 것: LOAD 모델(네모)로 되돌림
	// 정지 지점을 떠나면 그 공정을 마친 것: 그 공정의 모델로 바꿈
	FName StageStation = NAME_None;
	if (ViewState.Motion == EAgvMotion::Stopped && ViewState.LastStationId == TEXT("LOAD"))
	{
		StageStation = TEXT("LOAD");
	}
	else if (ViewState.Motion == EAgvMotion::Moving)
	{
		StageStation = ViewState.LastStationId;
	}

	if (UStaticMesh* Model = BodyModelByStation.FindRef(StageStation))
	{
		if (BodyMesh->GetStaticMesh() != Model)
		{
			BodyMesh->SetStaticMesh(Model);
		}
	}

	// 차체를 싣고 있고 모델이 정해졌을 때만 보임
	BodyMesh->SetVisibility(!ViewState.CarrierBodyId.IsNone() && BodyMesh->GetStaticMesh() != nullptr);
}
