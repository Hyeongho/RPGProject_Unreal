// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "AICharacter.h"
#include "AIMinionCharacter.generated.h"

/**
 * 
 */
UCLASS()
class RPGPROJECT_API AAIMinionCharacter : public AAICharacter
{
	GENERATED_BODY()
	
public:
	AAIMinionCharacter();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	// 생성한 객체가 제거될때 호출된다.
	virtual void EndPlay(const EEndPlayReason::Type EndPlayReason);

public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;
};
