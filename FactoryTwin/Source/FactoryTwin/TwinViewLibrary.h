// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "FactoryTypes.h"
#include "SelectionSubsystem.h"
#include "TwinViewLibrary.generated.h"

class UDataTable;

// 화면 위젯이 쓰는 "보여 줄 글자와 색" 계산 모음.
// 저장소 값을 읽어 문구로 바꾸기만 하고, 값을 바꾸지는 않는다.
// 값이 없으면 0이나 정상으로 채우지 않고 "–" 또는 "수신 안 됨"으로 둔다 (UI 명세 9장).
UCLASS()
class FACTORYTWIN_API UTwinViewLibrary : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()
	
public:
	// ---- 정지 지점 정의 (DA_StationDefs) ----
	// 한 바퀴 순서(Order)대로 정렬한 StationId 목록
	UFUNCTION(BlueprintPure, Category = "Twin|View")
	static TArray<FName> GetStationIdsInOrder(const UDataTable* StationDefs);

	// "P2 차체". 정의에 없으면 ID 그대로
	UFUNCTION(BlueprintPure, Category = "Twin|View")
	static FText GetStationName(const UDataTable* StationDefs, FName StationId);

	// "2 P2 차체" (번호 + 이름)
	UFUNCTION(BlueprintPure, Category = "Twin|View")
	static FText GetStationTitle(const UDataTable* StationDefs, FName StationId);

	// ---- 목록 한 줄 ----
	UFUNCTION(BlueprintCallable, Category = "Twin|View", meta = (WorldContext = "WorldContextObject"))
	static void GetStationRowView(const UObject* WorldContextObject, const UDataTable* StationDefs, FName StationId,
		FText& Title, FText& StateText, FLinearColor& StateColor, FLinearColor& ZoneColor);
	
	UFUNCTION(BlueprintCallable, Category = "Twin|View", meta = (WorldContext = "WorldContextObject"))
	static void GetAgvRowView(const UObject* WorldContextObject, const UDataTable* StationDefs, FName AgvId,
		FText& Title, FText& StateText, FLinearColor& StateColor);
	
	// 레벨에 놓인 AGV 액터들의 AgvId
	UFUNCTION(BlueprintCallable, Category = "Twin|View", meta = (WorldContext = "WorldContextObject"))
	static TArray<FName> GetAgvIdsInWorld(const UObject* WorldContextObject);
	
	// ---- 상세 패널 ----
	// 선택 대상의 제목·부제·항목 줄을 만든다. 선택이 없으면 false
	UFUNCTION(BlueprintCallable, Category = "Twin|View", meta = (WorldContext = "WorldContextObject"))
	static bool BuildDetail(const UObject* WorldContextObject, const UDataTable* StationDefs, const
		FSelectionTarget& Target, FText& Title, FText& Subtitle, TArray<FTwinDetailRow>& Rows);
	
	// ---- 상태바 ----
	// "0.4초 전" / "수신 안 됨". 인자는 FPlatformTime 기준 수신 시각
	UFUNCTION(BlueprintPure, Category = "Twin|View")
	static FText FormatAge(double LastReceivedSeconds);
	
	// 모든 대상 중 가장 최근 수신이 몇 초 전인지
	UFUNCTION(BlueprintCallable, Category = "Twin|View", meta = (WorldContext = "WorldContextObject"))
	static FText GetLastReceiveText(const UObject* WorldContextObject);
	
	// "14:02:31 KST" (이 PC의 현지 시각)
	UFUNCTION(BlueprintPure, Category = "Twin|View")
	static FText GetClockText();
	
	// 선택 표시용 진한 남색
	UFUNCTION(BlueprintPure, Category = "Twin|View")
	static FLinearColor GetSelectionColor();
};
