// Fill out your copyright notice in the Description page of Project Settings.


#include "FactoryStateSubsystem.h"

namespace
{
	// Works for both FStationState and FAgvState
	template <typename TState>
	void MarkReceived(TState& State)
	{
		State.LastReceivedSeconds = FPlatformTime::Seconds();
		State.Connection = EDataFreshness::Online;
	}
}

// ---------------- Stations ----------------
void UFactoryStateSubsystem::Initialize(FSubsystemCollectionBase& Collection)
{
	Super::Initialize(Collection);

	// 0.5초 마다 확인
	TickerHandle = FTSTicker::GetCoreTicker().AddTicker(
		FTickerDelegate::CreateUObject(this, &UFactoryStateSubsystem::CheckFreshness),
		0.5f
	);
}

void UFactoryStateSubsystem::Deinitialize()
{
	FTSTicker::RemoveTicker(TickerHandle);
	Stations.Empty();
	Super::Deinitialize();
}

void UFactoryStateSubsystem::ApplyStationUpdate(const FStationState& Update)
{
	if (Update.StationId.IsNone())
	{
		UE_LOG(LogTemp, Warning, TEXT("ApplyStationUpdate: StationId is empty."));
		return;
	}

	FStationState& Stored = Stations.FindOrAdd(Update.StationId);
	Stored.StationId = Update.StationId;
	Stored.Operation = Update.Operation;
	Stored.BodyId = Update.BodyId;
	Stored.Source = Update.Source;
	MarkReceived(Stored); // 마지막 수신 시간 기록

	// 안전하게 브로드캐스트
	const FStationState Snapshot = Stored;
	OnStationChanged.Broadcast(Snapshot); 
}

void UFactoryStateSubsystem::ReceiveHeartbeat(FName StationId)
{
	FStationState* Stored = Stations.Find(StationId);
	if (!Stored)
	{
		UE_LOG(LogTemp, Warning, TEXT("Heartbeat from unknown station: %s"), *StationId.ToString());
		return;
	}

	const bool bWasOnline = (Stored->Connection == EDataFreshness::Online);
	MarkReceived(*Stored);

	if (!bWasOnline)
	{
		const FStationState Snapshot = *Stored;
		OnStationChanged.Broadcast(Snapshot);
	}
}

bool UFactoryStateSubsystem::GetStationState(FName StationId, FStationState& OutState) const
{
	if (const FStationState* Found = Stations.Find(StationId))
	{
		OutState = *Found;
		return true;
	}
	return false;
}

// ---------------- AGV ----------------

void UFactoryStateSubsystem::ApplyAgvUpdate(const FAgvState& Update)
{
	if (Update.AgvId.IsNone())
	{
		UE_LOG(LogTemp, Warning, TEXT("ApplyAgvUpdate: AgvId is empty."));
		return;
	}

	FAgvState& Stored = Agvs.FindOrAdd(Update.AgvId);
	Stored.AgvId = Update.AgvId;
	Stored.Motion = Update.Motion;
	Stored.LastStationId = Update.LastStationId;
	Stored.NextStationId = Update.NextStationId;
	Stored.PositionSource = Update.PositionSource;
	Stored.CarrierBodyId = Update.CarrierBodyId;
	Stored.Source = Update.Source;
	MarkReceived(Stored);

	const FAgvState Snapshot = Stored;
	OnAgvChanged.Broadcast(Snapshot);
}

void UFactoryStateSubsystem::ReceiveAgvHeartbeat(FName AgvId)
{
	FAgvState* Stored = Agvs.Find(AgvId);
	if (!Stored)
	{
		UE_LOG(LogTemp, Warning, TEXT("Heartbeat from unknown AGV: %s"), *AgvId.ToString());
		return;
	}

	const bool bWasOnline = (Stored->Connection == EDataFreshness::Online);
	MarkReceived(*Stored);

	if (!bWasOnline)
	{
		const FAgvState Snapshot = *Stored;
		OnAgvChanged.Broadcast(Snapshot);
	}
}

bool UFactoryStateSubsystem::GetAgvState(FName AgvId, FAgvState& OutState) const
{
	if (const FAgvState* Found = Agvs.Find(AgvId))
	{
		OutState = *Found;
		return true;
	}
	return false;
}

// ---------------- Freshness ----------------

EDataFreshness UFactoryStateSubsystem::ConnectionForAge(double AgeSeconds)
{
	if (AgeSeconds >= OfflineAfterSeconds)
	{
		return EDataFreshness::Offline;
	}
	if (AgeSeconds >= StaleAfterSeconds)
	{
		return EDataFreshness::Stale;
	}

	return EDataFreshness::Online;
}

