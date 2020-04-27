// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class USceneComponent;
class UObject;
#ifdef VRDEBUGGING_DataActor_generated_h
#error "DataActor.generated.h already included, missing '#pragma once' in DataActor.h"
#endif
#define VRDEBUGGING_DataActor_generated_h

#define VRDebugging_Source_VRDebugging_DataActor_h_12_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execSetReflectedData) \
	{ \
		P_GET_OBJECT(USceneComponent,Z_Param_hand); \
		P_GET_OBJECT(UObject,Z_Param_grabbedObject); \
		P_GET_PROPERTY(UNameProperty,Z_Param_controllerHand); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetReflectedData(Z_Param_hand,Z_Param_grabbedObject,Z_Param_controllerHand); \
		P_NATIVE_END; \
	}


#define VRDebugging_Source_VRDebugging_DataActor_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSetReflectedData) \
	{ \
		P_GET_OBJECT(USceneComponent,Z_Param_hand); \
		P_GET_OBJECT(UObject,Z_Param_grabbedObject); \
		P_GET_PROPERTY(UNameProperty,Z_Param_controllerHand); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetReflectedData(Z_Param_hand,Z_Param_grabbedObject,Z_Param_controllerHand); \
		P_NATIVE_END; \
	}


#define VRDebugging_Source_VRDebugging_DataActor_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesADataActor(); \
	friend struct Z_Construct_UClass_ADataActor_Statics; \
public: \
	DECLARE_CLASS(ADataActor, AActor, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/VRDebugging"), NO_API) \
	DECLARE_SERIALIZER(ADataActor)


#define VRDebugging_Source_VRDebugging_DataActor_h_12_INCLASS \
private: \
	static void StaticRegisterNativesADataActor(); \
	friend struct Z_Construct_UClass_ADataActor_Statics; \
public: \
	DECLARE_CLASS(ADataActor, AActor, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/VRDebugging"), NO_API) \
	DECLARE_SERIALIZER(ADataActor)


#define VRDebugging_Source_VRDebugging_DataActor_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ADataActor(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ADataActor) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ADataActor); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ADataActor); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ADataActor(ADataActor&&); \
	NO_API ADataActor(const ADataActor&); \
public:


#define VRDebugging_Source_VRDebugging_DataActor_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ADataActor(ADataActor&&); \
	NO_API ADataActor(const ADataActor&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ADataActor); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ADataActor); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ADataActor)


#define VRDebugging_Source_VRDebugging_DataActor_h_12_PRIVATE_PROPERTY_OFFSET
#define VRDebugging_Source_VRDebugging_DataActor_h_9_PROLOG
#define VRDebugging_Source_VRDebugging_DataActor_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	VRDebugging_Source_VRDebugging_DataActor_h_12_PRIVATE_PROPERTY_OFFSET \
	VRDebugging_Source_VRDebugging_DataActor_h_12_RPC_WRAPPERS \
	VRDebugging_Source_VRDebugging_DataActor_h_12_INCLASS \
	VRDebugging_Source_VRDebugging_DataActor_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define VRDebugging_Source_VRDebugging_DataActor_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	VRDebugging_Source_VRDebugging_DataActor_h_12_PRIVATE_PROPERTY_OFFSET \
	VRDebugging_Source_VRDebugging_DataActor_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	VRDebugging_Source_VRDebugging_DataActor_h_12_INCLASS_NO_PURE_DECLS \
	VRDebugging_Source_VRDebugging_DataActor_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> VRDEBUGGING_API UClass* StaticClass<class ADataActor>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID VRDebugging_Source_VRDebugging_DataActor_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
