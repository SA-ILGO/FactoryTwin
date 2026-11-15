#include "StationActor.h"

#include "Components/SceneComponent.h"
#include "Components/StaticMeshComponent.h"
#include "Materials/MaterialInstanceDynamic.h"


// 생성자: 설비의 컴포넌트 생성
AStationActor::AStationActor()
{
    PrimaryActorTick.bCanEverTick = false;

    SceneRoot = CreateDefaultSubobject<USceneComponent>(
        TEXT("SceneRoot")
    );

    SetRootComponent(SceneRoot);

    BodyMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("BodyMesh"));
    BodyMesh->SetupAttachment(SceneRoot);
    BodyMesh->SetCollisionProfileName(TEXT("BlockAllDynamic"));


    // 3. 설비 상태 표시등
    LampMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("LampMesh"));
    LampMesh->SetupAttachment(SceneRoot);
    LampMesh->SetCollisionEnabled(ECollisionEnabled::NoCollision);

    BodyMesh->SetMobility(EComponentMobility::Movable);
    LampMesh->SetMobility(EComponentMobility::Movable);
}


// 게임 시작 시 호출
void AStationActor::BeginPlay()
{
    Super::BeginPlay();

    // 램프 머티리얼을 동적으로 변경하기 위한 인스턴스 생성
    LampMID = LampMesh->CreateDynamicMaterialInstance(0);

    if (!LampMID)
    {
        UE_LOG(LogTemp, Warning, TEXT("%s: Check LampMesh material."), *GetName());
    }

    ApplyState();
}


// 설비 상태 변경
void AStationActor::SetState(EStationState NewState)
{
    if (State == NewState)
    {
        return;
    }

    State = NewState;

    ApplyState();
}

void AStationActor::ApplyState()
{
    if (LampMID)
    {
        LampMID->SetVectorParameterValue(
            TEXT("StatusColor"),
            GetStateColor()
        );
    }
}

FText AStationActor::GetStateLabel() const
{
    switch (State)
    {
    case EStationState::Running:
        return NSLOCTEXT("DT", "Running", "Running");

    case EStationState::Fault:
        return NSLOCTEXT("DT", "Fault", "Fault");

    default:
        return NSLOCTEXT("DT", "Idle", "Idle");
    }
}


// 상태에 따른 색상 반환
FLinearColor AStationActor::GetStateColor() const
{
    switch (State)
    {
    case EStationState::Running:
        return FLinearColor(0.05f, 0.8f, 0.25f, 1.0f);

    case EStationState::Fault:
        return FLinearColor(1.0f, 0.08f, 0.04f, 1.0f);

    default:
        return FLinearColor(0.35f, 0.45f, 0.55f, 1.0f);
    }
}