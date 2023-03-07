// Copyright Epic Games, Inc. All Rights Reserved.

#include "SimplySettings.h"
#include "SimplyConfigSettings.h"

#define LOCTEXT_NAMESPACE "FSimplySettingsModule"

class UInputSettings;

void FSimplySettingsModule::StartupModule()
{
}

void FSimplySettingsModule::ShutdownModule()
{
}

#undef LOCTEXT_NAMESPACE

IMPLEMENT_MODULE(FSimplySettingsModule, SimplySettings)
