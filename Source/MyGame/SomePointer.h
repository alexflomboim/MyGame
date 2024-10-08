// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Components/TextRenderComponent.h"
#include "SomePointer.generated.h"

UCLASS()
class MYGAME_API ASomePointer : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ASomePointer();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	UPROPERTY(EditAnywhere);
	TObjectPtr<UTextRenderComponent> PointerTextCompoint;
	

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
