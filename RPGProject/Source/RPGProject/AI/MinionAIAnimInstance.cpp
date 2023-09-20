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

	// ���� ����� ó������ �����ų �� �ֵ��� �Ѵ�.
	Montage_SetPosition(m_AttackMontage[m_AttackIndex], 0.f);

	// ��Ÿ�ָ� �����Ų��.
	Montage_Play(m_AttackMontage[m_AttackIndex]);

	// �迭.Num() �迭�� ��
	m_AttackIndex = (m_AttackIndex + 1) % m_AttackMontage.Num();
}

void UMinionAIAnimInstance::Death()
{
	if (m_AnimType != EAIAnimType::Death || Montage_IsPlaying(m_DeathMontage))
	{
		LOG(TEXT("Attack false"));

		return;
	}

	if (AAIPawn* AIPawn = Cast<AAIPawn>(TryGetPawnOwner()))
	{
		if (IsValid(AIPawn))
		{
			AIPawn->AutoPossessAI = EAutoPossessAI::Disabled;
			AIPawn->AIControllerClass = nullptr;

			//AIPawn->Death();
		}
	}

	else if (AAICharacter* AICharacter = Cast<AAICharacter>(TryGetPawnOwner()))
	{
		if (IsValid(AICharacter))
		{
			AICharacter->AutoPossessAI = EAutoPossessAI::Disabled;
			AICharacter->AIControllerClass = nullptr;

			//AICharacter->Death();
		}
	}

	Montage_SetPosition(m_DeathMontage, 0.f);

	Montage_Play(m_DeathMontage);
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

void UMinionAIAnimInstance::AnimNotify_Death()
{
	if (AAIPawn* AIPawn = Cast<AAIPawn>(TryGetPawnOwner()))
	{
		if (IsValid(AIPawn))
		{
			AIPawn->Death();
		}
	}

	else if (AAICharacter* AICharacter = Cast<AAICharacter>(TryGetPawnOwner()))
	{
		if (IsValid(AICharacter))
		{
			AICharacter->Death();
		}
	}
}
