// Fill out your copyright notice in the Description page of Project Settings.


#include "AIMinionCharacter.h"
#include "MinionAIAnimInstance.h"

AAIMinionCharacter::AAIMinionCharacter()
{
	m_Name = TEXT("Minion");

	GetCapsuleComponent()->SetCapsuleHalfHeight(92.f);
	GetCapsuleComponent()->SetCapsuleRadius(32.f);

	static ConstructorHelpers::FObjectFinder<USkeletalMesh>	MeshAsset(TEXT("/Script/Engine.SkeletalMesh'/Game/ParagonMinions/Characters/Minions/Down_Minions/Meshes/Minion_Lane_Melee_Core_Dawn.Minion_Lane_Melee_Core_Dawn'"));

	if (MeshAsset.Succeeded())
	{
		GetMesh()->SetSkeletalMesh(MeshAsset.Object);
	}

	GetMesh()->SetRelativeLocation(FVector(0.0, 0.0, -92.0));
	GetMesh()->SetRelativeRotation(FRotator(0.0, -90.0, 0.0));

	// �ִϸ��̼� �������Ʈ�� �����Ѵ�.

	static ConstructorHelpers::FClassFinder<UAnimInstance>	AnimAsset(TEXT("/Script/Engine.AnimBlueprint'/Game/AI/AB_AIMinionLane.AB_AIMinionLane_C'"));

	if (AnimAsset.Succeeded())
	{
		GetMesh()->SetAnimInstanceClass(AnimAsset.Class);
	}
}

void AAIMinionCharacter::BeginPlay()
{
	Super::BeginPlay();

	m_Anim = Cast<UMinionAIAnimInstance>(GetMesh()->GetAnimInstance());
}

void AAIMinionCharacter::EndPlay(const EEndPlayReason::Type EndPlayReason)
{
	Super::EndPlay(EndPlayReason);
}

void AAIMinionCharacter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}
