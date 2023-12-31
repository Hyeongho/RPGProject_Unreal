// Fill out your copyright notice in the Description page of Project Settings.


#include "DefaultEffect.h"

// Sets default values
ADefaultEffect::ADefaultEffect()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	m_Particle = CreateDefaultSubobject<UParticleSystemComponent>(TEXT("Particle"));

	SetRootComponent(m_Particle);
}

// Called when the game starts or when spawned
void ADefaultEffect::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ADefaultEffect::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void ADefaultEffect::SetParticleAsset(const FString& Path)
{
	UParticleSystem* Particle = LoadObject<UParticleSystem>(nullptr, *Path);

	if (IsValid(Particle))
	{
		m_Particle->SetTemplate(Particle);
		m_Particle->OnSystemFinished.AddDynamic(this, &ADefaultEffect::ParticleFinish);
	}
}

void ADefaultEffect::ParticleFinish(UParticleSystemComponent* System)
{
	Destroy();
}

