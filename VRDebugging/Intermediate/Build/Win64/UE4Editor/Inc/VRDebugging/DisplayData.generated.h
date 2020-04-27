// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef VRDEBUGGING_DisplayData_generated_h
#error "DisplayData.generated.h already included, missing '#pragma once' in DisplayData.h"
#endif
#define VRDEBUGGING_DisplayData_generated_h

#define VRDebugging_Source_VRDebugging_DisplayData_h_15_RPC_WRAPPERS
#define VRDebugging_Source_VRDebugging_DisplayData_h_15_RPC_WRAPPERS_NO_PURE_DECLS
#define VRDebugging_Source_VRDebugging_DisplayData_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUDisplayData(); \
	friend struct Z_Construct_UClass_UDisplayData_Statics; \
public: \
	DECLARE_CLASS(UDisplayData, UWidgetComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/VRDebugging"), NO_API) \
	DECLARE_SERIALIZER(UDisplayData)


#define VRDebugging_Source_VRDebugging_DisplayData_h_15_INCLASS \
private: \
	static void StaticRegisterNativesUDisplayData(); \
	friend struct Z_Construct_UClass_UDisplayData_Statics; \
public: \
	DECLARE_CLASS(UDisplayData, UWidgetComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/VRDebugging"), NO_API) \
	DECLARE_SERIALIZER(UDisplayData)


#define VRDebugging_Source_VRDebugging_DisplayData_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UDisplayData(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDisplayData) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDisplayData); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDisplayData); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UDisplayData(UDisplayData&&); \
	NO_API UDisplayData(const UDisplayData&); \
public:


#define VRDebugging_Source_VRDebugging_DisplayData_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UDisplayData(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UDisplayData(UDisplayData&&); \
	NO_API UDisplayData(const UDisplayData&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDisplayData); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDisplayData); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDisplayData)


#define VRDebugging_Source_VRDebugging_DisplayData_h_15_PRIVATE_PROPERTY_OFFSET
#define VRDebugging_Source_VRDebugging_DisplayData_h_12_PROLOG
#define VRDebugging_Source_VRDebugging_DisplayData_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	VRDebugging_Source_VRDebugging_DisplayData_h_15_PRIVATE_PROPERTY_OFFSET \
	VRDebugging_Source_VRDebugging_DisplayData_h_15_RPC_WRAPPERS \
	VRDebugging_Source_VRDebugging_DisplayData_h_15_INCLASS \
	VRDebugging_Source_VRDebugging_DisplayData_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define VRDebugging_Source_VRDebugging_DisplayData_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	VRDebugging_Source_VRDebugging_DisplayData_h_15_PRIVATE_PROPERTY_OFFSET \
	VRDebugging_Source_VRDebugging_DisplayData_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	VRDebugging_Source_VRDebugging_DisplayData_h_15_INCLASS_NO_PURE_DECLS \
	VRDebugging_Source_VRDebugging_DisplayData_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> VRDEBUGGING_API UClass* StaticClass<class UDisplayData>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID VRDebugging_Source_VRDebugging_DisplayData_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
