// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "DataActor.generated.h"

UCLASS()
class VRDEBUGGING_API ADataActor : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ADataActor();

	UFUNCTION(BlueprintCallable, Category="Test Functions")
	void SetReflectedData(USceneComponent* hand, UObject* grabbedObject, FName controllerHand);

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

private:
	FString ConvertFString(UProperty* prop, UObject* grabbedObj, FString type);
	void LogReflectedData(AActor* actor);

	FString leftHandString, rightHandString;
};
