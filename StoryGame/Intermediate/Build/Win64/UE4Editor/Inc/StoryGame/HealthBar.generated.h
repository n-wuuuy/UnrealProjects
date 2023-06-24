// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef STORYGAME_HealthBar_generated_h
#error "HealthBar.generated.h already included, missing '#pragma once' in HealthBar.h"
#endif
#define STORYGAME_HealthBar_generated_h

#define StoryGame_Source_StoryGame_HealthBar_h_15_SPARSE_DATA
#define StoryGame_Source_StoryGame_HealthBar_h_15_RPC_WRAPPERS
#define StoryGame_Source_StoryGame_HealthBar_h_15_RPC_WRAPPERS_NO_PURE_DECLS
#define StoryGame_Source_StoryGame_HealthBar_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUHealthBar(); \
	friend struct Z_Construct_UClass_UHealthBar_Statics; \
public: \
	DECLARE_CLASS(UHealthBar, UUserWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/StoryGame"), NO_API) \
	DECLARE_SERIALIZER(UHealthBar)


#define StoryGame_Source_StoryGame_HealthBar_h_15_INCLASS \
private: \
	static void StaticRegisterNativesUHealthBar(); \
	friend struct Z_Construct_UClass_UHealthBar_Statics; \
public: \
	DECLARE_CLASS(UHealthBar, UUserWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/StoryGame"), NO_API) \
	DECLARE_SERIALIZER(UHealthBar)


#define StoryGame_Source_StoryGame_HealthBar_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UHealthBar(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UHealthBar) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UHealthBar); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UHealthBar); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UHealthBar(UHealthBar&&); \
	NO_API UHealthBar(const UHealthBar&); \
public:


#define StoryGame_Source_StoryGame_HealthBar_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UHealthBar(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UHealthBar(UHealthBar&&); \
	NO_API UHealthBar(const UHealthBar&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UHealthBar); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UHealthBar); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UHealthBar)


#define StoryGame_Source_StoryGame_HealthBar_h_15_PRIVATE_PROPERTY_OFFSET
#define StoryGame_Source_StoryGame_HealthBar_h_12_PROLOG
#define StoryGame_Source_StoryGame_HealthBar_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	StoryGame_Source_StoryGame_HealthBar_h_15_PRIVATE_PROPERTY_OFFSET \
	StoryGame_Source_StoryGame_HealthBar_h_15_SPARSE_DATA \
	StoryGame_Source_StoryGame_HealthBar_h_15_RPC_WRAPPERS \
	StoryGame_Source_StoryGame_HealthBar_h_15_INCLASS \
	StoryGame_Source_StoryGame_HealthBar_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define StoryGame_Source_StoryGame_HealthBar_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	StoryGame_Source_StoryGame_HealthBar_h_15_PRIVATE_PROPERTY_OFFSET \
	StoryGame_Source_StoryGame_HealthBar_h_15_SPARSE_DATA \
	StoryGame_Source_StoryGame_HealthBar_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	StoryGame_Source_StoryGame_HealthBar_h_15_INCLASS_NO_PURE_DECLS \
	StoryGame_Source_StoryGame_HealthBar_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> STORYGAME_API UClass* StaticClass<class UHealthBar>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID StoryGame_Source_StoryGame_HealthBar_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
