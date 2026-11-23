// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "TwinPanelWidget.generated.h"

class UFactoryStateSubsystem;
class USelectionSubsystem;

// 화면 패널(상태바·목록·상세 등)의 부모 클래스.
// 1) 패널 위를 눌렀을 때 클릭이 뒤의 3D로 새어 나가지 않게 막는다.
// 2) 저장소와 선택을 노드 하나로 가져오게 한다.
UCLASS(Abstract)
class FACTORYTWIN_API UTwinPanelWidget : public UUserWidget
{
	GENERATED_BODY()

public:
	UFUNCTION(BlueprintPure, Category = "Twin")
	UFactoryStateSubsystem* GetFactoryStore() const;

	UFUNCTION(BlueprintPure, Category = "Twin")
	USelectionSubsystem* GetSelection() const;

protected:
	// 버튼이 처리하지 않은 클릭은 패널이 받아서 끝냄 → 3D 선택이 바뀌지 않음
	virtual FReply NativeOnMouseButtonDown(const FGeometry& InGeometry, const FPointerEvent& InMouseEvent) override;
};
	

