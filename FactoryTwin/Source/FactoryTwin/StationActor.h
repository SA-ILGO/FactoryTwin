 // Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "StationActor.generated.h"

class USceneComponent;
class UStaticMeshComponent;
class UMaterialInstanceDynamic;

UENUM(BlueprintType)
enum class EStationState : uint8
{
	Idle,
	Running,
	Fault
};

UCLASS()
class FACTORYTWIN_API AStationActor : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AStationActor();
	
	// 설비 상태 변경
	UFUNCTION(BlueprintCallable, Category = "Station")
	void SetState(EStationState NewState);

	// 상태 표시 이름 반환
	UFUNCTION(BlueprintPure, Category = "Station")
	FText GetStateLabel() const;

	// 상태 색상 반환
	UFUNCTION(BlueprintPure, Category = "Station")
	FLinearColor GetStateColor() const;

	// 설비 식별자
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Station")
	FText StationId = FText::FromString(TEXT("ST-001"));

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Station")
	TObjectPtr<USceneComponent> SceneRoot;

	// 설비 본체
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Station")
	TObjectPtr<UStaticMeshComponent> BodyMesh;

	// 설비 상태 표시등
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Station")
	TObjectPtr<UStaticMeshComponent> LampMesh;

private:
	UPROPERTY(Transient)
	TObjectPtr<UMaterialInstanceDynamic> LampMID;

	EStationState State = EStationState::Idle;
	
	void ApplyState(); // 상태에 따라 표시등 변경
};
