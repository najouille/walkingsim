// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "GameFramework/PlayerInput.h"
#include "UObject/NoExportTypes.h"
#include "SimplyConfigSettings.generated.h"


/*
 * The "FInputActionKeyMap" and "FInputAxisKeyMapping" can't be used in the Editor settings due to a bug.
 *
 * Therefore, here is a custom one, just for the UI
 */
USTRUCT(BlueprintType)
struct FInputActionKeyMap
{
	GENERATED_USTRUCT_BODY()

	/** Friendly name of action, e.g "jump" */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Input")
	FName ActionName;

	/** true if one of the Shift keys must be down when the KeyEvent is received to be acknowledged */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Input")
	uint8 bShift:1;

	/** true if one of the Ctrl keys must be down when the KeyEvent is received to be acknowledged */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Input")
	uint8 bCtrl:1;

	/** true if one of the Alt keys must be down when the KeyEvent is received to be acknowledged */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Input")
	uint8 bAlt:1;

	/** true if one of the Cmd keys must be down when the KeyEvent is received to be acknowledged */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Input")
	uint8 bCmd:1;

	/** Key to bind it to. */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Input")
	FKey Key;

	bool operator==(const FInputActionKeyMapping& Other) const
	{
		return (ActionName == Other.ActionName
			&& Key == Other.Key
			&& bShift == Other.bShift
			&& bCtrl == Other.bCtrl
			&& bAlt == Other.bAlt
			&& bCmd == Other.bCmd);
	}

	bool operator<(const FInputActionKeyMapping& Other) const
	{
		bool bResult = false;
		if (ActionName.LexicalLess(Other.ActionName))
		{
			bResult = true;
		}
		else if (ActionName == Other.ActionName)
		{
			bResult = (Key < Other.Key);
		}
		return bResult;
	}

	FInputActionKeyMap(const FName InActionName = NAME_None, const FKey InKey = EKeys::Invalid,
	                   const bool bInShift = false, const bool bInCtrl = false, const bool bInAlt = false,
	                   const bool bInCmd = false)
		: ActionName(InActionName)
		  , bShift(bInShift)
		  , bCtrl(bInCtrl)
		  , bAlt(bInAlt)
		  , bCmd(bInCmd)
		  , Key(InKey)
	{
	}
};

USTRUCT(BlueprintType)
struct FInputAxisKeyMap
{
	GENERATED_USTRUCT_BODY()

	/** Friendly name of axis, e.g "MoveForward" */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Input")
	FName AxisName;

	/** Multiplier to use for the mapping when accumulating the axis value */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Input")
	float Scale;

	/** Key to bind it to. */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Input")
	FKey Key;

	bool operator==(const FInputAxisKeyMapping& Other) const
	{
		return (AxisName == Other.AxisName
			&& Key == Other.Key
			&& Scale == Other.Scale);
	}

	bool operator<(const FInputAxisKeyMapping& Other) const
	{
		bool bResult = false;
		if (AxisName.LexicalLess(Other.AxisName))
		{
			bResult = true;
		}
		else if (AxisName == Other.AxisName)
		{
			if (Key < Other.Key)
			{
				bResult = true;
			}
			else if (Key == Other.Key)
			{
				bResult = (Scale < Other.Scale);
			}
		}
		return bResult;
	}

	FInputAxisKeyMap(const FName InAxisName = NAME_None, const FKey InKey = EKeys::Invalid,
	                 const float InScale = 1.f)
		: AxisName(InAxisName)
		  , Scale(InScale)
		  , Key(InKey)
	{
	}
};

