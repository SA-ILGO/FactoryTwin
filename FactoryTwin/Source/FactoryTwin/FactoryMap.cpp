// Fill out your copyright notice in the Description page of Project Settings.


#include "FactoryMap.h"
#include "Components/SceneComponent.h"
#include "Components/SplineComponent.h"
#include "FactoryTypes.h"

namespace
{
	constexpr float CornerRadius = 14.0f; // 경로 모서리 반지름 (cm)
	constexpr float PathHeight = 0.8f;    // 경로 높이: 매트 윗면(Z = 0) 바로 위
}

AFactoryMap::AFactoryMap()
{
	PrimaryActorTick.bCanEverTick = false;

	SceneRoot = CreateDefaultSubobject<USceneComponent>(TEXT("SceneRoot"));
	SetRootComponent(SceneRoot);

	// 블렌더 맵 모델의 원점은 매트 중앙이고, 1 BU = 100cm로 들어와 있다.
	// 이 컴포넌트 하나로 위치와 크기를 맞추고, 모델 메시는 블루프린트에서 (0, 0, 0)에 붙인다.
	ModelRoot = CreateDefaultSubobject<USceneComponent>(TEXT("ModelRoot"));
	ModelRoot->SetupAttachment(SceneRoot);
	ModelRoot->SetRelativeLocation(FactoryModel::Origin());
	ModelRoot->SetRelativeScale3D(FVector(FactoryModel::Scale));

	LoopSpline = CreateDefaultSubobject<USplineComponent>(TEXT("LoopSpline"));
	LoopSpline->SetupAttachment(SceneRoot);
}

void AFactoryMap::OnConstruction(const FTransform& Transform)
{
	Super::OnConstruction(Transform);
	BuildPath(); // 에디터 미리보기: 배치하거나 값을 바꿀 때마다 다시 만듦
}

void AFactoryMap::PostInitializeComponents()
{
	Super::PostInitializeComponents();
	BuildPath(); // 모든 BeginPlay보다 먼저 실행되므로, 다른 액터가 정지 지점 거리를 물어볼 수 있음
}

void AFactoryMap::BeginPlay()
{
	Super::BeginPlay();
	UE_LOG(LogTemp, Log, TEXT("FactoryMap: loop length %.1f cm, %d stops"), GetLoopLength(), StopPointIndex.Num());
}

void AFactoryMap::BuildPath()
{
	LoopSpline->ClearSplinePoints(false);
	StopPointIndex.Reset();

	// 경로 점 하나 추가. 좌표는 배치도 기준(cm)으로 적고, 넣을 때 언리얼 크기로 키움
	auto AddPoint = [this](float X, float Y, FName Stop)
		{
			const float K = FactoryModel::MapToWorld;
			LoopSpline->AddSplinePoint(FVector(X * K, Y * K, PathHeight), ESplineCoordinateSpace::Local, false);
			const int32 Index = LoopSpline->GetNumberOfSplinePoints() - 1;
			LoopSpline->SetSplinePointType(Index, ESplinePointType::Linear, false);

			if (!Stop.IsNone())
			{
				StopPointIndex.Add(Stop, Index);
			}
		};

	// 4분의 1 원을 직선 6조각으로 근사 (시작점은 이미 경로에 있음)
	auto AddArc = [&AddPoint](float CX, float CY, float FromDeg, float ToDeg)
		{
			constexpr int32 Steps = 6;
			for (int32 i = 1; i <= Steps; ++i)
			{
				const float Rad = FMath::DegreesToRadians(FMath::Lerp(FromDeg, ToDeg, i / static_cast<float>(Steps)));
				AddPoint(CX + CornerRadius * FMath::Cos(Rad), CY + CornerRadius * FMath::Sin(Rad), NAME_None);
			}
		};

	// 반시계 방향 한 바퀴: LOAD 정지 지점에서 출발해 북쪽(-Y)으로
	AddPoint(119.0f, 72.0f, TEXT("LOAD"));
	AddPoint(119.0f, 36.6f, NAME_None);
	AddArc(105.0f, 36.6f, 0.0f, -90.0f); // -> (105, 22.6)
	AddPoint(65.0f, 22.6f, TEXT("P1"));
	AddPoint(36.0f, 22.6f, NAME_None);
	AddArc(36.0f, 36.6f, -90.0f, -180.0f); // -> (22, 36.6)
	AddPoint(22.0f, 52.0f, TEXT("P2"));
	AddPoint(22.0f, 95.0f, TEXT("P3"));
	AddPoint(22.0f, 105.0f, NAME_None);
	AddArc(36.0f, 105.0f, 180.0f, 90.0f); // -> (36, 119)
	AddPoint(53.0f, 119.0f, TEXT("P4"));
	AddPoint(95.0f, 119.0f, TEXT("INSP"));

	// LOAD로 돌아가는 복귀 구간 (실물 맵에서는 쓰지 않는 선으로 그려져 있음, 운용 방식 미정)
	AddPoint(105.0f, 119.0f, NAME_None);
	AddArc(105.0f, 105.0f, 90.0f, 0.0f); // -> (119, 105)
	AddPoint(119.0f, 84.0f, NAME_None);

	LoopSpline->SetClosedLoop(true, false);
	LoopSpline->UpdateSpline();
}

float AFactoryMap::GetLoopLength() const
{
	return LoopSpline ? LoopSpline->GetSplineLength() : 0.0f;
}

bool AFactoryMap::HasStop(FName StationId) const
{
	return StopPointIndex.Contains(StationId);
}

float AFactoryMap::GetStopDistance(FName StationId) const
{
	// 정지 지점의 Spline 점 번호 → LOAD(0)부터의 경로 거리
	if (const int32* Index = StopPointIndex.Find(StationId))
	{
		return LoopSpline->GetDistanceAlongSplineAtSplinePoint(*Index);
	}

	UE_LOG(LogTemp, Warning, TEXT("FactoryMap: unknown stop %s"), *StationId.ToString());
	return 0.0f;
}

float AFactoryMap::ForwardDistance(float FromDistance, float ToDistance) const
{
	const float Length = GetLoopLength();
	if (Length <= KINDA_SMALL_NUMBER)
	{
		return 0.0f;
	}

	// 진행 방향으로만 잰 거리 (한 바퀴 경계를 넘어도 음수가 되지 않게)
	float D = FMath::Fmod(ToDistance - FromDistance, Length);
	if (D < 0.0f)
	{
		D += Length;
	}

	// "거의 한 바퀴"는 이미 도착한 것으로 처리 (부동소수점 오차)
	return (D > Length - 0.05f) ? 0.0f : D;
}

float AFactoryMap::WrapDistance(float Distance) const
{
	const float Length = GetLoopLength();
	if (Length <= KINDA_SMALL_NUMBER)
	{
		return 0.0f;
	}

	float D = FMath::Fmod(Distance, Length);
	return (D < 0.0f) ? D + Length : D;
}

FVector AFactoryMap::GetLocationAtDistance(float Distance) const
{
	// World 기준이라 맵 액터를 옮겨도 AGV가 함께 맞춰짐
	return LoopSpline->GetLocationAtDistanceAlongSpline(Distance, ESplineCoordinateSpace::World);
}

FRotator AFactoryMap::GetRotationAtDistance(float Distance) const
{
	return LoopSpline->GetRotationAtDistanceAlongSpline(Distance, ESplineCoordinateSpace::World);
}
