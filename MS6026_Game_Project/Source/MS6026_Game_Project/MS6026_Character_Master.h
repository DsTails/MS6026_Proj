// Fill out your copyright notice in the Description page of Project Settings.

#pragma once


#include "CoreMinimal.h"

#include "GameFramework/Character.h"
#include "MS6026_Character_Master.generated.h"

UCLASS()
class MS6026_GAME_PROJECT_API AMS6026_Character_Master : public ACharacter
{
	GENERATED_BODY()

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Camera, meta = (AllowPrivateAccess = true))
	class USpringArmComponent* CameraBoom;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Camera, meta = (AllowPrivateAccess = true))
	class UCameraComponent* FollowCamera;

public:
	// Sets default values for this character's properties
	AMS6026_Character_Master();

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Camera)
		float BaseTurnRate;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Camera)
		float BaseLookUpRate;

	

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	

	void MoveForward(float value);

	void MoveRight(float value);

	void TurnAtRate(float rate);

	void LookUpAtRate(float rate);



public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	FORCEINLINE class USpringArmComponent* GetCameraBoom() const { return CameraBoom; }
	FORCEINLINE class UCameraComponent* GetFollowCamera() const { return FollowCamera; }

protected:
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

};
