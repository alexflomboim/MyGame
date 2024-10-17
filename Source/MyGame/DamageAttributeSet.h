// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "TPAttributeSet.h"
#include "DamageAttributeSet.generated.h"

/**
 * 
 */
UCLASS()
class MYGAME_API UDamageAttributeSet : public UTPAttributeSet
{
	GENERATED_BODY()

public:
	UPROPERTY(BlueprintReadOnly)
	FGameplayAttributeData Damage;
	ATTRIBUTE_ACCESSORS(UDamageAttributeSet, Damage)
	
	UPROPERTY(BlueprintReadOnly)
	FGameplayAttributeData DamagePowerJump;
	ATTRIBUTE_ACCESSORS(UDamageAttributeSet, DamagePowerJump)

	virtual void PreAttributeChange(const FGameplayAttribute& Attribute, float& NewValue);
	virtual void PreAttributeBaseChange(const FGameplayAttribute& Attribute, float& NewValue) const;
	
};
