// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Subsystems/GameInstanceSubsystem.h"
#include "Containers/Ticker.h"
#include "FactoryTypes.h"
#include "FactoryStateSubsystem.generated.h"

DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnStationChanged, const FStationState&, State);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnAgvChanged, const FAgvState&, State);

/**
 * 
 */
UCLASS(BlueprintType)
class FACTORYTWIN_API UFactoryStateSubsystem : public UGameInstanceSubsystem
{
	GENERATED_BODY()

	public:
		virtual void Initialize(FSubsystemCollectionBase& Collection) override;
		virtual void Deinitialize() override;

		// ---- Stations ----
		// 데이터 소스 불러오기 (묵 데이터)
		UFUNCTION(BlueprintCallable, Category = "Factory")
		void ApplyStationUpdate(const FStationState& Update);

		UFUNCTION(BlueprintCallable, Category = "Factory")
		void ReceiveHeartbeat(FName StationId);

		UFUNCTION(BlueprintCallable, Category = "Factory")
		bool GetStationState(FName StationId, FStationState& OutState) const;

		UPROPERTY(BlueprintAssignable, Category = "Factory")
		FOnStationChanged OnStationChanged;

		// ---- AGV ----
		UFUNCTION(BlueprintCallable, Category = "Factory|AGV")
		void ApplyAgvUpdate(const FAgvState& Update);

		UFUNCTION(BlueprintCallable, Category = "Factory|AGV")
		void ReceiveAgvHeartbeat(FName AgvId);

		UFUNCTION(BlueprintCallable, Category = "Factory|AGV")
		bool GetAgvState(FName AgvId, FAgvState& OutState) const;

		UPROPERTY(BlueprintAssignable, Category = "Factory|AGV")
		FOnAgvChanged OnAgvChanged;

		UFUNCTION(BlueprintPure, Category = "Factory|View")
		TArray<FAgvState> GetAllAgvs() const;
		
		// 공정·AGV 통틀어 가장 최근에 받은 시각 (FPlatformTime 기준). 받은 적 없으면 0
		UFUNCTION(BlueprintPure, Category = "Factory|View")
		double GetLatestReceivedSeconds() const;

		// ---- Display helpers ----
		UFUNCTION(BlueprintPure, Category = "Factory|Display")
		static FText GetOperationLabel(EOperationState Operation);

		UFUNCTION(BlueprintPure, Category = "Factory|Display")
		static FText GetConnectionLabel(EDataFreshness Connection);

		UFUNCTION(BlueprintPure, Category = "Factory|Display")
		static FText GetSourceLabel(EDataSource Source);

		UFUNCTION(BlueprintPure, Category = "Factory|Display")
		static FLinearColor GetDisplayColor(const FStationState& State);

		UFUNCTION(BlueprintPure, Category = "Factory|Display")
		static FText GetAgvMotionLabel(EAgvMotion Motion);

		UFUNCTION(BlueprintPure, Category = "Factory|Display")
		static FText GetPositionSourceLabel(EPositionSource Source);

		static constexpr double StaleAfterSeconds = 3.0;
		static constexpr double OfflineAfterSeconds = 10.0;

private:
	TMap<FName, FStationState> Stations;
	TMap<FName, FAgvState> Agvs;
	FTSTicker::FDelegateHandle TickerHandle;

	bool CheckFreshness(float DeltaTime);
	static EDataFreshness ConnectionForAge(double AgeSeconds);
};
