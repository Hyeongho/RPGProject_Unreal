// Fill out your copyright notice in the Description page of Project Settings.


#include "SevarogAnimInstance.h"

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
}

void USevarogAnimInstance::AnimNotify_PlayParticleEffect()
{
	FActorSpawnParameters ActorParam;
	ActorParam.SpawnCollisionHandlingOverride = ESpawnActorCollisionHandlingMethod::AlwaysSpawn;
}
