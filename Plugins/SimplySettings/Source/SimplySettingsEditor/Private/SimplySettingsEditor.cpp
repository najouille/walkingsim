// Copyright Epic Games, Inc. All Rights Reserved.

#include "SimplySettingsEditor/Public/SimplySettingsEditor.h"
#include "Editor.h"
#include "ISettingsModule.h"
#include "ISettingsSection.h"
#include "SimplyConfigSettings.h"
#include "GameFramework/InputSettings.h"

#define LOCTEXT_NAMESPACE "FSimplySettingsEditorModule"

class UInputSettings;

void FSimplySettingsEditorModule::StartupModule()
{
	RegisterSettings();
}

void FSimplySettingsEditorModule::ShutdownModule()
{
	if (UObjectInitialized())
	{
		UnregisterSettings();
	}
}

void FSimplySettingsEditorModule::RegisterSettings()
{
	if (ISettingsModule* SettingModule = FModuleManager::GetModulePtr<ISettingsModule>("Settings"))
	{
		ISettingsSectionPtr SettingsSection = SettingModule->RegisterSettings(
			"Project", "Plugins", "SimplySettingsEditor",
			LOCTEXT("RuntimeSettingsName", "Simply Settings"),
			LOCTEXT("RuntimeSettingsDescription", "Configure the behaviour of Simply Settings"),
			GetMutableDefault<USimplyConfigSettings>()
		);

		if (SettingsSection.IsValid())
		{
			SettingsSection->OnModified().BindRaw(this, &FSimplySettingsEditorModule::HandleSettingsSaved);
		}
	}
}

void FSimplySettingsEditorModule::UnregisterSettings()
{
	if (ISettingsModule* SettingsModule = FModuleManager::GetModulePtr<ISettingsModule>("Settings"))
	{
		SettingsModule->UnregisterSettings("Project", "Plugins", "SimplySettingsEditor");
	}
}

bool FSimplySettingsEditorModule::SupportsDynamicReloading()
{
	return true;
}

bool FSimplySettingsEditorModule::HandleSettingsSaved()
{
	USimplyConfigSettings* SimplySettingsEditor = GetMutableDefault<USimplyConfigSettings>();
	bool ResaveSettings = false;

	UInputSettings* InputSettings = GetMutableDefault<UInputSettings>();

	// Compiling the settings to the default Input config file, this is only for the blueprint access
	// This will overwrite the existing Input config
	TArray<FInputAxisKeyMapping> AxisMappings = InputSettings->GetAxisMappings();
	TArray<FInputActionKeyMapping> ActionMapping = InputSettings->GetActionMappings();
	for (FInputAxisKeyMapping Mapping : AxisMappings)
	{
		InputSettings->RemoveAxisMapping(Mapping);
	}
	for (FInputActionKeyMapping Mapping : ActionMapping)
	{
		InputSettings->RemoveActionMapping(Mapping);
	}

	for (FInputAxisKeyMapping Mapping : SimplySettingsEditor->GetAxisMappings())
	{
		InputSettings->AddAxisMapping(Mapping);
	}

	for (FInputActionKeyMapping Mapping : SimplySettingsEditor->GetActionMappings())
	{
		InputSettings->AddActionMapping(Mapping);
	}

	InputSettings->SaveKeyMappings();
	FEditorDelegates::OnActionAxisMappingsChanged.Broadcast();
	
	if (ResaveSettings)
	{
		SimplySettingsEditor->SaveConfig();
	}

	return true;
}

#undef LOCTEXT_NAMESPACE

IMPLEMENT_MODULE(FSimplySettingsEditorModule, SimplySettingsEditor)
