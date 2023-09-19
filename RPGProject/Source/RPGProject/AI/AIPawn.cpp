// Fill out your copyright notice in the Description page of Project Settings.


#include "AIPawn.h"
#include "AIState.h"
#include "DefaultAIController.h"
#include "DefaultAIAnimInstance.h"

TObjectPtr<UDataTable> AAIPawn::m_AIDataTable;

// Sets default values
AAIPawn::AAIPawn()
{
 	// Set this pawn to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	m_AttackEnd = false;

	bUseControllerRotationYaw = true;

	m_Body = CreateDefaultSubobject<UCapsuleComponent>(TEXT("Body"));
	m_Mesh = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("Mesh"));
	m_Movement = CreateDefaultSubobject<UFloatingPawnMovement>(TEXT("Movement"));
	m_AIState = CreateDefaultSubobject<UAIState>(TEXT("AIState"));

	SetRootComponent(m_Body);

	m_Mesh->SetupAttachment(m_Body);

	m_Movement->SetUpdatedComponent(m_Body);

	m_Body->SetCollisionProfileName(TEXT("AI"));

	m_Mesh->SetCollisionEnabled(ECollisionEnabled::NoCollision);

	AutoPossessAI = EAutoPossessAI::PlacedInWorldOrSpawned;
	AIControllerClass = ADefaultAIController::StaticClass();
}

void AAIPawn::LoadAIData()
{
	m_AIDataTable = LoadObject<UDataTable>(nullptr, TEXT("/Script/Engine.DataTable'/Game/Data/DT_AIData.DT_AIData'"));
}

const FAIDataTable* AAIPawn::FindAIData(const FName& Name)
{
	return m_AIDataTable->FindRow<FAIDataTable>(Name, TEXT(""));
}

void AAIPawn::SetSpawnPoint(AAISpawnPoint* SpawnPoint)
{
	m_SpawnPoint = SpawnPoint;
}

void AAIPawn::OnConstruction(const FTransform& Transform)
{
	Super::OnConstruction(Transform);

	// AIDataTable 애셋을 불러오지 않았을 경우 애셋을 불러온다.
	if (!IsValid(m_AIDataTable))
	{
		LoadAIData();
	}

	if (IsValid(m_AIDataTable))
	{
		LOG(TEXT("AIDataTable Valid"));

		const FAIDataTable* Data = FindAIData(m_Name);

		m_AIState->SetInfo(m_Name.ToString(), Data);

		m_Movement->MaxSpeed = Data->MoveSpeed;
	}


	//LOG(TEXT("OnConstruction : %s"), *mName.ToString());

	if (IsValid(GetWorld()->GetGameInstance()))
	{
		LOG(TEXT("GameInstance On"));
	}

	else
	{
		LOG(TEXT("GameInstance Off"));
	}

	if (IsValid(GetWorld()->GetAuthGameMode()))
	{
		LOG(TEXT("GameMode On"));
	}

	else
	{
		LOG(TEXT("GameMode Off"));
	}
}

// Called when the game starts or when spawned
void AAIPawn::BeginPlay()
{
	Super::BeginPlay();

	m_Anim = Cast<UDefaultAIAnimInstance>(m_Mesh->GetAnimInstance());
}

void AAIPawn::EndPlay(const EEndPlayReason::Type EndPlayReason)
{
	Super::EndPlay(EndPlayReason);
}

float AAIPawn::TakeDamage(float DamageAmount, FDamageEvent const& DamageEvent, AController* EventInstigator, AActor* DamageCauser)
{
	float Damage = Super::TakeDamage(DamageAmount, DamageEvent, EventInstigator, DamageCauser);

	return Damage;
}

// Called every frame
void AAIPawn::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	/*if (!m_Movement->CanEverMoveOnGround())
	{
		FVector GravityVector = FVector(0.0f, 0.0f, -1.0f * m_Movement->GetGravityZ() * -1.f);
		AddActorWorldOffset(GravityVector * DeltaTime);
	}*/
}

void AAIPawn::SetCollisionProfile(const FName& Name)
{
	m_Body->SetCollisionProfileName(Name);
}
