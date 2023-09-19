// Fill out your copyright notice in the Description page of Project Settings.


#include "BTTask_MoveInteraction.h"
#include "../AIPawn.h"
#include "../DefaultAIAnimInstance.h"
#include "../AIState.h"
#include "../AICharacter.h"

UBTTask_MoveInteraction::UBTTask_MoveInteraction()
{
	NodeName = TEXT("MoveInteraction");

	bNotifyTick = true;

	bNotifyTaskFinished = true;
}

EBTNodeResult::Type UBTTask_MoveInteraction::ExecuteTask(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory)
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

		UAIBlueprintHelperLibrary::SimpleMoveToActor(Controller, Target);

		//LOG(TEXT("%S %S"), AIPawn->GetName(), Controller->GetName());

		AIPawn->GetAIAnimInstance()->ChangeAnim(EAIAnimType::Run);

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

		UAIBlueprintHelperLibrary::SimpleMoveToActor(Controller, Target);

		//LOG(TEXT("%S %S"), AICharacter->GetName(), Controller->GetName());

		AICharacter->GetAIAnimInstance()->ChangeAnim(EAIAnimType::Run);

		return EBTNodeResult::InProgress;
	}

	return EBTNodeResult::Failed;
}

EBTNodeResult::Type UBTTask_MoveInteraction::AbortTask(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory)
{
	Super::AbortTask(OwnerComp, NodeMemory);

	return EBTNodeResult::Type();
}

void UBTTask_MoveInteraction::TickTask(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory, float DeltaSeconds)
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

		FVector Dir = AIPawn->GetMovementComponent()->Velocity;
		Dir.Z = 0.f;

		Dir.Normalize();

		AIPawn->SetActorRotation(FRotator(0.0, Dir.Rotation().Yaw, 0.0));

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

		if (Distance <= AIPawn->GetAIState()->GetAttackDistance())
		{
			FinishLatentTask(OwnerComp, EBTNodeResult::Succeeded);

			Controller->StopMovement();
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

		FVector Dir = AICharacter->GetMovementComponent()->Velocity;
		Dir.Z = 0.f;

		Dir.Normalize();

		AICharacter->SetActorRotation(FRotator(0.0, Dir.Rotation().Yaw, 0.0));

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

		if (Distance <= AICharacter->GetAIState()->GetAttackDistance())
		{
			FinishLatentTask(OwnerComp, EBTNodeResult::Succeeded);

			Controller->StopMovement();
		}
	}
}

void UBTTask_MoveInteraction::OnTaskFinished(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory, EBTNodeResult::Type TaskResult)
{
	Super::TickTask(OwnerComp, NodeMemory, TaskResult);
}
