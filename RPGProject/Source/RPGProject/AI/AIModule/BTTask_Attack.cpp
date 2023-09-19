// Fill out your copyright notice in the Description page of Project Settings.


#include "BTTask_Attack.h"
#include "../AIPawn.h"
#include "../DefaultAIAnimInstance.h"
#include "../AIState.h"
#include "../AICharacter.h"

UBTTask_Attack::UBTTask_Attack()
{
	NodeName = TEXT("Attack");

	bNotifyTick = true;

	bNotifyTaskFinished = true;
}

EBTNodeResult::Type UBTTask_Attack::ExecuteTask(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory)
{
	Super::ExecuteTask(OwnerComp, NodeMemory);

	AAIController* Controller = OwnerComp.GetAIOwner();

	if (AAIPawn* AIPawn = Cast<AAIPawn>(Controller->GetPawn()))
	{
		if (!IsValid(AIPawn))
		{
			return EBTNodeResult::Failed;
		}

		AActor* Target = Cast<AActor>(Controller->GetBlackboardComponent()->GetValueAsObject(TEXT("Target")));

		if (!IsValid(Target))
		{
			Controller->StopMovement();

			AIPawn->GetAIAnimInstance()->ChangeAnim(EAIAnimType::Idle);

			LOG(TEXT("Idle"));

			return EBTNodeResult::Failed;
		}

		AIPawn->GetAIAnimInstance()->ChangeAnim(EAIAnimType::Attack);

		AIPawn->GetAIAnimInstance()->Attack();

		return EBTNodeResult::InProgress;
	}

	else if (AAICharacter* AICharacter = Cast<AAICharacter>(Controller->GetPawn()))
	{
		if (!IsValid(AICharacter))
		{
			return EBTNodeResult::Failed;
		}

		AActor* Target = Cast<AActor>(Controller->GetBlackboardComponent()->GetValueAsObject(TEXT("Target")));

		if (!IsValid(Target))
		{
			Controller->StopMovement();

			AICharacter->GetAIAnimInstance()->ChangeAnim(EAIAnimType::Idle);

			LOG(TEXT("Idle"));

			return EBTNodeResult::Failed;
		}

		AICharacter->GetAIAnimInstance()->ChangeAnim(EAIAnimType::Attack);

		AICharacter->GetAIAnimInstance()->Attack();

		return EBTNodeResult::InProgress;
	}

	return EBTNodeResult::Failed;
}

EBTNodeResult::Type UBTTask_Attack::AbortTask(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory)
{
	Super::AbortTask(OwnerComp, NodeMemory);

	return EBTNodeResult::Type();
}

void UBTTask_Attack::TickTask(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory, float DeltaSeconds)
{
	Super::TickTask(OwnerComp, NodeMemory, DeltaSeconds);

	AAIController* Controller = OwnerComp.GetAIOwner();

	if (AAIPawn* AIPawn = Cast<AAIPawn>(Controller->GetPawn()))
	{
		if (!IsValid(AIPawn))
		{
			FinishLatentTask(OwnerComp, EBTNodeResult::Failed);

			Controller->StopMovement();

			AIPawn->GetAIAnimInstance()->ChangeAnim(EAIAnimType::Idle);

			LOG(TEXT("Idle"));

			return;
		}

		AActor* Target = Cast<AActor>(Controller->GetBlackboardComponent()->GetValueAsObject(TEXT("Target")));

		if (!IsValid(Target))
		{
			FinishLatentTask(OwnerComp, EBTNodeResult::Failed);

			Controller->StopMovement();

			AIPawn->GetAIAnimInstance()->ChangeAnim(EAIAnimType::Idle);

			LOG(TEXT("Idle"));

			return;
		}

		if (AIPawn->GetAttackEnd())
		{
			FVector	AILoc = AIPawn->GetActorLocation();
			FVector	TargetLoc = Target->GetActorLocation();

			AILoc.Z -= AIPawn->GetHalfHeight();
			TargetLoc.Z -= AIPawn->GetHalfHeight();

			float Distance = FVector::Distance(AILoc, TargetLoc);

			Distance -= AIPawn->GetCapsuleRadius();

			UCapsuleComponent* Capsule = Cast<UCapsuleComponent>(Target->GetRootComponent());

			if (IsValid(Capsule))
			{
				Distance -= Capsule->GetScaledCapsuleRadius();
			}

			if (Distance > AIPawn->GetAIState()->GetAttackDistance())
			{
				AIPawn->GetAIAnimInstance()->SetAttackIndex(0);

				FinishLatentTask(OwnerComp, EBTNodeResult::Failed);
			}

			else
			{
				FVector Dir = TargetLoc - AILoc;
				Dir.Z = 0.0;

				Dir.Normalize();

				AIPawn->SetActorRotation(FRotator(0.0, Dir.Rotation().Yaw, 0.0));

				AIPawn->GetAIAnimInstance()->Attack();
			}

			AIPawn->SetAttackEnd(false);
		}
	}

	else if (AAICharacter* AICharacter = Cast<AAICharacter>(Controller->GetPawn()))
	{
		if (!IsValid(AICharacter))
		{
			FinishLatentTask(OwnerComp, EBTNodeResult::Failed);

			Controller->StopMovement();

			AICharacter->GetAIAnimInstance()->ChangeAnim(EAIAnimType::Idle);

			LOG(TEXT("Idle"));

			return;
		}

		AActor* Target = Cast<AActor>(Controller->GetBlackboardComponent()->GetValueAsObject(TEXT("Target")));

		if (!IsValid(Target))
		{
			FinishLatentTask(OwnerComp, EBTNodeResult::Failed);

			Controller->StopMovement();

			AICharacter->GetAIAnimInstance()->ChangeAnim(EAIAnimType::Idle);

			LOG(TEXT("Idle"));

			return;
		}

		if (AICharacter->GetAttackEnd())
		{
			FVector	AILoc = AICharacter->GetActorLocation();
			FVector	TargetLoc = Target->GetActorLocation();

			AILoc.Z -= AICharacter->GetHalfHeight();
			TargetLoc.Z -= AICharacter->GetHalfHeight();

			float Distance = FVector::Distance(AILoc, TargetLoc);

			Distance -= AICharacter->GetCapsuleRadius();

			UCapsuleComponent* Capsule = Cast<UCapsuleComponent>(Target->GetRootComponent());

			if (IsValid(Capsule))
			{
				Distance -= Capsule->GetScaledCapsuleRadius();
			}

			if (Distance > AICharacter->GetAIState()->GetAttackDistance())
			{
				AICharacter->GetAIAnimInstance()->SetAttackIndex(0);

				FinishLatentTask(OwnerComp, EBTNodeResult::Failed);
			}

			else
			{
				FVector Dir = TargetLoc - AILoc;
				Dir.Z = 0.0;

				Dir.Normalize();

				AICharacter->SetActorRotation(FRotator(0.0, Dir.Rotation().Yaw, 0.0));

				AICharacter->GetAIAnimInstance()->Attack();
			}

			AICharacter->SetAttackEnd(false);
		}
	}
}

void UBTTask_Attack::OnTaskFinished(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory, EBTNodeResult::Type TaskResult)
{
	Super::TickTask(OwnerComp, NodeMemory, TaskResult);
}
