// Fill out your copyright notice in the Description page of Project Settings.


#include "SomePointer.h"

// Sets default values
ASomePointer::ASomePointer()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	PointerTextCompoint = CreateDefaultSubobject<UTextRenderComponent>(TEXT("My Pointer Text Component"));

}

// Called when the game starts or when spawned
void ASomePointer::BeginPlay()
{
	Super::BeginPlay();
	PointerTextCompoint->SetText(FText::FromString(TEXT("Drink me!")));
	
}

// Called every frame
void ASomePointer::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

