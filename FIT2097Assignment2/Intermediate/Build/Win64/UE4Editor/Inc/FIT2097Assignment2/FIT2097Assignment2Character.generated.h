// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AMyObject;
#ifdef FIT2097ASSIGNMENT2_FIT2097Assignment2Character_generated_h
#error "FIT2097Assignment2Character.generated.h already included, missing '#pragma once' in FIT2097Assignment2Character.h"
#endif
#define FIT2097ASSIGNMENT2_FIT2097Assignment2Character_generated_h

#define FIT2097Assignment2_Source_FIT2097Assignment2_FIT2097Assignment2Character_h_17_RPC_WRAPPERS \
	virtual bool ServerCheckAction_Validate(AMyObject* ); \
	virtual void ServerCheckAction_Implementation(AMyObject* object); \
 \
	DECLARE_FUNCTION(execUnPauseGame) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->UnPauseGame(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execPauseGame) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->PauseGame(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetHasFuse) \
	{ \
		P_GET_UBOOL(Z_Param_NewHasFuse); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetHasFuse(Z_Param_NewHasFuse); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetHasFuse) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->GetHasFuse(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetHasKey) \
	{ \
		P_GET_UBOOL(Z_Param_NewHasKey); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetHasKey(Z_Param_NewHasKey); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetHasKey) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->GetHasKey(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetMaxHealth) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->GetMaxHealth(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetCurrentHealth) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_NewCurrentHealth); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetCurrentHealth(Z_Param_NewCurrentHealth); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetCurrentHealth) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->GetCurrentHealth(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execServerCheckAction) \
	{ \
		P_GET_OBJECT(AMyObject,Z_Param_object); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		if (!P_THIS->ServerCheckAction_Validate(Z_Param_object)) \
		{ \
			RPC_ValidateFailed(TEXT("ServerCheckAction_Validate")); \
			return; \
		} \
		P_THIS->ServerCheckAction_Implementation(Z_Param_object); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execCheckAction) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->CheckAction(); \
		P_NATIVE_END; \
	}


#define FIT2097Assignment2_Source_FIT2097Assignment2_FIT2097Assignment2Character_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual bool ServerCheckAction_Validate(AMyObject* ); \
	virtual void ServerCheckAction_Implementation(AMyObject* object); \
 \
	DECLARE_FUNCTION(execUnPauseGame) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->UnPauseGame(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execPauseGame) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->PauseGame(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetHasFuse) \
	{ \
		P_GET_UBOOL(Z_Param_NewHasFuse); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetHasFuse(Z_Param_NewHasFuse); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetHasFuse) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->GetHasFuse(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetHasKey) \
	{ \
		P_GET_UBOOL(Z_Param_NewHasKey); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetHasKey(Z_Param_NewHasKey); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetHasKey) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->GetHasKey(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetMaxHealth) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->GetMaxHealth(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetCurrentHealth) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_NewCurrentHealth); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetCurrentHealth(Z_Param_NewCurrentHealth); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetCurrentHealth) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->GetCurrentHealth(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execServerCheckAction) \
	{ \
		P_GET_OBJECT(AMyObject,Z_Param_object); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		if (!P_THIS->ServerCheckAction_Validate(Z_Param_object)) \
		{ \
			RPC_ValidateFailed(TEXT("ServerCheckAction_Validate")); \
			return; \
		} \
		P_THIS->ServerCheckAction_Implementation(Z_Param_object); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execCheckAction) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->CheckAction(); \
		P_NATIVE_END; \
	}


#define FIT2097Assignment2_Source_FIT2097Assignment2_FIT2097Assignment2Character_h_17_EVENT_PARMS \
	struct FIT2097Assignment2Character_eventServerCheckAction_Parms \
	{ \
		AMyObject* object; \
	};


#define FIT2097Assignment2_Source_FIT2097Assignment2_FIT2097Assignment2Character_h_17_CALLBACK_WRAPPERS
#define FIT2097Assignment2_Source_FIT2097Assignment2_FIT2097Assignment2Character_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAFIT2097Assignment2Character(); \
	friend FIT2097ASSIGNMENT2_API class UClass* Z_Construct_UClass_AFIT2097Assignment2Character(); \
