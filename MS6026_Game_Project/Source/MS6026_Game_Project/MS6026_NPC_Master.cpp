// Fill out your copyright notice in the Description page of Project Settings.


#include "MS6026_NPC_Master.h"

AMS6026_NPC_Master::AMS6026_NPC_Master() {
	
	PawnSensing = CreateDefaultSubobject<UPawnSensingComponent>(TEXT("PawnSensing"));
	BehaviorTree = CreateDefaultSubobject<UBehaviorTree>(TEXT("BehaviorTreeRef"));


}

void AMS6026_NPC_Master::BeginPlay() {
	Super::BeginPlay();
}

void AMS6026_NPC_Master::Tick(float DeltaTime) {
	Super::Tick(DeltaTime);
}