// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "DefaultAIAnimInstance.h"
#include "MinionAIAnimInstance.generated.h"

/**
 * 
 */
UCLASS()
class RPGPROJECT_API UMinionAIAnimInstance : public UDefaultAIAnimInstance
{
	GENERATED_BODY()
	
public:
	UMinionAIAnimInstance();

protected:
	UPROPERTY(Category = Data, EditAnywhere, BlueprintReadWrite, meta = (AllowPrivateAccess = "true"))
	TArray<TObjectPtr<UAnimMontage>> m_AttackMontage;

	UPROPERTY(Category = Data, EditAnywhere, BlueprintReadWrite, meta = (AllowPrivateAccess = "true"))
	TObjectPtr<UAnimMontage> m_DeathMontage;

	bool m_AttackEnable;

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
	void AnimNotify_Attack();

	UFUNCTION()
	void AnimNotify_AttackEnd();

	UFUNCTION()
	void AnimNotify_Death();
};
