// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PlayerInput.h"
#include "SimplyPlayerInput.generated.h"

UCLASS()
class SIMPLYSETTINGS_API USimplyPlayerInput : public UPlayerInput
{
	GENERATED_BODY()

public:
	virtual void PostInitProperties() override;
	
	/** Clear the current cached  key maps and rebuild from the source arrays. */
	virtual void ForceRebuildingSimplySettingsKeyMaps(const bool bRestoreDefaults = false);
};
