// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "FactoryTypes.h"
#include "StationActor.generated.h"

class USceneComponent;
class UStaticMeshComponent;
class UMaterialInstanceDynamic;
class USelectionRingComponent;

// 공정 장비 하나. 저장소의 상태를 읽어 상태 LED 색으로 보여 준다.
// 실습 03: 블렌더 공정 모델(기둥·LED·팔 등)을 ModelRoot 아래에 붙인다.
UCLASS()
class FACTORYTWIN_API AStationActor : public AActor
{
	GENERATED_BODY()

public:
	AStationActor();

	virtual void OnConstruction(const FTransform& Transform) override;

	// 데이터 공급자가 보내는 ID와 같아야 함 (LOAD, P1, P2, P3, P4, INSP)
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Station")
	FName StationId = TEXT("P1");

	// 블렌더 공정 모델은 기준점이 매트 중앙이다.
	// 켜면: 모델 받침대(ModelRoot)를 매트 중앙에 고정 → 모델이 블렌더에서 만든 자리에 보임
	// 끄면: 받침대가 액터를 따라감 → 큐브처럼 기준점이 자기 중심인 물체용 (출발 표지)
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Station|Model")
	bool bUseMapModels = true;

	// 이 액터가 지금 보여 주는 값 (저장소 값의 복사본)
	UFUNCTION(BlueprintPure, Category = "Station")
	FStationState GetViewState() const { return ViewState; }

protected:
	virtual void BeginPlay() override;
	virtual void EndPlay(const EEndPlayReason::Type EndPlayReason) override;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Station")
	TObjectPtr<USceneComponent> SceneRoot;

	// 모델 부품을 모두 이 아래에 붙인다 (상대 위치 0, 0, 0)
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Station")
	TObjectPtr<USceneComponent> ModelRoot;

	// 기둥 (클릭 판정)
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Station")
	TObjectPtr<UStaticMeshComponent> BodyMesh;

	// 상태 LED (머티리얼 0번 = M_StatusLamp)
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Station")
	TObjectPtr<UStaticMeshComponent> LampMesh;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Station")
	TObjectPtr<USelectionRingComponent> SelectionRing;

private:
	UPROPERTY(Transient)
	TObjectPtr<UMaterialInstanceDynamic> LampMID;

	FStationState ViewState;

	UFUNCTION()
	void HandleStationChanged(const FStationState& NewState);

	void PlaceModelRoot();
	void ApplyVisual();
};