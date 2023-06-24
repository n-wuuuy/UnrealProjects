// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef STORYGAME_TestComponent_generated_h
#error "TestComponent.generated.h already included, missing '#pragma once' in TestComponent.h"
#endif
#define STORYGAME_TestComponent_generated_h

#define StoryGame_Source_StoryGame_TestComponent_h_13_SPARSE_DATA
#define StoryGame_Source_StoryGame_TestComponent_h_13_RPC_WRAPPERS
#define StoryGame_Source_StoryGame_TestComponent_h_13_RPC_WRAPPERS_NO_PURE_DECLS
#define StoryGame_Source_StoryGame_TestComponent_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUTestComponent(); \
	friend struct Z_Construct_UClass_UTestComponent_Statics; \
public: \
	DECLARE_CLASS(UTestComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/StoryGame"), NO_API) \
	DECLARE_SERIALIZER(UTestComponent)


#define StoryGame_Source_StoryGame_TestComponent_h_13_INCLASS \
private: \
	static void StaticRegisterNativesUTestComponent(); \
	friend struct Z_Construct_UClass_UTestComponent_Statics; \
public: \
	DECLARE_CLASS(UTestComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/StoryGame"), NO_API) \
	DECLARE_SERIALIZER(UTestComponent)


#define StoryGame_Source_StoryGame_TestComponent_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UTestComponent(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UTestComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UTestComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UTestComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UTestComponent(UTestComponent&&); \
	NO_API UTestComponent(const UTestComponent&); \
public:


#define StoryGame_Source_StoryGame_TestComponent_h_13_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UTestComponent(UTestComponent&&); \
	NO_API UTestComponent(const UTestComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UTestComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UTestComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UTestComponent)


#define StoryGame_Source_StoryGame_TestComponent_h_13_PRIVATE_PROPERTY_OFFSET
#define StoryGame_Source_StoryGame_TestComponent_h_10_PROLOG
#define StoryGame_Source_StoryGame_TestComponent_h_13_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	StoryGame_Source_StoryGame_TestComponent_h_13_PRIVATE_PROPERTY_OFFSET \
	StoryGame_Source_StoryGame_TestComponent_h_13_SPARSE_DATA \
	StoryGame_Source_StoryGame_TestComponent_h_13_RPC_WRAPPERS \
	StoryGame_Source_StoryGame_TestComponent_h_13_INCLASS \
	StoryGame_Source_StoryGame_TestComponent_h_13_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define StoryGame_Source_StoryGame_TestComponent_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	StoryGame_Source_StoryGame_TestComponent_h_13_PRIVATE_PROPERTY_OFFSET \
	StoryGame_Source_StoryGame_TestComponent_h_13_SPARSE_DATA \
	StoryGame_Source_StoryGame_TestComponent_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	StoryGame_Source_StoryGame_TestComponent_h_13_INCLASS_NO_PURE_DECLS \
	StoryGame_Source_StoryGame_TestComponent_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> STORYGAME_API UClass* StaticClass<class UTestComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID StoryGame_Source_StoryGame_TestComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
