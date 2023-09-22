// Fill out your copyright notice in the Description page of Project Settings.


#include "BTService_TargetDetect.h"
#include "AIController.h"
#include "../AIPawn.h"
#include "../AICharacter.h"
#include "../AIState.h"


UBTService_TargetDetect::UBTService_TargetDetect()
{
	NodeName = TEXT("TargetDetect");
	Interval = 0.5f;
	RandomDeviation = 0.1f;
}

void UBTService_TargetDetect::TickNode(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory, float DeltaSeconds)
{
	Super::TickNode(OwnerComp, NodeMemory, DeltaSeconds);

	AAIController* Controller = OwnerComp.GetAIOwner();

	if (AAIPawn* AIPawn = Cast<AAIPawn>(Controller->GetPawn()))
	{
		if (!IsValid(AIPawn))
		{
			return;
		}

		FVector	AILoc = AIPawn->GetActorLocation();

		AILoc.Z -= AIPawn->GetHalfHeight();

		FHitResult result;

		FCollisionQueryParams param(NAME_None, false, AIPawn);

		bool Collision = GetWorld()->SweepSingleByChannel(result, AILoc, AILoc, FQuat::Identity, ECollisionChannel::ECC_GameTraceChannel5, FCollisionShape::MakeSphere(AIPawn->GetAIState()->GetInteractionDistance()), param);

#if ENABLE_DRAW_DEBUG

		FColor DrawColor = Collision ? FColor::Red : FColor::Green;

		DrawDebugSphere(GetWorld(), AILoc, AIPawn->GetAIState()->GetInteractionDistance(), 20, DrawColor, false, 0.35f);

#endif

		if (Collision)
		{
			Controller->GetBlackboardComponent()->SetValueAsObject(TEXT("Target"), result.GetActor());
		}

		else
		{
			Controller->GetBlackboardComponent()->SetValueAsObject(TEXT("Target"), nullptr);
		}
	}

	else if (AAICharacter* AICharacter = Cast<AAICharacter>(Controller->GetPawn()))
	{
		if (!IsValid(AICharacter))
		{
			return;
		}

		FVector	AILoc = AICharacter->GetActorLocation();

		AILoc.Z -= AICharacter->GetHalfHeight();

		FHitResult result;

		FCollisionQueryParams param(NAME_None, false, AICharacter);

		bool Collision = GetWorld()->SweepSingleByChannel(result, AILoc, AILoc, FQuat::Identity, ECollisionChannel::ECC_GameTraceChannel5, FCollisionShape::MakeSphere(AICharacter->GetAIState()->GetInteractionDistance()), param);

#if ENABLE_DRAW_DEBUG

		FColor	DrawColor = Collision ? FColor::Red : FColor::Green;

		DrawDebugSphere(GetWorld(), AILoc, AICharacter->GetAIState()->GetInteractionDistance(), 20, DrawColor, false, 0.35f);

#endif

		if (Collision)
		{
			Controller->GetBlackboardComponent()->SetValueAsObject(TEXT("Target"), result.GetActor());
		}

		else
		{
			Controller->GetBlackboardComponent()->SetValueAsObject(TEXT("Target"), nullptr);
		}
	}

	else
	{
		return;
	}
}