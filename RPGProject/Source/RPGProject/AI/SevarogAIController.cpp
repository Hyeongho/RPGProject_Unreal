// Fill out your copyright notice in the Description page of Project Settings.


#include "SevarogAIController.h"

ASevarogAIController::ASevarogAIController()
{
	static ConstructorHelpers::FObjectFinder<UBehaviorTree>	AITree(TEXT("/Script/AIModule.BehaviorTree'/Game/AI/BT_SevaorgAI.BT_SevaorgAI'"));

	if (AITree.Succeeded())
	{
		m_AITree = AITree.Object;
	}

	static ConstructorHelpers::FObjectFinder<UBlackboardData> AIBlackboard(TEXT("/Script/AIModule.BlackboardData'/Game/AI/BB_SevarogAI.BB_SevarogAI'"));

	if (AIBlackboard.Succeeded())
	{
		m_AIBlackboard = AIBlackboard.Object;
	}
}

void ASevarogAIController::OnPossess(APawn* InPawn)
{
	Super::OnPossess(InPawn);

	if (IsValid(m_AITree) && IsValid(m_AIBlackboard))
	{
		UBlackboardComponent* BlackboardRef = Blackboard;

		if (UseBlackboard(m_AIBlackboard, BlackboardRef))
		{
			RunBehaviorTree(m_AITree);
		}
	}
}

void ASevarogAIController::OnUnPossess()
{
	Super::OnUnPossess();
}
