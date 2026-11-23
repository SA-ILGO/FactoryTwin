// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "FactoryTypes.h"
#include "AgvActor.generated.h"

class USceneComponent;
class USkeletalMeshComponent;
class UStaticMeshComponent;
class USpringArmComponent;
class UCameraComponent;
class UStaticMesh;
class UAnimationAsset;
class AFactoryMap;
class USelectionRingComponent;

UENUM(BlueprintType)
enum class EAgvCameraMode : uint8
{
	Follow, // 3인칭: 뒤 위에서 따라감
	Pov     // 1인칭: 실제 AGV 카메라 높이
};

// 경로 위의 AGV 한 대. 저장소를 읽기만 하고, 도착을 스스로 정하지 않는다.
// 외형은 JETANK 스켈레탈 모델(AGV_JETANK). 액터의 +X = 진행 방향, +Y = 오른쪽(고리 바깥쪽).
UCLASS()
class FACTORYTWIN_API AAgvActor : public AActor
{
	GENERATED_BODY()

public:
	AAgvActor();

	virtual void Tick(float DeltaSeconds) override;

	// 데이터 공급자가 보내는 ID와 같아야 함
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "AGV")
	FName AgvId = TEXT("AGV-001");

	// 경로 위 표시 속도 (cm/s). Mock도 같은 값으로 이동 시간을 계산
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "AGV", meta = (ClampMin = "1.0"))
	float MoveSpeed = 20.0f * FactoryModel::MapToWorld;

	// 정지 지점을 떠날 때 차체 모양을 바꿀 모델.
	// 비워 둔 칸은 바뀌지 않음 (예: P2 = 비움 → 프레스 프레임 그대로)
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "AGV|Model")
	TMap<FName, TObjectPtr<UStaticMesh>> BodyModelByStation;

	// 이동 중에 반복 재생할 애니메이션 (예: AN_AGV_Forward). 비워 두면 바퀴가 돌지 않음
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "AGV|Model")
	TObjectPtr<UAnimationAsset> MoveAnim;

	// 서 있을 때 재생할 애니메이션 (예: AN_AGV_Idle). 비워 두면 그 자세로 멈춤
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "AGV|Model")
	TObjectPtr<UAnimationAsset> IdleAnim;

	UFUNCTION(BlueprintCallable, Category = "AGV")
	void UseCamera(EAgvCameraMode Mode);

	UFUNCTION(BlueprintPure, Category = "AGV")
	FAgvState GetViewState() const { return ViewState; }

protected:
	virtual void BeginPlay() override;
	virtual void EndPlay(const EEndPlayReason::Type EndPlayReason) override;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "AGV")
	TObjectPtr<USceneComponent> SceneRoot;

	// JETANK 모델. 블루프린트에서 Skeletal Mesh Asset = AGV_JETANK
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "AGV")
	TObjectPtr<USkeletalMeshComponent> AgvMesh;

	// 싣고 있는 차체. AgvMesh에 붙어 있어 AGV 모델과 같은 좌표·배율을 씀.
	// 모델은 BodyModelByStation에서 고르고, 차체가 없으면 숨김
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "AGV")
	TObjectPtr<UStaticMeshComponent> BodyMesh;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "AGV")
	TObjectPtr<USpringArmComponent> FollowArm;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "AGV")
	TObjectPtr<UCameraComponent> FollowCam;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "AGV")
	TObjectPtr<UCameraComponent> PovCam;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "AGV")
	TObjectPtr<USelectionRingComponent> SelectionRing;

private:
	UPROPERTY(Transient)
	TObjectPtr<AFactoryMap> Map;

	FAgvState ViewState;
	float CurrentDistance = 0.0f;
	float TargetDistance = 0.0f;
	bool bHasTarget = false;
	bool bTargetConfirmed = false;

	// -1 = 아직 정하지 않음, 0 = 서 있음, 1 = 이동 중
	int8 AnimState = -1;

	UFUNCTION()
	void HandleAgvChanged(const FAgvState& NewState);

	void ApplyState(bool bSnap);
	void ApplyTransform(float DeltaSeconds, bool bSnap);
	void UpdateBodyModel();
	void SetAnimMoving(bool bMoving);
};