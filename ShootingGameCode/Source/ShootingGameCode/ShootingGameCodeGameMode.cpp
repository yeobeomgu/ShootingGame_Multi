// Copyright Epic Games, Inc. All Rights Reserved.

#include "ShootingGameCodeGameMode.h"
#include "ShootingGameCodeCharacter.h"
#include "UObject/ConstructorHelpers.h"

AShootingGameCodeGameMode::AShootingGameCodeGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
