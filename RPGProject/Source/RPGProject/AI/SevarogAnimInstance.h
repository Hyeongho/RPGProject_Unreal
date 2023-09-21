// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "DefaultAIAnimInstance.h"
#include "SevarogAnimInstance.generated.h"

/**
 * 
 */
UCLASS()
class RPGPROJECT_API USevarogAnimInstance : public UDefaultAIAnimInstance
{
	GENERATED_BODY()
	
public:
	USevarogAnimInstance();

public:
	virtual void Attack();
	virtual void Death();

public:
	virtual void NativeInitializeAnimation();

	virtual void NativeUpdateAnimation(float DeltaSeconds);

	virtual void NativeThreadSafeUpdateAnimation(float DeltaSeconds);

	virtual void NativePostEvaluateAnimation();

	virtual void NativeUninitializeAnimation();

	virtual void NativeBeginPlay();

public:
	UFUNCTION()
	void AnimNotify_PlayParticleEffect();
};
