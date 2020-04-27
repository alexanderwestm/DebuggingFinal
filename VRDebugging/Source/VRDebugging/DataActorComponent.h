// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "Components/InputComponent.h"
#include "DataActorComponent.generated.h"



UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class VRDEBUGGING_API UDataActorComponent : public UActorComponent
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	UDataActorComponent();

	UFUNCTION(BlueprintCallable, Category = "DataActorComponent")
	void SetReflectedData(UObject* grabbedObject);

	UFUNCTION(BlueprintCallable, Category ="DataActorComponent")
	inline FString GetUIDisplayString() {
		return MUIDisplayString;
	};

	UFUNCTION(BlueprintCallable, Category = "DataActorComponent")
		void ChangeIndex(FVector vector);

	UPROPERTY(BlueprintReadOnly, Category = "DataActorComponent")
	FString MUIDisplayString = TEXT("TEST STRING");
protected:
	// Called when the game starts
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;
	//virtual void SetupPlayerInputComponent(class UInputComponent* InputComponent) override;

private:
	FString ConvertFString(UProperty* prop, UObject* grabbedObj, FString type);
	FString LogReflectedData(AActor* actor, uint8 propertyIndex);

	int ChildIndex = 0, ComponentIndex = 0;

	UObject* currentlyGrabbedObjectReference;
};
