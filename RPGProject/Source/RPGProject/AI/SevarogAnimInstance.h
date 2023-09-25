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

protected:
	UPROPERTY(Category = Data, EditAnywhere, BlueprintReadWrite, meta = (AllowPrivateAccess = "true"))
	TObjectPtr<UAnimMontage> m_StartMontage;

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
	void PlayStart();

public:
	UFUNCTION()
	void AnimNotify_PlayParticleEffect();

	UFUNCTION()
	void AnimNotify_StartEnd();

	UFUNCTION()
	void AnimNotify_Death();
};
