// Fill out your copyright notice in the Description page of Project Settings.


#include "BTDecorator_CheckTargetDistance.h"
#include "../DefaultAIController.h"
#include "../AIPawn.h"
#include "../AIState.h"
#include "../AICharacter.h"

UBTDecorator_CheckTargetDistance::UBTDecorator_CheckTargetDistance()
{
    NodeName = TEXT("CheckTargetDistance");

    m_CheckType = ECheckDistanceType::Interaction;
}

bool UBTDecorator_CheckTargetDistance::CalculateRawConditionValue(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory) const
{
	Super::CalculateRawConditionValue(OwnerComp, NodeMemory);

	AAIController* Controller = OwnerComp.GetAIOwner();

	if (AAIPawn* AIPawn = Cast<AAIPawn>(Controller->GetPawn()))
	{
		// AIPawn이 아닐 경우 정지.
		if (!IsValid(AIPawn))
		{
			return false;
		}

		float TypeDistance = 0.f;

		switch (m_CheckType)
		{
		case ECheckDistanceType::Attack:
			TypeDistance = AIPawn->GetAIState()->GetAttackDistance();
			break;
		case ECheckDistanceType::Interaction:
			TypeDistance = AIPawn->GetAIState()->GetInteractionDistance();
			break;
		}

		AActor* Target = Cast<AActor>(Controller->GetBlackboardComponent()->GetValueAsObject(TEXT("Target")));

		if (!IsValid(Target))
		{
			return false;
		}

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

		//LOG(TEXT("CheckDist : %.5f Dist : %.5f"), TypeDistance, Distance);

		return Distance <= TypeDistance;
	}

	else if (AAICharacter* AICharacter = Cast<AAICharacter>(Controller->GetPawn()))
	{
		// AICharacter이 아닐 경우 정지.
		if (!IsValid(AICharacter))
		{
			return false;
		}

		float TypeDistance = 0.f;

		switch (m_CheckType)
		{
		case ECheckDistanceType::Attack:
			TypeDistance = AICharacter->GetAIState()->GetAttackDistance();
			break;
		case ECheckDistanceType::Interaction:
			TypeDistance = AICharacter->GetAIState()->GetInteractionDistance();
			break;
		}

		AActor* Target = Cast<AActor>(Controller->GetBlackboardComponent()->GetValueAsObject(TEXT("Target")));

		if (!IsValid(Target))
		{
			return false;
		}

		FVector	AILoc = AICharacter->GetActorLocation();
		FVector	TargetLoc = Target->GetActorLocation();

		AILoc.Z -= AICharacter->GetHalfHeight();
		TargetLoc.Z -= AICharacter->GetHalfHeight();

		float Distance = FVector::Distance(AILoc, TargetLoc);

		// 거리에서 각 물체들의 캡슐 반경을 빼준다.
		Distance -= AICharacter->GetCapsuleRadius();

		// Target의 RootComponent를 얻어와서 Capsule인지 확인한다.
		UCapsuleComponent* Capsule = Cast<UCapsuleComponent>(Target->GetRootComponent());

		if (IsValid(Capsule))
		{
			Distance -= Capsule->GetScaledCapsuleRadius();
		}

		//LOG(TEXT("CheckDist : %.5f Dist : %.5f"), TypeDistance, Distance);

		return Distance <= TypeDistance;
	}

	else
	{
		return false;
	}
}
