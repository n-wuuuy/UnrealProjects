// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "StoryGame/PlaygraundBorder.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePlaygraundBorder() {}
// Cross Module References
	STORYGAME_API UClass* Z_Construct_UClass_APlaygraundBorder_NoRegister();
	STORYGAME_API UClass* Z_Construct_UClass_APlaygraundBorder();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_StoryGame();
	ENGINE_API UClass* Z_Construct_UClass_UBoxComponent_NoRegister();
// End Cross Module References
	void APlaygraundBorder::StaticRegisterNativesAPlaygraundBorder()
	{
	}
	UClass* Z_Construct_UClass_APlaygraundBorder_NoRegister()
	{
		return APlaygraundBorder::StaticClass();
	}
	struct Z_Construct_UClass_APlaygraundBorder_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Trigger_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Trigger;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_APlaygraundBorder_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_StoryGame,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlaygraundBorder_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "PlaygraundBorder.h" },
		{ "ModuleRelativePath", "PlaygraundBorder.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlaygraundBorder_Statics::NewProp_Trigger_MetaData[] = {
		{ "Category", "PlaygraundBorder" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "PlaygraundBorder.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APlaygraundBorder_Statics::NewProp_Trigger = { "Trigger", nullptr, (EPropertyFlags)0x00100000000a001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APlaygraundBorder, Trigger), Z_Construct_UClass_UBoxComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_APlaygraundBorder_Statics::NewProp_Trigger_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APlaygraundBorder_Statics::NewProp_Trigger_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_APlaygraundBorder_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlaygraundBorder_Statics::NewProp_Trigger,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_APlaygraundBorder_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APlaygraundBorder>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_APlaygraundBorder_Statics::ClassParams = {
		&APlaygraundBorder::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_APlaygraundBorder_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_APlaygraundBorder_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_APlaygraundBorder_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_APlaygraundBorder_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_APlaygraundBorder()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_APlaygraundBorder_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(APlaygraundBorder, 2177065074);
	template<> STORYGAME_API UClass* StaticClass<APlaygraundBorder>()
	{
		return APlaygraundBorder::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_APlaygraundBorder(Z_Construct_UClass_APlaygraundBorder, &APlaygraundBorder::StaticClass, TEXT("/Script/StoryGame"), TEXT("APlaygraundBorder"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(APlaygraundBorder);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
