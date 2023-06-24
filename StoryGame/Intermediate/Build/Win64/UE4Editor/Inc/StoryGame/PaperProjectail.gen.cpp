// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "StoryGame/PaperProjectail.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePaperProjectail() {}
// Cross Module References
	STORYGAME_API UClass* Z_Construct_UClass_APaperProjectail_NoRegister();
	STORYGAME_API UClass* Z_Construct_UClass_APaperProjectail();
	PAPER2D_API UClass* Z_Construct_UClass_APaperFlipbookActor();
	UPackage* Z_Construct_UPackage__Script_StoryGame();
	ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FHitResult();
	ENGINE_API UClass* Z_Construct_UClass_USphereComponent_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
// End Cross Module References
	DEFINE_FUNCTION(APaperProjectail::execOnProjectailOverlap)
	{
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OpelappedComp);
		P_GET_OBJECT(AActor,Z_Param_OtherActor);
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp);
		P_GET_PROPERTY(FIntProperty,Z_Param_BodyIndex);
		P_GET_UBOOL(Z_Param_Sweep);
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_Hit);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnProjectailOverlap(Z_Param_OpelappedComp,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_BodyIndex,Z_Param_Sweep,Z_Param_Out_Hit);
		P_NATIVE_END;
	}
	void APaperProjectail::StaticRegisterNativesAPaperProjectail()
	{
		UClass* Class = APaperProjectail::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnProjectailOverlap", &APaperProjectail::execOnProjectailOverlap },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_APaperProjectail_OnProjectailOverlap_Statics
	{
		struct PaperProjectail_eventOnProjectailOverlap_Parms
		{
			UPrimitiveComponent* OpelappedComp;
			AActor* OtherActor;
			UPrimitiveComponent* OtherComp;
			int32 BodyIndex;
			bool Sweep;
			FHitResult Hit;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OpelappedComp_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OpelappedComp;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OtherActor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OtherComp_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OtherComp;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_BodyIndex;
		static void NewProp_Sweep_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_Sweep;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Hit_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Hit;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APaperProjectail_OnProjectailOverlap_Statics::NewProp_OpelappedComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_APaperProjectail_OnProjectailOverlap_Statics::NewProp_OpelappedComp = { "OpelappedComp", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PaperProjectail_eventOnProjectailOverlap_Parms, OpelappedComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_APaperProjectail_OnProjectailOverlap_Statics::NewProp_OpelappedComp_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_APaperProjectail_OnProjectailOverlap_Statics::NewProp_OpelappedComp_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_APaperProjectail_OnProjectailOverlap_Statics::NewProp_OtherActor = { "OtherActor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PaperProjectail_eventOnProjectailOverlap_Parms, OtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APaperProjectail_OnProjectailOverlap_Statics::NewProp_OtherComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_APaperProjectail_OnProjectailOverlap_Statics::NewProp_OtherComp = { "OtherComp", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PaperProjectail_eventOnProjectailOverlap_Parms, OtherComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_APaperProjectail_OnProjectailOverlap_Statics::NewProp_OtherComp_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_APaperProjectail_OnProjectailOverlap_Statics::NewProp_OtherComp_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_APaperProjectail_OnProjectailOverlap_Statics::NewProp_BodyIndex = { "BodyIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PaperProjectail_eventOnProjectailOverlap_Parms, BodyIndex), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_APaperProjectail_OnProjectailOverlap_Statics::NewProp_Sweep_SetBit(void* Obj)
	{
		((PaperProjectail_eventOnProjectailOverlap_Parms*)Obj)->Sweep = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_APaperProjectail_OnProjectailOverlap_Statics::NewProp_Sweep = { "Sweep", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(PaperProjectail_eventOnProjectailOverlap_Parms), &Z_Construct_UFunction_APaperProjectail_OnProjectailOverlap_Statics::NewProp_Sweep_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APaperProjectail_OnProjectailOverlap_Statics::NewProp_Hit_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_APaperProjectail_OnProjectailOverlap_Statics::NewProp_Hit = { "Hit", nullptr, (EPropertyFlags)0x0010008008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PaperProjectail_eventOnProjectailOverlap_Parms, Hit), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(Z_Construct_UFunction_APaperProjectail_OnProjectailOverlap_Statics::NewProp_Hit_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_APaperProjectail_OnProjectailOverlap_Statics::NewProp_Hit_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APaperProjectail_OnProjectailOverlap_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APaperProjectail_OnProjectailOverlap_Statics::NewProp_OpelappedComp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APaperProjectail_OnProjectailOverlap_Statics::NewProp_OtherActor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APaperProjectail_OnProjectailOverlap_Statics::NewProp_OtherComp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APaperProjectail_OnProjectailOverlap_Statics::NewProp_BodyIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APaperProjectail_OnProjectailOverlap_Statics::NewProp_Sweep,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APaperProjectail_OnProjectailOverlap_Statics::NewProp_Hit,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APaperProjectail_OnProjectailOverlap_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "PaperProjectail.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_APaperProjectail_OnProjectailOverlap_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APaperProjectail, nullptr, "OnProjectailOverlap", nullptr, nullptr, sizeof(PaperProjectail_eventOnProjectailOverlap_Parms), Z_Construct_UFunction_APaperProjectail_OnProjectailOverlap_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APaperProjectail_OnProjectailOverlap_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00480401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_APaperProjectail_OnProjectailOverlap_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_APaperProjectail_OnProjectailOverlap_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_APaperProjectail_OnProjectailOverlap()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_APaperProjectail_OnProjectailOverlap_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_APaperProjectail_NoRegister()
	{
		return APaperProjectail::StaticClass();
	}
	struct Z_Construct_UClass_APaperProjectail_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Collision_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Collision;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Speed_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Speed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Damage_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Damage;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TargetLocation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_TargetLocation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Range_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Range;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_APaperProjectail_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APaperFlipbookActor,
		(UObject* (*)())Z_Construct_UPackage__Script_StoryGame,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_APaperProjectail_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_APaperProjectail_OnProjectailOverlap, "OnProjectailOverlap" }, // 793868984
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APaperProjectail_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "PaperProjectail.h" },
		{ "ModuleRelativePath", "PaperProjectail.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APaperProjectail_Statics::NewProp_Collision_MetaData[] = {
		{ "Category", "Shooting" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "PaperProjectail.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APaperProjectail_Statics::NewProp_Collision = { "Collision", nullptr, (EPropertyFlags)0x00100000000a001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APaperProjectail, Collision), Z_Construct_UClass_USphereComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_APaperProjectail_Statics::NewProp_Collision_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APaperProjectail_Statics::NewProp_Collision_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APaperProjectail_Statics::NewProp_Speed_MetaData[] = {
		{ "Category", "Shooting" },
		{ "ModuleRelativePath", "PaperProjectail.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_APaperProjectail_Statics::NewProp_Speed = { "Speed", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APaperProjectail, Speed), METADATA_PARAMS(Z_Construct_UClass_APaperProjectail_Statics::NewProp_Speed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APaperProjectail_Statics::NewProp_Speed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APaperProjectail_Statics::NewProp_Damage_MetaData[] = {
		{ "Category", "Shooting" },
		{ "ModuleRelativePath", "PaperProjectail.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_APaperProjectail_Statics::NewProp_Damage = { "Damage", nullptr, (EPropertyFlags)0x0010000000020015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APaperProjectail, Damage), METADATA_PARAMS(Z_Construct_UClass_APaperProjectail_Statics::NewProp_Damage_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APaperProjectail_Statics::NewProp_Damage_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APaperProjectail_Statics::NewProp_TargetLocation_MetaData[] = {
		{ "Category", "PaperProjectail" },
		{ "MakeEditWidget", "ture" },
		{ "ModuleRelativePath", "PaperProjectail.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_APaperProjectail_Statics::NewProp_TargetLocation = { "TargetLocation", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APaperProjectail, TargetLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_APaperProjectail_Statics::NewProp_TargetLocation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APaperProjectail_Statics::NewProp_TargetLocation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APaperProjectail_Statics::NewProp_Range_MetaData[] = {
		{ "Category", "Shooting" },
		{ "ModuleRelativePath", "PaperProjectail.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_APaperProjectail_Statics::NewProp_Range = { "Range", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APaperProjectail, Range), METADATA_PARAMS(Z_Construct_UClass_APaperProjectail_Statics::NewProp_Range_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APaperProjectail_Statics::NewProp_Range_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_APaperProjectail_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APaperProjectail_Statics::NewProp_Collision,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APaperProjectail_Statics::NewProp_Speed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APaperProjectail_Statics::NewProp_Damage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APaperProjectail_Statics::NewProp_TargetLocation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APaperProjectail_Statics::NewProp_Range,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_APaperProjectail_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APaperProjectail>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_APaperProjectail_Statics::ClassParams = {
		&APaperProjectail::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_APaperProjectail_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_APaperProjectail_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_APaperProjectail_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_APaperProjectail_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_APaperProjectail()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_APaperProjectail_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(APaperProjectail, 1441066431);
	template<> STORYGAME_API UClass* StaticClass<APaperProjectail>()
	{
		return APaperProjectail::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_APaperProjectail(Z_Construct_UClass_APaperProjectail, &APaperProjectail::StaticClass, TEXT("/Script/StoryGame"), TEXT("APaperProjectail"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(APaperProjectail);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
