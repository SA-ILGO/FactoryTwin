// Fill out your copyright notice in the Description page of Project Settings.


#include "SelectionSubsystem.h"
#include "Engine/HitResult.h"
#include "FactoryTypes.h"
#include "FactoryMap.h"
#include "StationActor.h"
#include "AgvActor.h"

void USelectionSubsystem::Deinitialize()
{
	Current = FSelectionTarget();
	Super::Deinitialize();
}

void USelectionSubsystem::Select(const FSelectionTarget& Target)
{
	// 종류나 ID 중 하나라도 비면 "선택 없음"으로 통일
	const FSelectionTarget Next = Target.IsSet() ? Target : FSelectionTarget();
	if (Next == Current)
	{
		return; // 같은 대상을 다시 눌러도 방송하지 않음
	}
	Current = Next;
	OnSelectionChanged.Broadcast(Current);
}

void USelectionSubsystem::SelectStation(FName StationId)
{
	Select(MakeSelectionTarget(ESelectionKind::Station, StationId));
}

void USelectionSubsystem::SelectAgv(FName AgvId)
{
	Select(MakeSelectionTarget(ESelectionKind::Agv, AgvId));
}

void USelectionSubsystem::ClearSelection()
{
	Select(FSelectionTarget());
}

void USelectionSubsystem::SelectFromHit(const FHitResult& Hit)
{
	AActor* HitActor = Hit.bBlockingHit ? Hit.GetActor() : nullptr;

	if (const AStationActor* Station = Cast<AStationActor>(HitActor))
	{
		SelectStation(Station->StationId);
	}
	else if (const AAgvActor* Agv = Cast<AAgvActor>(HitActor))
	{
		SelectAgv(Agv->AgvId);
	}
	else if (const AFactoryMap* Map = Cast<AFactoryMap>(HitActor))
	{
		// 매트(구역)를 눌렀으면 가장 가까운 정지 지점
		const FName Stop = Map->FindNearestStop(Hit.ImpactPoint, StopPickRadiusCm * FactoryModel::MapToWorld);
		if (Stop.IsNone())
		{
			ClearSelection();
		}
		else
		{
			SelectStation(Stop);
		}
	}
	else
	{
		ClearSelection(); // 빈 곳
	}
}

bool USelectionSubsystem::IsSelected(ESelectionKind Kind, FName Id) const
{
	return Current.Kind == Kind && Current.Id == Id && Current.IsSet();
}

FSelectionTarget USelectionSubsystem::MakeSelectionTarget(ESelectionKind Kind, FName Id)
{
	FSelectionTarget Target;
	Target.Kind = Kind;
	Target.Id = Id;
	return Target;
}