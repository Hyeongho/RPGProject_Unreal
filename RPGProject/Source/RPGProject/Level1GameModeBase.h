// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "GameInfo.h"
#include "GameFramework/GameModeBase.h"
#include "Level1GameModeBase.generated.h"

/**
 * 
 */
UCLASS()
class RPGPROJECT_API ALevel1GameModeBase : public AGameModeBase
{
	GENERATED_BODY()
	
public:
	ALevel1GameModeBase();
	~ALevel1GameModeBase();

private:
	TSubclassOf<UUserWidget> m_Level1UIClass;
	TObjectPtr<class ULevel1Widget> m_Level1Widget;

	TArray<AActor*> m_AIActor;
	TArray<class AAICharacter*> m_AICharacter;

	int32 m_Count;

public:
	virtual void InitGame(const FString& MapName, const FString& Options, FString& ErrorMessage);
	virtual void InitGameState();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;
};
