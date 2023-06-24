// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "StoryGame/SniperEnemyCharacter.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSniperEnemyCharacter() {}
// Cross Module References
	STORYGAME_API UClass* Z_Construct_UClass_ASniperEnemyCharacter_NoRegister();
	STORYGAME_API UClass* Z_Construct_UClass_ASniperEnemyCharacter();
	PAPER2D_API UClass* Z_Construct_UClass_APaperCharacter();
	UPackage* Z_Construct_UPackage__Script_StoryGame();
	ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FHitResult();
	PAPER2D_API UClass* Z_Construct_UClass_UPaperFlipbook_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UClass* Z_Construct_UClass_UBoxComponent_NoRegister();
	STORYGAME_API UClass* Z_Construct_UClass_UHealthComponent_NoRegister();
	STORYGAME_API UClass* Z_Construct_UClass_UShootComponent_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(ASniperEnemyCharacter::execDestroyPawn)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->DestroyPawn();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASniperEnemyCharacter::execKillPawn)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->KillPawn();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASniperEnemyCharacter::execNotOnAttackRadius)
	{
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OverlappedComponent);
		P_GET_OBJECT(AActor,Z_Param_OtherActor);
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp);
		P_GET_PROPERTY(FIntProperty,Z_Param_OtherBobyIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->NotOnAttackRadius(Z_Param_OverlappedComponent,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_OtherBobyIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASniperEnemyCharacter::execOnAttackRadius)
	{
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OverlappedComponent);
		P_GET_OBJECT(AActor,Z_Param_OtherActor);
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp);
		P_GET_PROPERTY(FIntProperty,Z_Param_OtherBobyIndex);
		P_GET_UBOOL(Z_Param_bFromSweep);
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_SweepResult);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnAttackRadius(Z_Param_OverlappedComponent,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_OtherBobyIndex,Z_Param_bFromSweep,Z_Param_Out_SweepResult);
		P_NATIVE_END;
	}
	void ASniperEnemyCharacter::StaticRegisterNativesASniperEnemyCharacter()
	{
		UClass* Class = ASniperEnemyCharacter::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "DestroyPawn", &ASniperEnemyCharacter::execDestroyPawn },
			{ "KillPawn", &ASniperEnemyCharacter::execKillPawn },
			{ "NotOnAttackRadius", &ASniperEnemyCharacter::execNotOnAttackRadius },
			{ "OnAttackRadius", &ASniperEnemyCharacter::execOnAttackRadius },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ASniperEnemyCharacter_DestroyPawn_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASniperEnemyCharacter_DestroyPawn_Statics::Function_MetaDataParams[] = {
		{ "Category", "Pawn" },
		{ "ModuleRelativePath", "SniperEnemyCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASniperEnemyCharacter_DestroyPawn_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASniperEnemyCharacter, nullptr, "DestroyPawn", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASniperEnemyCharacter_DestroyPawn_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASniperEnemyCharacter_DestroyPawn_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASniperEnemyCharacter_DestroyPawn()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASniperEnemyCharacter_DestroyPawn_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASniperEnemyCharacter_KillPawn_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASniperEnemyCharacter_KillPawn_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "SniperEnemyCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASniperEnemyCharacter_KillPawn_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASniperEnemyCharacter, nullptr, "KillPawn", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASniperEnemyCharacter_KillPawn_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASniperEnemyCharacter_KillPawn_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASniperEnemyCharacter_KillPawn()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASniperEnemyCharacter_KillPawn_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASniperEnemyCharacter_NotOnAttackRadius_Statics
	{
		struct SniperEnemyCharacter_eventNotOnAttackRadius_Parms
		{
			UPrimitiveComponent* OverlappedComponent;
			AActor* OtherActor;
			UPrimitiveComponent* OtherComp;
			int32 OtherBobyIndex;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OverlappedComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OverlappedComponent;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OtherActor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OtherComp_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OtherComp;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_OtherBobyIndex;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASniperEnemyCharacter_NotOnAttackRadius_Statics::NewProp_OverlappedComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ASniperEnemyCharacter_NotOnAttackRadius_Statics::NewProp_OverlappedComponent = { "OverlappedComponent", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SniperEnemyCharacter_eventNotOnAttackRadius_Parms, OverlappedComponent), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ASniperEnemyCharacter_NotOnAttackRadius_Statics::NewProp_OverlappedComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ASniperEnemyCharacter_NotOnAttackRadius_Statics::NewProp_OverlappedComponent_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ASniperEnemyCharacter_NotOnAttackRadius_Statics::NewProp_OtherActor = { "OtherActor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SniperEnemyCharacter_eventNotOnAttackRadius_Parms, OtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASniperEnemyCharacter_NotOnAttackRadius_Statics::NewProp_OtherComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ASniperEnemyCharacter_NotOnAttackRadius_Statics::NewProp_OtherComp = { "OtherComp", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SniperEnemyCharacter_eventNotOnAttackRadius_Parms, OtherComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ASniperEnemyCharacter_NotOnAttackRadius_Statics::NewProp_OtherComp_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ASniperEnemyCharacter_NotOnAttackRadius_Statics::NewProp_OtherComp_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ASniperEnemyCharacter_NotOnAttackRadius_Statics::NewProp_OtherBobyIndex = { "OtherBobyIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SniperEnemyCharacter_eventNotOnAttackRadius_Parms, OtherBobyIndex), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASniperEnemyCharacter_NotOnAttackRadius_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASniperEnemyCharacter_NotOnAttackRadius_Statics::NewProp_OverlappedComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASniperEnemyCharacter_NotOnAttackRadius_Statics::NewProp_OtherActor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASniperEnemyCharacter_NotOnAttackRadius_Statics::NewProp_OtherComp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASniperEnemyCharacter_NotOnAttackRadius_Statics::NewProp_OtherBobyIndex,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASniperEnemyCharacter_NotOnAttackRadius_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "SniperEnemyCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASniperEnemyCharacter_NotOnAttackRadius_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASniperEnemyCharacter, nullptr, "NotOnAttackRadius", nullptr, nullptr, sizeof(SniperEnemyCharacter_eventNotOnAttackRadius_Parms), Z_Construct_UFunction_ASniperEnemyCharacter_NotOnAttackRadius_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASniperEnemyCharacter_NotOnAttackRadius_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASniperEnemyCharacter_NotOnAttackRadius_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASniperEnemyCharacter_NotOnAttackRadius_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASniperEnemyCharacter_NotOnAttackRadius()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASniperEnemyCharacter_NotOnAttackRadius_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASniperEnemyCharacter_OnAttackRadius_Statics
	{
		struct SniperEnemyCharacter_eventOnAttackRadius_Parms
		{
			UPrimitiveComponent* OverlappedComponent;
			AActor* OtherActor;
			UPrimitiveComponent* OtherComp;
			int32 OtherBobyIndex;
			bool bFromSweep;
			FHitResult SweepResult;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OverlappedComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OverlappedComponent;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OtherActor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OtherComp_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OtherComp;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_OtherBobyIndex;
		static void NewProp_bFromSweep_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bFromSweep;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SweepResult_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SweepResult;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASniperEnemyCharacter_OnAttackRadius_Statics::NewProp_OverlappedComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ASniperEnemyCharacter_OnAttackRadius_Statics::NewProp_OverlappedComponent = { "OverlappedComponent", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SniperEnemyCharacter_eventOnAttackRadius_Parms, OverlappedComponent), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ASniperEnemyCharacter_OnAttackRadius_Statics::NewProp_OverlappedComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ASniperEnemyCharacter_OnAttackRadius_Statics::NewProp_OverlappedComponent_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ASniperEnemyCharacter_OnAttackRadius_Statics::NewProp_OtherActor = { "OtherActor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SniperEnemyCharacter_eventOnAttackRadius_Parms, OtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASniperEnemyCharacter_OnAttackRadius_Statics::NewProp_OtherComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ASniperEnemyCharacter_OnAttackRadius_Statics::NewProp_OtherComp = { "OtherComp", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SniperEnemyCharacter_eventOnAttackRadius_Parms, OtherComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ASniperEnemyCharacter_OnAttackRadius_Statics::NewProp_OtherComp_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ASniperEnemyCharacter_OnAttackRadius_Statics::NewProp_OtherComp_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ASniperEnemyCharacter_OnAttackRadius_Statics::NewProp_OtherBobyIndex = { "OtherBobyIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SniperEnemyCharacter_eventOnAttackRadius_Parms, OtherBobyIndex), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_ASniperEnemyCharacter_OnAttackRadius_Statics::NewProp_bFromSweep_SetBit(void* Obj)
	{
		((SniperEnemyCharacter_eventOnAttackRadius_Parms*)Obj)->bFromSweep = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ASniperEnemyCharacter_OnAttackRadius_Statics::NewProp_bFromSweep = { "bFromSweep", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SniperEnemyCharacter_eventOnAttackRadius_Parms), &Z_Construct_UFunction_ASniperEnemyCharacter_OnAttackRadius_Statics::NewProp_bFromSweep_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASniperEnemyCharacter_OnAttackRadius_Statics::NewProp_SweepResult_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ASniperEnemyCharacter_OnAttackRadius_Statics::NewProp_SweepResult = { "SweepResult", nullptr, (EPropertyFlags)0x0010008008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SniperEnemyCharacter_eventOnAttackRadius_Parms, SweepResult), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(Z_Construct_UFunction_ASniperEnemyCharacter_OnAttackRadius_Statics::NewProp_SweepResult_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ASniperEnemyCharacter_OnAttackRadius_Statics::NewProp_SweepResult_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASniperEnemyCharacter_OnAttackRadius_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASniperEnemyCharacter_OnAttackRadius_Statics::NewProp_OverlappedComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASniperEnemyCharacter_OnAttackRadius_Statics::NewProp_OtherActor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASniperEnemyCharacter_OnAttackRadius_Statics::NewProp_OtherComp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASniperEnemyCharacter_OnAttackRadius_Statics::NewProp_OtherBobyIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASniperEnemyCharacter_OnAttackRadius_Statics::NewProp_bFromSweep,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASniperEnemyCharacter_OnAttackRadius_Statics::NewProp_SweepResult,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASniperEnemyCharacter_OnAttackRadius_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "SniperEnemyCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASniperEnemyCharacter_OnAttackRadius_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASniperEnemyCharacter, nullptr, "OnAttackRadius", nullptr, nullptr, sizeof(SniperEnemyCharacter_eventOnAttackRadius_Parms), Z_Construct_UFunction_ASniperEnemyCharacter_OnAttackRadius_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASniperEnemyCharacter_OnAttackRadius_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00480401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASniperEnemyCharacter_OnAttackRadius_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASniperEnemyCharacter_OnAttackRadius_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASniperEnemyCharacter_OnAttackRadius()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASniperEnemyCharacter_OnAttackRadius_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ASniperEnemyCharacter_NoRegister()
	{
		return ASniperEnemyCharacter::StaticClass();
	}
	struct Z_Construct_UClass_ASniperEnemyCharacter_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RunningAnimation_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_RunningAnimation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IdleAnimation_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_IdleAnimation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AttackAnimation_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AttackAnimation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TargetLocation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_TargetLocation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CharacterCollision_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CharacterCollision;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Speed_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Speed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HealthComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_HealthComponent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ShootComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ShootComponent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ShootPeriod_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ShootPeriod;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DetectionRadius_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DetectionRadius;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AttackRadius_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_AttackRadius;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ShootRadius_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ShootRadius;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LocationToMove_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_LocationToMove;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ASniperEnemyCharacter_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APaperCharacter,
		(UObject* (*)())Z_Construct_UPackage__Script_StoryGame,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ASniperEnemyCharacter_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ASniperEnemyCharacter_DestroyPawn, "DestroyPawn" }, // 2054500999
		{ &Z_Construct_UFunction_ASniperEnemyCharacter_KillPawn, "KillPawn" }, // 2350111241
		{ &Z_Construct_UFunction_ASniperEnemyCharacter_NotOnAttackRadius, "NotOnAttackRadius" }, // 3538530437
		{ &Z_Construct_UFunction_ASniperEnemyCharacter_OnAttackRadius, "OnAttackRadius" }, // 240096764
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASniperEnemyCharacter_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "SniperEnemyCharacter.h" },
		{ "ModuleRelativePath", "SniperEnemyCharacter.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASniperEnemyCharacter_Statics::NewProp_RunningAnimation_MetaData[] = {
		{ "Category", "Animations" },
		{ "ModuleRelativePath", "SniperEnemyCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASniperEnemyCharacter_Statics::NewProp_RunningAnimation = { "RunningAnimation", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASniperEnemyCharacter, RunningAnimation), Z_Construct_UClass_UPaperFlipbook_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASniperEnemyCharacter_Statics::NewProp_RunningAnimation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASniperEnemyCharacter_Statics::NewProp_RunningAnimation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASniperEnemyCharacter_Statics::NewProp_IdleAnimation_MetaData[] = {
		{ "Category", "Animations" },
		{ "ModuleRelativePath", "SniperEnemyCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASniperEnemyCharacter_Statics::NewProp_IdleAnimation = { "IdleAnimation", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASniperEnemyCharacter, IdleAnimation), Z_Construct_UClass_UPaperFlipbook_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASniperEnemyCharacter_Statics::NewProp_IdleAnimation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASniperEnemyCharacter_Statics::NewProp_IdleAnimation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASniperEnemyCharacter_Statics::NewProp_AttackAnimation_MetaData[] = {
		{ "Category", "Animations" },
		{ "ModuleRelativePath", "SniperEnemyCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASniperEnemyCharacter_Statics::NewProp_AttackAnimation = { "AttackAnimation", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASniperEnemyCharacter, AttackAnimation), Z_Construct_UClass_UPaperFlipbook_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASniperEnemyCharacter_Statics::NewProp_AttackAnimation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASniperEnemyCharacter_Statics::NewProp_AttackAnimation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASniperEnemyCharacter_Statics::NewProp_TargetLocation_MetaData[] = {
		{ "Category", "Animations" },
		{ "ModuleRelativePath", "SniperEnemyCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ASniperEnemyCharacter_Statics::NewProp_TargetLocation = { "TargetLocation", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASniperEnemyCharacter, TargetLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_ASniperEnemyCharacter_Statics::NewProp_TargetLocation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASniperEnemyCharacter_Statics::NewProp_TargetLocation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASniperEnemyCharacter_Statics::NewProp_CharacterCollision_MetaData[] = {
		{ "Category", "Pawn" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "SniperEnemyCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASniperEnemyCharacter_Statics::NewProp_CharacterCollision = { "CharacterCollision", nullptr, (EPropertyFlags)0x00100000000a001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASniperEnemyCharacter, CharacterCollision), Z_Construct_UClass_UBoxComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASniperEnemyCharacter_Statics::NewProp_CharacterCollision_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASniperEnemyCharacter_Statics::NewProp_CharacterCollision_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASniperEnemyCharacter_Statics::NewProp_Speed_MetaData[] = {
		{ "Category", "Pawn" },
		{ "ModuleRelativePath", "SniperEnemyCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ASniperEnemyCharacter_Statics::NewProp_Speed = { "Speed", nullptr, (EPropertyFlags)0x0010000000020005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASniperEnemyCharacter, Speed), METADATA_PARAMS(Z_Construct_UClass_ASniperEnemyCharacter_Statics::NewProp_Speed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASniperEnemyCharacter_Statics::NewProp_Speed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASniperEnemyCharacter_Statics::NewProp_HealthComponent_MetaData[] = {
		{ "Category", "Pawn" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "SniperEnemyCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASniperEnemyCharacter_Statics::NewProp_HealthComponent = { "HealthComponent", nullptr, (EPropertyFlags)0x00100000000a001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASniperEnemyCharacter, HealthComponent), Z_Construct_UClass_UHealthComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASniperEnemyCharacter_Statics::NewProp_HealthComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASniperEnemyCharacter_Statics::NewProp_HealthComponent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASniperEnemyCharacter_Statics::NewProp_ShootComponent_MetaData[] = {
		{ "Category", "Pawn" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "SniperEnemyCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASniperEnemyCharacter_Statics::NewProp_ShootComponent = { "ShootComponent", nullptr, (EPropertyFlags)0x00100000000a001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASniperEnemyCharacter, ShootComponent), Z_Construct_UClass_UShootComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASniperEnemyCharacter_Statics::NewProp_ShootComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASniperEnemyCharacter_Statics::NewProp_ShootComponent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASniperEnemyCharacter_Statics::NewProp_ShootPeriod_MetaData[] = {
		{ "Category", "Controls" },
		{ "ModuleRelativePath", "SniperEnemyCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ASniperEnemyCharacter_Statics::NewProp_ShootPeriod = { "ShootPeriod", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASniperEnemyCharacter, ShootPeriod), METADATA_PARAMS(Z_Construct_UClass_ASniperEnemyCharacter_Statics::NewProp_ShootPeriod_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASniperEnemyCharacter_Statics::NewProp_ShootPeriod_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASniperEnemyCharacter_Statics::NewProp_DetectionRadius_MetaData[] = {
		{ "Category", "Controls" },
		{ "ModuleRelativePath", "SniperEnemyCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ASniperEnemyCharacter_Statics::NewProp_DetectionRadius = { "DetectionRadius", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASniperEnemyCharacter, DetectionRadius), METADATA_PARAMS(Z_Construct_UClass_ASniperEnemyCharacter_Statics::NewProp_DetectionRadius_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASniperEnemyCharacter_Statics::NewProp_DetectionRadius_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASniperEnemyCharacter_Statics::NewProp_AttackRadius_MetaData[] = {
		{ "Category", "Controls" },
		{ "ModuleRelativePath", "SniperEnemyCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ASniperEnemyCharacter_Statics::NewProp_AttackRadius = { "AttackRadius", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASniperEnemyCharacter, AttackRadius), METADATA_PARAMS(Z_Construct_UClass_ASniperEnemyCharacter_Statics::NewProp_AttackRadius_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASniperEnemyCharacter_Statics::NewProp_AttackRadius_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASniperEnemyCharacter_Statics::NewProp_ShootRadius_MetaData[] = {
		{ "Category", "Pawn" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "SniperEnemyCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASniperEnemyCharacter_Statics::NewProp_ShootRadius = { "ShootRadius", nullptr, (EPropertyFlags)0x00100000000a001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASniperEnemyCharacter, ShootRadius), Z_Construct_UClass_UBoxComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASniperEnemyCharacter_Statics::NewProp_ShootRadius_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASniperEnemyCharacter_Statics::NewProp_ShootRadius_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASniperEnemyCharacter_Statics::NewProp_LocationToMove_MetaData[] = {
		{ "Category", "SniperEnemyCharacter" },
		{ "MakeEditWidget", "ture" },
		{ "ModuleRelativePath", "SniperEnemyCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ASniperEnemyCharacter_Statics::NewProp_LocationToMove = { "LocationToMove", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASniperEnemyCharacter, LocationToMove), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_ASniperEnemyCharacter_Statics::NewProp_LocationToMove_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASniperEnemyCharacter_Statics::NewProp_LocationToMove_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ASniperEnemyCharacter_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASniperEnemyCharacter_Statics::NewProp_RunningAnimation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASniperEnemyCharacter_Statics::NewProp_IdleAnimation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASniperEnemyCharacter_Statics::NewProp_AttackAnimation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASniperEnemyCharacter_Statics::NewProp_TargetLocation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASniperEnemyCharacter_Statics::NewProp_CharacterCollision,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASniperEnemyCharacter_Statics::NewProp_Speed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASniperEnemyCharacter_Statics::NewProp_HealthComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASniperEnemyCharacter_Statics::NewProp_ShootComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASniperEnemyCharacter_Statics::NewProp_ShootPeriod,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASniperEnemyCharacter_Statics::NewProp_DetectionRadius,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASniperEnemyCharacter_Statics::NewProp_AttackRadius,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASniperEnemyCharacter_Statics::NewProp_ShootRadius,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASniperEnemyCharacter_Statics::NewProp_LocationToMove,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ASniperEnemyCharacter_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASniperEnemyCharacter>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ASniperEnemyCharacter_Statics::ClassParams = {
		&ASniperEnemyCharacter::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ASniperEnemyCharacter_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ASniperEnemyCharacter_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ASniperEnemyCharacter_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ASniperEnemyCharacter_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ASniperEnemyCharacter()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ASniperEnemyCharacter_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ASniperEnemyCharacter, 755909041);
	template<> STORYGAME_API UClass* StaticClass<ASniperEnemyCharacter>()
	{
		return ASniperEnemyCharacter::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ASniperEnemyCharacter(Z_Construct_UClass_ASniperEnemyCharacter, &ASniperEnemyCharacter::StaticClass, TEXT("/Script/StoryGame"), TEXT("ASniperEnemyCharacter"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ASniperEnemyCharacter);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
