// Fill out your copyright notice in the Description page of Project Settings.


#include "Level1GameModeBase.h"
#include "AI/AICharacter.h"
#include "Player/Yin/YinCharacter.h"
#include "Player/Kwang/KwangCharacter.h"
#include "Player/Gideon/GideonCharacter.h"
#include "UI/Level1Widget.h"

ALevel1GameModeBase::ALevel1GameModeBase()
{
	PrimaryActorTick.bCanEverTick = true;

	DefaultPawnClass = AKwangCharacter::StaticClass();

	static ConstructorHelpers::FClassFinder<UUserWidget> Level1UIClass(TEXT("/Script/UMGEditor.WidgetBlueprint'/Game/UI/UI_Level1.UI_Level1_C'"));

	if (Level1UIClass.Succeeded())
	{
		m_Level1UIClass = Level1UIClass.Class;
	}

	m_Count = 0; 
}

ALevel1GameModeBase::~ALevel1GameModeBase()
{
}

void ALevel1GameModeBase::InitGame(const FString& MapName, const FString& Options, FString& ErrorMessage)
{
	Super::InitGame(MapName, Options, ErrorMessage);
}

void ALevel1GameModeBase::InitGameState()
{
	Super::InitGameState();
}

void ALevel1GameModeBase::BeginPlay()
{
	Super::BeginPlay();

	if (IsValid(m_Level1UIClass))
	{
		m_Level1Widget = CreateWidget<ULevel1Widget>(GetWorld(), m_Level1UIClass);

		if (IsValid(m_Level1Widget))
		{
			m_Level1Widget->AddToViewport();

			UGameplayStatics::GetAllActorsOfClass(GetWorld(), AActor::StaticClass(), m_AIActor);

			for (auto Actor : m_AIActor)
			{
				AAICharacter* AICharacters = Cast<AAICharacter>(Actor);

				if (AICharacters)
				{
					m_AICharacter.Add(AICharacters);
				}
			}

			m_Level1Widget->SetCurrentMonster(m_Count);
			m_Level1Widget->SetTotalMonster(m_AICharacter.Num());

			m_Level1Widget->SetMonsterText();
		}
	}
}

void ALevel1GameModeBase::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	int count = 0;

	for (auto AICharacter : m_AICharacter)
	{
		if (AICharacter->IsDeath())
		{
			LOG(TEXT("Count"));

			count++;
		}
	}

	m_Level1Widget->SetCurrentMonster(count);
	m_Level1Widget->SetMonsterText();
}
