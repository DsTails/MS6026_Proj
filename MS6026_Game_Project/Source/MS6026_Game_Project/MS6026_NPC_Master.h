// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "MS6026_Character_Master.h"
#include "Perception/PawnSensingComponent.h"
#include "Perception/AIPerceptionComponent.h"
#include "BehaviorTree/BehaviorTree.h"
#include "MS6026_NPC_Master.generated.h"

/**
 * 
 */

UENUM()
enum NPC_Type {
	Standing UMETA(DisplayName = "Standing"),
	Walking UMETA(DisplayName = "Walking")
};

UENUM()
enum NPC_Reaction {
	Run_Away UMETA(DisplayName = "Run Away"),
	Run_Towards UMETA(DisplayName = "Run Towards"),
	Stand_Point UMETA(DisplayName = "Stand and Point")
};

UCLASS()
class MS6026_GAME_PROJECT_API AMS6026_NPC_Master : public AMS6026_Character_Master
{
	GENERATED_BODY()
		
public:
	AMS6026_NPC_Master();

	UPROPERTY(VisibleAnywhere)
		class UPawnSensingComponent* PawnSensing;

	UPROPERTY(EditDefaultsOnly)
		UBehaviorTree* BehaviorTree;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		TEnumAsByte<NPC_Type> NPC_Typing;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		bool isPlayerHeard;

	

protected:
	virtual void BeginPlay() override;
public:
	virtual void Tick(float DeltaTime) override;
protected:
};


