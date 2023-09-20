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
	UPROPERTY(Category = Mesh, VisibleAnywhere, BlueprintReadOnly, meta = (AllowPrivateAccess = "true"))
	TObjectPtr<UStaticMesh> m_Ragdoll;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	// ������ ��ü�� ���ŵɶ� ȣ��ȴ�.
	virtual void EndPlay(const EEndPlayReason::Type EndPlayReason);

public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;

public:
	virtual void Death();
};
