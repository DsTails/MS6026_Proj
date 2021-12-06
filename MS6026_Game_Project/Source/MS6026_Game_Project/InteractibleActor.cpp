// Fill out your copyright notice in the Description page of Project Settings.


#include "InteractibleActor.h"
#include "Components/SceneComponent.h"

// Sets default values
AInteractibleActor::AInteractibleActor()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	sceneRoot = CreateDefaultSubobject<USceneComponent>(TEXT("SceneRootComponent"));
	sceneRoot->SetRelativeLocation(FVector(0, 0, 0));
	RootComponent = sceneRoot;

	Interactible = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("InteractibleObjectMesh"));
	Interactible->SetRelativeLocation(FVector(0, 0, 0));
	Interactible->SetupAttachment(RootComponent);


}

// Called when the game starts or when spawned
void AInteractibleActor::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AInteractibleActor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

