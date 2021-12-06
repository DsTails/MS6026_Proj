// Fill out your copyright notice in the Description page of Project Settings.

#include "NoiseSourcePawn.h"
#include "Perception/AISense_Hearing.h"
#include "Kismet/GameplayStatics.h"


// Sets default values
ANoiseSourcePawn::ANoiseSourcePawn()
{
 	// Set this pawn to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	SceneRoot = CreateDefaultSubobject<USceneComponent>(TEXT("Scene Root"));
	SceneRoot->SetRelativeLocation(FVector(0, 0, 0));
	RootComponent = SceneRoot;

	staticMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Static Mesh"));
	staticMesh->SetRelativeLocation(FVector(0, 0, 0));
	staticMesh->SetupAttachment(RootComponent);

}

// Called when the game starts or when spawned
void ANoiseSourcePawn::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ANoiseSourcePawn::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void ANoiseSourcePawn::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

void ANoiseSourcePawn::playNoise(USoundBase* SoundToPlay, float Volume) {
	if (SoundToPlay) {
		UGameplayStatics::PlaySoundAtLocation(GetWorld(), SoundToPlay, GetActorLocation(), Volume);

		MakeNoise(Volume, this, GetActorLocation());
	}
}

