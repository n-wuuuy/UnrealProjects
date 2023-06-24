// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "StoryGame/StoryGameGameModeBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeStoryGameGameModeBase() {}
// Cross Module References
	STORYGAME_API UClass* Z_Construct_UClass_AStoryGameGameModeBase_NoRegister();
	STORYGAME_API UClass* Z_Construct_UClass_AStoryGameGameModeBase();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_StoryGame();
	STORYGAME_API UClass* Z_Construct_UClass_UGameHealtheComponent_NoRegister();
	STORYGAME_API UClass* Z_Construct_UClass_APlayerPaperCharacter_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(AStoryGameGameModeBase::execEndGame)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->EndGame();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AStoryGameGameModeBase::execPunchPawn)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->PunchPawn();
		P_NATIVE_END;
	}
	void AStoryGameGameModeBase::StaticRegisterNativesAStoryGameGameModeBase()
	{
		UClass* Class = AStoryGameGameModeBase::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "EndGame", &AStoryGameGameModeBase::execEndGame },
			{ "PunchPawn", &AStoryGameGameModeBase::execPunchPawn },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AStoryGameGameModeBase_EndGame_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AStoryGameGameModeBase_EndGame_Statics::Function_MetaDataParams[] = {
		{ "Category", "Game" },
		{ "ModuleRelativePath", "StoryGameGameModeBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AStoryGameGameModeBase_EndGame_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AStoryGameGameModeBase, nullptr, "EndGame", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AStoryGameGameModeBase_EndGame_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AStoryGameGameModeBase_EndGame_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AStoryGameGameModeBase_EndGame()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AStoryGameGameModeBase_EndGame_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AStoryGameGameModeBase_PunchPawn_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AStoryGameGameModeBase_PunchPawn_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "StoryGameGameModeBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AStoryGameGameModeBase_PunchPawn_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AStoryGameGameModeBase, nullptr, "PunchPawn", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AStoryGameGameModeBase_PunchPawn_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AStoryGameGameModeBase_PunchPawn_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AStoryGameGameModeBase_PunchPawn()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AStoryGameGameModeBase_PunchPawn_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AStoryGameGameModeBase_NoRegister()
	{
		return AStoryGameGameModeBase::StaticClass();
	}
	struct Z_Construct_UClass_AStoryGameGameModeBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HealthsComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_HealthsComponent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PlayerPawn_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PlayerPawn;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AStoryGameGameModeBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_StoryGame,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AStoryGameGameModeBase_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AStoryGameGameModeBase_EndGame, "EndGame" }, // 3228529908
		{ &Z_Construct_UFunction_AStoryGameGameModeBase_PunchPawn, "PunchPawn" }, // 3087131956
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AStoryGameGameModeBase_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "StoryGameGameModeBase.h" },
		{ "ModuleRelativePath", "StoryGameGameModeBase.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AStoryGameGameModeBase_Statics::NewProp_HealthsComponent_MetaData[] = {
		{ "Category", "Game Health" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "StoryGameGameModeBase.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AStoryGameGameModeBase_Statics::NewProp_HealthsComponent = { "HealthsComponent", nullptr, (EPropertyFlags)0x00100000000a001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AStoryGameGameModeBase, HealthsComponent), Z_Construct_UClass_UGameHealtheComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AStoryGameGameModeBase_Statics::NewProp_HealthsComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AStoryGameGameModeBase_Statics::NewProp_HealthsComponent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AStoryGameGameModeBase_Statics::NewProp_PlayerPawn_MetaData[] = {
		{ "Category", "Game" },
		{ "ModuleRelativePath", "StoryGameGameModeBase.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AStoryGameGameModeBase_Statics::NewProp_PlayerPawn = { "PlayerPawn", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AStoryGameGameModeBase, PlayerPawn), Z_Construct_UClass_APlayerPaperCharacter_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AStoryGameGameModeBase_Statics::NewProp_PlayerPawn_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AStoryGameGameModeBase_Statics::NewProp_PlayerPawn_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AStoryGameGameModeBase_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AStoryGameGameModeBase_Statics::NewProp_HealthsComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AStoryGameGameModeBase_Statics::NewProp_PlayerPawn,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AStoryGameGameModeBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AStoryGameGameModeBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AStoryGameGameModeBase_Statics::ClassParams = {
		&AStoryGameGameModeBase::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AStoryGameGameModeBase_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AStoryGameGameModeBase_Statics::PropPointers),
		0,
		0x009002ACu,
		METADATA_PARAMS(Z_Construct_UClass_AStoryGameGameModeBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AStoryGameGameModeBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AStoryGameGameModeBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AStoryGameGameModeBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AStoryGameGameModeBase, 3878692562);
	template<> STORYGAME_API UClass* StaticClass<AStoryGameGameModeBase>()
	{
		return AStoryGameGameModeBase::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AStoryGameGameModeBase(Z_Construct_UClass_AStoryGameGameModeBase, &AStoryGameGameModeBase::StaticClass, TEXT("/Script/StoryGame"), TEXT("AStoryGameGameModeBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AStoryGameGameModeBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
