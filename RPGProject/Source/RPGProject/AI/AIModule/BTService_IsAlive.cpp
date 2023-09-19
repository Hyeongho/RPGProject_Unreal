// Fill out your copyright notice in the Description page of Project Settings.


#include "BTService_IsAlive.h"
#include "../DefaultAIController.h"
#include "../AIPawn.h"
#include "../AIState.h"
#include "../AICharacter.h"

UBTService_IsAlive::UBTService_IsAlive()
{
	NodeName = TEXT("IsAlive");
	Interval = 0.5f;
	RandomDeviation = 0.1f;
}

void UBTService_IsAlive::TickNode(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory, float DeltaSeconds)
{
	Super::TickNode(OwnerComp, NodeMemory, DeltaSeconds);

	AAIController* Controller = OwnerComp.GetAIOwner();

	if (AAIPawn* AIPawn = Cast<AAIPawn>(Controller->GetPawn()))
	{
		Controller->GetBlackboardComponent()->SetValueAsInt(TEXT("HP"), 5);
	}

	else if (AAICharacter* AICharacter = Cast<AAICharacter>(Controller->GetPawn()))
	{
		Controller->GetBlackboardComponent()->SetValueAsInt(TEXT("HP"), 5);
	}

	else
	{
		return;
	}
}
