// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "MyObject.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMyObject() {}
// Cross Module References
	FIT2097ASSIGNMENT2_API UClass* Z_Construct_UClass_AMyObject_NoRegister();
	FIT2097ASSIGNMENT2_API UClass* Z_Construct_UClass_AMyObject();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_FIT2097Assignment2();
	FIT2097ASSIGNMENT2_API UFunction* Z_Construct_UFunction_AMyObject_IsActive();
	FIT2097ASSIGNMENT2_API UFunction* Z_Construct_UFunction_AMyObject_OnRep_IsActive();
	FIT2097ASSIGNMENT2_API UFunction* Z_Construct_UFunction_AMyObject_SetActive();
	FIT2097ASSIGNMENT2_API UFunction* Z_Construct_UFunction_AMyObject_WasToggled();
// End Cross Module References
	static FName NAME_AMyObject_WasToggled = FName(TEXT("WasToggled"));
	void AMyObject::WasToggled()
	{
		ProcessEvent(FindFunctionChecked(NAME_AMyObject_WasToggled),NULL);
	}
	void AMyObject::StaticRegisterNativesAMyObject()
	{
		UClass* Class = AMyObject::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "IsActive", &AMyObject::execIsActive },
			{ "OnRep_IsActive", &AMyObject::execOnRep_IsActive },
			{ "SetActive", &AMyObject::execSetActive },
			{ "WasToggled", &AMyObject::execWasToggled },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	UFunction* Z_Construct_UFunction_AMyObject_IsActive()
	{
		struct MyObject_eventIsActive_Parms
		{
			bool ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			auto NewProp_ReturnValue_SetBit = [](void* Obj){ ((MyObject_eventIsActive_Parms*)Obj)->ReturnValue = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Bool, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(MyObject_eventIsActive_Parms), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_ReturnValue_SetBit)>::SetBit, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Object" },
				{ "ModuleRelativePath", "MyObject.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_AMyObject, "IsActive", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x14020401, sizeof(MyObject_eventIsActive_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_AMyObject_OnRep_IsActive()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "ModuleRelativePath", "MyObject.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_AMyObject, "OnRep_IsActive", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00080400, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_AMyObject_SetActive()
	{
		struct MyObject_eventSetActive_Parms
		{
			bool NewObjectState;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			auto NewProp_NewObjectState_SetBit = [](void* Obj){ ((MyObject_eventSetActive_Parms*)Obj)->NewObjectState = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_NewObjectState = { UE4CodeGen_Private::EPropertyClass::Bool, "NewObjectState", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(MyObject_eventSetActive_Parms), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_NewObjectState_SetBit)>::SetBit, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_NewObjectState,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Object" },
				{ "ModuleRelativePath", "MyObject.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_AMyObject, "SetActive", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(MyObject_eventSetActive_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_AMyObject_WasToggled()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Object" },
				{ "ModuleRelativePath", "MyObject.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_AMyObject, "WasToggled", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x08020C00, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AMyObject_NoRegister()
	{
		return AMyObject::StaticClass();
	}
	UClass* Z_Construct_UClass_AMyObject()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_AActor,
				(UObject* (*)())Z_Construct_UPackage__Script_FIT2097Assignment2,
			};
			static const FClassFunctionLinkInfo FuncInfo[] = {
				{ &Z_Construct_UFunction_AMyObject_IsActive, "IsActive" }, // 3106873625
				{ &Z_Construct_UFunction_AMyObject_OnRep_IsActive, "OnRep_IsActive" }, // 187903317
				{ &Z_Construct_UFunction_AMyObject_SetActive, "SetActive" }, // 2484516618
				{ &Z_Construct_UFunction_AMyObject_WasToggled, "WasToggled" }, // 1580065108
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "IncludePath", "MyObject.h" },
				{ "ModuleRelativePath", "MyObject.h" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsActive_MetaData[] = {
				{ "ModuleRelativePath", "MyObject.h" },
			};
#endif
			auto NewProp_bIsActive_SetBit = [](void* Obj){ ((AMyObject*)Obj)->bIsActive = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsActive = { UE4CodeGen_Private::EPropertyClass::Bool, "bIsActive", RF_Public|RF_Transient|RF_MarkAsNative, 0x0020080000000020, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(AMyObject), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bIsActive_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bIsActive_MetaData, ARRAY_COUNT(NewProp_bIsActive_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IsObject_MetaData[] = {
				{ "Category", "Object" },
				{ "ModuleRelativePath", "MyObject.h" },
			};
#endif
			auto NewProp_IsObject_SetBit = [](void* Obj){ ((AMyObject*)Obj)->IsObject = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_IsObject = { UE4CodeGen_Private::EPropertyClass::Bool, "IsObject", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(AMyObject), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_IsObject_SetBit)>::SetBit, METADATA_PARAMS(NewProp_IsObject_MetaData, ARRAY_COUNT(NewProp_IsObject_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bIsActive,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_IsObject,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<AMyObject>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&AMyObject::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00900080u,
				FuncInfo, ARRAY_COUNT(FuncInfo),
				PropPointers, ARRAY_COUNT(PropPointers),
				nullptr,
				&StaticCppClassTypeInfo,
				nullptr, 0,
				METADATA_PARAMS(Class_MetaDataParams, ARRAY_COUNT(Class_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUClass(OuterClass, ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AMyObject, 3067956684);
	static FCompiledInDefer Z_CompiledInDefer_UClass_AMyObject(Z_Construct_UClass_AMyObject, &AMyObject::StaticClass, TEXT("/Script/FIT2097Assignment2"), TEXT("AMyObject"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AMyObject);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
