// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Subsystems/GameInstanceSubsystem.h"
#include "Engine/HitResult.h"
#include "SelectionSubsystem.generated.h"

UENUM(BlueprintType)
enum class ESelectionKind : uint8
{
	None,
	Station,
	Agv,
	Body // 차체
};

USTRUCT(BlueprintType)
struct FSelectionTarget
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Selection")
	ESelectionKind Kind = ESelectionKind::None;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Selection")
	FName Id;

	bool IsSet() const { return Kind != ESelectionKind::None && !Id.IsNone(); }

	bool operator==(const FSelectionTarget& Other) const
	{
		return Kind == Other.Kind && Id == Other.Id;
	}

	bool operator!=(const FSelectionTarget& Other) const { return !(*this == Other); }
};

DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnSelectionChanged, const FSelectionTarget&, Target);

UCLASS()
class FACTORYTWIN_API USelectionSubsystem : public UGameInstanceSubsystem
{
	GENERATED_BODY()

public:
	virtual void Deinitialize() override;

	UFUNCTION(BlueprintCallable, Category = "Selection")
	void Select(const FSelectionTarget& Target);

	UFUNCTION(BlueprintCallable, Category = "Selection")
	void SelectStation(FName StationId);

	UFUNCTION(BlueprintCallable, Category = "Selection")
	void SelectAgv(FName AgvId);

	UFUNCTION(BlueprintCallable, Category = "Selection")
	void ClearSelection();

	UFUNCTION(BlueprintCallable, Category = "Selection")
	void SelectFromHit(const FHitResult& Hit);
	
	UFUNCTION(BlueprintPure, Category = "Selection")
	FSelectionTarget GetSelection() const { return Current; }

	UFUNCTION(BlueprintPure, Category = "Selection")
	bool IsSelected(ESelectionKind Kind, FName Id) const;

	UFUNCTION(BlueprintPure, Category = "Selection")
	static FSelectionTarget MakeSelectionTarget(ESelectionKind Kind, FName Id);

	UPROPERTY(BlueprintAssignable, Category = "Selection")
	FOnSelectionChanged OnSelectionChanged;

	// 매트를 눌렀을 때 정지 지점으로 인정하는 거리 (배치도 cm)
	static constexpr float StopPickRadiusCm = 20.0f;

private:
	FSelectionTarget Current;
};
