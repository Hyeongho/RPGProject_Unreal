// Fill out your copyright notice in the Description page of Project Settings.


#include "SevarogAnimInstance.h"
#include "../Effect/DefaultEffect.h"
#include "AISevarogCharacter.h"
#include "AIPawn.h"
#include "AICharacter.h"

USevarogAnimInstance::USevarogAnimInstance()
{
	
}

void USevarogAnimInstance::Attack()
{
	Super::Attack();
}

void USevarogAnimInstance::Death()
{
	Super::Death();
}

void USevarogAnimInstance::NativeInitializeAnimation()
{
	Super::NativeInitializeAnimation();
}

void USevarogAnimInstance::NativeUpdateAnimation(float DeltaSeconds)
{
	Super::NativeUpdateAnimation(DeltaSeconds);
}

void USevarogAnimInstance::NativeThreadSafeUpdateAnimation(float DeltaSeconds)
{
	Super::NativeThreadSafeUpdateAnimation(DeltaSeconds);
}

void USevarogAnimInstance::NativePostEvaluateAnimation()
{
	Super::NativePostEvaluateAnimation();
}

void USevarogAnimInstance::NativeUninitializeAnimation()
{
	Super::NativeUninitializeAnimation();
}

void USevarogAnimInstance::NativeBeginPlay()
{
	Super::NativeBeginPlay();
	
	PlayStart();
}

void USevarogAnimInstance::PlayStart()
{
	m_AnimType = EAIAnimType::Start;

	if (m_AnimType != EAIAnimType::Start || Montage_IsPlaying(m_StartMontage))
	{
		LOG(TEXT("Attack false"));

		return;
	}

	LOG(TEXT("Attack"));

	Montage_SetPosition(m_StartMontage, 0.f);

	Montage_Play(m_StartMontage);
}

void USevarogAnimInstance::AnimNotify_PlayParticleEffect()
{
	FActorSpawnParameters ActorParam;
	ActorParam.SpawnCollisionHandlingOverride = ESpawnActorCollisionHandlingMethod::AlwaysSpawn;

	AAISevarogCharacter* AI = Cast<AAISevarogCharacter>(TryGetPawnOwner());

	ADefaultEffect* Effect = GetWorld()->SpawnActor<ADefaultEffect>(AI->GetActorLocation(), FRotator::ZeroRotator, ActorParam);

	Effect->SetParticleAsset(TEXT("/Script/Engine.ParticleSystem'/Game/ParagonSevarog/FX/Particles/P_Sevarog_LevelStart.P_Sevarog_LevelStart'"));
}

void USevarogAnimInstance::AnimNotify_StartEnd()
{
	m_AnimType = EAIAnimType::Idle;
}

void USevarogAnimInstance::AnimNotify_Death()
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
