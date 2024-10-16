// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PlayerState.h"
#include "AbilitySystemInterface.h"
#include "TPPlayerState.generated.h"

/**
 * 
 */
UCLASS()
class MYGAME_API ATPPlayerState : public APlayerState, public IAbilitySystemInterface
{
	GENERATED_BODY()

public:
	ATPPlayerState();
	
	virtual UAbilitySystemComponent* GetAbilitySystemComponent() const override { return AbilitySystemComponent; }

public:
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	UAbilitySystemComponent* AbilitySystemComponent;
};
