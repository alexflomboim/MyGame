// Fill out your copyright notice in the Description page of Project Settings.


#include "VitalAttributeSet.h"

void UVitalAttributeSet::PreAttributeChange(const FGameplayAttribute& Attribute, float& NewValue)
{
	Super::PreAttributeChange(Attribute, NewValue);

	if (Attribute == GetHealthAttribute()) {
		NewValue = FMath::Clamp(NewValue, 0.f, MaxHealth.GetCurrentValue());
	} else if (Attribute == GetStaminaAttribute()) {
		float f = Stamina.GetCurrentValue();
		NewValue = FMath::Clamp(NewValue, 0.f, MaxStamina.GetCurrentValue());
	}
}

void UVitalAttributeSet::PreAttributeBaseChange(const FGameplayAttribute& Attribute, float& NewValue) const
{
	Super::PreAttributeBaseChange(Attribute, NewValue);

	if (Attribute == GetHealthAttribute()) {
		NewValue = FMath::Clamp(NewValue, 0.f, MaxHealth.GetCurrentValue());
	}
	else if (Attribute == GetStaminaAttribute()) {
		float f = Stamina.GetCurrentValue();
		NewValue = FMath::Clamp(NewValue, 0.f, MaxStamina.GetCurrentValue());
	}
}