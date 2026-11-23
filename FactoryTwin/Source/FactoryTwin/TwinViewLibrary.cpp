#include "TwinViewLibrary.h"

#include "Engine/DataTable.h"
#include "Engine/World.h"
#include "Engine/GameInstance.h"
#include "Kismet/GameplayStatics.h"
#include "FactoryStateSubsystem.h"
#include "AgvActor.h"

#define LOCTEXT_NAMESPACE "TwinView"

// =====================================================================
// 이 파일 안에서만 쓰는 도우미 (익명 namespace)
// =====================================================================
namespace
{
	const FText Dash = FText::FromString(TEXT("–"));

	// UI 명세의 색: 지연은 주황, 끊김은 진한 회색
	const FLinearColor StaleOrange(0.91f, 0.45f, 0.05f, 1.0f);
	const FLinearColor OfflineGray(0.23f, 0.26f, 0.31f, 1.0f);
	const FLinearColor TextDefault(0.06f, 0.09f, 0.16f, 1.0f);
	const FLinearColor AgvStopped(0.35f, 0.45f, 0.55f, 1.0f);
	const FLinearColor AgvMoving(0.10f, 0.55f, 0.95f, 1.0f);

	// 상태 저장소(UFactoryStateSubsystem) 가져오기
	UFactoryStateSubsystem* GetStore(const UObject* WorldContextObject)
	{
		const UGameInstance* GameInstance = UGameplayStatics::GetGameInstance(WorldContextObject);
		return GameInstance ? GameInstance->GetSubsystem<UFactoryStateSubsystem>() : nullptr;
	}

	// DataTable에서 정지 지점 정의 한 줄 찾기 (없으면 nullptr)
	const FStationDefRow* FindDef(const UDataTable* StationDefs, FName StationId)
	{
		return StationDefs
			? StationDefs->FindRow<FStationDefRow>(StationId, TEXT("TwinView"), false)
			: nullptr;
	}

	// 이름이 비어 있으면 "–"
	FText NameOrDash(FName Id)
	{
		return Id.IsNone() ? Dash : FText::FromName(Id);
	}

	// 정지 지점 상태색: 연결이 우선, 그다음 작업 상태
	FLinearColor StationColor(const FStationState& State)
	{
		switch (State.Connection)
		{
		case EDataFreshness::Offline: return OfflineGray;
		case EDataFreshness::Stale:   return StaleOrange;
		default:                      return UFactoryStateSubsystem::GetDisplayColor(State);
		}
	}

	// 연결 상태 글자색
	FLinearColor ConnectionColor(EDataFreshness Connection)
	{
		switch (Connection)
		{
		case EDataFreshness::Offline: return OfflineGray;
		case EDataFreshness::Stale:   return StaleOrange;
		default:                      return TextDefault;
		}
	}

	// "ONLINE · 0.4초 전"
	FText ConnectionLine(EDataFreshness Connection, double LastReceivedSeconds)
	{
		return FText::Format(
			LOCTEXT("ConnLine", "{0} · {1}"),
			UFactoryStateSubsystem::GetConnectionLabel(Connection),
			UTwinViewLibrary::FormatAge(LastReceivedSeconds));
	}

	// 상세 패널 한 줄 만들기
	FTwinDetailRow Row(const FText& Label, const FText& Value, const FLinearColor& Color = TextDefault)
	{
		FTwinDetailRow Result;
		Result.Label = Label;
		Result.Value = Value;
		Result.ValueColor = Color;
		return Result;
	}
}

// =====================================================================
// 정지 지점 정의
// =====================================================================

// DataTable의 행 이름들을 Order 순서로 정렬해서 돌려줌
TArray<FName> UTwinViewLibrary::GetStationIdsInOrder(const UDataTable* StationDefs)
{
	TArray<FName> Ids;
	if (!StationDefs)
	{
		return Ids;
	}

	Ids = StationDefs->GetRowNames();
	Ids.Sort([StationDefs](const FName& A, const FName& B)
		{
			const FStationDefRow* DefA = FindDef(StationDefs, A);
			const FStationDefRow* DefB = FindDef(StationDefs, B);
			return (DefA ? DefA->Order : 0) < (DefB ? DefB->Order : 0);
		});
	return Ids;
}

// "P2 차체"
FText UTwinViewLibrary::GetStationName(const UDataTable* StationDefs, FName StationId)
{
	const FStationDefRow* Def = FindDef(StationDefs, StationId);
	return Def ? Def->DisplayName : NameOrDash(StationId);
}

// "2 P2 차체" (순서 번호 + 이름)
FText UTwinViewLibrary::GetStationTitle(const UDataTable* StationDefs, FName StationId)
{
	const FStationDefRow* Def = FindDef(StationDefs, StationId);
	if (!Def)
	{
		return NameOrDash(StationId);
	}
	return FText::Format(
		LOCTEXT("StationTitle", "{0} {1}"),
		FText::AsNumber(Def->Order),
		Def->DisplayName);
}

