// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "../GameInfo.h"
#include "Animation/AnimInstance.h"
#include "DefaultAIAnimInstance.generated.h"

UENUM(BlueprintType)
enum class EAIAnimType : uint8
{
	Start, 
	Idle,
	Walk,
	Run,
	Attack,
	Death,
	Skill1,
	Skill2,
	Skill3
};

UCLASS()
class RPGPROJECT_API UDefaultAIAnimInstance : public UAnimInstance
{
	GENERATED_BODY()
	
public:
	UDefaultAIAnimInstance();

protected:
	UPROPERTY(Category = Anim, VisibleAnywhere, BlueprintReadOnly, meta = (AllowPrivateAccess = "true"))
	EAIAnimType	m_AnimType;

	int32 m_AttackIndex;

public:
	void SetAttackIndex(int32 AttackIndex)
	{
		m_AttackIndex = AttackIndex;
	}

public:
	void ChangeAnim(EAIAnimType Type)
	{
		m_AnimType = Type;
	}

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

};
