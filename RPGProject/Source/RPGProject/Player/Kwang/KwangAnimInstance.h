// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "../PlayerAnimInstance.h"
#include "KwangAnimInstance.generated.h"

/**
 * 
 */
UCLASS()
class RPGPROJECT_API UKwangAnimInstance : public UPlayerAnimInstance
{
	GENERATED_BODY()

public:
	UKwangAnimInstance();
	~UKwangAnimInstance();
	
public:
	virtual void Attack();

public:
	UFUNCTION()
	void AnimNotify_Attack();

	UFUNCTION()
	void AnimNotify_KwangAttackEnable();

	UFUNCTION()
	void AnimNotify_KwangAttackEnd();
};
