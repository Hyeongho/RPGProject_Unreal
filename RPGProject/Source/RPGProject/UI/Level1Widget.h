// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "../GameInfo.h"
#include "Blueprint/UserWidget.h"
#include "Level1Widget.generated.h"

/**
 * 
 */
UCLASS()
class RPGPROJECT_API ULevel1Widget : public UUserWidget
{
	GENERATED_BODY()

public:
	virtual void NativeOnInitialized();
	virtual void NativePreConstruct();
	virtual void NativeConstruct();
	virtual void NativeDestruct();
	virtual void NativeTick(const FGeometry& MyGeometry, float InDeltaTime);

private:
	UTextBlock* m_TotalMonsterText;

	int32 m_CurrentMonster;
	int32 m_TotalMonster;

public:
	void SetCurrentMonster(int32 CurrentMonster)
	{
		m_CurrentMonster = CurrentMonster;
	}

	void SetTotalMonster(int32 TotalMonster)
	{
		m_TotalMonster = TotalMonster;
	}

	int32 GetCurrentMonster() const
	{
		return m_CurrentMonster;
	}

	int32 GetTotalMonster() const
	{
		return m_TotalMonster;
	}

public:
	void SetMonsterText();
	
};
