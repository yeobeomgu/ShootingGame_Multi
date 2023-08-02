// Copyright Epic Games, Inc. All Rights Reserved.

#include "HelloUnrealCodeGameMode.h"
#include "HelloUnrealCodeCharacter.h"
#include "UObject/ConstructorHelpers.h"

AHelloUnrealCodeGameMode::AHelloUnrealCodeGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
