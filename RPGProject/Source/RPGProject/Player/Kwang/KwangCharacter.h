// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "../PlayerCharacter.h"
#include "KwangCharacter.generated.h"

/**
 * 
 */
UCLASS()
class RPGPROJECT_API AKwangCharacter : public APlayerCharacter
{
	GENERATED_BODY()

public:
	AKwangCharacter();
	~AKwangCharacter();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

private:
	void AttackKey();
	
public:
	virtual void Attack();
};
