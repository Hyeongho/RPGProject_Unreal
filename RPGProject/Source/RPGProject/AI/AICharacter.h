// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "../GameInfo.h"
#include "GameFramework/Character.h"
#include "AICharacter.generated.h"

UCLASS()
class RPGPROJECT_API AAICharacter : public ACharacter
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	AAICharacter();

protected:
	static TObjectPtr<UDataTable> m_AIDataTable;

public:
	static void LoadAIData();

protected:
	static const FAIDataTable* FindAIData(const FName& Name);

protected:
	UPROPERTY(Category = Component, VisibleAnywhere, BlueprintReadOnly, meta = (AllowPrivateAccess = "true"))
	TObjectPtr<USkeletalMeshComponent> m_Mesh;

	UPROPERTY(Category = Component, VisibleAnywhere, BlueprintReadOnly, meta = (AllowPrivateAccess = "true"))
	TObjectPtr<class UAIState> m_AIState;

	UPROPERTY(Category = Component, VisibleAnywhere, BlueprintReadOnly, meta = (AllowPrivateAccess = "true"))
	FName m_Name;

	TObjectPtr<class UDefaultAIAnimInstance> m_Anim;

	// 생성된 스폰포인트를 알고 있게 해준다.
	// 스폰포인트를 이용해서 생성한 객체가 아닐 경우 None이 들어가있다.
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

public:
	const TObjectPtr<class UAIState>& GetAIState()	const
	{
		return m_AIState;
	}

	const TObjectPtr<class UDefaultAIAnimInstance>& GetAIAnimInstance()	const
	{
		return m_Anim;
	}

	float GetHalfHeight() const
	{
		return GetCapsuleComponent()->GetScaledCapsuleHalfHeight();
	}

	float GetCapsuleRadius() const
	{
		return GetCapsuleComponent()->GetScaledCapsuleRadius();
	}

	void SetSpawnPoint(class AAISpawnPoint* SpawnPoint);

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	virtual void OnConstruction(const FTransform& Transform);
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

public:
	virtual float TakeDamage(float DamageAmount, struct FDamageEvent const& DamageEvent, class AController* EventInstigator, AActor* DamageCauser);

public:
	void SetCollisionProfile(const FName& Name);
};
