// Fill out your copyright notice in the Description page of Project Settings.


#include "KwangAnimInstance.h"
#include "KwangCharacter.h"

UKwangAnimInstance::UKwangAnimInstance()
{
}

UKwangAnimInstance::~UKwangAnimInstance()
{
}

void UKwangAnimInstance::Attack()
{
	Super::Attack();

	if (!m_AttackEnable || Montage_IsPlaying(m_AttackMontage[m_AttackIndex]))
	{
		return;
	}

	m_AttackEnable = false;

	Montage_SetPosition(m_AttackMontage[m_AttackIndex], 0.f);

	Montage_Play(m_AttackMontage[m_AttackIndex]);

	m_AttackIndex = (m_AttackIndex + 1) % m_AttackMontage.Num();
}

void UKwangAnimInstance::AnimNotify_Attack()
{
	AKwangCharacter* Player = Cast<AKwangCharacter>(TryGetPawnOwner());

	if (IsValid(Player))
	{
		Player->Attack();
	}
}

void UKwangAnimInstance::AnimNotify_KwangAttackEnable()
{
	m_AttackEnable = true;
}

void UKwangAnimInstance::AnimNotify_KwangAttackEnd()
{
	m_AttackIndex = 0;
}
