// Fill out your copyright notice in the Description page of Project Settings.


#include "SimplySettings_AudioSlider.h"
#include "SimplyConfigSettings.h"
#include "Kismet/GameplayStatics.h"
#include "Sound/SoundClass.h"

void USimplySettings_AudioSlider::OnWidgetRebuilt()
{
	Super::OnWidgetRebuilt();

	USimplyConfigSettings* SimplySettings = GetMutableDefault<USimplyConfigSettings>();

	if (!SimplySettings->SimplySettingsChangedDelegate.IsBoundToObject(
		this))
	{
		SimplySettings->SimplySettingsChangedDelegate.AddUObject(
			this, &USimplySettings_AudioSlider::RefreshProperties);
	}

	if (!OnValueChanged.IsAlreadyBound(this, &USimplySettings_AudioSlider::OnNewValueSet))
	{
		OnValueChanged.AddDynamic(this, &USimplySettings_AudioSlider::OnNewValueSet);
	}

	RefreshProperties();
}

void USimplySettings_AudioSlider::OnNewValueSet_Implementation(float NewValue)
{
	SetValue(NewValue);

	USimplyConfigSettings* SimplySettings = GetMutableDefault<USimplyConfigSettings>();
	SimplySettings->SetVolumeSetting(SoundMix, SoundClass, NewValue);
	RefreshProperties();
}

float USimplySettings_AudioSlider::GetCurrentValue_Implementation()
{
	USimplyConfigSettings* SimplySettings = GetMutableDefault<USimplyConfigSettings>();
	const FAudioSetting Setting = SimplySettings->GetVolumeSetting(SoundMix, SoundClass);
	return Setting.Volume;
}

void USimplySettings_AudioSlider::RefreshProperties()
{
	if (SoundClass)
	{
		SetValue(GetCurrentValue());
		USimplyConfigSettings* SimplySettings = GetMutableDefault<USimplyConfigSettings>();
		const FAudioSetting Setting = SimplySettings->GetVolumeSetting(SoundMix, SoundClass);
		UGameplayStatics::SetSoundMixClassOverride(GetWorld(), SoundMix, SoundClass, Setting.Volume, Setting.Pitch,
		                                           FadeInTime);
		UGameplayStatics::PushSoundMixModifier(GetWorld(), SoundMix);
	}
}
