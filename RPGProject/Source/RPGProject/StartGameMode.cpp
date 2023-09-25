// Fill out your copyright notice in the Description page of Project Settings.


#include "StartGameMode.h"
#include "UI/StartWidget.h"

AStartGameMode::AStartGameMode()
{
	static ConstructorHelpers::FClassFinder<UUserWidget> StartUIClass(TEXT("/Script/UMGEditor.WidgetBlueprint'/Game/UI/UI_Start.UI_Start_C'"));

	if (StartUIClass.Succeeded())
	{
		m_StartUIClass = StartUIClass.Class;
	}
}

void AStartGameMode::InitGame(const FString& MapName, const FString& Options, FString& ErrorMessage)
{
	Super::InitGame(MapName, Options, ErrorMessage);
}

void AStartGameMode::InitGameState()
{
	Super::InitGameState();
}

void AStartGameMode::PostLogin(APlayerController* NewPlayer)
{
	Super::PostLogin(NewPlayer);
}

void AStartGameMode::BeginPlay()
{
	Super::BeginPlay();

	if (IsValid(m_StartUIClass))
	{
		m_StartWidget = CreateWidget<UStartWidget>(GetWorld(), m_StartUIClass);

		if (IsValid(m_StartWidget))
		{
			m_StartWidget->AddToViewport();
		}
	}
}

void AStartGameMode::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}
