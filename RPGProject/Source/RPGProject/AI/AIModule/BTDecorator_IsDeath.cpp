// Fill out your copyright notice in the Description page of Project Settings.


#include "BTDecorator_IsDeath.h"
#include "../DefaultAIController.h"
#include "../AIPawn.h"
#include "../AIState.h"
#include "../AICharacter.h"

UBTDecorator_IsDeath::UBTDecorator_IsDeath()
{
}

bool UBTDecorator_IsDeath::CalculateRawConditionValue(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory) const
{
	Super::CalculateRawConditionValue(OwnerComp, NodeMemory);

	AAIController* Controller = OwnerComp.GetAIOwner();

	AAICharacter* Actor = Cast<AAICharacter>(Controller->GetPawn());

	int HP = Actor->GetAIState()->GetHP();

	if (HP <= 0)
	{
		return true;
	}

	return false;
}