// =====================================================================
// 목록 한 줄
// =====================================================================

void UTwinViewLibrary::GetStationRowView(
	const UObject* WorldContextObject,
	const UDataTable* StationDefs,
	FName StationId,
	FText& Title,
	FText& StateText,
	FLinearColor& StateColor,
	FLinearColor& ZoneColor)
{
	Title = GetStationTitle(StationDefs, StationId);

	const FStationDefRow* Def = FindDef(StationDefs, StationId);
	ZoneColor = Def ? Def->ZoneColor : FLinearColor::White;

	FStationState State;
	const UFactoryStateSubsystem* Store = GetStore(WorldContextObject);
	if (!Store || !Store->GetStationState(StationId, State))
	{
		StateText = LOCTEXT("NoData", "수신 안 됨");
		StateColor = OfflineGray;
		return;
	}

	// 연결이 정상이면 작업 상태, 아니면 연결 상태를 보여 줌
	StateText = (State.Connection == EDataFreshness::Online)
		? UFactoryStateSubsystem::GetOperationLabel(State.Operation)
		: UFactoryStateSubsystem::GetConnectionLabel(State.Connection);
	StateColor = StationColor(State);
}

void UTwinViewLibrary::GetAgvRowView(
	const UObject* WorldContextObject,
	const UDataTable* StationDefs,
	FName AgvId,
	FText& Title,
	FText& StateText,
	FLinearColor& StateColor)
{
	Title = NameOrDash(AgvId);

	FAgvState State;
	const UFactoryStateSubsystem* Store = GetStore(WorldContextObject);
	if (!Store || !Store->GetAgvState(AgvId, State))
	{
		StateText = LOCTEXT("NoData", "수신 안 됨");
		StateColor = OfflineGray;
		return;
	}

	if (State.Connection != EDataFreshness::Online)
	{
		StateText = UFactoryStateSubsystem::GetConnectionLabel(State.Connection);
		StateColor = ConnectionColor(State.Connection);
		return;
	}

	if (State.Motion == EAgvMotion::Moving)
	{
		// "이동 · P3"
		StateText = FText::Format(LOCTEXT("AgvRowMoving", "이동 · {0}"), NameOrDash(State.NextStationId));
		StateColor = AgvMoving;
	}
	else
	{
		// "정차 · P2"
		StateText = FText::Format(LOCTEXT("AgvRowStopped", "정차 · {0}"), NameOrDash(State.LastStationId));
		StateColor = AgvStopped;
	}
}

// 레벨에 놓인 AGV 액터들의 ID를 이름순으로
TArray<FName> UTwinViewLibrary::GetAgvIdsInWorld(const UObject* WorldContextObject)
{
	TArray<FName> Ids;
	TArray<AActor*> Found;
	UGameplayStatics::GetAllActorsOfClass(WorldContextObject, AAgvActor::StaticClass(), Found);

	for (const AActor* Actor : Found)
	{
		if (const AAgvActor* Agv = Cast<AAgvActor>(Actor))
		{
			Ids.AddUnique(Agv->AgvId);
		}
	}

	Ids.Sort(FNameLexicalLess());
	return Ids;
}

// =====================================================================
// 상세 패널
// =====================================================================