USTRUCT(BlueprintType)
struct FKeyMappingList
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere, Category="Simply Settings")
	FGameplayTag KeySet;

	UPROPERTY(EditAnywhere, Category="Simply Settings")
	TArray<FInputAxisKeyMap> AxisMapping;

	UPROPERTY(EditAnywhere, Category="Simply Settings")
	TArray<FInputActionKeyMap> ActionMappings;

	/*
	 * Due to a Bug, FInputActionKeyMapping can't be used in the UI Editor Settings.
	 * As a fix, we have those custom structs (FInputActionKeyMap and this one here)
	 * and use this function to convert it to the default FInputActionKeyMapping.
	 */
	TArray<FInputActionKeyMapping> GetAsInputActionKeyMapping()
	{
		TArray<FInputActionKeyMapping> Mappings;
		for (FInputActionKeyMap L : ActionMappings)
		{
			Mappings.Add(FInputActionKeyMapping(L.ActionName, L.Key, L.bShift, L.bCtrl, L.bAlt, L.bCmd));
		}
		return Mappings;
	}

	TArray<FInputAxisKeyMapping> GetAsInputAxisKeyMapping()
	{
		TArray<FInputAxisKeyMapping> Mappings;
		for (FInputAxisKeyMap L : AxisMapping)
		{
			Mappings.Add(FInputAxisKeyMapping(L.AxisName, L.Key, L.Scale));
		}
		return Mappings;
	}

	void SetInputActionMapping(FInputActionKeyMapping Mapping)
	{
		const int Index = ActionMappings.IndexOfByPredicate([Mapping](FInputActionKeyMap Map)
		{
			return Map.ActionName.IsEqual(Mapping.ActionName);
		});

		if (Index > -1)
		{
			ActionMappings[Index].bAlt = Mapping.bAlt;
			ActionMappings[Index].bCmd = Mapping.bCmd;
			ActionMappings[Index].bCtrl = Mapping.bCtrl;
			ActionMappings[Index].bShift = Mapping.bShift;
			ActionMappings[Index].Key = Mapping.Key;
		}
		else
		{
			ActionMappings.Add(FInputActionKeyMap(Mapping.ActionName, Mapping.Key, Mapping.bShift, Mapping.bCtrl,
			                                      Mapping.bAlt, Mapping.bCmd));
		}
	}

	void SetInputAxisMapping(FInputAxisKeyMapping Mapping)
	{
		const int Index = AxisMapping.IndexOfByPredicate([Mapping](FInputAxisKeyMap Map)
		{
			return Map.AxisName.IsEqual(Mapping.AxisName) && Map.Scale == Mapping.Scale;
		});

		if (Index > -1)
		{
			AxisMapping[Index].Key = Mapping.Key;
		}
		else
		{
			AxisMapping.Add(FInputAxisKeyMap(Mapping.AxisName, Mapping.Key, Mapping.Scale));
		}
	}

	FKeyMappingList(FGameplayTag Set)
	{
		this->KeySet = Set;
	}

	FKeyMappingList()
	{
	}
};

USTRUCT(BlueprintType)
struct FAudioSetting
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere, Category="Simply Settings")
	USoundMix* SoundMix = nullptr;

	UPROPERTY(EditAnywhere, Category="Simply Settings")
	USoundClass* AudioClass = nullptr;

	UPROPERTY(EditAnywhere, Category="Simply Settings")
	float Volume = 1;

	UPROPERTY(EditAnywhere, Category="Simply Settings")
	float Pitch = 1;

	FAudioSetting()
	{
	}

	FAudioSetting(USoundMix* InSoundMix, USoundClass* InAudioClass, float InVolume = 1, float InPitch = 1)
	{
		this->SoundMix = InSoundMix;
		this->AudioClass = InAudioClass;
		this->Volume = InVolume;
		this->Pitch = InPitch;
	}
};

DECLARE_MULTICAST_DELEGATE(FSimplySettingsChangedDelegate);

UCLASS(config=SimplySettings, defaultconfig)
class SIMPLYSETTINGS_API USimplyConfigSettings : public UObject
{
	GENERATED_BODY()

public:
	FSimplySettingsChangedDelegate SimplySettingsChangedDelegate;

	UPROPERTY(EditAnywhere, Category="Simply Audio", Config)
	TArray<FAudioSetting> AudioSettings;

	UPROPERTY(EditAnywhere, Category="Simply Bindings", Config)
	bool AutoSaveBindings = false;

