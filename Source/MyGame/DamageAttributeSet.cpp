// Fill out your copyright notice in the Description page of Project Settings.


#include "DamageAttributeSet.h"


void UDamageAttributeSet::PreAttributeChange(const FGameplayAttribute& Attribute, float& NewValue)
{
	Super::PreAttributeChange(Attribute, NewValue);

	if (Attribute == GetDamageAttribute()) {
		NewValue = FMath::Clamp(NewValue, 0.f, Damage.GetCurrentValue());
	}
}

void UDamageAttributeSet::PreAttributeBaseChange(const FGameplayAttribute& Attribute, float& NewValue) const
{
	Super::PreAttributeBaseChange(Attribute, NewValue);

	if (Attribute == GetDamageAttribute()) {
		NewValue = FMath::Clamp(NewValue, 0.f, Damage.GetCurrentValue());
	}
	
}

