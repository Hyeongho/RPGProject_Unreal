// Fill out your copyright notice in the Description page of Project Settings.


#include "KwangCharacter.h"
#include "KwangAnimInstance.h"

AKwangCharacter::AKwangCharacter()
{
	static ConstructorHelpers::FObjectFinder<USkeletalMesh> MeshAsset(TEXT("/Script/Engine.SkeletalMesh'/Game/ParagonKwang/Characters/Heroes/Kwang/Meshes/KwangAlbino.KwangAlbino'"));

	if (MeshAsset.Succeeded())
	{
		GetMesh()->SetSkeletalMesh(MeshAsset.Object);
	}

	GetMesh()->SetRelativeLocation(FVector(0.0, 0.0, -100.0));
	GetMesh()->SetRelativeRotation(FRotator(0.0, -90.0, 0.0));

	static ConstructorHelpers::FClassFinder<UAnimInstance> AnimClass(TEXT("/Script/Engine.AnimBlueprint'/Game/Player/Kwang/AB_Kwang.AB_Kwang_C'"));

	if (AnimClass.Succeeded())
	{
		GetMesh()->SetAnimInstanceClass(AnimClass.Class);
	}
}

AKwangCharacter::~AKwangCharacter()
{
}

void AKwangCharacter::BeginPlay()
{
	Super::BeginPlay();

	m_PlayerAnim = Cast<UKwangAnimInstance>(GetMesh()->GetAnimInstance());
}

void AKwangCharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

	PlayerInputComponent->BindAction(TEXT("Attack"), EInputEvent::IE_Pressed, this, &AKwangCharacter::AttackKey);
}

void AKwangCharacter::AttackKey()
{
	m_PlayerAnim->Attack();
}

void AKwangCharacter::Attack()
{
	Super::Attack();

	FVector	Start = GetActorLocation() + GetActorForwardVector() * 50.f;

	FVector	End = Start + GetActorForwardVector() * 100.f;

	FHitResult result;

	FCollisionQueryParams param(NAME_None, false, this);

	bool Collision = GetWorld()->SweepSingleByChannel(result, Start, End, FQuat::Identity, ECollisionChannel::ECC_GameTraceChannel6, FCollisionShape::MakeSphere(50.f), param);

#if ENABLE_DRAW_DEBUG

	FColor	DrawColor = Collision ? FColor::Red : FColor::Green;

	DrawDebugSphere(GetWorld(), (Start + End) / 2.f, 100, 20, DrawColor, false, 20.f);

#endif

	if (Collision)
	{
		FActorSpawnParameters ActorParam;
		ActorParam.SpawnCollisionHandlingOverride = ESpawnActorCollisionHandlingMethod::AlwaysSpawn;

		/*FHitResult LineResult;

		FDamageEvent DmgEvent;
		result.GetActor()->TakeDamage(10.f, DmgEvent, GetController(), this);*/
	}

	else
	{

	}
}
