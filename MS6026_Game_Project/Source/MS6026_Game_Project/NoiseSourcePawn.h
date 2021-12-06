// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Pawn.h"
#include "NoiseSourcePawn.generated.h"

UCLASS()
class MS6026_GAME_PROJECT_API ANoiseSourcePawn : public APawn
{
	GENERATED_BODY()

public:
	// Sets default values for this pawn's properties
	ANoiseSourcePawn();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	UFUNCTION(BlueprintCallable, Category = "Noise Functions")
	void playNoise(USoundBase* SoundToPlay, float Volume);

	UPROPERTY(EditAnywhere, Category = "Components")
		class UStaticMeshComponent* staticMesh;
	UPROPERTY(EditAnywhere, Category = "Components")
		class USceneComponent* SceneRoot;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

};
