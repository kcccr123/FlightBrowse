// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "FlightBrowseGameModeBase.generated.h"

/**
 *
 */
UCLASS()
class AFlightBrowserGameModeBase : public AGameModeBase
{
	GENERATED_BODY()
	virtual void StartPlay() override;
	void InitGameState() override;
	//APlaneActor* plane;

};

