// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "AIController.h"
#include "Perception/AIPerceptionComponent.h"
#include "BehaviorTree/BehaviorTree.h"
#include "BehaviorTree/BehaviorTreeComponent.h"
#include "BehaviorTree/BlackboardComponent.h"
#include "NPC_Controller.generated.h"

/**
 * 
 */
UCLASS()
class MS6026_GAME_PROJECT_API ANPC_Controller : public AAIController
{
	GENERATED_BODY()

public:
	ANPC_Controller(const FObjectInitializer& ObjectInitializer);

	virtual void OnPossess(APawn* InPawn) override;

	virtual void BeginPlay();

	UFUNCTION()
		void OnPerception(AActor* Actor, FAIStimulus Stimulus);

	class AMS6026_NPC_Master* Agent;
protected:
	UBehaviorTreeComponent* BehaviorTreeComp;

	UBlackboardComponent* BlackboardComponent;

	UPROPERTY(EditDefaultsOnly)
		FName TargetKey = "SensedTarget";

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		class UAIPerceptionComponent* AIPercept;

public:
	
	void setSensedTargetPawn(APawn* NewTargetPawn);
protected:


};
