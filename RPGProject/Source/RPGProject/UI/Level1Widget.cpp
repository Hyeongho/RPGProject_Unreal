// Fill out your copyright notice in the Description page of Project Settings.


#include "Level1Widget.h"

void ULevel1Widget::NativeOnInitialized()
{
	Super::NativeOnInitialized();
}

void ULevel1Widget::NativePreConstruct()
{
	Super::NativePreConstruct();
}

void ULevel1Widget::NativeConstruct()
{
	Super::NativeConstruct();

	m_TotalMonsterText = Cast<UTextBlock>(GetWidgetFromName(TEXT("TotalMonster")));

	m_CurrentMonster = 3;
	m_TotalMonster = 0;

	SetMonsterText();
}

void ULevel1Widget::NativeDestruct()
{
	Super::NativeDestruct();
}

void ULevel1Widget::NativeTick(const FGeometry& MyGeometry, float InDeltaTime)
{
	Super::NativeTick(MyGeometry, InDeltaTime);
}

void ULevel1Widget::SetMonsterText()
{
	FString CurrentMonster;
	FString TotalMonster;

	CurrentMonster = FString::FromInt(m_CurrentMonster);
	TotalMonster = FString::FromInt(m_TotalMonster);

	FString Str = CurrentMonster + " / " + TotalMonster;

	FText Text = FText::FromString(Str);

	m_TotalMonsterText->SetText(Text);
}
