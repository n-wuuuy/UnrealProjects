// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "StoryGame/GameHealtheComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGameHealtheComponent() {}
// Cross Module References
	STORYGAME_API UFunction* Z_Construct_UDelegateFunction_StoryGame_HealthsChangedEvent__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_StoryGame();
	STORYGAME_API UFunction* Z_Construct_UDelegateFunction_StoryGame_HealthsEndedEvent__DelegateSignature();
	STORYGAME_API UClass* Z_Construct_UClass_UGameHealtheComponent_NoRegister();
	STORYGAME_API UClass* Z_Construct_UClass_UGameHealtheComponent();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_StoryGame_HealthsChangedEvent__DelegateSignature_Statics
	{
		struct _Script_StoryGame_eventHealthsChangedEvent_Parms
		{
			int32 ChangeValue;
		};
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_ChangeValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UDelegateFunction_StoryGame_HealthsChangedEvent__DelegateSignature_Statics::NewProp_ChangeValue = { "ChangeValue", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_StoryGame_eventHealthsChangedEvent_Parms, ChangeValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_StoryGame_HealthsChangedEvent__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_StoryGame_HealthsChangedEvent__DelegateSignature_Statics::NewProp_ChangeValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_StoryGame_HealthsChangedEvent__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "GameHealtheComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_StoryGame_HealthsChangedEvent__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_StoryGame, nullptr, "HealthsChangedEvent__DelegateSignature", nullptr, nullptr, sizeof(_Script_StoryGame_eventHealthsChangedEvent_Parms), Z_Construct_UDelegateFunction_StoryGame_HealthsChangedEvent__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_StoryGame_HealthsChangedEvent__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_StoryGame_HealthsChangedEvent__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_StoryGame_HealthsChangedEvent__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_StoryGame_HealthsChangedEvent__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_StoryGame_HealthsChangedEvent__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UDelegateFunction_StoryGame_HealthsEndedEvent__DelegateSignature_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_StoryGame_HealthsEndedEvent__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "GameHealtheComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_StoryGame_HealthsEndedEvent__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_StoryGame, nullptr, "HealthsEndedEvent__DelegateSignature", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_StoryGame_HealthsEndedEvent__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_StoryGame_HealthsEndedEvent__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_StoryGame_HealthsEndedEvent__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_StoryGame_HealthsEndedEvent__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	DEFINE_FUNCTION(UGameHealtheComponent::execGetHealths)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetHealths();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGameHealtheComponent::execChangeHealths)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_ByValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ChangeHealths(Z_Param_ByValue);
		P_NATIVE_END;
	}
	void UGameHealtheComponent::StaticRegisterNativesUGameHealtheComponent()
	{
		UClass* Class = UGameHealtheComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ChangeHealths", &UGameHealtheComponent::execChangeHealths },
			{ "GetHealths", &UGameHealtheComponent::execGetHealths },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UGameHealtheComponent_ChangeHealths_Statics
	{
		struct GameHealtheComponent_eventChangeHealths_Parms
		{
			int32 ByValue;
		};
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_ByValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UGameHealtheComponent_ChangeHealths_Statics::NewProp_ByValue = { "ByValue", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GameHealtheComponent_eventChangeHealths_Parms, ByValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGameHealtheComponent_ChangeHealths_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameHealtheComponent_ChangeHealths_Statics::NewProp_ByValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameHealtheComponent_ChangeHealths_Statics::Function_MetaDataParams[] = {
		{ "Category", "Game Health" },
		{ "ModuleRelativePath", "GameHealtheComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGameHealtheComponent_ChangeHealths_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGameHealtheComponent, nullptr, "ChangeHealths", nullptr, nullptr, sizeof(GameHealtheComponent_eventChangeHealths_Parms), Z_Construct_UFunction_UGameHealtheComponent_ChangeHealths_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameHealtheComponent_ChangeHealths_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGameHealtheComponent_ChangeHealths_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameHealtheComponent_ChangeHealths_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGameHealtheComponent_ChangeHealths()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGameHealtheComponent_ChangeHealths_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGameHealtheComponent_GetHealths_Statics
	{
		struct GameHealtheComponent_eventGetHealths_Parms
		{
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UGameHealtheComponent_GetHealths_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GameHealtheComponent_eventGetHealths_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGameHealtheComponent_GetHealths_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameHealtheComponent_GetHealths_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameHealtheComponent_GetHealths_Statics::Function_MetaDataParams[] = {
		{ "Category", "Game Health" },
		{ "ModuleRelativePath", "GameHealtheComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGameHealtheComponent_GetHealths_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGameHealtheComponent, nullptr, "GetHealths", nullptr, nullptr, sizeof(GameHealtheComponent_eventGetHealths_Parms), Z_Construct_UFunction_UGameHealtheComponent_GetHealths_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameHealtheComponent_GetHealths_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGameHealtheComponent_GetHealths_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameHealtheComponent_GetHealths_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGameHealtheComponent_GetHealths()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGameHealtheComponent_GetHealths_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UGameHealtheComponent_NoRegister()
	{
		return UGameHealtheComponent::StaticClass();
	}
	struct Z_Construct_UClass_UGameHealtheComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HealthsEnded_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_HealthsEnded;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HealthsChanged_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_HealthsChanged;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UGameHealtheComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_StoryGame,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UGameHealtheComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UGameHealtheComponent_ChangeHealths, "ChangeHealths" }, // 2012113815
		{ &Z_Construct_UFunction_UGameHealtheComponent_GetHealths, "GetHealths" }, // 2300766648
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGameHealtheComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "GameHealtheComponent.h" },
		{ "ModuleRelativePath", "GameHealtheComponent.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGameHealtheComponent_Statics::NewProp_HealthsEnded_MetaData[] = {
		{ "Category", "Game Health" },
		{ "ModuleRelativePath", "GameHealtheComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UGameHealtheComponent_Statics::NewProp_HealthsEnded = { "HealthsEnded", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGameHealtheComponent, HealthsEnded), Z_Construct_UDelegateFunction_StoryGame_HealthsEndedEvent__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UGameHealtheComponent_Statics::NewProp_HealthsEnded_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGameHealtheComponent_Statics::NewProp_HealthsEnded_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGameHealtheComponent_Statics::NewProp_HealthsChanged_MetaData[] = {
		{ "Category", "Game Health" },
		{ "ModuleRelativePath", "GameHealtheComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UGameHealtheComponent_Statics::NewProp_HealthsChanged = { "HealthsChanged", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGameHealtheComponent, HealthsChanged), Z_Construct_UDelegateFunction_StoryGame_HealthsChangedEvent__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UGameHealtheComponent_Statics::NewProp_HealthsChanged_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGameHealtheComponent_Statics::NewProp_HealthsChanged_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UGameHealtheComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameHealtheComponent_Statics::NewProp_HealthsEnded,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameHealtheComponent_Statics::NewProp_HealthsChanged,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UGameHealtheComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGameHealtheComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UGameHealtheComponent_Statics::ClassParams = {
		&UGameHealtheComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UGameHealtheComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UGameHealtheComponent_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UGameHealtheComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UGameHealtheComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UGameHealtheComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UGameHealtheComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UGameHealtheComponent, 242293776);
	template<> STORYGAME_API UClass* StaticClass<UGameHealtheComponent>()
	{
		return UGameHealtheComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UGameHealtheComponent(Z_Construct_UClass_UGameHealtheComponent, &UGameHealtheComponent::StaticClass, TEXT("/Script/StoryGame"), TEXT("UGameHealtheComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UGameHealtheComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
