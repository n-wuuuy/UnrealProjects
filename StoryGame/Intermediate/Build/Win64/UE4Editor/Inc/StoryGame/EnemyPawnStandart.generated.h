// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
#ifdef STORYGAME_EnemyPawnStandart_generated_h
#error "EnemyPawnStandart.generated.h already included, missing '#pragma once' in EnemyPawnStandart.h"
#endif
#define STORYGAME_EnemyPawnStandart_generated_h

#define StoryGame_Source_StoryGame_EnemyPawnStandart_h_12_SPARSE_DATA
#define StoryGame_Source_StoryGame_EnemyPawnStandart_h_12_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnEnemyOverlap);


#define StoryGame_Source_StoryGame_EnemyPawnStandart_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnEnemyOverlap);


#define StoryGame_Source_StoryGame_EnemyPawnStandart_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAEnemyPawnStandart(); \
	friend struct Z_Construct_UClass_AEnemyPawnStandart_Statics; \
public: \
	DECLARE_CLASS(AEnemyPawnStandart, APawn, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/StoryGame"), NO_API) \
	DECLARE_SERIALIZER(AEnemyPawnStandart)


#define StoryGame_Source_StoryGame_EnemyPawnStandart_h_12_INCLASS \
private: \
	static void StaticRegisterNativesAEnemyPawnStandart(); \
	friend struct Z_Construct_UClass_AEnemyPawnStandart_Statics; \
public: \
	DECLARE_CLASS(AEnemyPawnStandart, APawn, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/StoryGame"), NO_API) \
	DECLARE_SERIALIZER(AEnemyPawnStandart)


#define StoryGame_Source_StoryGame_EnemyPawnStandart_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AEnemyPawnStandart(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AEnemyPawnStandart) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AEnemyPawnStandart); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AEnemyPawnStandart); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AEnemyPawnStandart(AEnemyPawnStandart&&); \
	NO_API AEnemyPawnStandart(const AEnemyPawnStandart&); \
public:


#define StoryGame_Source_StoryGame_EnemyPawnStandart_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AEnemyPawnStandart(AEnemyPawnStandart&&); \
	NO_API AEnemyPawnStandart(const AEnemyPawnStandart&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AEnemyPawnStandart); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AEnemyPawnStandart); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AEnemyPawnStandart)


#define StoryGame_Source_StoryGame_EnemyPawnStandart_h_12_PRIVATE_PROPERTY_OFFSET
#define StoryGame_Source_StoryGame_EnemyPawnStandart_h_9_PROLOG
#define StoryGame_Source_StoryGame_EnemyPawnStandart_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	StoryGame_Source_StoryGame_EnemyPawnStandart_h_12_PRIVATE_PROPERTY_OFFSET \
	StoryGame_Source_StoryGame_EnemyPawnStandart_h_12_SPARSE_DATA \
	StoryGame_Source_StoryGame_EnemyPawnStandart_h_12_RPC_WRAPPERS \
	StoryGame_Source_StoryGame_EnemyPawnStandart_h_12_INCLASS \
	StoryGame_Source_StoryGame_EnemyPawnStandart_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define StoryGame_Source_StoryGame_EnemyPawnStandart_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	StoryGame_Source_StoryGame_EnemyPawnStandart_h_12_PRIVATE_PROPERTY_OFFSET \
	StoryGame_Source_StoryGame_EnemyPawnStandart_h_12_SPARSE_DATA \
	StoryGame_Source_StoryGame_EnemyPawnStandart_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	StoryGame_Source_StoryGame_EnemyPawnStandart_h_12_INCLASS_NO_PURE_DECLS \
	StoryGame_Source_StoryGame_EnemyPawnStandart_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> STORYGAME_API UClass* StaticClass<class AEnemyPawnStandart>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID StoryGame_Source_StoryGame_EnemyPawnStandart_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
