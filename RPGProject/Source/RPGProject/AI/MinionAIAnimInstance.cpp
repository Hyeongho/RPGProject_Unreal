// Fill out your copyright notice in the Description page of Project Settings.


#include "MinionAIAnimInstance.h"
#include "AIPawn.h"
#include "AICharacter.h"

UMinionAIAnimInstance::UMinionAIAnimInstance()
{
	m_AttackEnable = true;

	m_AttackIndex = 0;
}

void UMinionAIAnimInstance::Attack()
{
	Super::Attack();

	if (m_AnimType != EAIAnimType::Attack || Montage_IsPlaying(m_AttackMontage[m_AttackIndex]))
	{
		LOG(TEXT("Attack false"));

		return;
	}

	LOG(TEXT("Attack"));

	// 공격 모션을 처음부터 재생시킬 수 있도록 한다.
	Montage_SetPosition(m_AttackMontage[m_AttackIndex], 0.f);

	// 몽타주를 재생시킨다.
	Montage_Play(m_AttackMontage[m_AttackIndex]);

	// 배열.Num() 배열의 수
	m_AttackIndex = (m_AttackIndex + 1) % m_AttackMontage.Num();
}

void UMinionAIAnimInstance::NativeInitializeAnimation()
{
	Super::NativeInitializeAnimation();
}

void UMinionAIAnimInstance::NativeUpdateAnimation(float DeltaSeconds)
{
	Super::NativeUpdateAnimation(DeltaSeconds);
}

void UMinionAIAnimInstance::NativeThreadSafeUpdateAnimation(float DeltaSeconds)
{
	Super::NativeThreadSafeUpdateAnimation(DeltaSeconds);
}

void UMinionAIAnimInstance::NativePostEvaluateAnimation()
{
	Super::NativePostEvaluateAnimation();
}

void UMinionAIAnimInstance::NativeUninitializeAnimation()
{
	Super::NativeUninitializeAnimation();
}

void UMinionAIAnimInstance::NativeBeginPlay()
{
	Super::NativeBeginPlay();
}

void UMinionAIAnimInstance::AnimNotify_Attack()
{
}

void UMinionAIAnimInstance::AnimNotify_AttackEnd()
{
	if (AAIPawn* AIPawn = Cast<AAIPawn>(TryGetPawnOwner()))
	{
		if (IsValid(AIPawn))
		{
			AIPawn->SetAttackEnd(true);
		}
	}

	else if (AAICharacter* AICharacter = Cast<AAICharacter>(TryGetPawnOwner()))
	{
		if (IsValid(AICharacter))
		{
			AICharacter->SetAttackEnd(true);
		}
	}

	m_AttackEnable = true;
}
