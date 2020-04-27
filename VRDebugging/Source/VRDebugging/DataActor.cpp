// Fill out your copyright notice in the Description page of Project Settings.


#include "DataActor.h"

// Sets default values
ADataActor::ADataActor()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
}

void ADataActor::SetReflectedData(USceneComponent* hand, UObject* grabbedObject, FName controllerHand)
{
	// cpp functionality from blueprint
	// this might not be best practice but /shrug
	UE_LOG(LogTemp, Log, TEXT("I HAVE HIT THE FUNCTION"))
	bool isLeftHand = controllerHand == "Left";
	TArray<AActor*> children = dynamic_cast<AActor*>(grabbedObject)->Children;

	UE_LOG(LogTemp, Log, TEXT("First Actor\n"))
	LogReflectedData(dynamic_cast<AActor*>(grabbedObject));
	for (AActor* child : children)
	{
		UE_LOG(LogTemp, Log, TEXT("Actor: %s\n"), *child->GetFName().ToString())
		LogReflectedData(child);
	}
}

// Called when the game starts or when spawned
void ADataActor::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ADataActor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

FString ADataActor::ConvertFString(UProperty* prop, UObject* grabbedObj, FString type)
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

void ADataActor::LogReflectedData(AActor* actor)
{
	for (TFieldIterator<UProperty> PropIt(actor->GetClass()); PropIt; ++PropIt)
	{
		UProperty* Property = *PropIt;
		FName const PropertyName = Property->GetFName();
		//void* ptr = Property->ContainerPtrToValuePtr<void>(grabbedObject);
		FString string = ConvertFString(Property, actor, *Property->GetCPPType());

		UE_LOG(LogTemp, Log, TEXT("Name: %s"), *PropertyName.ToString())
		UE_LOG(LogTemp, Log, TEXT("Let's Try To Get Grab: %s"), *string)

		//UE_LOG(LogTemp, Log, TEXT("CPP Macro Type: %s"), Property->GetCPPMacroType())
		UE_LOG(LogTemp, Log, TEXT("CPP Type: %s"), *Property->GetCPPType())

		//UE_LOG(LogTemp, Log, "%s", Property->value)
		//void* ptr = Property->ContainerPtrToValuePtr<void>(grabbedObject);
	}
}
