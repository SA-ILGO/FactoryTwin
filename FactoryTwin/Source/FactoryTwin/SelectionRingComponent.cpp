// Fill out your copyright notice in the Description page of Project Settings.


#include "SelectionRingComponent.h"
#include "Engine/StaticMesh.h"
#include "Engine/World.h"
#include "Engine/GameInstance.h"

USelectionRingComponent::USelectionRingComponent()
{
	PrimaryComponentTick.bCanEverTick = false;

	SetCollisionEnabled(ECollisionEnabled::NoCollision);
	SetCastShadow(false);
	SetMobility(EComponentMobility::Movable);
	SetVisibility(false); // 선택되기 전까지 숨김

	RingMesh = TSoftObjectPtr<UStaticMesh> (FSoftObjectPath(TEXT("/Game/Factory/Models/UI/SM_SelectionRing.SM_SelectionRing")));
}

void USelectionRingComponent::BeginPlay()
{
	Super::BeginPlay();
	if (!GetStaticMesh() && !RingMesh.IsNull())
	{
		if (UStaticMesh* Loaded = RingMesh.LoadSynchronous())
		{
			SetStaticMesh(Loaded);
		}
		else
		{
			UE_LOG(LogTemp, Warning, TEXT("%s: SM_SelectionRing not found."), *GetName());
		}
	}
	ApplyRadius();
}

void USelectionRingComponent::EndPlay(const EEndPlayReason::Type EndPlayReason)
{
	if (USelectionSubsystem* Selection = GetSelectionSubsystem())
	{
		Selection->OnSelectionChanged.RemoveDynamic(this, &USelectionRingComponent::HandleSelectionChanged);
	}
	Super::EndPlay(EndPlayReason);
}

void USelectionRingComponent::Bind(ESelectionKind InKind, FName InId)
{
	Kind = InKind;
	Id = InId;
	if (USelectionSubsystem* Selection = GetSelectionSubsystem())
	{
		Selection->OnSelectionChanged.AddUniqueDynamic(this, &USelectionRingComponent::HandleSelectionChanged);
		HandleSelectionChanged(Selection->GetSelection()); // 지금 상태에 바로 맞춤
	}
}

USelectionSubsystem* USelectionRingComponent::GetSelectionSubsystem() const
{
	const UWorld* World = GetWorld();

	const UGameInstance* GameInstance = World ? World->GetGameInstance() : nullptr;
	return GameInstance ? GameInstance->GetSubsystem<USelectionSubsystem>() : nullptr;
}
void USelectionRingComponent::ApplyRadius()
{
	// 모델의 실제 반지름을 재서 RingRadius에 맞춤 (가져온 단위가 달라도 같은 크기). 두께(Z)는 그대로
	const UStaticMesh* Mesh = GetStaticMesh();
	const float MeshRadius = Mesh ? FMath::Max(static_cast<float>(Mesh->GetBounds().BoxExtent.X), 1.0f) : 100.0f;
	const float S = RingRadius / MeshRadius;
	SetRelativeScale3D(FVector(S, S, 1.0f));
}

void USelectionRingComponent::HandleSelectionChanged(const FSelectionTarget& Target)
{
	const bool bMine = Target.Kind == Kind && Target.Id == Id && Target.IsSet();
	SetVisibility(bMine);
}