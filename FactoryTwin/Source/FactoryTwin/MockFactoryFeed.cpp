// Fill out your copyright notice in the Description page of Project Settings.
#include "MockFactoryFeed.h"
#include "Components/SceneComponent.h"
#include "Engine/GameInstance.h"
#include "Kismet/GameplayStatics.h"
#include "TimerManager.h"
#include "FactoryMap.h"
#include "FactoryStateSubsystem.h"
AMockFactoryFeed::AMockFactoryFeed()
{
	PrimaryActorTick.bCanEverTick = false;
	SceneRoot = CreateDefaultSubobject<USceneComponent>(TEXT("SceneRoot"));
	SetRootComponent(SceneRoot);
	StationIds = { TEXT("LOAD"), TEXT("P1"), TEXT("P2"), TEXT("P3"), TEXT("P4"), TEXT("INSP") };
}
UFactoryStateSubsystem* AMockFactoryFeed::GetStore() const
{
	const UGameInstance* GameInstance = GetGameInstance();
	return GameInstance ? GameInstance->GetSubsystem<UFactoryStateSubsystem>() : nullptr;
}
void AMockFactoryFeed::BeginPlay()
{
	Super::BeginPlay();
	Map = Cast<AFactoryMap>(UGameplayStatics::GetActorOfClass(this, AFactoryMap::StaticClass()));
	// 첫 상태: 모든 공정 IDLE, AGV는 LOAD에 서 있음
	for (const FName& Id : StationIds)
	{
		Send(Id, EOperationState::Idle, NAME_None);
	}
	StopIndex = 0;
	Phase = 0;
	SendAgv(EAgvMotion::Stopped, 0, NextIndex(0), EPositionSource::StationConfirmed);
	GetWorldTimerManager().SetTimer(
		HeartbeatTimer, this, &AMockFactoryFeed::SendHeartbeats, HeartbeatSeconds, true);
	if (bAutoScenario)
	{
		Schedule(1.0f);
	}
}
void AMockFactoryFeed::EndPlay(const EEndPlayReason::Type EndPlayReason)
{
	GetWorldTimerManager().ClearAllTimersForObject(this);
	Super::EndPlay(EndPlayReason);
}
FName AMockFactoryFeed::CurrentBody() const
{
	return FName(*FString::Printf(TEXT("BODY-%03d"), BodyCounter));
}
int32 AMockFactoryFeed::NextIndex(int32 Index) const
{
	return StationIds.Num() > 0 ? (Index + 1) % StationIds.Num() : 0;
}
float AMockFactoryFeed::TravelSeconds(int32 FromIndex, int32 ToIndex) const
{
	if (!Map || !StationIds.IsValidIndex(FromIndex) || !StationIds.IsValidIndex(ToIndex))
	{
		return 3.0f;
	}
	const float Distance = Map->ForwardDistance(
		Map->GetStopDistance(StationIds[FromIndex]),
		Map->GetStopDistance(StationIds[ToIndex]));
	return FMath::Max(0.5f, Distance / TravelSpeed);
}
void AMockFactoryFeed::Send(FName StationId, EOperationState Operation, FName BodyId)
{
	if (CutStations.Contains(StationId))
	{
		return; // 통신이 끊김: 메시지가 사라짐
	}
	if (UFactoryStateSubsystem* Store = GetStore())
	{
		FStationState Update;
		Update.StationId = StationId;
		Update.Operation = Operation;
		Update.BodyId = BodyId;
		Update.Source = EDataSource::Simulated;
		Store->ApplyStationUpdate(Update);
	}
}
void AMockFactoryFeed::SendAgv(EAgvMotion Motion, int32 LastIndex, int32 NextStopIndex, EPositionSource
	PositionSource)
{
	UFactoryStateSubsystem* Store = GetStore();
	if (!Store || !StationIds.IsValidIndex(LastIndex) || !StationIds.IsValidIndex(NextStopIndex))
	{
		return;
	}
	FAgvState Update;
	Update.AgvId = AgvId;
	Update.Motion = Motion;
	Update.LastStationId = StationIds[LastIndex];
	Update.NextStationId = StationIds[NextStopIndex];
	Update.PositionSource = PositionSource;
	Update.CarrierBodyId = CurrentBody();
	Update.Source = EDataSource::Simulated;
	Store->ApplyAgvUpdate(Update);
}
void AMockFactoryFeed::SendHeartbeats()
{
	UFactoryStateSubsystem* Store = GetStore();
	if (!Store)
	{
		return;
	}
	for (const FName& Id : StationIds)
	{
		if (!CutStations.Contains(Id))
		{
			Store->ReceiveHeartbeat(Id);
		}
	}
	Store->ReceiveAgvHeartbeat(AgvId);
}
void AMockFactoryFeed::Schedule(float Seconds)
{
	GetWorldTimerManager().SetTimer(
		ScenarioTimer, this, &AMockFactoryFeed::StepScenario, Seconds, false);
}
void AMockFactoryFeed::StepScenario()
{
	if (!bAutoScenario || StationIds.Num() == 0)
	{
		return;
	}
	const FName Station = StationIds[StopIndex];
	const bool bAtLoad = (StopIndex == 0);
	switch (Phase)
	{
	case 0: // AGV가 여기 서서 RFID를 읽음. 허가 대기
		Send(Station, EOperationState::Waiting, CurrentBody());
		Phase = 1;
		Schedule(1.0f);
		break;
	case 1: // 허가: 작업 (LOAD에서는 차체 싣기)
		Send(Station, EOperationState::Working, CurrentBody());
		Phase = 2;
		Schedule(bAtLoad ? LoadSeconds : WorkSeconds);
		break;
	case 2: // 작업 완료
		Send(Station, EOperationState::Complete, CurrentBody());
		Phase = 3;
		Schedule(1.0f);
		break;
	case 3: // AGV가 다음 정지 지점으로 출발 (이제 위치는 추정)
	{
		Send(Station, EOperationState::Idle, NAME_None);
		const int32 Next = NextIndex(StopIndex);
		SendAgv(EAgvMotion::Moving, StopIndex, Next, EPositionSource::Estimated);
		const float Travel = TravelSeconds(StopIndex, Next);
		StopIndex = Next;
		Phase = 4;
		Schedule(Travel);
		break;
	}
	default: // 도착: 현장이 정차를 확인
		if (StopIndex == 0)
		{
			BodyCounter++; // LOAD로 돌아옴: 다음 차체를 실음
		}
		SendAgv(EAgvMotion::Stopped, StopIndex, NextIndex(StopIndex), EPositionSource::StationConfirmed);
		Phase = 0;
		Schedule(0.3f);
		break;
	}
}
void AMockFactoryFeed::InjectOperation(FName StationId, EOperationState Operation)
{
	Send(StationId, Operation, NAME_None);
}
void AMockFactoryFeed::SetStationLinkCut(FName StationId, bool bCut)
{
	if (bCut)
	{
		CutStations.Add(StationId);
	}
	else
	{
		CutStations.Remove(StationId);
	}
}
bool AMockFactoryFeed::IsStationLinkCut(FName StationId) const
{
	return CutStations.Contains(StationId);
}
void AMockFactoryFeed::SetAutoScenario(bool bEnabled)
{
	bAutoScenario = bEnabled;
	if (bEnabled)
	{
		if (!GetWorldTimerManager().IsTimerActive(ScenarioTimer))
		{
			Schedule(1.0f);
		}
	}
	else
	{
		GetWorldTimerManager().ClearTimer(ScenarioTimer);
	}
}