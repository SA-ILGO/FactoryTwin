// Fill out your copyright notice in the Description page of Project Settings.


#include "TwinPanelWidget.h"
#include "Engine/GameInstance.h"
#include "FactoryStateSubsystem.h"
#include "SelectionSubsystem.h"

UFactoryStateSubsystem* UTwinPanelWidget::GetFactoryStore() const
{
	const UGameInstance* GameInstance = GetGameInstance();
	return GameInstance ? GameInstance->GetSubsystem<UFactoryStateSubsystem>() : nullptr;

}

USelectionSubsystem* UTwinPanelWidget::GetSelection() const
{
	const UGameInstance* GameInstance = GetGameInstance();
	return GameInstance ? GameInstance->GetSubsystem<USelectionSubsystem>() : nullptr;
}

FReply UTwinPanelWidget::NativeOnMouseButtonDown(const FGeometry& InGeometry, const FPointerEvent& InMouseEvent)
{
	Super::NativeOnMouseButtonDown(InGeometry, InMouseEvent);
	return FReply::Handled();
}

