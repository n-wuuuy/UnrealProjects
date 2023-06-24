// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "StoryGame/AttackComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAttackComponent() {}
// Cross Module References
	STORYGAME_API UClass* Z_Construct_UClass_UAttackComponent_NoRegister();
	STORYGAME_API UClass* Z_Construct_UClass_UAttackComponent();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	UPackage* Z_Construct_UPackage__Script_StoryGame();
// End Cross Module References
	void UAttackComponent::StaticRegisterNativesUAttackComponent()
	{
	}
	UClass* Z_Construct_UClass_UAttackComponent_NoRegister()
	{
		return UAttackComponent::StaticClass();
	}
	struct Z_Construct_UClass_UAttackComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAttackComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_StoryGame,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAttackComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "Comment", "//USTRUCT(BlueprintType)\n//struct FAttackInfo\n//{\n//\x09GENERATED_BODY()\n//public:\n//\x09UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = \"Attack\")\n//\x09\x09""float Damage;\n//\x09UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = \"Attack\")\n//\x09\x09""float AttackRange;\n//};\n" },
		{ "IncludePath", "AttackComponent.h" },
		{ "ModuleRelativePath", "AttackComponent.h" },
		{ "ToolTip", "USTRUCT(BlueprintType)\nstruct FAttackInfo\n{\n       GENERATED_BODY()\npublic:\n       UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = \"Attack\")\n               float Damage;\n       UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = \"Attack\")\n               float AttackRange;\n};" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAttackComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAttackComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UAttackComponent_Statics::ClassParams = {
		&UAttackComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UAttackComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAttackComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAttackComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UAttackComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UAttackComponent, 1873314945);
	template<> STORYGAME_API UClass* StaticClass<UAttackComponent>()
	{
		return UAttackComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UAttackComponent(Z_Construct_UClass_UAttackComponent, &UAttackComponent::StaticClass, TEXT("/Script/StoryGame"), TEXT("UAttackComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAttackComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