bool UFactoryStateSubsystem::CheckFreshness(float DeltaTime)
{
	const double Now = FPlatformTime::Seconds();

	TArray<FStationState> ChangedStations;
	for (TPair<FName, FStationState>& Pair : Stations)
	{
		FStationState& State = Pair.Value;
		const EDataFreshness Next = ConnectionForAge(Now - State.LastReceivedSeconds);

		if (Next != State.Connection)
		{
			State.Connection = Next;
			ChangedStations.Add(State);
		}
	}

	TArray<FAgvState> ChangedAgvs;
	for (TPair<FName, FAgvState>& Pair : Agvs)
	{
		FAgvState& State = Pair.Value;
		const EDataFreshness Next = ConnectionForAge(Now - State.LastReceivedSeconds);

		if (Next != State.Connection)
		{
			State.Connection = Next;
			ChangedAgvs.Add(State);
		}
	}

	for (const FStationState& State : ChangedStations)
	{
		OnStationChanged.Broadcast(State);
	}

	for (const FAgvState& State : ChangedAgvs)
	{
		OnAgvChanged.Broadcast(State);
	}

	return true; // keep ticking
}

// ---------------- Display helpers ----------------

FText UFactoryStateSubsystem::GetOperationLabel(EOperationState Operation)
{
	switch (Operation)
	{
	case EOperationState::Working: return NSLOCTEXT("Factory", "OpWorking", "WORKING");
	case EOperationState::Waiting: return NSLOCTEXT("Factory", "OpWaiting", "WAITING");
	case EOperationState::Complete: return NSLOCTEXT("Factory", "OpComplete", "COMPLETE");
	case EOperationState::Error: return NSLOCTEXT("Factory", "OpError", "ERROR");
	default: return NSLOCTEXT("Factory", "OpIdle", "IDLE");
	}
}

FText UFactoryStateSubsystem::GetConnectionLabel(EDataFreshness Connection)
{
	switch (Connection)
	{
	case EDataFreshness::Online: return NSLOCTEXT("Factory", "ConnOnline", "ONLINE");
	case EDataFreshness::Stale: return NSLOCTEXT("Factory", "ConnStale", "STALE");
	default: return NSLOCTEXT("Factory", "ConnOffline", "OFFLINE");
	}
}

FText UFactoryStateSubsystem::GetSourceLabel(EDataSource Source)
{
	switch (Source)
	{
	case EDataSource::Confirmed: return NSLOCTEXT("Factory", "SrcConfirmed", "CONFIRMED");
	case EDataSource::Observed: return NSLOCTEXT("Factory", "SrcObserved", "OBSERVED");
	case EDataSource::Estimated: return NSLOCTEXT("Factory", "SrcEstimated", "ESTIMATED");
	default: return NSLOCTEXT("Factory", "SrcSimulated", "SIMULATED");
	}
}

FLinearColor UFactoryStateSubsystem::GetDisplayColor(const FStationState& State)
{
	if (State.Connection == EDataFreshness::Offline)
	{
		return FLinearColor(0.08f, 0.08f, 0.09f, 1.0f);
	}

	FLinearColor Base;
	switch (State.Operation)
	{
	case EOperationState::Working: Base = FLinearColor(0.10f, 0.55f, 0.95f, 1.0f); break;
	case EOperationState::Waiting: Base = FLinearColor(0.55f, 0.60f, 0.68f, 1.0f); break;
	case EOperationState::Complete: Base = FLinearColor(0.05f, 0.80f, 0.40f, 1.0f); break;
	case EOperationState::Error: Base = FLinearColor(1.00f, 0.08f, 0.15f, 1.0f); break;
	default: Base = FLinearColor(0.35f, 0.45f, 0.55f, 1.0f); break;
	}

	if (State.Connection == EDataFreshness::Stale)
	{
		// Keep the last state but dimmed
		return FLinearColor(Base.R * 0.35f, Base.G * 0.35f, Base.B * 0.35f, 1.0f);
	}

	return Base;
}

FText UFactoryStateSubsystem::GetAgvMotionLabel(EAgvMotion Motion)
{
	return Motion == EAgvMotion::Moving
		? NSLOCTEXT("Factory", "AgvMoving", "MOVING")
		: NSLOCTEXT("Factory", "AgvStopped", "STOPPED");
}

FText UFactoryStateSubsystem::GetPositionSourceLabel(EPositionSource Source)
{
	return Source == EPositionSource::Estimated
		? NSLOCTEXT("Factory", "PosEstimated", "ESTIMATED")
		: NSLOCTEXT("Factory", "PosConfirmed", "STATION_CONFIRMED");
}

TArray<FAgvState> UFactoryStateSubsystem::GetAllAgvs() const
{
	TArray<FAgvState> Result;
	Agvs.GenerateValueArray(Result);
	return Result;
}

double UFactoryStateSubsystem::GetLatestReceivedSeconds() const
{
	double Latest = 0.0;
	for (const TPair<FName, FStationState>& Pair : Stations)
	{
		Latest = FMath::Max(Latest, Pair.Value.LastReceivedSeconds);
	}
	for (const TPair<FName, FAgvState>& Pair : Agvs)
	{
		Latest = FMath::Max(Latest, Pair.Value.LastReceivedSeconds);
	}
	return Latest;
}