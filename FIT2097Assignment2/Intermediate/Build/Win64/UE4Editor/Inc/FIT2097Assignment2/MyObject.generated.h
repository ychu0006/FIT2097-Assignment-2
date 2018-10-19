// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef FIT2097ASSIGNMENT2_MyObject_generated_h
#error "MyObject.generated.h already included, missing '#pragma once' in MyObject.h"
#endif
#define FIT2097ASSIGNMENT2_MyObject_generated_h

#define FIT2097Assignment2_Source_FIT2097Assignment2_MyObject_h_13_RPC_WRAPPERS \
	virtual void WasToggled_Implementation(); \
 \
	DECLARE_FUNCTION(execOnRep_IsActive) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnRep_IsActive(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execWasToggled) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->WasToggled_Implementation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetActive) \
	{ \
		P_GET_UBOOL(Z_Param_NewObjectState); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetActive(Z_Param_NewObjectState); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsActive) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->IsActive(); \
		P_NATIVE_END; \
	}


#define FIT2097Assignment2_Source_FIT2097Assignment2_MyObject_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnRep_IsActive) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnRep_IsActive(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execWasToggled) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->WasToggled_Implementation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetActive) \
	{ \
		P_GET_UBOOL(Z_Param_NewObjectState); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetActive(Z_Param_NewObjectState); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsActive) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->IsActive(); \
		P_NATIVE_END; \
	}


#define FIT2097Assignment2_Source_FIT2097Assignment2_MyObject_h_13_EVENT_PARMS
#define FIT2097Assignment2_Source_FIT2097Assignment2_MyObject_h_13_CALLBACK_WRAPPERS
#define FIT2097Assignment2_Source_FIT2097Assignment2_MyObject_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAMyObject(); \
	friend FIT2097ASSIGNMENT2_API class UClass* Z_Construct_UClass_AMyObject(); \
public: \
	DECLARE_CLASS(AMyObject, AActor, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/FIT2097Assignment2"), NO_API) \
	DECLARE_SERIALIZER(AMyObject) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define FIT2097Assignment2_Source_FIT2097Assignment2_MyObject_h_13_INCLASS \
private: \
	static void StaticRegisterNativesAMyObject(); \
	friend FIT2097ASSIGNMENT2_API class UClass* Z_Construct_UClass_AMyObject(); \
public: \
	DECLARE_CLASS(AMyObject, AActor, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/FIT2097Assignment2"), NO_API) \
	DECLARE_SERIALIZER(AMyObject) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define FIT2097Assignment2_Source_FIT2097Assignment2_MyObject_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AMyObject(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AMyObject) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMyObject); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMyObject); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AMyObject(AMyObject&&); \
	NO_API AMyObject(const AMyObject&); \
public:


#define FIT2097Assignment2_Source_FIT2097Assignment2_MyObject_h_13_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AMyObject(AMyObject&&); \
	NO_API AMyObject(const AMyObject&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMyObject); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMyObject); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AMyObject)


#define FIT2097Assignment2_Source_FIT2097Assignment2_MyObject_h_13_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__bIsActive() { return STRUCT_OFFSET(AMyObject, bIsActive); }


#define FIT2097Assignment2_Source_FIT2097Assignment2_MyObject_h_10_PROLOG \
	FIT2097Assignment2_Source_FIT2097Assignment2_MyObject_h_13_EVENT_PARMS


#define FIT2097Assignment2_Source_FIT2097Assignment2_MyObject_h_13_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FIT2097Assignment2_Source_FIT2097Assignment2_MyObject_h_13_PRIVATE_PROPERTY_OFFSET \
	FIT2097Assignment2_Source_FIT2097Assignment2_MyObject_h_13_RPC_WRAPPERS \
	FIT2097Assignment2_Source_FIT2097Assignment2_MyObject_h_13_CALLBACK_WRAPPERS \
	FIT2097Assignment2_Source_FIT2097Assignment2_MyObject_h_13_INCLASS \
	FIT2097Assignment2_Source_FIT2097Assignment2_MyObject_h_13_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FIT2097Assignment2_Source_FIT2097Assignment2_MyObject_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FIT2097Assignment2_Source_FIT2097Assignment2_MyObject_h_13_PRIVATE_PROPERTY_OFFSET \
	FIT2097Assignment2_Source_FIT2097Assignment2_MyObject_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	FIT2097Assignment2_Source_FIT2097Assignment2_MyObject_h_13_CALLBACK_WRAPPERS \
	FIT2097Assignment2_Source_FIT2097Assignment2_MyObject_h_13_INCLASS_NO_PURE_DECLS \
	FIT2097Assignment2_Source_FIT2097Assignment2_MyObject_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FIT2097Assignment2_Source_FIT2097Assignment2_MyObject_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
