// Fill out your copyright notice in the Description page of Project Settings.


#include "BTService_IsAlive.h"
#include "AIController.h"
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
		Controller->GetBlackboardComponent()->SetValueAsInt(TEXT("HP"), AIPawn->GetAIState()->GetHP());

		//LOG(TEXT("HP : %d"), AIPawn->GetAIState()->GetHP());
	}

	else if (AAICharacter* AICharacter = Cast<AAICharacter>(Controller->GetPawn()))
	{
		Controller->GetBlackboardComponent()->SetValueAsInt(TEXT("HP"), AICharacter->GetAIState()->GetHP());

		//(TEXT("HP : %d"), AICharacter->GetAIState()->GetHP());
	}

	else
	{
		return;
	}
}
