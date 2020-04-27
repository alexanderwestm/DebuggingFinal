// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FVector;
class UObject;
#ifdef VRDEBUGGING_DataActorComponent_generated_h
#error "DataActorComponent.generated.h already included, missing '#pragma once' in DataActorComponent.h"
#endif
#define VRDEBUGGING_DataActorComponent_generated_h

#define VRDebugging_Source_VRDebugging_DataActorComponent_h_15_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execChangeIndex) \
	{ \
		P_GET_STRUCT(FVector,Z_Param_vector); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->ChangeIndex(Z_Param_vector); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetUIDisplayString) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FString*)Z_Param__Result=P_THIS->GetUIDisplayString(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetReflectedData) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_grabbedObject); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetReflectedData(Z_Param_grabbedObject); \
		P_NATIVE_END; \
	}


#define VRDebugging_Source_VRDebugging_DataActorComponent_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execChangeIndex) \
	{ \
		P_GET_STRUCT(FVector,Z_Param_vector); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->ChangeIndex(Z_Param_vector); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetUIDisplayString) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FString*)Z_Param__Result=P_THIS->GetUIDisplayString(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetReflectedData) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_grabbedObject); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetReflectedData(Z_Param_grabbedObject); \
		P_NATIVE_END; \
	}


#define VRDebugging_Source_VRDebugging_DataActorComponent_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUDataActorComponent(); \
	friend struct Z_Construct_UClass_UDataActorComponent_Statics; \
public: \
	DECLARE_CLASS(UDataActorComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/VRDebugging"), NO_API) \
	DECLARE_SERIALIZER(UDataActorComponent)


#define VRDebugging_Source_VRDebugging_DataActorComponent_h_15_INCLASS \
private: \
	static void StaticRegisterNativesUDataActorComponent(); \
	friend struct Z_Construct_UClass_UDataActorComponent_Statics; \
public: \
	DECLARE_CLASS(UDataActorComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/VRDebugging"), NO_API) \
	DECLARE_SERIALIZER(UDataActorComponent)


#define VRDebugging_Source_VRDebugging_DataActorComponent_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UDataActorComponent(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDataActorComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDataActorComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDataActorComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UDataActorComponent(UDataActorComponent&&); \
	NO_API UDataActorComponent(const UDataActorComponent&); \
public:


#define VRDebugging_Source_VRDebugging_DataActorComponent_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UDataActorComponent(UDataActorComponent&&); \
	NO_API UDataActorComponent(const UDataActorComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDataActorComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDataActorComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UDataActorComponent)


#define VRDebugging_Source_VRDebugging_DataActorComponent_h_15_PRIVATE_PROPERTY_OFFSET
#define VRDebugging_Source_VRDebugging_DataActorComponent_h_12_PROLOG
#define VRDebugging_Source_VRDebugging_DataActorComponent_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	VRDebugging_Source_VRDebugging_DataActorComponent_h_15_PRIVATE_PROPERTY_OFFSET \
	VRDebugging_Source_VRDebugging_DataActorComponent_h_15_RPC_WRAPPERS \
	VRDebugging_Source_VRDebugging_DataActorComponent_h_15_INCLASS \
	VRDebugging_Source_VRDebugging_DataActorComponent_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define VRDebugging_Source_VRDebugging_DataActorComponent_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	VRDebugging_Source_VRDebugging_DataActorComponent_h_15_PRIVATE_PROPERTY_OFFSET \
	VRDebugging_Source_VRDebugging_DataActorComponent_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	VRDebugging_Source_VRDebugging_DataActorComponent_h_15_INCLASS_NO_PURE_DECLS \
	VRDebugging_Source_VRDebugging_DataActorComponent_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> VRDEBUGGING_API UClass* StaticClass<class UDataActorComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID VRDebugging_Source_VRDebugging_DataActorComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
