// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class EItemType : uint8;
#ifdef FIT2097ASSIGNMENT2_Item_generated_h
#error "Item.generated.h already included, missing '#pragma once' in Item.h"
#endif
#define FIT2097ASSIGNMENT2_Item_generated_h

#define FIT2097Assignment2_Source_FIT2097Assignment2_Item_h_23_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execSetType) \
	{ \
		P_GET_ENUM(EItemType,Z_Param_NewItemType); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetType(EItemType(Z_Param_NewItemType)); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetType) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(EItemType*)Z_Param__Result=P_THIS->GetType(); \
		P_NATIVE_END; \
	}


#define FIT2097Assignment2_Source_FIT2097Assignment2_Item_h_23_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSetType) \
	{ \
		P_GET_ENUM(EItemType,Z_Param_NewItemType); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetType(EItemType(Z_Param_NewItemType)); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetType) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(EItemType*)Z_Param__Result=P_THIS->GetType(); \
		P_NATIVE_END; \
	}


#define FIT2097Assignment2_Source_FIT2097Assignment2_Item_h_23_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAItem(); \
	friend FIT2097ASSIGNMENT2_API class UClass* Z_Construct_UClass_AItem(); \
public: \
	DECLARE_CLASS(AItem, AMyObject, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/FIT2097Assignment2"), NO_API) \
	DECLARE_SERIALIZER(AItem) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define FIT2097Assignment2_Source_FIT2097Assignment2_Item_h_23_INCLASS \
private: \
	static void StaticRegisterNativesAItem(); \
	friend FIT2097ASSIGNMENT2_API class UClass* Z_Construct_UClass_AItem(); \
public: \
	DECLARE_CLASS(AItem, AMyObject, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/FIT2097Assignment2"), NO_API) \
	DECLARE_SERIALIZER(AItem) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define FIT2097Assignment2_Source_FIT2097Assignment2_Item_h_23_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AItem(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AItem) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AItem); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AItem); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AItem(AItem&&); \
	NO_API AItem(const AItem&); \
public:


#define FIT2097Assignment2_Source_FIT2097Assignment2_Item_h_23_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AItem(AItem&&); \
	NO_API AItem(const AItem&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AItem); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AItem); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AItem)


#define FIT2097Assignment2_Source_FIT2097Assignment2_Item_h_23_PRIVATE_PROPERTY_OFFSET
#define FIT2097Assignment2_Source_FIT2097Assignment2_Item_h_20_PROLOG
#define FIT2097Assignment2_Source_FIT2097Assignment2_Item_h_23_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FIT2097Assignment2_Source_FIT2097Assignment2_Item_h_23_PRIVATE_PROPERTY_OFFSET \
	FIT2097Assignment2_Source_FIT2097Assignment2_Item_h_23_RPC_WRAPPERS \
	FIT2097Assignment2_Source_FIT2097Assignment2_Item_h_23_INCLASS \
	FIT2097Assignment2_Source_FIT2097Assignment2_Item_h_23_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FIT2097Assignment2_Source_FIT2097Assignment2_Item_h_23_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FIT2097Assignment2_Source_FIT2097Assignment2_Item_h_23_PRIVATE_PROPERTY_OFFSET \
	FIT2097Assignment2_Source_FIT2097Assignment2_Item_h_23_RPC_WRAPPERS_NO_PURE_DECLS \
	FIT2097Assignment2_Source_FIT2097Assignment2_Item_h_23_INCLASS_NO_PURE_DECLS \
	FIT2097Assignment2_Source_FIT2097Assignment2_Item_h_23_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FIT2097Assignment2_Source_FIT2097Assignment2_Item_h


#define FOREACH_ENUM_EITEMTYPE(op) \
	op(EItemType::HEALTH) \
	op(EItemType::KEY) \
	op(EItemType::FUSE) 
PRAGMA_ENABLE_DEPRECATION_WARNINGS
