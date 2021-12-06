// Copyright Epic Games, Inc. All Rights Reserved.

#include "MS6026_Game_ProjectGameMode.h"
#include "MS6026_Game_ProjectCharacter.h"
#include "UObject/ConstructorHelpers.h"

AMS6026_Game_ProjectGameMode::AMS6026_Game_ProjectGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPersonCPP/Blueprints/ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
