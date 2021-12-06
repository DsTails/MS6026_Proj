// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "MS6026_Character_Master.h"
#include "MS6026_Player_Char.generated.h"

/**
 * 
 */
UCLASS()
class MS6026_GAME_PROJECT_API AMS6026_Player_Char : public AMS6026_Character_Master
{
	GENERATED_BODY()
	

public:
	AMS6026_Player_Char();
protected:
	virtual void BeginPlay() override;
public:
	virtual void Tick(float DeltaTime) override;
protected:

};
