// Fill out your copyright notice in the Description page of Project Settings.


#include "SimplyPlayerInput.h"
#include "SimplyConfigSettings.h"

void USimplyPlayerInput::PostInitProperties()
{
	UObject::PostInitProperties();
	ForceRebuildingSimplySettingsKeyMaps(true);
}

void USimplyPlayerInput::ForceRebuildingSimplySettingsKeyMaps(const bool bRestoreDefaults)
{
	if (bRestoreDefaults)
	{
		const USimplyConfigSettings* SimplySettings = GetDefault<USimplyConfigSettings>();
		if (SimplySettings)
		{
			AxisMappings = SimplySettings->GetAxisMappings();
			ActionMappings = SimplySettings->GetActionMappings();
		}
	}
	ForceRebuildingKeyMaps(false);
}
