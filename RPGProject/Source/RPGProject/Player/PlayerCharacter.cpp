// Fill out your copyright notice in the Description page of Project Settings.


#include "PlayerCharacter.h"
#include "PlayerAnimInstance.h"

// Sets default values
APlayerCharacter::APlayerCharacter()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	m_SpringArm = CreateDefaultSubobject<USpringArmComponent>(TEXT("SpringArm"));
	m_SpringArm->SetRelativeLocation(FVector(0.0, 0.0, 150.0));
	m_SpringArm->SetRelativeRotation(FRotator(-20.0, 90.0, 0.0));
	m_SpringArm->TargetArmLength = 500.f;

	m_SpringArm->SetupAttachment(GetMesh());

	m_Camera = CreateDefaultSubobject<UCameraComponent>(TEXT("Camera"));

	m_Camera->SetupAttachment(m_SpringArm);

	this->GetCharacterMovement()->JumpZVelocity = 1000.f;

	GetCapsuleComponent()->SetCollisionProfileName(TEXT("Player"));

	GetCapsuleComponent()->SetGenerateOverlapEvents(true);

	GetCapsuleComponent()->SetNotifyRigidBodyCollision(true);

	GetCapsuleComponent()->CanCharacterStepUpOn = ECanBeCharacterBase::ECB_No;

	GetMesh()->SetCollisionEnabled(ECollisionEnabled::NoCollision);
}

// Called when the game starts or when spawned
void APlayerCharacter::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void APlayerCharacter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void APlayerCharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

	PlayerInputComponent->BindAxis(TEXT("Move_Front"), this, &APlayerCharacter::MoveFront);
	PlayerInputComponent->BindAxis(TEXT("Move_Back"), this, &APlayerCharacter::MoveBack);
	PlayerInputComponent->BindAxis(TEXT("Move_Right"), this, &APlayerCharacter::MoveRight);
	PlayerInputComponent->BindAxis(TEXT("Move_Left"), this, &APlayerCharacter::MoveLeft);
	PlayerInputComponent->BindAxis(TEXT("Rotation_Character"), this, &APlayerCharacter::RotationCharacter);
}

void APlayerCharacter::MoveFront(float Scale)
{
	AddMovementInput(GetActorForwardVector(), Scale);
}

void APlayerCharacter::MoveBack(float Scale)
{
	AddMovementInput(GetActorForwardVector(), Scale);
}

void APlayerCharacter::MoveRight(float Scale)
{
	AddMovementInput(GetActorRightVector(), Scale);
}

void APlayerCharacter::MoveLeft(float Scale)
{
	AddMovementInput(GetActorRightVector(), Scale);
}

void APlayerCharacter::RotationCharacter(float Scale)
{
	AddControllerYawInput(Scale);
}

void APlayerCharacter::Attack()
{
}

