// Fill out your copyright notice in the Description page of Project Settings.


#include "UI/IDFItemDescriptionWidget.h"

void UIDFItemDescriptionWidget::SetContent(const FText& ItemName, const FText& ItemDescription)
{
    if (NameText)
    {
        NameText->SetText(ItemName);
    }

    if (DescriptionText)
    {
        DescriptionText->SetText(ItemDescription);
    }
}

void UIDFItemDescriptionWidget::ShowPanel()
{
    SetVisibility(ESlateVisibility::Visible);
}

void UIDFItemDescriptionWidget::HidePanel()
{
    SetVisibility(ESlateVisibility::Hidden);
}

