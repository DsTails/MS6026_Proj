// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "GameplaySoundInterface.h"
#include "InteractibleActor.generated.h"

UCLASS()
class MS6026_GAME_PROJECT_API AInteractibleActor : public AActor, public IGameplaySoundInterface
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AInteractibleActor();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	UPROPERTY(EditAnywhere, Category = "Components")
		class UStaticMeshComponent* Interactible;
	UPROPERTY(EditAnywhere, Category = "Components")
		class USceneComponent* sceneRoot;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
