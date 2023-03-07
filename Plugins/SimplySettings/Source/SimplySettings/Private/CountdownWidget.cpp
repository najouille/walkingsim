// Fill out your copyright notice in the Description page of Project Settings.


#include "CountdownWidget.h"
#include "Engine.h"

void UCountdownWidget::NativeConstruct()
{
	Super::NativeConstruct();
	GetWorld()->GetTimerManager().SetTimer(DestructionHandle, this, &UCountdownWidget::RemoveFromParent, Duration,
	                                       false,
	                                       -1);
}

float UCountdownWidget::GetRemainingTime()
{
	return GetWorld()->GetTimerManager().GetTimerRemaining(DestructionHandle);
}
