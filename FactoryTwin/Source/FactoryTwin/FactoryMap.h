// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "FactoryMap.generated.h"

class USceneComponent;
class USplineComponent;

UCLASS()
class FACTORYTWIN_API AFactoryMap : public AActor
{
	GENERATED_BODY()

public:
	AFactoryMap();

	virtual void OnConstruction(const FTransform& Transform) override;
	virtual void PostInitializeComponents() override;

	// 한 바퀴 길이 (cm)
	UFUNCTION(BlueprintPure, Category = "Map")
	float GetLoopLength() const;

	// 이 이름의 정지 지점이 경로에 있는지
	UFUNCTION(BlueprintPure, Category = "Map")
	bool HasStop(FName StationId) const;

	// LOAD 정지 지점(0)부터 해당 정지 지점까지의 경로 거리
	UFUNCTION(BlueprintPure, Category = "Map")
	float GetStopDistance(FName StationId) const;

	// 한 지점에서 다른 지점까지 진행 방향(반시계)으로 잰 거리
	UFUNCTION(BlueprintPure, Category = "Map")
	float ForwardDistance(float FromDistance, float ToDistance) const;

	// 거리를 0 ~ 한 바퀴 길이 범위로 되돌림
	UFUNCTION(BlueprintPure, Category = "Map")
	float WrapDistance(float Distance) const;

	// 경로 거리 → 월드 좌표
	UFUNCTION(BlueprintPure, Category = "Map")
	FVector GetLocationAtDistance(float Distance) const;

	// 경로 거리 → 그 지점의 진행 방향
	UFUNCTION(BlueprintPure, Category = "Map")
	FRotator GetRotationAtDistance(float Distance) const;

protected:
	virtual void BeginPlay() override;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Map")
	TObjectPtr<USceneComponent> SceneRoot;

	// 위치 = 매트 중앙 (71, 69.5, 0), 크기 = 0.2553배
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Map")
	TObjectPtr<USceneComponent> ModelRoot;

	// AGV가 따라가는 경로 (에디터에서만 보이는 계산용 선)
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Map")
	TObjectPtr<USplineComponent> LoopSpline;

private:
	// 정지 지점 이름 → Spline 점 번호 (경로를 만들 때마다 다시 채움)
	TMap<FName, int32> StopPointIndex;

	void BuildPath();
};
