// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "TPAttributeSet.h"
#include "CollectiblesAttributeSet.generated.h"

/**
 * 
 */
UCLASS()
class MYGAME_API UCollectiblesAttributeSet : public UTPAttributeSet
{
	GENERATED_BODY()

public:
	UPROPERTY(BlueprintReadOnly)
	FGameplayAttributeData Coins;
	ATTRIBUTE_ACCESSORS(UCollectiblesAttributeSet, Coins)
	
};
