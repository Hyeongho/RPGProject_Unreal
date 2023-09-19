// Fill out your copyright notice in the Description page of Project Settings.


#include "AIMinionPawn.h"

AAIMinionPawn::AAIMinionPawn()
{
	PrimaryActorTick.bCanEverTick = true;

	m_Name = TEXT("Minion");

	m_Body->SetCapsuleHalfHeight(92.f);
	m_Body->SetCapsuleRadius(32.f);

	static ConstructorHelpers::FObjectFinder<USkeletalMesh>	MeshAsset(TEXT("/Script/Engine.SkeletalMesh'/Game/ParagonMinions/Characters/Minions/Down_Minions/Meshes/Minion_Lane_Melee_Core_Dawn.Minion_Lane_Melee_Core_Dawn'"));

	if (MeshAsset.Succeeded())
	{
		m_Mesh->SetSkeletalMesh(MeshAsset.Object);
	}

	m_Mesh->SetRelativeLocation(FVector(0.0, 0.0, -92.0));
	m_Mesh->SetRelativeRotation(FRotator(0.0, -90.0, 0.0));

	// 애니메이션 블루프린트를 지정한다.

	static ConstructorHelpers::FClassFinder<UAnimInstance>	AnimAsset(TEXT("/Script/Engine.AnimBlueprint'/Game/AI/AB_AIMinionLane.AB_AIMinionLane_C'"));

	if (AnimAsset.Succeeded())
	{
		m_Mesh->SetAnimInstanceClass(AnimAsset.Class);
	}
}

void AAIMinionPawn::BeginPlay()
{
	Super::BeginPlay();
}

void AAIMinionPawn::EndPlay(const EEndPlayReason::Type EndPlayReason)
{
	Super::EndPlay(EndPlayReason);
}

void AAIMinionPawn::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}