bool UTwinViewLibrary::BuildDetail(
	const UObject* WorldContextObject,
	const UDataTable* StationDefs,
	const FSelectionTarget& Target,
	FText& Title,
	FText& Subtitle,
	TArray<FTwinDetailRow>& Rows)
{
	Rows.Reset();

	if (!Target.IsSet())
	{
		Title = FText::GetEmpty();
		Subtitle = FText::GetEmpty();
		return false;
	}

	const UFactoryStateSubsystem* Store = GetStore(WorldContextObject);
	const FText NoData = LOCTEXT("NoData", "수신 안 됨");

	switch (Target.Kind)
	{
		// ----- 정지 지점 -----
	case ESelectionKind::Station:
	{
		Title = GetStationTitle(StationDefs, Target.Id);
		Subtitle = FText::Format(LOCTEXT("StationSub", "정지 지점 · {0}"), FText::FromName(Target.Id));

		FStationState State;
		if (!Store || !Store->GetStationState(Target.Id, State))
		{
			Rows.Add(Row(LOCTEXT("Operation", "작업 상태"), NoData, OfflineGray));
			Rows.Add(Row(LOCTEXT("Connection", "연결"), NoData, OfflineGray));
			return true;
		}

		Rows.Add(Row(
			LOCTEXT("Operation", "작업 상태"),
			UFactoryStateSubsystem::GetOperationLabel(State.Operation),
			StationColor(State)));

		Rows.Add(Row(
			LOCTEXT("Connection", "연결"),
			ConnectionLine(State.Connection, State.LastReceivedSeconds),
			ConnectionColor(State.Connection)));

		Rows.Add(Row(
			LOCTEXT("Source", "데이터 출처"),
			UFactoryStateSubsystem::GetSourceLabel(State.Source)));

		Rows.Add(Row(
			LOCTEXT("Body", "현재 차체"),
			NameOrDash(State.BodyId)));

		// 이 정지 지점에 서 있거나 오는 중인 AGV
		FText AgvText = Dash;
		for (const FAgvState& Agv : Store->GetAllAgvs())
		{
			if (Agv.Motion == EAgvMotion::Stopped && Agv.LastStationId == Target.Id)
			{
				AgvText = FText::Format(LOCTEXT("AgvHere", "{0} 정차 중"), FText::FromName(Agv.AgvId));
				break;  // 서 있는 AGV가 우선
			}
			if (Agv.Motion == EAgvMotion::Moving && Agv.NextStationId == Target.Id)
			{
				AgvText = FText::Format(LOCTEXT("AgvComing", "{0} 오는 중"), FText::FromName(Agv.AgvId));
			}
		}
		Rows.Add(Row(LOCTEXT("AgvRow", "AGV"), AgvText));
		return true;
	}

	// ----- AGV -----
	case ESelectionKind::Agv:
	{
		Title = FText::FromName(Target.Id);
		Subtitle = LOCTEXT("AgvSub", "운반 로봇");

		FAgvState State;
		if (!Store || !Store->GetAgvState(Target.Id, State))
		{
			Rows.Add(Row(LOCTEXT("Motion", "운행 상태"), NoData, OfflineGray));
			Rows.Add(Row(LOCTEXT("Connection", "연결"), NoData, OfflineGray));
			return true;
		}

		const bool  bMoving = State.Motion == EAgvMotion::Moving;
		const FText LastName = GetStationName(StationDefs, State.LastStationId);
		const FText NextName = State.NextStationId.IsNone()
			? Dash
			: GetStationName(StationDefs, State.NextStationId);

		Rows.Add(Row(
			LOCTEXT("Motion", "운행 상태"),
			bMoving ? LOCTEXT("Moving", "이동 중") : LOCTEXT("Stopped", "정차"),
			bMoving ? AgvMoving : AgvStopped));

		Rows.Add(Row(
			LOCTEXT("Where", "현재 위치"),
			bMoving
			? FText::Format(LOCTEXT("Between", "{0} → {1} 사이"), LastName, NextName)
			: FText::Format(LOCTEXT("AtStop", "{0} 정지 위치"), LastName)));

		Rows.Add(Row(
			LOCTEXT("PosSource", "위치 근거"),
			State.PositionSource == EPositionSource::Estimated
			? LOCTEXT("Estimated", "추정 (경로 위)")
			: LOCTEXT("Confirmed", "확인 (정지 지점 RFID)")));

		Rows.Add(Row(LOCTEXT("Next", "다음 목적지"), NextName));
		Rows.Add(Row(LOCTEXT("Carrier", "적재 차체"), NameOrDash(State.CarrierBodyId)));

		Rows.Add(Row(
			LOCTEXT("Connection", "연결"),
			ConnectionLine(State.Connection, State.LastReceivedSeconds),
			ConnectionColor(State.Connection)));

		Rows.Add(Row(
			LOCTEXT("Source", "데이터 출처"),
			UFactoryStateSubsystem::GetSourceLabel(State.Source)));
		return true;
	}

	// ----- 차체: FBodyState가 생기면 채움 -----
	default:
		Title = FText::FromName(Target.Id);
		Subtitle = LOCTEXT("BodySub", "차체");
		Rows.Add(Row(LOCTEXT("BodyInfo", "정보"), LOCTEXT("BodyLater", "차체 이력은 다음 실습에서")));
		return true;
	}
}

// =====================================================================
// 상태바
// =====================================================================

// "0.4초 전" / "12초 전"
FText UTwinViewLibrary::FormatAge(double LastReceivedSeconds)
{
	if (LastReceivedSeconds <= 0.0)
	{
		return LOCTEXT("NoData", "수신 안 됨");
	}

	const double Age = FMath::Max(0.0, FPlatformTime::Seconds() - LastReceivedSeconds);
	const FString Text = (Age < 10.0)
		? FString::Printf(TEXT("%.1f초 전"), Age)
		: FString::Printf(TEXT("%d초 전"), FMath::FloorToInt(Age));
	return FText::FromString(Text);
}

FText UTwinViewLibrary::GetLastReceiveText(const UObject* WorldContextObject)
{
	const UFactoryStateSubsystem* Store = GetStore(WorldContextObject);
	return FormatAge(Store ? Store->GetLatestReceivedSeconds() : 0.0);
}

FText UTwinViewLibrary::GetClockText()
{
	// 이 PC의 현지 시각. 로그 저장은 나중에 UTC로 따로 함
	return FText::FromString(FDateTime::Now().ToString(TEXT("%H:%M:%S")) + TEXT(" KST"));
}

FLinearColor UTwinViewLibrary::GetSelectionColor()
{
	return FLinearColor(0.015f, 0.028f, 0.11f, 1.0f); // 진한 남색 (#20305F)
}

#undef LOCTEXT_NAMESPACE
