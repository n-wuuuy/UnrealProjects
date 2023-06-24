// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef STORYGAME_StoryGameGameModeBase_generated_h
#error "StoryGameGameModeBase.generated.h already included, missing '#pragma once' in StoryGameGameModeBase.h"
#endif
#define STORYGAME_StoryGameGameModeBase_generated_h

#define StoryGame_Source_StoryGame_StoryGameGameModeBase_h_15_SPARSE_DATA
#define StoryGame_Source_StoryGame_StoryGameGameModeBase_h_15_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execEndGame); \
	DECLARE_FUNCTION(execPunchPawn);


#define StoryGame_Source_StoryGame_StoryGameGameModeBase_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execEndGame); \
	DECLARE_FUNCTION(execPunchPawn);


#define StoryGame_Source_StoryGame_StoryGameGameModeBase_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAStoryGameGameModeBase(); \
	friend struct Z_Construct_UClass_AStoryGameGameModeBase_Statics; \
public: \
	DECLARE_CLASS(AStoryGameGameModeBase, AGameModeBase, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/StoryGame"), NO_API) \
	DECLARE_SERIALIZER(AStoryGameGameModeBase)


#define StoryGame_Source_StoryGame_StoryGameGameModeBase_h_15_INCLASS \
private: \
	static void StaticRegisterNativesAStoryGameGameModeBase(); \
	friend struct Z_Construct_UClass_AStoryGameGameModeBase_Statics; \
public: \
	DECLARE_CLASS(AStoryGameGameModeBase, AGameModeBase, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/StoryGame"), NO_API) \
	DECLARE_SERIALIZER(AStoryGameGameModeBase)


#define StoryGame_Source_StoryGame_StoryGameGameModeBase_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AStoryGameGameModeBase(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AStoryGameGameModeBase) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AStoryGameGameModeBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AStoryGameGameModeBase); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AStoryGameGameModeBase(AStoryGameGameModeBase&&); \
	NO_API AStoryGameGameModeBase(const AStoryGameGameModeBase&); \
public:


#define StoryGame_Source_StoryGame_StoryGameGameModeBase_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AStoryGameGameModeBase(AStoryGameGameModeBase&&); \
	NO_API AStoryGameGameModeBase(const AStoryGameGameModeBase&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AStoryGameGameModeBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AStoryGameGameModeBase); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AStoryGameGameModeBase)


#define StoryGame_Source_StoryGame_StoryGameGameModeBase_h_15_PRIVATE_PROPERTY_OFFSET
#define StoryGame_Source_StoryGame_StoryGameGameModeBase_h_12_PROLOG
#define StoryGame_Source_StoryGame_StoryGameGameModeBase_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	StoryGame_Source_StoryGame_StoryGameGameModeBase_h_15_PRIVATE_PROPERTY_OFFSET \
	StoryGame_Source_StoryGame_StoryGameGameModeBase_h_15_SPARSE_DATA \
	StoryGame_Source_StoryGame_StoryGameGameModeBase_h_15_RPC_WRAPPERS \
	StoryGame_Source_StoryGame_StoryGameGameModeBase_h_15_INCLASS \
	StoryGame_Source_StoryGame_StoryGameGameModeBase_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define StoryGame_Source_StoryGame_StoryGameGameModeBase_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	StoryGame_Source_StoryGame_StoryGameGameModeBase_h_15_PRIVATE_PROPERTY_OFFSET \
	StoryGame_Source_StoryGame_StoryGameGameModeBase_h_15_SPARSE_DATA \
	StoryGame_Source_StoryGame_StoryGameGameModeBase_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	StoryGame_Source_StoryGame_StoryGameGameModeBase_h_15_INCLASS_NO_PURE_DECLS \
	StoryGame_Source_StoryGame_StoryGameGameModeBase_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> STORYGAME_API UClass* StaticClass<class AStoryGameGameModeBase>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID StoryGame_Source_StoryGame_StoryGameGameModeBase_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
