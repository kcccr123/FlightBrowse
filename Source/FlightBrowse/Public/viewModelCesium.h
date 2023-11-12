// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Delegates/DelegateCombinations.h"
#include "MenuPlayerController.h"
#include "../api/db_to_frontend.h"
#include "../api/sqlite/sqlite3.h"
#include "viewModelCesium.generated.h"


DECLARE_DELEGATE_ThreeParams(FCordsDelegate, float, float, float);
//DECLARE_DELEGATE_ThreeParams(FPlayerCords, int32, int32, int32);
/**
 *
 */
UCLASS()
class UViewModelCesium : public UObject
{
	GENERATED_BODY()
	//call constructor
	UViewModelCesium();

	//Using raw pointer because UnrealEngine has ownership over set playerController.
	AMenuPlayerController* worldInstance;
private:
	sqlite3 * db;
	SQLiteConverter * converter;
public:
	FCordsDelegate viewCords;
	//FPlayerCords playerCords;
	void HandleIntInput(float longitude, float latitude, float altitude);
	void setWorldInstance(AMenuPlayerController* worldPtr);

};
