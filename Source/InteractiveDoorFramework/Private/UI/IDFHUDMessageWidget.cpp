// Fill out your copyright notice in the Description page of Project Settings.


#include "UI/IDFHUDMessageWidget.h"



void UIDFHUDMessageWidget::ShowMessage_Implementation(const FText& MessageText)
{
	MessageTextBlock->SetText(MessageText);
	MessageTextBlock->SetVisibility(ESlateVisibility::Visible);
}
