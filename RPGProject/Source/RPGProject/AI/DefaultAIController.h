// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "../GameInfo.h"
#include "AIController.h"
#include "DefaultAIController.generated.h"

/**
 * 
 */
UCLASS()
class RPGPROJECT_API ADefaultAIController : public AAIController
{
	GENERATED_BODY()
	
public:
	ADefaultAIController();

private:
	UPROPERTY(Category = AI, EditAnywhere, BlueprintReadOnly, meta = (AllowPrivateAccess = "true"))
	TObjectPtr<UBehaviorTree> m_AITree;

	UPROPERTY(Category = AI, EditAnywhere, BlueprintReadOnly, meta = (AllowPrivateAccess = "true"))
	TObjectPtr<UBlackboardData> m_AIBlackboard;

protected:
	virtual void OnPossess(APawn* InPawn) override;
	virtual void OnUnPossess() override;
};
