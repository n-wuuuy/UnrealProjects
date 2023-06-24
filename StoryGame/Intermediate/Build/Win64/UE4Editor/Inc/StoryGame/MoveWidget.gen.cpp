// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "StoryGame/MoveWidget.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMoveWidget() {}
// Cross Module References
	STORYGAME_API UClass* Z_Construct_UClass_UMoveWidget_NoRegister();
	STORYGAME_API UClass* Z_Construct_UClass_UMoveWidget();
	UMG_API UClass* Z_Construct_UClass_UUserWidget();
	UPackage* Z_Construct_UPackage__Script_StoryGame();
	UMG_API UClass* Z_Construct_UClass_UButton_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UMoveWidget::execShootButtonStopClicked)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ShootButtonStopClicked();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMoveWidget::execShootButtonClicked)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ShootButtonClicked();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMoveWidget::execTeleportButtonClicked)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->TeleportButtonClicked();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMoveWidget::execJumpButtonClicked)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->JumpButtonClicked();
		P_NATIVE_END;
	}
	void UMoveWidget::StaticRegisterNativesUMoveWidget()
	{
		UClass* Class = UMoveWidget::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "JumpButtonClicked", &UMoveWidget::execJumpButtonClicked },
			{ "ShootButtonClicked", &UMoveWidget::execShootButtonClicked },
			{ "ShootButtonStopClicked", &UMoveWidget::execShootButtonStopClicked },
			{ "TeleportButtonClicked", &UMoveWidget::execTeleportButtonClicked },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UMoveWidget_JumpButtonClicked_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMoveWidget_JumpButtonClicked_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "MoveWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMoveWidget_JumpButtonClicked_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMoveWidget, nullptr, "JumpButtonClicked", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMoveWidget_JumpButtonClicked_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMoveWidget_JumpButtonClicked_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMoveWidget_JumpButtonClicked()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMoveWidget_JumpButtonClicked_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMoveWidget_ShootButtonClicked_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMoveWidget_ShootButtonClicked_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "MoveWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMoveWidget_ShootButtonClicked_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMoveWidget, nullptr, "ShootButtonClicked", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMoveWidget_ShootButtonClicked_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMoveWidget_ShootButtonClicked_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMoveWidget_ShootButtonClicked()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMoveWidget_ShootButtonClicked_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMoveWidget_ShootButtonStopClicked_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMoveWidget_ShootButtonStopClicked_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "MoveWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMoveWidget_ShootButtonStopClicked_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMoveWidget, nullptr, "ShootButtonStopClicked", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMoveWidget_ShootButtonStopClicked_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMoveWidget_ShootButtonStopClicked_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMoveWidget_ShootButtonStopClicked()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMoveWidget_ShootButtonStopClicked_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMoveWidget_TeleportButtonClicked_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMoveWidget_TeleportButtonClicked_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "MoveWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMoveWidget_TeleportButtonClicked_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMoveWidget, nullptr, "TeleportButtonClicked", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMoveWidget_TeleportButtonClicked_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMoveWidget_TeleportButtonClicked_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMoveWidget_TeleportButtonClicked()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMoveWidget_TeleportButtonClicked_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UMoveWidget_NoRegister()
	{
		return UMoveWidget::StaticClass();
	}
	struct Z_Construct_UClass_UMoveWidget_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Jump_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Jump;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Teleport_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Teleport;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Shoot_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Shoot;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMoveWidget_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UUserWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_StoryGame,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UMoveWidget_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UMoveWidget_JumpButtonClicked, "JumpButtonClicked" }, // 634917436
		{ &Z_Construct_UFunction_UMoveWidget_ShootButtonClicked, "ShootButtonClicked" }, // 3082975263
		{ &Z_Construct_UFunction_UMoveWidget_ShootButtonStopClicked, "ShootButtonStopClicked" }, // 3450366404
		{ &Z_Construct_UFunction_UMoveWidget_TeleportButtonClicked, "TeleportButtonClicked" }, // 1956341387
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMoveWidget_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "MoveWidget.h" },
		{ "ModuleRelativePath", "MoveWidget.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMoveWidget_Statics::NewProp_Jump_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "MoveWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMoveWidget_Statics::NewProp_Jump = { "Jump", nullptr, (EPropertyFlags)0x0040000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMoveWidget, Jump), Z_Construct_UClass_UButton_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UMoveWidget_Statics::NewProp_Jump_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMoveWidget_Statics::NewProp_Jump_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMoveWidget_Statics::NewProp_Teleport_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "MoveWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMoveWidget_Statics::NewProp_Teleport = { "Teleport", nullptr, (EPropertyFlags)0x0040000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMoveWidget, Teleport), Z_Construct_UClass_UButton_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UMoveWidget_Statics::NewProp_Teleport_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMoveWidget_Statics::NewProp_Teleport_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMoveWidget_Statics::NewProp_Shoot_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "MoveWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMoveWidget_Statics::NewProp_Shoot = { "Shoot", nullptr, (EPropertyFlags)0x0040000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMoveWidget, Shoot), Z_Construct_UClass_UButton_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UMoveWidget_Statics::NewProp_Shoot_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMoveWidget_Statics::NewProp_Shoot_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMoveWidget_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMoveWidget_Statics::NewProp_Jump,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMoveWidget_Statics::NewProp_Teleport,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMoveWidget_Statics::NewProp_Shoot,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMoveWidget_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMoveWidget>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UMoveWidget_Statics::ClassParams = {
		&UMoveWidget::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UMoveWidget_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UMoveWidget_Statics::PropPointers),
		0,
		0x00B010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UMoveWidget_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMoveWidget_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMoveWidget()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UMoveWidget_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UMoveWidget, 922102846);
	template<> STORYGAME_API UClass* StaticClass<UMoveWidget>()
	{
		return UMoveWidget::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UMoveWidget(Z_Construct_UClass_UMoveWidget, &UMoveWidget::StaticClass, TEXT("/Script/StoryGame"), TEXT("UMoveWidget"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMoveWidget);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
