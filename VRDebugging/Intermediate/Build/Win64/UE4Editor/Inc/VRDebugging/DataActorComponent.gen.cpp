// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "VRDebugging/DataActorComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDataActorComponent() {}
// Cross Module References
	VRDEBUGGING_API UClass* Z_Construct_UClass_UDataActorComponent_NoRegister();
	VRDEBUGGING_API UClass* Z_Construct_UClass_UDataActorComponent();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	UPackage* Z_Construct_UPackage__Script_VRDebugging();
	VRDEBUGGING_API UFunction* Z_Construct_UFunction_UDataActorComponent_ChangeIndex();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	VRDEBUGGING_API UFunction* Z_Construct_UFunction_UDataActorComponent_GetUIDisplayString();
	VRDEBUGGING_API UFunction* Z_Construct_UFunction_UDataActorComponent_SetReflectedData();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
// End Cross Module References
	void UDataActorComponent::StaticRegisterNativesUDataActorComponent()
	{
		UClass* Class = UDataActorComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ChangeIndex", &UDataActorComponent::execChangeIndex },
			{ "GetUIDisplayString", &UDataActorComponent::execGetUIDisplayString },
			{ "SetReflectedData", &UDataActorComponent::execSetReflectedData },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UDataActorComponent_ChangeIndex_Statics
	{
		struct DataActorComponent_eventChangeIndex_Parms
		{
			FVector vector;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_vector;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UDataActorComponent_ChangeIndex_Statics::NewProp_vector = { "vector", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DataActorComponent_eventChangeIndex_Parms, vector), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDataActorComponent_ChangeIndex_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDataActorComponent_ChangeIndex_Statics::NewProp_vector,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDataActorComponent_ChangeIndex_Statics::Function_MetaDataParams[] = {
		{ "Category", "DataActorComponent" },
		{ "ModuleRelativePath", "DataActorComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDataActorComponent_ChangeIndex_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDataActorComponent, nullptr, "ChangeIndex", nullptr, nullptr, sizeof(DataActorComponent_eventChangeIndex_Parms), Z_Construct_UFunction_UDataActorComponent_ChangeIndex_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UDataActorComponent_ChangeIndex_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDataActorComponent_ChangeIndex_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UDataActorComponent_ChangeIndex_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDataActorComponent_ChangeIndex()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDataActorComponent_ChangeIndex_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDataActorComponent_GetUIDisplayString_Statics
	{
		struct DataActorComponent_eventGetUIDisplayString_Parms
		{
			FString ReturnValue;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UDataActorComponent_GetUIDisplayString_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DataActorComponent_eventGetUIDisplayString_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDataActorComponent_GetUIDisplayString_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDataActorComponent_GetUIDisplayString_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDataActorComponent_GetUIDisplayString_Statics::Function_MetaDataParams[] = {
		{ "Category", "DataActorComponent" },
		{ "ModuleRelativePath", "DataActorComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDataActorComponent_GetUIDisplayString_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDataActorComponent, nullptr, "GetUIDisplayString", nullptr, nullptr, sizeof(DataActorComponent_eventGetUIDisplayString_Parms), Z_Construct_UFunction_UDataActorComponent_GetUIDisplayString_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UDataActorComponent_GetUIDisplayString_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDataActorComponent_GetUIDisplayString_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UDataActorComponent_GetUIDisplayString_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDataActorComponent_GetUIDisplayString()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDataActorComponent_GetUIDisplayString_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDataActorComponent_SetReflectedData_Statics
	{
		struct DataActorComponent_eventSetReflectedData_Parms
		{
			UObject* grabbedObject;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_grabbedObject;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDataActorComponent_SetReflectedData_Statics::NewProp_grabbedObject = { "grabbedObject", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DataActorComponent_eventSetReflectedData_Parms, grabbedObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDataActorComponent_SetReflectedData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDataActorComponent_SetReflectedData_Statics::NewProp_grabbedObject,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDataActorComponent_SetReflectedData_Statics::Function_MetaDataParams[] = {
		{ "Category", "DataActorComponent" },
		{ "ModuleRelativePath", "DataActorComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDataActorComponent_SetReflectedData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDataActorComponent, nullptr, "SetReflectedData", nullptr, nullptr, sizeof(DataActorComponent_eventSetReflectedData_Parms), Z_Construct_UFunction_UDataActorComponent_SetReflectedData_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UDataActorComponent_SetReflectedData_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDataActorComponent_SetReflectedData_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UDataActorComponent_SetReflectedData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDataActorComponent_SetReflectedData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDataActorComponent_SetReflectedData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UDataActorComponent_NoRegister()
	{
		return UDataActorComponent::StaticClass();
	}
	struct Z_Construct_UClass_UDataActorComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MUIDisplayString_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_MUIDisplayString;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDataActorComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_VRDebugging,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UDataActorComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UDataActorComponent_ChangeIndex, "ChangeIndex" }, // 2697284765
		{ &Z_Construct_UFunction_UDataActorComponent_GetUIDisplayString, "GetUIDisplayString" }, // 868522146
		{ &Z_Construct_UFunction_UDataActorComponent_SetReflectedData, "SetReflectedData" }, // 1293658410
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDataActorComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "DataActorComponent.h" },
		{ "ModuleRelativePath", "DataActorComponent.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDataActorComponent_Statics::NewProp_MUIDisplayString_MetaData[] = {
		{ "Category", "DataActorComponent" },
		{ "ModuleRelativePath", "DataActorComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UDataActorComponent_Statics::NewProp_MUIDisplayString = { "MUIDisplayString", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDataActorComponent, MUIDisplayString), METADATA_PARAMS(Z_Construct_UClass_UDataActorComponent_Statics::NewProp_MUIDisplayString_MetaData, ARRAY_COUNT(Z_Construct_UClass_UDataActorComponent_Statics::NewProp_MUIDisplayString_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UDataActorComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDataActorComponent_Statics::NewProp_MUIDisplayString,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDataActorComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDataActorComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UDataActorComponent_Statics::ClassParams = {
		&UDataActorComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UDataActorComponent_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		ARRAY_COUNT(FuncInfo),
		ARRAY_COUNT(Z_Construct_UClass_UDataActorComponent_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UDataActorComponent_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UDataActorComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDataActorComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UDataActorComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UDataActorComponent, 3621567761);
	template<> VRDEBUGGING_API UClass* StaticClass<UDataActorComponent>()
	{
		return UDataActorComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UDataActorComponent(Z_Construct_UClass_UDataActorComponent, &UDataActorComponent::StaticClass, TEXT("/Script/VRDebugging"), TEXT("UDataActorComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDataActorComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
