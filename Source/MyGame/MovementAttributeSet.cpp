// Fill out your copyright notice in the Description page of Project Settings.


#include "MovementAttributeSet.h"
#include "MyGameCharacter.h"
#include "TPPlayerState.h"
#include "GameFramework/CharacterMovementComponent.h"

void UMovementAttributeSet::PostAttributeChange(const FGameplayAttribute& Attribute, float OldValue, float NewValue)
{
	if (Attribute == GetSpeedAttribute()) {	
		UCharacterMovementComponent* MovementPtr = Cast<AMyGameCharacter>(GetOwningAbilitySystemComponent()->GetAvatarActor())->GetCharacterMovement();
		MovementPtr->MaxWalkSpeed = NewValue;
		/*ATPPlayerState* PlayerState = Cast<ATPPlayerState>(GetOwningActor());
		if (PlayerState != nullptr) {
			AMyGameCharacter *character = Cast<AMyGameCharacter>(PlayerState->GetPawn());
			UCharacterMovementComponent* MovementPtr = character->GetCharacterMovement();
			MovementPtr->MaxWalkSpeed = NewValue;
		}*/
	}
}