	// Whether its allowed to have keys used to multiple Bindings
	UPROPERTY(EditAnywhere, Category="Simply Bindings", Config)
	bool AllowMultiBinding = false;

	/** List of all the key Sets */
	UPROPERTY(EditAnywhere, Category="Simply Bindings", Config)
	TArray<FKeyMappingList> KeySets;

	/**
	* These are the Keysets that are active. If none, all are considered active
	*/
	UPROPERTY(EditAnywhere, Category="Simply Bindings", Config)
	TArray<FGameplayTag> ActiveKeySets;

	// These keys are blocked for Axis and Action keys
	UPROPERTY(EditAnywhere, Category="Simply Bindings", Config)
	TArray<FInputChord> KeyBlacklist;

	// These keys are blocked for Axis keys only
	UPROPERTY(EditAnywhere, Category="Simply Bindings", Config)
	TArray<FInputChord> AxisKeyBlacklist;

	// These keys are blocked for Action keys only
	UPROPERTY(EditAnywhere, Category="Simply Bindings", Config)
	TArray<FInputChord> ActionKeyBlacklist;

	UPROPERTY(EditAnywhere, Category="Custom Settings", Config)
	TMap<FString, FString> CustomSettings;

	USimplyConfigSettings(const FObjectInitializer& ObjectInitializer);
	
	UFUNCTION(BlueprintCallable, Category="Simply Settings")
	static void ForceUIUpdate();
	
	/*
	 * Key Binding Stuff
	 */
	TArray<FInputAxisKeyMapping> GetAxisMappings() const;
	TArray<FInputActionKeyMapping> GetActionMappings() const;

	FInputActionKeyMapping GetActionMapping(FGameplayTag KeySet, FName BindingName);
	void SetActionMapping(FGameplayTag KeySet, FInputActionKeyMapping Mapping);

	FInputAxisKeyMapping GetAxisMapping(FGameplayTag KeySet, FName BindingName, float Scale);
	void SetAxisMapping(FGameplayTag KeySet, FInputAxisKeyMapping Mapping);

	void RemoveMappings(FGameplayTag KeySet, FName ActionName);

	void CopyKeySetToKeySet(FGameplayTag CopyKeySet, FGameplayTag PasteKeySet);

	TArray<FKeyMappingList> GetActiveKeySets() const;
	FKeyMappingList& GetOrCreateKeySet(FGameplayTag KeySet);
	FKeyMappingList GetKeySet(FGameplayTag KeySet);

	void ForceRebuildKeymaps() const;

	/**
	 * Audio Stuff
	 */
	// Applies all the audio settings
	UFUNCTION(BlueprintCallable, Category="Simply Settings",
		meta=(WorldContext="WorldContextObject", UnsafeDuringActorConstruction = "true"))
	static void ApplySimplySettingsAudio(UObject* WorldContextObject);

	UFUNCTION(BlueprintCallable, Category="Simply Settings")
	FAudioSetting GetVolumeSetting(USoundMix* InSoundMix, USoundClass* InAudioClass);

	UFUNCTION(BlueprintCallable, Category="Simply Settings")
	void SetVolumeSetting(USoundMix* InSoundMix, USoundClass* InAudioClass, float InVolume);

	UFUNCTION(BlueprintCallable, Category="Simply Settings")
	void SetPitchSetting(USoundMix* InSoundMix, USoundClass* InAudioClass, float InPitch);

	/**
	 * Custom Settings
	 */
	UFUNCTION(BlueprintCallable, Category="Simply Settings")
	static FString GetCustomSimplySetting(FString SettingKey);

	UFUNCTION(BlueprintCallable, Category="Simply Settings")
	static int GetCustomSettingsAsInt(FString SettingKey);

	UFUNCTION(BlueprintCallable, Category="Simply Settings")
	static int GetCustomSettingsAsFloat(FString SettingKey);

	UFUNCTION(BlueprintCallable, Category="Simply Settings")
	static bool GetCustomSettingsAsBool(FString SettingKey);

	UFUNCTION(BlueprintCallable, Category="Simply Settings")
	static void SetCustomSettings(FString SettingKey, FString Value);
};
