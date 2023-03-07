// Fill out your copyright notice in the Description page of Project Settings.


#include "SimplySettings_KeySelector.h"
#include "SimplyConfigSettings.h"


void USimplySettings_KeySelector::OnWidgetRebuilt()
{
	Super::OnWidgetRebuilt();
	USimplyConfigSettings* SimplySettings = GetMutableDefault<USimplyConfigSettings>();

	InitializeMapping();
	if (!SimplySettings->SimplySettingsChangedDelegate.IsBoundToObject(
		this))
	{
		SimplySettings->SimplySettingsChangedDelegate.AddUObject(this, &USimplySettings_KeySelector::InitializeMapping);
	}

	if (!OnKeySelected.IsAlreadyBound(this, &USimplySettings_KeySelector::HandleNewKeySelected))
	{
		OnKeySelected.AddDynamic(this, &USimplySettings_KeySelector::HandleNewKeySelected);
	}
}

void USimplySettings_KeySelector::InitializeMapping()
{
	USimplyConfigSettings* SimplySettings = GetMutableDefault<USimplyConfigSettings>();
	FInputChord Key;
	if (BindingType == EBindingType::ActionBinding)
	{
		const FInputActionKeyMapping Map = SimplySettings->GetActionMapping(KeySet, InputMappingName);
		Key.Key = Map.Key;
		Key.bShift = Map.bShift;
		Key.bAlt = Map.bAlt;
		Key.bCtrl = Map.bCtrl;
		Key.bCmd = Map.bCmd;
	}
	if (BindingType == EBindingType::AxisBinding)
	{
		const FInputAxisKeyMapping Map = SimplySettings->GetAxisMapping(KeySet, InputMappingName, Scale);
		Key = Map.Key;
	}
	ManualMode = false;
	SetSelectedKey(Key);
	ManualMode = true;
}

bool USimplySettings_KeySelector::SelectKey(FInputChord Key)
{
	USimplyConfigSettings* SimplySettings = GetMutableDefault<USimplyConfigSettings>();
	if (SimplySettings->KeyBlacklist.Contains(Key) ||
		(BindingType == AxisBinding && SimplySettings->AxisKeyBlacklist.Contains(Key)) ||
		(BindingType == ActionBinding && SimplySettings->ActionKeyBlacklist.Contains(Key)))
	{
		FInputChord PreviousKey;
		// In the selected Key is blacklisted, we reset to the current one.
		if (BindingType == EBindingType::AxisBinding)
		{
			FInputAxisKeyMapping Map = SimplySettings->GetAxisMapping(KeySet, InputMappingName, Scale);
			PreviousKey = Map.Key;
		}
		if (BindingType == EBindingType::ActionBinding)
		{
			FInputActionKeyMapping Map = SimplySettings->GetActionMapping(KeySet, InputMappingName);
			PreviousKey = Map.Key;
		}
		ManualMode = false;
		SetSelectedKey(PreviousKey);
		ManualMode = true;
		OnBlacklistedKeySelected(PreviousKey, Key);
		return false;
	}

	// If multi Binding is not allowed, we need to remove previous assignments
	if (!SimplySettings->AllowMultiBinding)
	{
		for (FInputAxisKeyMap Map : SimplySettings->GetKeySet(KeySet).AxisMapping)
		{
			if (Map.Key == Key.Key)
			{
				SimplySettings->SetAxisMapping(KeySet, FInputAxisKeyMapping(Map.AxisName, EKeys::Invalid, Map.Scale));
			}
		}

		for (FInputActionKeyMap Map : SimplySettings->GetKeySet(KeySet).ActionMappings)
		{
			if (Map.Key == Key.Key && Map.bAlt == Key.bAlt && Map.bCmd == Key.bCmd && Map.bCtrl == Key.bCtrl && Map.
				bShift == Key.bShift)
			{
				SimplySettings->SetActionMapping(
					KeySet, FInputActionKeyMapping(Map.ActionName, EKeys::Invalid, false, false, false, false));
			}
		}
	}

	if (BindingType == EBindingType::AxisBinding)
	{
		const FInputAxisKeyMapping Mapping = FInputAxisKeyMapping(InputMappingName, Key.Key, Scale);
		SimplySettings->SetAxisMapping(KeySet, Mapping);
	}
	if (BindingType == EBindingType::ActionBinding)
	{
		const FInputActionKeyMapping Mapping = FInputActionKeyMapping(InputMappingName, Key.Key, Key.bShift, Key.bCtrl,
		                                                              Key.bAlt,
		                                                              Key.bCmd);
		SimplySettings->SetActionMapping(KeySet, Mapping);
	}
	return true;
}

bool USimplySettings_KeySelector::IsKeyAlreadyBound(FInputChord Key)
{
	USimplyConfigSettings* SimplySettings = GetMutableDefault<USimplyConfigSettings>();
	const FInputAxisKeyMapping Mapping = FInputAxisKeyMapping(InputMappingName, Key.Key, Scale);

	for (FInputAxisKeyMap Map : SimplySettings->GetKeySet(KeySet).AxisMapping)
	{
		if (Map.Key == Key.Key && Map.AxisName != InputMappingName)
		{
			if (!Key.bAlt && !Key.bCmd && !Key.bCtrl && !Key.bShift)
			{
				return true;
			}
		}
	}

	for (FInputActionKeyMap Map : SimplySettings->GetKeySet(KeySet).ActionMappings)
	{
		if (Map.Key == Key.Key && Map.bAlt == Key.bAlt && Map.bCmd == Key.bCmd && Map.bCtrl == Key.bCtrl && Map.bShift
			== Key.bShift && Map.ActionName != InputMappingName)
		{
			return true;
		}
	}
	return false;
}

void USimplySettings_KeySelector::HandleNewKeySelected(FInputChord NewKey)
{
	if(ManualMode)
	{
		OnNewKeySelected(NewKey);
	}
}
