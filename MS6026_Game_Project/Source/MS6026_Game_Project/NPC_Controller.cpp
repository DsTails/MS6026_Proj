// Fill out your copyright notice in the Description page of Project Settings.


#include "NPC_Controller.h"
#include "MS6026_NPC_Master.h"


void ANPC_Controller::BeginPlay() {
	Super::BeginPlay();
	AMS6026_NPC_Master* NPC = Cast<AMS6026_NPC_Master>(GetPawn());
	if (NPC) {
		Agent = NPC;
	}
}

ANPC_Controller::ANPC_Controller(const FObjectInitializer& ObjectInitializer) {
	AIPercept = CreateDefaultSubobject<UAIPerceptionComponent>(TEXT("AIPerceptionComp"));
}

void ANPC_Controller::OnPossess(APawn* InPawn) {
	//Super::OnPossess(InPawn);

	Super::OnPossess(InPawn);

	AIPercept->OnTargetPerceptionUpdated.AddDynamic(this, &ANPC_Controller::OnPerception);
}

void ANPC_Controller::OnPerception(AActor* Actor, FAIStimulus Stimulus) {

}

void ANPC_Controller::setSensedTargetPawn(APawn* NewTargetPawn) {
	if (BlackboardComponent) BlackboardComponent->SetValueAsObject(TargetKey, NewTargetPawn);

	
}