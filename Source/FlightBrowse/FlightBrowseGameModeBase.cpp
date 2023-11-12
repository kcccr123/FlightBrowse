// Copyright Epic Games, Inc. All Rights Reserved.


#include "FlightBrowseGameModeBase.h"
#include "MyHUD.h"
#include "MenuPlayerController.h"
#include "SSSlateUI.h"
#include "CesiumGeoreference.h"
#include "MyGlobeAwareDefaultPawn.h"
#include "viewModelCesium.h"
#include "Engine/Engine.h"

void AFlightBrowseGameModeBase::StartPlay()
{
    Super::StartPlay();
    check(GEngine != nullptr);
    GEngine->AddOnScreenDebugMessage(-1, 5.0f, FColor::Yellow, TEXT("Running"));
    UE_LOG(LogTemp, Log, TEXT("GameMode Runs"));
}

void AFlightBrowseGameModeBase::InitGameState()
{
    Super::InitGameState();
    //ViewModelInstance = MakeShared<UViewModelCesium>();
    UE_LOG(LogTemp, Log, TEXT("GameMode Runs"));
    DefaultPawnClass = AMyGlobeAwareDefaultPawn::StaticClass();
    PlayerControllerClass = AMenuPlayerController::StaticClass();
    HUDClass = AMyHUD::StaticClass();

}
