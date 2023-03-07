// Fill out your copyright notice in the Description page of Project Settings.

#include "SimplySettingsWidget.h"
#include "SimplyConfigSettings.h"
#include "SimplySettings_Button.h"

void USimplySettingsWidget::SaveSimplySettings()
{
	USimplyConfigSettings* SimplySettings = GetMutableDefault<USimplyConfigSettings>();
	SimplySettings->SaveConfig();
	SimplySettings->ReloadConfig();
	SimplySettings->ForceRebuildKeymaps();
}

void USimplySettingsWidget::DiscardSimplySettings()
{
	USimplyConfigSettings* SimplySettings = GetMutableDefault<USimplyConfigSettings>();
	SimplySettings->ReloadConfig();
	USimplyConfigSettings::ForceUIUpdate();
	SimplySettings->ForceRebuildKeymaps();
}
