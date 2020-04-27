// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "VRDebugging/TestActorComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTestActorComponent() {}
// Cross Module References
	VRDEBUGGING_API UClass* Z_Construct_UClass_UTestActorComponent_NoRegister();
	VRDEBUGGING_API UClass* Z_Construct_UClass_UTestActorComponent();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	UPackage* Z_Construct_UPackage__Script_VRDebugging();
	VRDEBUGGING_API UFunction* Z_Construct_UFunction_UTestActorComponent_testFunction();
// End Cross Module References
	void UTestActorComponent::StaticRegisterNativesUTestActorComponent()
	{
		UClass* Class = UTestActorComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "testFunction", &UTestActorComponent::exectestFunction },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UTestActorComponent_testFunction_Statics
	{
		struct TestActorComponent_eventtestFunction_Parms
		{
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UTestActorComponent_testFunction_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TestActorComponent_eventtestFunction_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTestActorComponent_testFunction_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTestActorComponent_testFunction_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTestActorComponent_testFunction_Statics::Function_MetaDataParams[] = {
		{ "Category", "Attachment" },
		{ "ModuleRelativePath", "TestActorComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTestActorComponent_testFunction_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTestActorComponent, nullptr, "testFunction", nullptr, nullptr, sizeof(TestActorComponent_eventtestFunction_Parms), Z_Construct_UFunction_UTestActorComponent_testFunction_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UTestActorComponent_testFunction_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTestActorComponent_testFunction_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UTestActorComponent_testFunction_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTestActorComponent_testFunction()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTestActorComponent_testFunction_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UTestActorComponent_NoRegister()
	{
		return UTestActorComponent::StaticClass();
	}
	struct Z_Construct_UClass_UTestActorComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_testInt_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_testInt;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UTestActorComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_VRDebugging,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UTestActorComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UTestActorComponent_testFunction, "testFunction" }, // 2998635485
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTestActorComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "TestActorComponent.h" },
		{ "ModuleRelativePath", "TestActorComponent.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTestActorComponent_Statics::NewProp_testInt_MetaData[] = {
		{ "Category", "Pawn" },
		{ "ModuleRelativePath", "TestActorComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UTestActorComponent_Statics::NewProp_testInt = { "testInt", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UTestActorComponent, testInt), METADATA_PARAMS(Z_Construct_UClass_UTestActorComponent_Statics::NewProp_testInt_MetaData, ARRAY_COUNT(Z_Construct_UClass_UTestActorComponent_Statics::NewProp_testInt_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UTestActorComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTestActorComponent_Statics::NewProp_testInt,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UTestActorComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTestActorComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UTestActorComponent_Statics::ClassParams = {
		&UTestActorComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UTestActorComponent_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		ARRAY_COUNT(FuncInfo),
		ARRAY_COUNT(Z_Construct_UClass_UTestActorComponent_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UTestActorComponent_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UTestActorComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UTestActorComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UTestActorComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UTestActorComponent, 3809727827);
	template<> VRDEBUGGING_API UClass* StaticClass<UTestActorComponent>()
	{
		return UTestActorComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UTestActorComponent(Z_Construct_UClass_UTestActorComponent, &UTestActorComponent::StaticClass, TEXT("/Script/VRDebugging"), TEXT("UTestActorComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UTestActorComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
