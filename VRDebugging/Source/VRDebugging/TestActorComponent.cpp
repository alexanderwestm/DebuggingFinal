// Fill out your copyright notice in the Description page of Project Settings.


#include "TestActorComponent.h"

// Sets default values for this component's properties
UTestActorComponent::UTestActorComponent()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	testInt = 100;

	// ...
}


int32 UTestActorComponent::testFunction()
{
	return 20;
}

void UTestActorComponent::IncTestInt()
{
	testInt += -testInt * 2;
}

// Called when the game starts
void UTestActorComponent::BeginPlay()
{
	Super::BeginPlay();

	// ...
	
}


// Called every frame
void UTestActorComponent::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	// ...
}

