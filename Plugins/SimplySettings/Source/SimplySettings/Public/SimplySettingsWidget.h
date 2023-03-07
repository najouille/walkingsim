// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "SimplySettingsWidget.generated.h"

struct FInputActionKeyMapping;

UCLASS()
class SIMPLYSETTINGS_API USimplySettingsWidget : public UUserWidget
{
	GENERATED_BODY()

public:
	UFUNCTION(BlueprintCallable, Category="Simply Settings")
	virtual void SaveSimplySettings();

	UFUNCTION(BlueprintCallable, Category="Simply Settings")
	virtual void DiscardSimplySettings();
};
