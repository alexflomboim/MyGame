// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "TPAttributeSet.h"
#include "MovementAttributeSet.generated.h"

/**
 * 
 */
UCLASS()
class MYGAME_API UMovementAttributeSet : public UTPAttributeSet
{
	GENERATED_BODY()

public:

	UPROPERTY(BlueprintReadOnly)
	FGameplayAttributeData Speed;
	ATTRIBUTE_ACCESSORS(UMovementAttributeSet, Speed)

	UPROPERTY(BlueprintReadOnly)
	FGameplayAttributeData JumpVelocity;
	ATTRIBUTE_ACCESSORS(UMovementAttributeSet, JumpVelocity)

	

	void PostAttributeChange(const FGameplayAttribute& Attribute, float OldValue, float NewValue);

	
};
