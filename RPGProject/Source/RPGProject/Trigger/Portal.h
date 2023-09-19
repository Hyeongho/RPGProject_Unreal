// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "Trigger.h"
#include "Portal.generated.h"

/**
 * 
 */
UCLASS()
class RPGPROJECT_API APortal : public ATrigger
{
	GENERATED_BODY()
	
public:
	APortal();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;
};
