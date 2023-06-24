// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef STORYGAME_AttackComponent_generated_h
#error "AttackComponent.generated.h already included, missing '#pragma once' in AttackComponent.h"
#endif
#define STORYGAME_AttackComponent_generated_h

#define StoryGame_Source_StoryGame_AttackComponent_h_24_SPARSE_DATA
#define StoryGame_Source_StoryGame_AttackComponent_h_24_RPC_WRAPPERS
#define StoryGame_Source_StoryGame_AttackComponent_h_24_RPC_WRAPPERS_NO_PURE_DECLS
#define StoryGame_Source_StoryGame_AttackComponent_h_24_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAttackComponent(); \
	friend struct Z_Construct_UClass_UAttackComponent_Statics; \
public: \
	DECLARE_CLASS(UAttackComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/StoryGame"), NO_API) \
	DECLARE_SERIALIZER(UAttackComponent)


#define StoryGame_Source_StoryGame_AttackComponent_h_24_INCLASS \
private: \
	static void StaticRegisterNativesUAttackComponent(); \
	friend struct Z_Construct_UClass_UAttackComponent_Statics; \
public: \
	DECLARE_CLASS(UAttackComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/StoryGame"), NO_API) \
	DECLARE_SERIALIZER(UAttackComponent)


#define StoryGame_Source_StoryGame_AttackComponent_h_24_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAttackComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAttackComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAttackComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAttackComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAttackComponent(UAttackComponent&&); \
	NO_API UAttackComponent(const UAttackComponent&); \
public:


#define StoryGame_Source_StoryGame_AttackComponent_h_24_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAttackComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAttackComponent(UAttackComponent&&); \
	NO_API UAttackComponent(const UAttackComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAttackComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAttackComponent); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAttackComponent)


#define StoryGame_Source_StoryGame_AttackComponent_h_24_PRIVATE_PROPERTY_OFFSET
#define StoryGame_Source_StoryGame_AttackComponent_h_21_PROLOG
#define StoryGame_Source_StoryGame_AttackComponent_h_24_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	StoryGame_Source_StoryGame_AttackComponent_h_24_PRIVATE_PROPERTY_OFFSET \
	StoryGame_Source_StoryGame_AttackComponent_h_24_SPARSE_DATA \
	StoryGame_Source_StoryGame_AttackComponent_h_24_RPC_WRAPPERS \
	StoryGame_Source_StoryGame_AttackComponent_h_24_INCLASS \
	StoryGame_Source_StoryGame_AttackComponent_h_24_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define StoryGame_Source_StoryGame_AttackComponent_h_24_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	StoryGame_Source_StoryGame_AttackComponent_h_24_PRIVATE_PROPERTY_OFFSET \
	StoryGame_Source_StoryGame_AttackComponent_h_24_SPARSE_DATA \
	StoryGame_Source_StoryGame_AttackComponent_h_24_RPC_WRAPPERS_NO_PURE_DECLS \
	StoryGame_Source_StoryGame_AttackComponent_h_24_INCLASS_NO_PURE_DECLS \
	StoryGame_Source_StoryGame_AttackComponent_h_24_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> STORYGAME_API UClass* StaticClass<class UAttackComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID StoryGame_Source_StoryGame_AttackComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
