// Fill out your copyright notice in the Description page of Project Settings.


#include "SpawnPoint.h"
#include "AI/AIPawn.h"
#include "AI/AICharacter.h"

// Sets default values
ASpawnPoint::ASpawnPoint()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	m_Root = CreateDefaultSubobject<USceneComponent>(TEXT("Root"));

	SetRootComponent(m_Root);

	m_Root->bVisualizeComponent = true;

#if WITH_EDITORONLY_DATA

	m_Arrow = CreateDefaultSubobject<UArrowComponent>(TEXT("Arrow"));

	m_Arrow->SetupAttachment(m_Root);

#endif

	m_SpawnTime = 1.f;
	m_Time = 0.f;
}

void ASpawnPoint::ClearObject()
{
}

void ASpawnPoint::SpawnObject()
{
	FActorSpawnParameters ActorParam;
	ActorParam.SpawnCollisionHandlingOverride = ESpawnActorCollisionHandlingMethod::AdjustIfPossibleButAlwaysSpawn;

	TObjectPtr<AAICharacter> DefaultObj = Cast<AAICharacter>(m_SpawnClass->GetDefaultObject());

	float HalfHeight = 0.f;

	if (IsValid(DefaultObj))
	{
		HalfHeight = DefaultObj->GetHalfHeight();
	}

	m_SpawnObject = GetWorld()->SpawnActor<AAICharacter>(m_SpawnClass, GetActorLocation() + FVector(0.0, 0.0, (double)HalfHeight), GetActorRotation(), ActorParam);
}

// Called when the game starts or when spawned
void ASpawnPoint::BeginPlay()
{
	Super::BeginPlay();
	
	if (IsValid(m_SpawnClass))
	{
		SpawnObject();
	}
}

// Called every frame
void ASpawnPoint::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}