// Fill out your copyright notice in the Description page of Project Settings.


#include "AIMinionCharacter.h"
#include "MinionAIAnimInstance.h"
#include "PhysicsEngine/PhysicsAsset.h" // PhysicsAsset 헤더 파일을 포함하세요.
#include "PhysicsEngine/PhysicsConstraintTemplate.h"
#include "PhysicsEngine/BodySetup.h"

AAIMinionCharacter::AAIMinionCharacter()
{
	m_Name = TEXT("Minion");

	GetCapsuleComponent()->SetCapsuleHalfHeight(92.f);
	GetCapsuleComponent()->SetCapsuleRadius(32.f);

	static ConstructorHelpers::FObjectFinder<USkeletalMesh> MeshAsset(TEXT("/Script/Engine.SkeletalMesh'/Game/ParagonMinions/Characters/Minions/Down_Minions/Meshes/Minion_Lane_Super_Core_Dawn.Minion_Lane_Super_Core_Dawn'"));

	if (MeshAsset.Succeeded())
	{
		GetMesh()->SetSkeletalMesh(MeshAsset.Object);
	}

	GetMesh()->SetRelativeLocation(FVector(0.0, 0.0, -92.0));
	GetMesh()->SetRelativeRotation(FRotator(0.0, -90.0, 0.0));

	// 애니메이션 블루프린트를 지정한다.

	static ConstructorHelpers::FClassFinder<UAnimInstance> AnimAsset(TEXT("/Script/Engine.AnimBlueprint'/Game/AI/AB_AIMinionLane.AB_AIMinionLane_C'"));

	if (AnimAsset.Succeeded())
	{
		GetMesh()->SetAnimInstanceClass(AnimAsset.Class);
	}

	/*static ConstructorHelpers::FClassFinder<UStaticMesh> RagdollAsset(TEXT("/Script/Engine.PhysicsAsset'/Game/ParagonMinions/Characters/Minions/Down_Minions/Meshes/Minion_Lane_Melee_Core_Dawn_Physics.Minion_Lane_Melee_Core_Dawn_Physics'"));*/
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

void AAIMinionCharacter::Death()
{
	Super::Death();

	LOG(TEXT("Death"));

	m_State = EAICharacterState::Death;

	GetMesh()->SetCollisionEnabled(ECollisionEnabled::QueryAndPhysics);

	GetMesh()->SetCollisionProfileName(TEXT("Ragdoll"));

	GetMesh()->SetSimulatePhysics(true);
	GetMesh()->SetEnableGravity(true);
}
