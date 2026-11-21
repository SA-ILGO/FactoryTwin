// Fill out your copyright notice in the Description page of Project Settings.
#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "FactoryTypes.h"
#include "MockFactoryFeed.generated.h"
class USceneComponent;
class UFactoryStateSubsystem;
class AFactoryMap;
// 가짜 데이터 공급자. 실습 03: AGV 한 대가 차체 하나를 싣고 제공 맵을 한 바퀴 돈다.
// 나중에 WebSocket 클라이언트가 이 자리를 대신한다.
UCLASS(BlueprintType)
class FACTORYTWIN_API AMockFactoryFeed : public AActor
{
	GENERATED_BODY()
public:
	AMockFactoryFeed();
	// 한 바퀴 순서. 0번은 반드시 LOAD
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Mock")
	TArray<FName> StationIds;
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Mock")
	FName AgvId = TEXT("AGV-001");
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Mock")
	bool bAutoScenario = true;
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Mock", meta = (ClampMin = "1.0"))
	float WorkSeconds = 5.0f;
	// LOAD에서 싣는 시간
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Mock", meta = (ClampMin = "0.5"))
	float LoadSeconds = 2.0f;
	// cm/s. AAgvActor::MoveSpeed와 같게 두어야 그림과 도착 이벤트가 맞음
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Mock", meta = (ClampMin = "1.0"))
	float TravelSpeed = 20.0f * FactoryModel::MapToWorld;
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Mock", meta = (ClampMin = "0.5"))
	float HeartbeatSeconds = 1.0f;
	// 테스트 버튼이 부르는 함수. 데이터만 보내고 액터는 건드리지 않음
	UFUNCTION(BlueprintCallable, Category = "Mock")
	void InjectOperation(FName StationId, EOperationState Operation);
	UFUNCTION(BlueprintCallable, Category = "Mock")
	void SetStationLinkCut(FName StationId, bool bCut);
	UFUNCTION(BlueprintPure, Category = "Mock")
	bool IsStationLinkCut(FName StationId) const;
	UFUNCTION(BlueprintCallable, Category = "Mock")
	void SetAutoScenario(bool bEnabled);
protected:
	virtual void BeginPlay() override;
	virtual void EndPlay(const EEndPlayReason::Type EndPlayReason) override;
	UPROPERTY(VisibleAnywhere, Category = "Mock")
	TObjectPtr<USceneComponent> SceneRoot;
private:
	FTimerHandle HeartbeatTimer;
	FTimerHandle ScenarioTimer;
	TSet<FName> CutStations;
	UPROPERTY(Transient)
	TObjectPtr<AFactoryMap> Map;
	int32 BodyCounter = 1;
	int32 StopIndex = 0; // AGV가 있는 (이동 중이면 향하는) 정지 지점
	int32 Phase = 0;
	UFactoryStateSubsystem* GetStore() const;
	FName CurrentBody() const;
	int32 NextIndex(int32 Index) const;
	float TravelSeconds(int32 FromIndex, int32 ToIndex) const;
	void Send(FName StationId, EOperationState Operation, FName BodyId);
	void SendAgv(EAgvMotion Motion, int32 LastIndex, int32 NextStopIndex, EPositionSource PositionSource);
	void SendHeartbeats();
	void StepScenario();
	void Schedule(float Seconds);
};
