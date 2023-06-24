// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "StoryGame/EnemyPawnStandart.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEnemyPawnStandart() {}
// Cross Module References
	STORYGAME_API UClass* Z_Construct_UClass_AEnemyPawnStandart_NoRegister();
	STORYGAME_API UClass* Z_Construct_UClass_AEnemyPawnStandart();
	ENGINE_API UClass* Z_Construct_UClass_APawn();
	UPackage* Z_Construct_UPackage__Script_StoryGame();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UBoxComponent_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(AEnemyPawnStandart::execOnEnemyOverlap)
	{
		P_GET_OBJECT(AActor,Z_Param_OverlapedActor);
		P_GET_OBJECT(AActor,Z_Param_OtherActor);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnEnemyOverlap(Z_Param_OverlapedActor,Z_Param_OtherActor);
		P_NATIVE_END;
	}
	void AEnemyPawnStandart::StaticRegisterNativesAEnemyPawnStandart()
	{
		UClass* Class = AEnemyPawnStandart::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnEnemyOverlap", &AEnemyPawnStandart::execOnEnemyOverlap },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AEnemyPawnStandart_OnEnemyOverlap_Statics
	{
		struct EnemyPawnStandart_eventOnEnemyOverlap_Parms
		{
			AActor* OverlapedActor;
			AActor* OtherActor;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OverlapedActor;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OtherActor;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AEnemyPawnStandart_OnEnemyOverlap_Statics::NewProp_OverlapedActor = { "OverlapedActor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EnemyPawnStandart_eventOnEnemyOverlap_Parms, OverlapedActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AEnemyPawnStandart_OnEnemyOverlap_Statics::NewProp_OtherActor = { "OtherActor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EnemyPawnStandart_eventOnEnemyOverlap_Parms, OtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AEnemyPawnStandart_OnEnemyOverlap_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AEnemyPawnStandart_OnEnemyOverlap_Statics::NewProp_OverlapedActor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AEnemyPawnStandart_OnEnemyOverlap_Statics::NewProp_OtherActor,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AEnemyPawnStandart_OnEnemyOverlap_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "EnemyPawnStandart.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AEnemyPawnStandart_OnEnemyOverlap_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AEnemyPawnStandart, nullptr, "OnEnemyOverlap", nullptr, nullptr, sizeof(EnemyPawnStandart_eventOnEnemyOverlap_Parms), Z_Construct_UFunction_AEnemyPawnStandart_OnEnemyOverlap_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AEnemyPawnStandart_OnEnemyOverlap_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AEnemyPawnStandart_OnEnemyOverlap_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AEnemyPawnStandart_OnEnemyOverlap_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AEnemyPawnStandart_OnEnemyOverlap()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AEnemyPawnStandart_OnEnemyOverlap_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AEnemyPawnStandart_NoRegister()
	{
		return AEnemyPawnStandart::StaticClass();
	}
	struct Z_Construct_UClass_AEnemyPawnStandart_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CharacterCollision_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CharacterCollision;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AEnemyPawnStandart_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APawn,
		(UObject* (*)())Z_Construct_UPackage__Script_StoryGame,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AEnemyPawnStandart_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AEnemyPawnStandart_OnEnemyOverlap, "OnEnemyOverlap" }, // 4092215836
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEnemyPawnStandart_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "EnemyPawnStandart.h" },
		{ "ModuleRelativePath", "EnemyPawnStandart.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEnemyPawnStandart_Statics::NewProp_CharacterCollision_MetaData[] = {
		{ "Category", "Pawn" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "EnemyPawnStandart.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AEnemyPawnStandart_Statics::NewProp_CharacterCollision = { "CharacterCollision", nullptr, (EPropertyFlags)0x00100000000a001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AEnemyPawnStandart, CharacterCollision), Z_Construct_UClass_UBoxComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AEnemyPawnStandart_Statics::NewProp_CharacterCollision_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AEnemyPawnStandart_Statics::NewProp_CharacterCollision_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AEnemyPawnStandart_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEnemyPawnStandart_Statics::NewProp_CharacterCollision,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AEnemyPawnStandart_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AEnemyPawnStandart>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AEnemyPawnStandart_Statics::ClassParams = {
		&AEnemyPawnStandart::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AEnemyPawnStandart_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AEnemyPawnStandart_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AEnemyPawnStandart_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AEnemyPawnStandart_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AEnemyPawnStandart()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AEnemyPawnStandart_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AEnemyPawnStandart, 552171402);
	template<> STORYGAME_API UClass* StaticClass<AEnemyPawnStandart>()
	{
		return AEnemyPawnStandart::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AEnemyPawnStandart(Z_Construct_UClass_AEnemyPawnStandart, &AEnemyPawnStandart::StaticClass, TEXT("/Script/StoryGame"), TEXT("AEnemyPawnStandart"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AEnemyPawnStandart);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