public: \
	DECLARE_CLASS(AFIT2097Assignment2Character, ACharacter, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/FIT2097Assignment2"), NO_API) \
	DECLARE_SERIALIZER(AFIT2097Assignment2Character) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define FIT2097Assignment2_Source_FIT2097Assignment2_FIT2097Assignment2Character_h_17_INCLASS \
private: \
	static void StaticRegisterNativesAFIT2097Assignment2Character(); \
	friend FIT2097ASSIGNMENT2_API class UClass* Z_Construct_UClass_AFIT2097Assignment2Character(); \
public: \
	DECLARE_CLASS(AFIT2097Assignment2Character, ACharacter, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/FIT2097Assignment2"), NO_API) \
	DECLARE_SERIALIZER(AFIT2097Assignment2Character) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define FIT2097Assignment2_Source_FIT2097Assignment2_FIT2097Assignment2Character_h_17_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AFIT2097Assignment2Character(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AFIT2097Assignment2Character) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AFIT2097Assignment2Character); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AFIT2097Assignment2Character); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AFIT2097Assignment2Character(AFIT2097Assignment2Character&&); \
	NO_API AFIT2097Assignment2Character(const AFIT2097Assignment2Character&); \
public:


#define FIT2097Assignment2_Source_FIT2097Assignment2_FIT2097Assignment2Character_h_17_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AFIT2097Assignment2Character(AFIT2097Assignment2Character&&); \
	NO_API AFIT2097Assignment2Character(const AFIT2097Assignment2Character&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AFIT2097Assignment2Character); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AFIT2097Assignment2Character); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AFIT2097Assignment2Character)


#define FIT2097Assignment2_Source_FIT2097Assignment2_FIT2097Assignment2Character_h_17_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__Mesh1P() { return STRUCT_OFFSET(AFIT2097Assignment2Character, Mesh1P); } \
	FORCEINLINE static uint32 __PPO__FP_Gun() { return STRUCT_OFFSET(AFIT2097Assignment2Character, FP_Gun); } \
	FORCEINLINE static uint32 __PPO__FP_MuzzleLocation() { return STRUCT_OFFSET(AFIT2097Assignment2Character, FP_MuzzleLocation); } \
	FORCEINLINE static uint32 __PPO__VR_Gun() { return STRUCT_OFFSET(AFIT2097Assignment2Character, VR_Gun); } \
	FORCEINLINE static uint32 __PPO__VR_MuzzleLocation() { return STRUCT_OFFSET(AFIT2097Assignment2Character, VR_MuzzleLocation); } \
	FORCEINLINE static uint32 __PPO__FirstPersonCameraComponent() { return STRUCT_OFFSET(AFIT2097Assignment2Character, FirstPersonCameraComponent); } \
	FORCEINLINE static uint32 __PPO__R_MotionController() { return STRUCT_OFFSET(AFIT2097Assignment2Character, R_MotionController); } \
	FORCEINLINE static uint32 __PPO__L_MotionController() { return STRUCT_OFFSET(AFIT2097Assignment2Character, L_MotionController); }


#define FIT2097Assignment2_Source_FIT2097Assignment2_FIT2097Assignment2Character_h_14_PROLOG \
	FIT2097Assignment2_Source_FIT2097Assignment2_FIT2097Assignment2Character_h_17_EVENT_PARMS


#define FIT2097Assignment2_Source_FIT2097Assignment2_FIT2097Assignment2Character_h_17_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FIT2097Assignment2_Source_FIT2097Assignment2_FIT2097Assignment2Character_h_17_PRIVATE_PROPERTY_OFFSET \
	FIT2097Assignment2_Source_FIT2097Assignment2_FIT2097Assignment2Character_h_17_RPC_WRAPPERS \
	FIT2097Assignment2_Source_FIT2097Assignment2_FIT2097Assignment2Character_h_17_CALLBACK_WRAPPERS \
	FIT2097Assignment2_Source_FIT2097Assignment2_FIT2097Assignment2Character_h_17_INCLASS \
	FIT2097Assignment2_Source_FIT2097Assignment2_FIT2097Assignment2Character_h_17_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FIT2097Assignment2_Source_FIT2097Assignment2_FIT2097Assignment2Character_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FIT2097Assignment2_Source_FIT2097Assignment2_FIT2097Assignment2Character_h_17_PRIVATE_PROPERTY_OFFSET \
	FIT2097Assignment2_Source_FIT2097Assignment2_FIT2097Assignment2Character_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	FIT2097Assignment2_Source_FIT2097Assignment2_FIT2097Assignment2Character_h_17_CALLBACK_WRAPPERS \
	FIT2097Assignment2_Source_FIT2097Assignment2_FIT2097Assignment2Character_h_17_INCLASS_NO_PURE_DECLS \
	FIT2097Assignment2_Source_FIT2097Assignment2_FIT2097Assignment2Character_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FIT2097Assignment2_Source_FIT2097Assignment2_FIT2097Assignment2Character_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
