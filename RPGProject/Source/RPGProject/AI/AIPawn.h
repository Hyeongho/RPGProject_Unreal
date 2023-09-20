// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "../GameInfo.h"
#include "GameFramework/Pawn.h"
#include "AIPawn.generated.h"

UCLASS()
class RPGPROJECT_API AAIPawn : public APawn
{
	GENERATED_BODY()

public:
	// Sets default values for this pawn's properties
	AAIPawn();

protected:
	static TObjectPtr<UDataTable> m_AIDataTable;

public:
	static void LoadAIData();

protected:
	static const FAIDataTable* FindAIData(const FName& Name);

protected:
	UPROPERTY(Category = Component, VisibleAnywhere, BlueprintReadOnly, meta = (AllowPrivateAccess = "true"))
	TObjectPtr<UCapsuleComponent> m_Body;

	UPROPERTY(Category = Component, VisibleAnywhere, BlueprintReadOnly, meta = (AllowPrivateAccess = "true"))
	TObjectPtr<USkeletalMeshComponent> m_Mesh;

	UPROPERTY(Category = Component, EditAnywhere, BlueprintReadOnly, meta = (AllowPrivateAccess = "true"))
	TObjectPtr<UFloatingPawnMovement> m_Movement;

	UPROPERTY(Category = Component, VisibleAnywhere, BlueprintReadOnly, meta = (AllowPrivateAccess = "true"))
	TObjectPtr<class UAIState> m_AIState;

	UPROPERTY(Category = Component, VisibleAnywhere, BlueprintReadOnly, meta = (AllowPrivateAccess = "true"))
	FName m_Name;

	TObjectPtr<class UDefaultAIAnimInstance> m_Anim;

	TObjectPtr<class AAISpawnPoint>	m_SpawnPoint;

	bool m_AttackEnd;

public:
	void SetAttackEnd(bool AttackEnd)
	{
		m_AttackEnd = AttackEnd;
	}

	bool GetAttackEnd() const
	{
		return m_AttackEnd;
	}

	bool IsDeath() const;

public:
	const TObjectPtr<class UAIState>& GetAIState()	const
	{
		return m_AIState;
	}

	const TObjectPtr<class UDefaultAIAnimInstance>& GetAIAnimInstance()	const
	{
		return m_Anim;
	}

	float GetHalfHeight()	const
	{
		return m_Body->GetScaledCapsuleHalfHeight();
	}

	float GetCapsuleRadius()	const
	{
		return m_Body->GetScaledCapsuleRadius();
	}

	void SetSpawnPoint(class AAISpawnPoint* SpawnPoint);

protected:
	virtual void OnConstruction(const FTransform& Transform);
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
	virtual void EndPlay(const EEndPlayReason::Type EndPlayReason);

public:
	virtual float TakeDamage(float DamageAmount, struct FDamageEvent const& DamageEvent, class AController* EventInstigator, AActor* DamageCauser);

	virtual void Death();

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

public:
	void SetCollisionProfile(const FName& Name);

};
