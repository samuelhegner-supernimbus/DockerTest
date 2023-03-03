// Copyright Epic Games, Inc. All Rights Reserved.

#include "DockerTestGameMode.h"
#include "DockerTestCharacter.h"
#include "UObject/ConstructorHelpers.h"

ADockerTestGameMode::ADockerTestGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPersonCPP/Blueprints/ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
