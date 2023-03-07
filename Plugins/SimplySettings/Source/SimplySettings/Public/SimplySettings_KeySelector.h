// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "Components/InputKeySelector.h"
#include "SimplySettings_KeySelector.generated.h"

UENUM()
enum EBindingType
{
	AxisBinding,
	ActionBinding
};

/**
* Represents a single mapping for the UI
*/
UCLASS()
class SIMPLYSETTINGS_API USimplySettings_KeySelector : public UInputKeySelector
{
	GENERATED_BODY()

public:
	/** Differentiate between automatic binding and manual one
	* This is required as there should be no userfeedback in the auto mode
	*/
	UPROPERTY(BlueprintReadWrite, Category="Simply Settings")
	bool ManualMode = true;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Setup")
	TEnumAsByte<EBindingType> BindingType;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Setup")
	FName InputMappingName;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Setup")
	FGameplayTag KeySet;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Setup",
		meta=(EditCondition="BindingType==EBindingType::AxisBinding"))
	float Scale = 0;

	virtual void OnWidgetRebuilt() override;

	// Used to link the Mapping component to the settings, the Inputmappingname & Keyset has to be set before
	UFUNCTION(BlueprintCallable, Category="Simply Settings")
	virtual void InitializeMapping();

	UFUNCTION(BlueprintCallable, Category="Simply Settings")
	bool SelectKey(FInputChord Key);

	// Checks whether the given is already bound in this keyset
	UFUNCTION(BlueprintCallable, Category="Simply Settings")
	bool IsKeyAlreadyBound(FInputChord Key);

	UFUNCTION(BlueprintImplementableEvent)
	void OnBlacklistedKeySelected(const FInputChord PreviousKey, const FInputChord NewSelectedKey);

	UFUNCTION()
	void HandleNewKeySelected(FInputChord NewKey);

	UFUNCTION(BlueprintImplementableEvent)
	void OnNewKeySelected(FInputChord NewKey);
};
