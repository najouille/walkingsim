// Fill out your copyright notice in the Description page of Project Settings.


#include "SimplyConfigSettings.h"
#include "SimplyPlayerInput.h"
#include "Kismet/GameplayStatics.h"
#include "Kismet/KismetStringLibrary.h"

USimplyConfigSettings::USimplyConfigSettings(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer)
{
}

/** Ask for all the axis mappings */
TArray<FInputAxisKeyMapping> USimplyConfigSettings::GetAxisMappings() const
{
	TArray<FInputAxisKeyMapping> AxisMappings;
	for (FKeyMappingList L : GetActiveKeySets())
	{
		AxisMappings.Append(L.GetAsInputAxisKeyMapping());
	}
	return AxisMappings;
}

/** Ask for all the action mappings */
TArray<FInputActionKeyMapping> USimplyConfigSettings::GetActionMappings() const
{
	TArray<FInputActionKeyMapping> ActionMappings;
	for (FKeyMappingList L : GetActiveKeySets())
	{
		ActionMappings.Append(L.GetAsInputActionKeyMapping());
	}
	return ActionMappings;
}

FInputActionKeyMapping USimplyConfigSettings::GetActionMapping(FGameplayTag KeySet, FName BindingName)
{
	FKeyMappingList& Set = GetOrCreateKeySet(KeySet);
	const int Index = Set.ActionMappings.IndexOfByPredicate([BindingName](FInputActionKeyMap Map)
	{
		return Map.ActionName.IsEqual(BindingName);
	});

	if (Index >= 0)
	{
		const FInputActionKeyMap Map = Set.ActionMappings[Index];
		return FInputActionKeyMapping(Map.ActionName, Map.Key, Map.bShift, Map.bCtrl, Map.bAlt, Map.bCmd);
	}
	return FInputActionKeyMapping();
}

void USimplyConfigSettings::SetActionMapping(FGameplayTag KeySet, FInputActionKeyMapping Mapping)
{
	FKeyMappingList& Set = GetOrCreateKeySet(KeySet);
	Set.SetInputActionMapping(Mapping);
	if (AutoSaveBindings)
	{
		SaveConfig();
		ForceRebuildKeymaps();
	}
	if (SimplySettingsChangedDelegate.IsBound())
	{
		SimplySettingsChangedDelegate.Broadcast();
	}
}

FInputAxisKeyMapping USimplyConfigSettings::GetAxisMapping(FGameplayTag KeySet, FName BindingName, float Scale)
{
	FKeyMappingList Set = GetOrCreateKeySet(KeySet);
	const int Index = Set.AxisMapping.IndexOfByPredicate([BindingName, Scale](FInputAxisKeyMap Map)
	{
		return Map.AxisName.IsEqual(BindingName) && Map.Scale == Scale;
	});

	if (Index >= 0)
	{
		const FInputAxisKeyMap Map = Set.AxisMapping[Index];
		return FInputAxisKeyMapping(Map.AxisName, Map.Key, Map.Scale);
	}
	return FInputAxisKeyMapping();
}

void USimplyConfigSettings::SetAxisMapping(FGameplayTag KeySet, FInputAxisKeyMapping Mapping)
{
	FKeyMappingList& Set = GetOrCreateKeySet(KeySet);
	Set.SetInputAxisMapping(Mapping);
	if (AutoSaveBindings)
	{
		SaveConfig();
		ForceRebuildKeymaps();
	}
	if (SimplySettingsChangedDelegate.IsBound())
	{
		SimplySettingsChangedDelegate.Broadcast();
	}
}

