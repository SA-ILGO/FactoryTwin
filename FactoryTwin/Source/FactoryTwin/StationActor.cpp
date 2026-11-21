// Fill out your copyright notice in the Description page of Project Settings.


#include "StationActor.h"
#include "Components/SceneComponent.h"
#include "Components/StaticMeshComponent.h"
#include "Materials/MaterialInstanceDynamic.h"
#include "Engine/GameInstance.h"
#include "FactoryStateSubsystem.h"

AStationActor::AStationActor()
{
	PrimaryActorTick.bCanEverTick = false;

	SceneRoot = CreateDefaultSubobject<USceneComponent>(TEXT("SceneRoot"));
	SetRootComponent(SceneRoot);

	ModelRoot = CreateDefaultSubobject<USceneComponent>(TEXT("ModelRoot"));
	ModelRoot->SetupAttachment(SceneRoot);

	BodyMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("BodyMesh"));
	BodyMesh->SetupAttachment(ModelRoot);
	BodyMesh->SetCollisionProfileName(TEXT("BlockAllDynamic"));

	LampMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("LampMesh"));
	LampMesh->SetupAttachment(ModelRoot);
	LampMesh->SetCollisionEnabled(ECollisionEnabled::NoCollision);

	BodyMesh->SetMobility(EComponentMobility::Movable);
	LampMesh->SetMobility(EComponentMobility::Movable);
}

void AStationActor::OnConstruction(const FTransform& Transform)
{
	Super::OnConstruction(Transform);
	PlaceModelRoot(); // 에디터에서 배치·수정할 때도 모델이 제자리에 보이도록
}

void AStationActor::PlaceModelRoot()
{
	if (bUseMapModels)
	{
		// 액터 위치·회전과 상관없이 맵 모델 기준에 고정
		ModelRoot->SetUsingAbsoluteLocation(true);
		ModelRoot->SetUsingAbsoluteRotation(true);
		ModelRoot->SetUsingAbsoluteScale(true);
		ModelRoot->SetWorldLocationAndRotation(FactoryModel::Origin(), FRotator::ZeroRotator);
		ModelRoot->SetWorldScale3D(FVector(FactoryModel::Scale));
	}
	else
	{
		// 액터를 그대로 따라감
		ModelRoot->SetUsingAbsoluteLocation(false);
		ModelRoot->SetUsingAbsoluteRotation(false);
		ModelRoot->SetUsingAbsoluteScale(false);
		ModelRoot->SetRelativeTransform(FTransform::Identity);
	}
}

void AStationActor::BeginPlay()
{
	Super::BeginPlay();

	PlaceModelRoot();

	LampMID = LampMesh->CreateDynamicMaterialInstance(0);
	if (!LampMID)
	{
		UE_LOG(LogTemp, Warning, TEXT("%s: Check LampMesh material."), *GetName());
	}

	// 아직 데이터 없음: 저장소에 이 공정이 생기기 전까지 OFFLINE으로 보임
	ViewState = FStationState();
	ViewState.StationId = StationId;

	if (UGameInstance* GameInstance = GetGameInstance())
	{
		if (UFactoryStateSubsystem* Store = GameInstance->GetSubsystem<UFactoryStateSubsystem>())
		{
			Store->OnStationChanged.AddDynamic(this, &AStationActor::HandleStationChanged);
			FStationState Existing;
			if (Store->GetStationState(StationId, Existing))
			{
				ViewState = Existing;
			}
		}
	}

	ApplyVisual();
}

void AStationActor::EndPlay(const EEndPlayReason::Type EndPlayReason)
{
	if (UGameInstance* GameInstance = GetGameInstance())
	{
		if (UFactoryStateSubsystem* Store = GameInstance->GetSubsystem<UFactoryStateSubsystem>())
		{
			Store->OnStationChanged.RemoveDynamic(this, &AStationActor::HandleStationChanged);
		}
	}
	Super::EndPlay(EndPlayReason);
}

void AStationActor::HandleStationChanged(const FStationState& NewState)
{
	if (NewState.StationId != StationId)
	{
		return; // 다른 공정 소식
	}
	ViewState = NewState;
	ApplyVisual();
}

void AStationActor::ApplyVisual()
{
	if (LampMID)
	{
		LampMID->SetVectorParameterValue(
			TEXT("StatusColor"), UFactoryStateSubsystem::GetDisplayColor(ViewState));
	}
}