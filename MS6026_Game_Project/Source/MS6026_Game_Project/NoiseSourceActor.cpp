// Fill out your copyright notice in the Description page of Project Settings.

#include "NoiseSourceActor.h"
#include "Perception/AISense_Hearing.h"
#include "Kismet/GameplayStatics.h"



// Sets default values
ANoiseSourceActor::ANoiseSourceActor()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ANoiseSourceActor::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ANoiseSourceActor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void ANoiseSourceActor::playNoise(USoundBase* SoundToPlay, float Volume) {
	if (SoundToPlay) {
		UGameplayStatics::PlaySoundAtLocation(GetWorld(), SoundToPlay, GetActorLocation(), Volume);

		
	}
}