void USimplyConfigSettings::RemoveMappings(FGameplayTag KeySet, FName ActionName)
{
	FKeyMappingList& Set = GetOrCreateKeySet(KeySet);
	Set.ActionMappings.RemoveAll(
		[ActionName](FInputActionKeyMap Map)
		{
			return Map.ActionName.IsEqual(ActionName);
		});

	Set.AxisMapping.RemoveAll(
		[ActionName](FInputAxisKeyMap Map)
		{
			return Map.AxisName.IsEqual(ActionName);
		});
	if (AutoSaveBindings)
	{
		SaveConfig();
	}
	if (SimplySettingsChangedDelegate.IsBound())
	{
		SimplySettingsChangedDelegate.Broadcast();
	}
}

void USimplyConfigSettings::CopyKeySetToKeySet(FGameplayTag CopyKeySet, FGameplayTag PasteKeySet)
{
	const FKeyMappingList CopySet = GetKeySet(CopyKeySet);
	FKeyMappingList& PasteSet = GetOrCreateKeySet(CopyKeySet);

	PasteSet.AxisMapping = CopySet.AxisMapping;
	PasteSet.ActionMappings = CopySet.ActionMappings;
	if (SimplySettingsChangedDelegate.IsBound())
	{
		SimplySettingsChangedDelegate.Broadcast();
	}
}

FKeyMappingList USimplyConfigSettings::GetKeySet(FGameplayTag KeySet)
{
	const int Index = KeySets.IndexOfByPredicate([KeySet](FKeyMappingList L1)
	{
		return L1.KeySet.MatchesTag(KeySet);
	});

	if (Index >= 0)
	{
		return KeySets[Index];
	}

	if (KeySet == FGameplayTag::EmptyTag)
	{
		if (KeySets.Num() > 0)
		{
			return KeySets[0];
		}
	}

	return FKeyMappingList();
}

void USimplyConfigSettings::ApplySimplySettingsAudio(UObject* WorldContextObject)
{
	const UWorld* World = GEngine->GetWorldFromContextObject(WorldContextObject, EGetWorldErrorMode::LogAndReturnNull);
	if (!World)
	{
		return;
	}
	const USimplyConfigSettings* SimplySettings = GetDefault<USimplyConfigSettings>();
	for (const FAudioSetting Setting : SimplySettings->AudioSettings)
	{
		if (Setting.SoundMix && Setting.AudioClass)
		{
			UGameplayStatics::SetSoundMixClassOverride(World, Setting.SoundMix, Setting.AudioClass, Setting.Volume,
			                                           Setting.Pitch, 0);
			UGameplayStatics::PushSoundMixModifier(World, Setting.SoundMix);
		}
		else
		{
			UE_LOG(LogTemp, Error, TEXT("Simply Settings contains a bad sound setting configuration"));
		}
	}
}

FAudioSetting USimplyConfigSettings::GetVolumeSetting(USoundMix* InSoundMix, USoundClass* InAudioClass)
{
	for (FAudioSetting S : AudioSettings)
	{
		if (S.AudioClass == InAudioClass && S.SoundMix && InSoundMix)
		{
			return S;
		}
	}
	return FAudioSetting(InSoundMix, InAudioClass);
}

void USimplyConfigSettings::SetVolumeSetting(USoundMix* InSoundMix, USoundClass* InAudioClass, float InVolume)
{
	const bool AlreadyExists = AudioSettings.ContainsByPredicate([InSoundMix, InAudioClass](FAudioSetting& S)
	{
		return S.SoundMix == InSoundMix && S.AudioClass == InAudioClass;
	});

	if (AlreadyExists)
	{
		for (FAudioSetting& S : AudioSettings)
		{
			if (S.AudioClass == InAudioClass && S.SoundMix && InSoundMix)
			{
				S.Volume = InVolume;
			}
		}
	}
	else
	{
		AudioSettings.Add(FAudioSetting(InSoundMix, InAudioClass, InVolume));
	}
}

