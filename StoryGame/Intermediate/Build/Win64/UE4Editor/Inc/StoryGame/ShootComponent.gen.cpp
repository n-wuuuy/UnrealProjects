// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "StoryGame/ShootComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeShootComponent() {}
// Cross Module References
	STORYGAME_API UScriptStruct* Z_Construct_UScriptStruct_FShootInfo();
	UPackage* Z_Construct_UPackage__Script_StoryGame();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	STORYGAME_API UClass* Z_Construct_UClass_APaperProjectail_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	STORYGAME_API UClass* Z_Construct_UClass_UShootComponent_NoRegister();
	STORYGAME_API UClass* Z_Construct_UClass_UShootComponent();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
// End Cross Module References
class UScriptStruct* FShootInfo::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern STORYGAME_API uint32 Get_Z_Construct_UScriptStruct_FShootInfo_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FShootInfo, Z_Construct_UPackage__Script_StoryGame(), TEXT("ShootInfo"), sizeof(FShootInfo), Get_Z_Construct_UScriptStruct_FShootInfo_Hash());
	}
	return Singleton;
}
template<> STORYGAME_API UScriptStruct* StaticStruct<FShootInfo>()
{
	return FShootInfo::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FShootInfo(FShootInfo::StaticStruct, TEXT("/Script/StoryGame"), TEXT("ShootInfo"), false, nullptr, nullptr);
static struct FScriptStruct_StoryGame_StaticRegisterNativesFShootInfo
{
	FScriptStruct_StoryGame_StaticRegisterNativesFShootInfo()
	{
		UScriptStruct::DeferCppStructOps<FShootInfo>(FName(TEXT("ShootInfo")));
	}
} ScriptStruct_StoryGame_StaticRegisterNativesFShootInfo;
	struct Z_Construct_UScriptStruct_FShootInfo_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ProjectailClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_ProjectailClass;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Damage_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Damage;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Offset_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Offset;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Angle_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Angle;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FShootInfo_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "ShootComponent.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FShootInfo_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FShootInfo>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FShootInfo_Statics::NewProp_ProjectailClass_MetaData[] = {
		{ "Category", "Shooting" },
		{ "ModuleRelativePath", "ShootComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UScriptStruct_FShootInfo_Statics::NewProp_ProjectailClass = { "ProjectailClass", nullptr, (EPropertyFlags)0x0014000000000005, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FShootInfo, ProjectailClass), Z_Construct_UClass_APaperProjectail_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UScriptStruct_FShootInfo_Statics::NewProp_ProjectailClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FShootInfo_Statics::NewProp_ProjectailClass_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FShootInfo_Statics::NewProp_Damage_MetaData[] = {
		{ "Category", "Shooting" },
		{ "ModuleRelativePath", "ShootComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FShootInfo_Statics::NewProp_Damage = { "Damage", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FShootInfo, Damage), METADATA_PARAMS(Z_Construct_UScriptStruct_FShootInfo_Statics::NewProp_Damage_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FShootInfo_Statics::NewProp_Damage_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FShootInfo_Statics::NewProp_Offset_MetaData[] = {
		{ "Category", "Shooting" },
		{ "ModuleRelativePath", "ShootComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FShootInfo_Statics::NewProp_Offset = { "Offset", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FShootInfo, Offset), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FShootInfo_Statics::NewProp_Offset_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FShootInfo_Statics::NewProp_Offset_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FShootInfo_Statics::NewProp_Angle_MetaData[] = {
		{ "Category", "Shooting" },
		{ "ModuleRelativePath", "ShootComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FShootInfo_Statics::NewProp_Angle = { "Angle", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FShootInfo, Angle), METADATA_PARAMS(Z_Construct_UScriptStruct_FShootInfo_Statics::NewProp_Angle_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FShootInfo_Statics::NewProp_Angle_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FShootInfo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FShootInfo_Statics::NewProp_ProjectailClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FShootInfo_Statics::NewProp_Damage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FShootInfo_Statics::NewProp_Offset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FShootInfo_Statics::NewProp_Angle,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FShootInfo_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_StoryGame,
		nullptr,
		&NewStructOps,
		"ShootInfo",
		sizeof(FShootInfo),
		alignof(FShootInfo),
		Z_Construct_UScriptStruct_FShootInfo_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FShootInfo_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FShootInfo_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FShootInfo_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FShootInfo()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FShootInfo_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_StoryGame();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("ShootInfo"), sizeof(FShootInfo), Get_Z_Construct_UScriptStruct_FShootInfo_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FShootInfo_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FShootInfo_Hash() { return 1863394806U; }
	DEFINE_FUNCTION(UShootComponent::execStopShoot)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->StopShoot();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UShootComponent::execStartShoot)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->StartShoot();
		P_NATIVE_END;
	}
	void UShootComponent::StaticRegisterNativesUShootComponent()
	{
		UClass* Class = UShootComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "StartShoot", &UShootComponent::execStartShoot },
			{ "StopShoot", &UShootComponent::execStopShoot },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UShootComponent_StartShoot_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UShootComponent_StartShoot_Statics::Function_MetaDataParams[] = {
		{ "Category", "Attack" },
		{ "ModuleRelativePath", "ShootComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UShootComponent_StartShoot_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UShootComponent, nullptr, "StartShoot", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UShootComponent_StartShoot_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UShootComponent_StartShoot_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UShootComponent_StartShoot()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UShootComponent_StartShoot_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UShootComponent_StopShoot_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UShootComponent_StopShoot_Statics::Function_MetaDataParams[] = {
		{ "Category", "Attack" },
		{ "ModuleRelativePath", "ShootComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UShootComponent_StopShoot_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UShootComponent, nullptr, "StopShoot", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UShootComponent_StopShoot_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UShootComponent_StopShoot_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UShootComponent_StopShoot()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UShootComponent_StopShoot_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UShootComponent_NoRegister()
	{
		return UShootComponent::StaticClass();
	}
	struct Z_Construct_UClass_UShootComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ShootPeriod_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ShootPeriod;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ShootInfos_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ShootInfos_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ShootInfos;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UShootComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_StoryGame,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UShootComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UShootComponent_StartShoot, "StartShoot" }, // 2051556908
		{ &Z_Construct_UFunction_UShootComponent_StopShoot, "StopShoot" }, // 1123031565
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UShootComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "ShootComponent.h" },
		{ "ModuleRelativePath", "ShootComponent.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UShootComponent_Statics::NewProp_ShootPeriod_MetaData[] = {
		{ "Category", "Controls" },
		{ "ModuleRelativePath", "ShootComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UShootComponent_Statics::NewProp_ShootPeriod = { "ShootPeriod", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UShootComponent, ShootPeriod), METADATA_PARAMS(Z_Construct_UClass_UShootComponent_Statics::NewProp_ShootPeriod_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UShootComponent_Statics::NewProp_ShootPeriod_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UShootComponent_Statics::NewProp_ShootInfos_Inner = { "ShootInfos", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FShootInfo, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UShootComponent_Statics::NewProp_ShootInfos_MetaData[] = {
		{ "Category", "Controls" },
		{ "ModuleRelativePath", "ShootComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UShootComponent_Statics::NewProp_ShootInfos = { "ShootInfos", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UShootComponent, ShootInfos), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UShootComponent_Statics::NewProp_ShootInfos_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UShootComponent_Statics::NewProp_ShootInfos_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UShootComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UShootComponent_Statics::NewProp_ShootPeriod,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UShootComponent_Statics::NewProp_ShootInfos_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UShootComponent_Statics::NewProp_ShootInfos,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UShootComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UShootComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UShootComponent_Statics::ClassParams = {
		&UShootComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UShootComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UShootComponent_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UShootComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UShootComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UShootComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UShootComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UShootComponent, 4032317059);
	template<> STORYGAME_API UClass* StaticClass<UShootComponent>()
	{
		return UShootComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UShootComponent(Z_Construct_UClass_UShootComponent, &UShootComponent::StaticClass, TEXT("/Script/StoryGame"), TEXT("UShootComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UShootComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
