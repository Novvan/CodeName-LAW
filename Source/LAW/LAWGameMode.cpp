// Copyright Epic Games, Inc. All Rights Reserved.

#include "LAWGameMode.h"
#include "LAWCharacter.h"
#include "UObject/ConstructorHelpers.h"

ALAWGameMode::ALAWGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
