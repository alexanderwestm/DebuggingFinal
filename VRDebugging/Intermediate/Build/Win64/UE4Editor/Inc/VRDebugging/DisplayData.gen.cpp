// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "VRDebugging/DisplayData.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDisplayData() {}
// Cross Module References
	VRDEBUGGING_API UClass* Z_Construct_UClass_UDisplayData_NoRegister();
	VRDEBUGGING_API UClass* Z_Construct_UClass_UDisplayData();
	UMG_API UClass* Z_Construct_UClass_UWidgetComponent();
	UPackage* Z_Construct_UPackage__Script_VRDebugging();
// End Cross Module References
	void UDisplayData::StaticRegisterNativesUDisplayData()
	{
	}
	UClass* Z_Construct_UClass_UDisplayData_NoRegister()
	{
		return UDisplayData::StaticClass();
	}
	struct Z_Construct_UClass_UDisplayData_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDisplayData_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UWidgetComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_VRDebugging,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDisplayData_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Object Activation Components|Activation Sockets Base Lighting LOD Mesh Mobility Trigger" },
		{ "IncludePath", "DisplayData.h" },
		{ "ModuleRelativePath", "DisplayData.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDisplayData_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDisplayData>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UDisplayData_Statics::ClassParams = {
		&UDisplayData::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x00B010A4u,
		METADATA_PARAMS(Z_Construct_UClass_UDisplayData_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UDisplayData_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDisplayData()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UDisplayData_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UDisplayData, 2429533115);
	template<> VRDEBUGGING_API UClass* StaticClass<UDisplayData>()
	{
		return UDisplayData::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UDisplayData(Z_Construct_UClass_UDisplayData, &UDisplayData::StaticClass, TEXT("/Script/VRDebugging"), TEXT("UDisplayData"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDisplayData);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