void USimplyConfigSettings::SetPitchSetting(USoundMix* InSoundMix, USoundClass* InAudioClass, float InPitch)
{
	const bool AlreadyExists = AudioSettings.ContainsByPredicate([InSoundMix, InAudioClass](FAudioSetting& S)
	{
		return S.SoundMix == InSoundMix && S.AudioClass == InAudioClass;
	});

	if (AlreadyExists)
	{
		for (FAudioSetting& S : AudioSettings)
		{
			if (S.AudioClass == InAudioClass && S.SoundMix && InSoundMix)
			{
				S.Pitch = InPitch;
			}
		}
	}
	else
	{
		FAudioSetting Setting = FAudioSetting(InSoundMix, InAudioClass);
		Setting.Pitch = InPitch;
		AudioSettings.Add(Setting);
	}
}

FString USimplyConfigSettings::GetCustomSimplySetting(FString SettingKey)
{
	if (SettingKey.IsEmpty())
	{
		return "";
	}
	USimplyConfigSettings* SimplySettings = GetMutableDefault<USimplyConfigSettings>();
	return SimplySettings->CustomSettings.FindRef(SettingKey);
}

int USimplyConfigSettings::GetCustomSettingsAsInt(FString SettingKey)
{
	return UKismetStringLibrary::Conv_StringToInt(GetCustomSimplySetting(SettingKey));
}

int USimplyConfigSettings::GetCustomSettingsAsFloat(FString SettingKey)
{
	return UKismetStringLibrary::Conv_StringToFloat(GetCustomSimplySetting(SettingKey));
}

bool USimplyConfigSettings::GetCustomSettingsAsBool(FString SettingKey)
{
	return GetCustomSimplySetting(SettingKey).Equals("True");
}

void USimplyConfigSettings::SetCustomSettings(FString SettingKey, FString Value)
{
	USimplyConfigSettings* SimplySettings = GetMutableDefault<USimplyConfigSettings>();
	SimplySettings->CustomSettings.Add(SettingKey, Value);

	if (SimplySettings->SimplySettingsChangedDelegate.IsBound())
	{
		SimplySettings->SimplySettingsChangedDelegate.Broadcast();
	}
}

TArray<FKeyMappingList> USimplyConfigSettings::GetActiveKeySets() const
{
	if (ActiveKeySets.Num() > 0)
	{
		TArray<FKeyMappingList> ActiveSets;
		for (FKeyMappingList L : KeySets)
		{
			if (ActiveKeySets.Contains(L.KeySet))
			{
				ActiveSets.Add(L);
			}
		}
		return ActiveSets;
	}
	return KeySets;
}

FKeyMappingList& USimplyConfigSettings::GetOrCreateKeySet(FGameplayTag KeySet)
{
	const int Index = KeySets.IndexOfByPredicate([KeySet](FKeyMappingList L1)
	{
		return L1.KeySet.MatchesTag(KeySet);
	});

	if (Index >= 0)
	{
		return KeySets[Index];
	}

	if (KeySet == FGameplayTag::EmptyTag)
	{
		if (KeySets.Num() > 0)
		{
			return KeySets[0];
		}
	}

	KeySets.Add(FKeyMappingList(KeySet));
	return KeySets[0];
}

void USimplyConfigSettings::ForceRebuildKeymaps() const
{
	for (TObjectIterator<UPlayerInput> It; It; ++It)
	{
		if (It->IsA(USimplyPlayerInput::StaticClass()))
		{
			USimplyPlayerInput* PlayerInput = Cast<USimplyPlayerInput>(*It);
			if (PlayerInput)
			{
				PlayerInput->ForceRebuildingSimplySettingsKeyMaps(true);
			}
		}
		else
		{
			It->ForceRebuildingKeyMaps(true);
		}
	}
}

void USimplyConfigSettings::ForceUIUpdate()
{
	const USimplyConfigSettings* SimplySettings = GetDefault<USimplyConfigSettings>();
	if (SimplySettings->SimplySettingsChangedDelegate.IsBound())
	{
		SimplySettings->SimplySettingsChangedDelegate.Broadcast();
	}
}
