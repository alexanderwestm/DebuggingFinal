// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "VRDebugging/DataActor.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDataActor() {}
// Cross Module References
	VRDEBUGGING_API UClass* Z_Construct_UClass_ADataActor_NoRegister();
	VRDEBUGGING_API UClass* Z_Construct_UClass_ADataActor();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_VRDebugging();
	VRDEBUGGING_API UFunction* Z_Construct_UFunction_ADataActor_SetReflectedData();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
// End Cross Module References
	void ADataActor::StaticRegisterNativesADataActor()
	{
		UClass* Class = ADataActor::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "SetReflectedData", &ADataActor::execSetReflectedData },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ADataActor_SetReflectedData_Statics
	{
		struct DataActor_eventSetReflectedData_Parms
		{
			USceneComponent* hand;
			UObject* grabbedObject;
			FName controllerHand;
		};
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_controllerHand;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_grabbedObject;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_hand_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_hand;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_ADataActor_SetReflectedData_Statics::NewProp_controllerHand = { "controllerHand", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DataActor_eventSetReflectedData_Parms, controllerHand), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ADataActor_SetReflectedData_Statics::NewProp_grabbedObject = { "grabbedObject", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DataActor_eventSetReflectedData_Parms, grabbedObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ADataActor_SetReflectedData_Statics::NewProp_hand_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ADataActor_SetReflectedData_Statics::NewProp_hand = { "hand", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DataActor_eventSetReflectedData_Parms, hand), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ADataActor_SetReflectedData_Statics::NewProp_hand_MetaData, ARRAY_COUNT(Z_Construct_UFunction_ADataActor_SetReflectedData_Statics::NewProp_hand_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ADataActor_SetReflectedData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADataActor_SetReflectedData_Statics::NewProp_controllerHand,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADataActor_SetReflectedData_Statics::NewProp_grabbedObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADataActor_SetReflectedData_Statics::NewProp_hand,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ADataActor_SetReflectedData_Statics::Function_MetaDataParams[] = {
		{ "Category", "Test Functions" },
		{ "ModuleRelativePath", "DataActor.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ADataActor_SetReflectedData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ADataActor, nullptr, "SetReflectedData", nullptr, nullptr, sizeof(DataActor_eventSetReflectedData_Parms), Z_Construct_UFunction_ADataActor_SetReflectedData_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_ADataActor_SetReflectedData_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ADataActor_SetReflectedData_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_ADataActor_SetReflectedData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ADataActor_SetReflectedData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ADataActor_SetReflectedData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ADataActor_NoRegister()
	{
		return ADataActor::StaticClass();
	}
	struct Z_Construct_UClass_ADataActor_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ADataActor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_VRDebugging,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ADataActor_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ADataActor_SetReflectedData, "SetReflectedData" }, // 3543221992
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADataActor_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "DataActor.h" },
		{ "ModuleRelativePath", "DataActor.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ADataActor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ADataActor>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ADataActor_Statics::ClassParams = {
		&ADataActor::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_ADataActor_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_ADataActor_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ADataActor()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ADataActor_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ADataActor, 307072241);
	template<> VRDEBUGGING_API UClass* StaticClass<ADataActor>()
	{
		return ADataActor::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ADataActor(Z_Construct_UClass_ADataActor, &ADataActor::StaticClass, TEXT("/Script/VRDebugging"), TEXT("ADataActor"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ADataActor);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
