// Fill out your copyright notice in the Description page of Project Settings.


#include "DataActorComponent.h"
#include "Components/InputComponent.h"

#include "GameFramework/Actor.h"

// Sets default values for this component's properties
UDataActorComponent::UDataActorComponent()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	// ...
}


void UDataActorComponent::ChangeIndex(FVector vector)
{
	if (abs(vector.X) > abs(vector.Y))
	{
		ComponentIndex += FMath::Sign(vector.X);
		if (ComponentIndex < 0)
		{
			ComponentIndex = 0;
		}
	}
	else
	{
		ChildIndex += FMath::Sign(vector.Y);
		if (ChildIndex < 0)
		{
			ChildIndex = 0;
		}
	}

	if (currentlyGrabbedObjectReference)
	{
		SetReflectedData(currentlyGrabbedObjectReference);
	}
}

// Called when the game starts
void UDataActorComponent::BeginPlay()
{
	Super::BeginPlay();

	// ...
	
}


// Called every frame
void UDataActorComponent::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	// ...
	//MUIDisplayString = TEXT("Test String " + FString::FromInt(ChildIndex) + " " + FString::FromInt(ComponentIndex));
}

void UDataActorComponent::SetReflectedData(UObject* grabbedObject)
{
	if (grabbedObject != currentlyGrabbedObjectReference)
	{
		currentlyGrabbedObjectReference = grabbedObject;
	}
	// cpp functionality from blueprint
	// this might not be best practice but /shrug
	UE_LOG(LogTemp, Log, TEXT("I HAVE HIT THE FUNCTION"))
	TArray<AActor*> children = dynamic_cast<AActor*>(grabbedObject)->Children;
	children.Insert(dynamic_cast<AActor*>(grabbedObject), 0);
	MUIDisplayString = LogReflectedData(children[ChildIndex], ComponentIndex);
}

FString UDataActorComponent::ConvertFString(UProperty* prop, UObject* grabbedObj, FString type)
{
	if (type == "uint8")
	{
		//uint8 tempInt;
		//void* value = prop->ContainerPtrToValuePtr<uint8>(grabbedObj);
		//prop->CopyCompleteValue(&tempInt, value);
		//return std::to_string(tempInt);
		uint8 tempValue = *prop->ContainerPtrToValuePtr<uint8>(grabbedObj);
		return FString::FromInt(*prop->ContainerPtrToValuePtr<uint8>(grabbedObj));
	}
	else if (type == "int")
	{
		//return std::to_string(*prop->ContainerPtrToValuePtr<int>(grabbedObj));
		return FString::FromInt(*prop->ContainerPtrToValuePtr<int>(grabbedObj));
	}
	else if (type == "float")
	{
		//return std::to_string(*prop->ContainerPtrToValuePtr<float>(grabbedObj));
		return FString::SanitizeFloat(*prop->ContainerPtrToValuePtr<float>(grabbedObj));
	}
	return "";
}

FString UDataActorComponent::LogReflectedData(AActor* actor, uint8 propertyIndex)
{
	TFieldIterator<UProperty> PropIt(actor->GetClass());
	while (propertyIndex > 0 && PropIt)
	{
		++PropIt;
		propertyIndex--;
	}

	if (propertyIndex > 0)
	{
		ComponentIndex -= propertyIndex;
	}

	if (!PropIt)
	{
		ComponentIndex = 0;
		return "";
	}

	UProperty* Property = *PropIt;
	FName const PropertyName = Property->GetFName();
	FString string = ConvertFString(Property, actor, *Property->GetCPPType());

	UE_LOG(LogTemp, Log, TEXT("Name: %s"), *PropertyName.ToString())
	UE_LOG(LogTemp, Log, TEXT("Let's Try To Get Grab: %s"), *string)

	UE_LOG(LogTemp, Log, TEXT("CPP Type: %s"), *Property->GetCPPType())

	return TEXT("Name: " + PropertyName.ToString() + "\nType: " + Property->GetCPPType() + "\nValue: " + string);
}