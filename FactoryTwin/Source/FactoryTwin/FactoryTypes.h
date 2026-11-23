// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "FactoryTypes.generated.h"

UENUM(BlueprintType)
enum class EOperationState : uint8
{
	Idle,
	Working,
	Waiting,
	Complete,
	Error
};

UENUM(BlueprintType)
enum class EDataFreshness : uint8
{
	Online,
	Stale,
	Offline
};

UENUM(BlueprintType)
enum class EDataSource : uint8
{
	Confirmed,
	Observed,
	Estimated,
	Simulated
};

UENUM(BlueprintType)
enum class EAgvMotion : uint8
{
	Stopped,
	Moving
};

UENUM(BlueprintType)
enum class EPositionSource : uint8 // AGV 위치 근거
{ 
	StationConfirmed, // 정지 지점(RFID)
	Estimated // 추정값
};

USTRUCT(BlueprintType)
struct FStationState
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Factory")
	FName StationId;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Factory")
	EOperationState Operation = EOperationState::Idle;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Factory")
	FName BodyId;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Factory")
	EDataSource Source = EDataSource::Simulated;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Factory")
	EDataFreshness Connection = EDataFreshness::Offline;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Factory")
	double LastReceivedSeconds = 0.0;
};

USTRUCT(BlueprintType)
struct FAgvState 
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Factory")
	FName AgvId;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Factory")
	EAgvMotion Motion = EAgvMotion::Stopped;

	// Last stop confirmed by the field
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Factory")
	FName LastStationId;

	// Where it is heading (or will head next)
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Factory")
	FName NextStationId;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Factory")
	EPositionSource PositionSource = EPositionSource::StationConfirmed;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Factory")
	FName CarrierBodyId;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Factory")
	EDataSource Source = EDataSource::Simulated;

	// Set by the store, not by data sources
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Factory")
	EDataFreshness Connection = EDataFreshness::Offline;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Factory")
	double LastReceivedSeconds = 0.0;

};

namespace FactoryModel
{
	// 모델 배율. 가져온 크기 그대로
	constexpr float Scale = 1.0f;

	// 배치도 좌표(실측 cm) → 언리얼 좌표 배율 (556.17 / 142)
	constexpr float MapToWorld = 3.917f;

	// 모델 원점(매트 중앙)의 언리얼 좌표
	inline FVector Origin() { return FVector(71.0f, 69.5f, 0.0f) * MapToWorld; }

	// AGV 모델은 앞이 -Y라서, 진행 방향 +X로 돌리는 각도
	constexpr float AgvYaw = 90.0f;
}

// 정지 지점 정의 한 줄 (DataTable DA_StationDefs의 행 구조)
// 행 이름 = StationId (LOAD, P1, P2, P3, P4, INSP). 서버 데이터가 아니라 맵에 딸린 값
USTRUCT(BlueprintType)
struct FStationDefRow : public FTableRowBase
{
	GENERATED_BODY()

	//  한 바퀴 순서 (출발 0 ~ 검사 5)
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Factory")
	int32 Order = 0;

	// 화면에 쓰는 이름 (예: P2 차체)
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Factory")
	FText DisplayName;

	// 실물 구역색 (목록의 작은 칩에만 씀)
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Factory")
	FLinearColor ZoneColor = FLinearColor::White;
};

// 상세 패널 한 줄 (항목 이름 + 값)
USTRUCT(BlueprintType)
struct FTwinDetailRow
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Twin")
	FText Label;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Twin")
	FText Value;

	// 값 글자색. 상태 값은 상태색, 나머지는 기본 검정
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Twin")
	FLinearColor ValueColor = FLinearColor(0.06f, 0.09f, 0.16f, 1.0f);
};

/**
 * 
 */
class FACTORYTWIN_API FactoryTypes
{
public:
	FactoryTypes();
	~FactoryTypes();
};
