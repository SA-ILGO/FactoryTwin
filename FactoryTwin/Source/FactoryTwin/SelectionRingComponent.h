// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/StaticMeshComponent.h"
#include "SelectionSubsystem.h"
#include "SelectionRingComponent.generated.h"

/**
 * 
 */
UCLASS(ClassGroup = (Factory), meta = (BlueprintSpawnableComponent))
class FACTORYTWIN_API USelectionRingComponent : public UStaticMeshComponent
{
	GENERATED_BODY()

public:
	USelectionRingComponent();

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Selection")
	TSoftObjectPtr<UStaticMesh> RingMesh;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Selection", meta = (ClampMin = "1.0"))
	float RingRadius = 100.0f;
	
	// 이 고리가 어떤 대상을 나타내는지 알려 줌. 주인 액터의 BeginPlay에서 부름
	UFUNCTION(BlueprintCallable, Category = "Selection")
	void Bind(ESelectionKind InKind, FName InId);

protected:
	virtual void BeginPlay() override;
	virtual void EndPlay(const EEndPlayReason::Type EndPlayReason) override;

private:
	ESelectionKind Kind = ESelectionKind::None;
	FName Id;

	USelectionSubsystem* GetSelectionSubsystem() const;
	void ApplyRadius();

	UFUNCTION()
	void HandleSelectionChanged(const FSelectionTarget& Target);
};
