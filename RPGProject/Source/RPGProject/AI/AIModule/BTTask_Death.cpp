// Fill out your copyright notice in the Description page of Project Settings.


#include "BTTask_Death.h"
#include "../DefaultAIController.h"
#include "../AIPawn.h"
#include "../DefaultAIAnimInstance.h"
#include "../AIState.h"
#include "../AICharacter.h"

UBTTask_Death::UBTTask_Death()
{
	NodeName = TEXT("Death");

	bNotifyTick = true;

	bNotifyTaskFinished = true;
}

EBTNodeResult::Type UBTTask_Death::ExecuteTask(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory)
{
	Super::ExecuteTask(OwnerComp, NodeMemory);

	AAIController* Controller = OwnerComp.GetAIOwner();

	int32 HP = Controller->GetBlackboardComponent()->GetValueAsInt(TEXT("HP"));

	if (AAIPawn* AIPawn = Cast<AAIPawn>(Controller->GetPawn()))
	{
		if (HP > 0)
		{
			Controller->StopMovement();

			AIPawn->GetAIAnimInstance()->ChangeAnim(EAIAnimType::Idle);

			return EBTNodeResult::Failed;
		}

		AIPawn->GetAIAnimInstance()->ChangeAnim(EAIAnimType::Death);

		AIPawn->GetAIAnimInstance()->Death();
	}

	else if (AAICharacter* AICharacter = Cast<AAICharacter>(Controller->GetPawn()))
	{
		if (HP > 0)
		{
			Controller->StopMovement();

			AICharacter->GetAIAnimInstance()->ChangeAnim(EAIAnimType::Idle);

			return EBTNodeResult::Failed;
		}

		AICharacter->GetAIAnimInstance()->ChangeAnim(EAIAnimType::Death);

		AICharacter->GetAIAnimInstance()->Death();
	}

	return EBTNodeResult::InProgress;
}

EBTNodeResult::Type UBTTask_Death::AbortTask(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory)
{
	Super::AbortTask(OwnerComp, NodeMemory);

	return EBTNodeResult::Type();
}

void UBTTask_Death::TickTask(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory, float DeltaSeconds)
{
	Super::TickTask(OwnerComp, NodeMemory, DeltaSeconds);

	AAIController* Controller = OwnerComp.GetAIOwner();

	int32 HP = Controller->GetBlackboardComponent()->GetValueAsInt(TEXT("HP"));

	if (AAIPawn* AIPawn = Cast<AAIPawn>(Controller->GetPawn()))
	{
		if (HP > 0)
		{
			Controller->StopMovement();

			AIPawn->GetAIAnimInstance()->ChangeAnim(EAIAnimType::Idle);

			return;
		}
	}

	else if (AAICharacter* AICharacter = Cast<AAICharacter>(Controller->GetPawn()))
	{
		if (HP > 0)
		{
			Controller->StopMovement();

			AICharacter->GetAIAnimInstance()->ChangeAnim(EAIAnimType::Idle);

			return;
		}
	}
}

void UBTTask_Death::OnTaskFinished(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory, EBTNodeResult::Type TaskResult)
{
	Super::OnTaskFinished(OwnerComp, NodeMemory, TaskResult);
}
