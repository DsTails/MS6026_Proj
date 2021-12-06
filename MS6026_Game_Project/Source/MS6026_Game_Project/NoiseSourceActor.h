// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "NoiseSourceActor.generated.h"

UCLASS()
class MS6026_GAME_PROJECT_API ANoiseSourceActor : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ANoiseSourceActor();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	UFUNCTION(BlueprintCallable, Category = "Noise Functions")
	void playNoise(USoundBase* SoundToPlay, float Volume);



public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
