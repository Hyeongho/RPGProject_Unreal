// Fill out your copyright notice in the Description page of Project Settings.


#include "AISevarogCharacter.h"
#include "SevarogAIController.h"
#include "SevarogAnimInstance.h"

AAISevarogCharacter::AAISevarogCharacter()
{
	m_Name = TEXT("Minion");

	GetCapsuleComponent()->SetCapsuleHalfHeight(92.f);
	GetCapsuleComponent()->SetCapsuleRadius(32.f);

	static ConstructorHelpers::FObjectFinder<USkeletalMesh> MeshAsset(TEXT("/Script/Engine.SkeletalMesh'/Game/ParagonSevarog/Characters/Heroes/Sevarog/Meshes/Sevarog.Sevarog'"));

	if (MeshAsset.Succeeded())
	{
		GetMesh()->SetSkeletalMesh(MeshAsset.Object);
	}

	GetMesh()->SetRelativeLocation(FVector(0.0, 0.0, -92.0));
	GetMesh()->SetRelativeRotation(FRotator(0.0, -90.0, 0.0));

	static ConstructorHelpers::FClassFinder<UAnimInstance> AnimAsset(TEXT("/Script/Engine.AnimBlueprint'/Game/AI/AB_AISevarog.AB_AISevarog_C'"));

	if (AnimAsset.Succeeded())
	{
		GetMesh()->SetAnimInstanceClass(AnimAsset.Class);
	}

	AIControllerClass = nullptr;

	AIControllerClass = ASevarogAIController::StaticClass();

	m_DissolveCurrentTime = 0.f;
	m_DissolveTime = 3.f;
	m_DissolveEnable = false;
}

void AAISevarogCharacter::BeginPlay()
{
	Super::BeginPlay();

	m_Anim = Cast<USevarogAnimInstance>(GetMesh()->GetAnimInstance());
}

void AAISevarogCharacter::EndPlay(const EEndPlayReason::Type EndPlayReason)
{
	Super::EndPlay(EndPlayReason);
}

void AAISevarogCharacter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	if (m_DissolveEnable)
	{
		m_DissolveCurrentTime += DeltaTime;

		if (m_DissolveCurrentTime >= m_DissolveTime)
		{
			Destroy();
		}

		float Ratio = m_DissolveCurrentTime / m_DissolveTime;
		Ratio = 1.f - Ratio;
		Ratio = Ratio * 2.f - 1.f;

		for (auto& Mtrl : m_MaterialArray)
		{
			Mtrl->SetScalarParameterValue(TEXT("Dissolve"), Ratio);
		}
	}
}

void AAISevarogCharacter::Death()
{
	Super::Death();

	for (auto& Mtrl : m_MaterialArray)
	{
		Mtrl->SetScalarParameterValue(TEXT("DissolveEnable"), 1.f);
	}

	m_DissolveEnable = true;
}
