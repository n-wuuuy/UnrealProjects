// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "StoryGame/ButtonMoveWidget.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeButtonMoveWidget() {}
// Cross Module References
	STORYGAME_API UClass* Z_Construct_UClass_UButtonMoveWidget_NoRegister();
	STORYGAME_API UClass* Z_Construct_UClass_UButtonMoveWidget();
	UMG_API UClass* Z_Construct_UClass_UUserWidget();
	UPackage* Z_Construct_UPackage__Script_StoryGame();
	UMG_API UClass* Z_Construct_UClass_UButton_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UButtonMoveWidget::execJumpButtonClicked)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->JumpButtonClicked();
		P_NATIVE_END;
	}
	void UButtonMoveWidget::StaticRegisterNativesUButtonMoveWidget()
	{
		UClass* Class = UButtonMoveWidget::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "JumpButtonClicked", &UButtonMoveWidget::execJumpButtonClicked },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UButtonMoveWidget_JumpButtonClicked_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UButtonMoveWidget_JumpButtonClicked_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "ButtonMoveWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UButtonMoveWidget_JumpButtonClicked_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UButtonMoveWidget, nullptr, "JumpButtonClicked", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UButtonMoveWidget_JumpButtonClicked_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UButtonMoveWidget_JumpButtonClicked_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UButtonMoveWidget_JumpButtonClicked()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UButtonMoveWidget_JumpButtonClicked_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UButtonMoveWidget_NoRegister()
	{
		return UButtonMoveWidget::StaticClass();
	}
	struct Z_Construct_UClass_UButtonMoveWidget_Statics
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
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UButtonMoveWidget_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UUserWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_StoryGame,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UButtonMoveWidget_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UButtonMoveWidget_JumpButtonClicked, "JumpButtonClicked" }, // 1117116942
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UButtonMoveWidget_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "ButtonMoveWidget.h" },
		{ "ModuleRelativePath", "ButtonMoveWidget.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UButtonMoveWidget_Statics::NewProp_Jump_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "ButtonMoveWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UButtonMoveWidget_Statics::NewProp_Jump = { "Jump", nullptr, (EPropertyFlags)0x0040000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UButtonMoveWidget, Jump), Z_Construct_UClass_UButton_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UButtonMoveWidget_Statics::NewProp_Jump_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UButtonMoveWidget_Statics::NewProp_Jump_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UButtonMoveWidget_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UButtonMoveWidget_Statics::NewProp_Jump,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UButtonMoveWidget_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UButtonMoveWidget>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UButtonMoveWidget_Statics::ClassParams = {
		&UButtonMoveWidget::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UButtonMoveWidget_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UButtonMoveWidget_Statics::PropPointers),
		0,
		0x00B010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UButtonMoveWidget_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UButtonMoveWidget_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UButtonMoveWidget()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UButtonMoveWidget_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UButtonMoveWidget, 1800725395);
	template<> STORYGAME_API UClass* StaticClass<UButtonMoveWidget>()
	{
		return UButtonMoveWidget::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UButtonMoveWidget(Z_Construct_UClass_UButtonMoveWidget, &UButtonMoveWidget::StaticClass, TEXT("/Script/StoryGame"), TEXT("UButtonMoveWidget"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UButtonMoveWidget);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
