// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef STORYGAME_ShootComponent_generated_h
#error "ShootComponent.generated.h already included, missing '#pragma once' in ShootComponent.h"
#endif
#define STORYGAME_ShootComponent_generated_h

#define StoryGame_Source_StoryGame_ShootComponent_h_13_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FShootInfo_Statics; \
	STORYGAME_API static class UScriptStruct* StaticStruct();


template<> STORYGAME_API UScriptStruct* StaticStruct<struct FShootInfo>();

#define StoryGame_Source_StoryGame_ShootComponent_h_32_SPARSE_DATA
#define StoryGame_Source_StoryGame_ShootComponent_h_32_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execStopShoot); \
	DECLARE_FUNCTION(execStartShoot);


#define StoryGame_Source_StoryGame_ShootComponent_h_32_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execStopShoot); \
	DECLARE_FUNCTION(execStartShoot);


#define StoryGame_Source_StoryGame_ShootComponent_h_32_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUShootComponent(); \
	friend struct Z_Construct_UClass_UShootComponent_Statics; \
public: \
	DECLARE_CLASS(UShootComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/StoryGame"), NO_API) \
	DECLARE_SERIALIZER(UShootComponent)


#define StoryGame_Source_StoryGame_ShootComponent_h_32_INCLASS \
private: \
	static void StaticRegisterNativesUShootComponent(); \
	friend struct Z_Construct_UClass_UShootComponent_Statics; \
public: \
	DECLARE_CLASS(UShootComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/StoryGame"), NO_API) \
	DECLARE_SERIALIZER(UShootComponent)


#define StoryGame_Source_StoryGame_ShootComponent_h_32_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UShootComponent(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UShootComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UShootComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UShootComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UShootComponent(UShootComponent&&); \
	NO_API UShootComponent(const UShootComponent&); \
public:


#define StoryGame_Source_StoryGame_ShootComponent_h_32_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UShootComponent(UShootComponent&&); \
	NO_API UShootComponent(const UShootComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UShootComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UShootComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UShootComponent)


#define StoryGame_Source_StoryGame_ShootComponent_h_32_PRIVATE_PROPERTY_OFFSET
#define StoryGame_Source_StoryGame_ShootComponent_h_29_PROLOG
#define StoryGame_Source_StoryGame_ShootComponent_h_32_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	StoryGame_Source_StoryGame_ShootComponent_h_32_PRIVATE_PROPERTY_OFFSET \
	StoryGame_Source_StoryGame_ShootComponent_h_32_SPARSE_DATA \
	StoryGame_Source_StoryGame_ShootComponent_h_32_RPC_WRAPPERS \
	StoryGame_Source_StoryGame_ShootComponent_h_32_INCLASS \
	StoryGame_Source_StoryGame_ShootComponent_h_32_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define StoryGame_Source_StoryGame_ShootComponent_h_32_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	StoryGame_Source_StoryGame_ShootComponent_h_32_PRIVATE_PROPERTY_OFFSET \
	StoryGame_Source_StoryGame_ShootComponent_h_32_SPARSE_DATA \
	StoryGame_Source_StoryGame_ShootComponent_h_32_RPC_WRAPPERS_NO_PURE_DECLS \
	StoryGame_Source_StoryGame_ShootComponent_h_32_INCLASS_NO_PURE_DECLS \
	StoryGame_Source_StoryGame_ShootComponent_h_32_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> STORYGAME_API UClass* StaticClass<class UShootComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID StoryGame_Source_StoryGame_ShootComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
