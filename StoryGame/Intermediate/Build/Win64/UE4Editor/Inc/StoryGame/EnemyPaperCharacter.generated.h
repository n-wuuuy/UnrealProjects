// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UPrimitiveComponent;
class AActor;
struct FHitResult;
#ifdef STORYGAME_EnemyPaperCharacter_generated_h
#error "EnemyPaperCharacter.generated.h already included, missing '#pragma once' in EnemyPaperCharacter.h"
#endif
#define STORYGAME_EnemyPaperCharacter_generated_h

#define StoryGame_Source_StoryGame_EnemyPaperCharacter_h_18_SPARSE_DATA
#define StoryGame_Source_StoryGame_EnemyPaperCharacter_h_18_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execNotOnAttackRadius); \
	DECLARE_FUNCTION(execOnAttackRadius); \
	DECLARE_FUNCTION(execNotOnDetectionReadius); \
	DECLARE_FUNCTION(execOnDetectionReadius);


#define StoryGame_Source_StoryGame_EnemyPaperCharacter_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execNotOnAttackRadius); \
	DECLARE_FUNCTION(execOnAttackRadius); \
	DECLARE_FUNCTION(execNotOnDetectionReadius); \
	DECLARE_FUNCTION(execOnDetectionReadius);


#define StoryGame_Source_StoryGame_EnemyPaperCharacter_h_18_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAEnemyPaperCharacter(); \
	friend struct Z_Construct_UClass_AEnemyPaperCharacter_Statics; \
public: \
	DECLARE_CLASS(AEnemyPaperCharacter, APaperCharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/StoryGame"), NO_API) \
	DECLARE_SERIALIZER(AEnemyPaperCharacter)


#define StoryGame_Source_StoryGame_EnemyPaperCharacter_h_18_INCLASS \
private: \
	static void StaticRegisterNativesAEnemyPaperCharacter(); \
	friend struct Z_Construct_UClass_AEnemyPaperCharacter_Statics; \
public: \
	DECLARE_CLASS(AEnemyPaperCharacter, APaperCharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/StoryGame"), NO_API) \
	DECLARE_SERIALIZER(AEnemyPaperCharacter)


#define StoryGame_Source_StoryGame_EnemyPaperCharacter_h_18_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AEnemyPaperCharacter(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AEnemyPaperCharacter) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AEnemyPaperCharacter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AEnemyPaperCharacter); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AEnemyPaperCharacter(AEnemyPaperCharacter&&); \
	NO_API AEnemyPaperCharacter(const AEnemyPaperCharacter&); \
public:


#define StoryGame_Source_StoryGame_EnemyPaperCharacter_h_18_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AEnemyPaperCharacter(AEnemyPaperCharacter&&); \
	NO_API AEnemyPaperCharacter(const AEnemyPaperCharacter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AEnemyPaperCharacter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AEnemyPaperCharacter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AEnemyPaperCharacter)


#define StoryGame_Source_StoryGame_EnemyPaperCharacter_h_18_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__RunningAnimation() { return STRUCT_OFFSET(AEnemyPaperCharacter, RunningAnimation); } \
	FORCEINLINE static uint32 __PPO__IdleAnimation() { return STRUCT_OFFSET(AEnemyPaperCharacter, IdleAnimation); } \
	FORCEINLINE static uint32 __PPO__AttackAnimation() { return STRUCT_OFFSET(AEnemyPaperCharacter, AttackAnimation); } \
	FORCEINLINE static uint32 __PPO__TargetLocation() { return STRUCT_OFFSET(AEnemyPaperCharacter, TargetLocation); }


#define StoryGame_Source_StoryGame_EnemyPaperCharacter_h_15_PROLOG
#define StoryGame_Source_StoryGame_EnemyPaperCharacter_h_18_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	StoryGame_Source_StoryGame_EnemyPaperCharacter_h_18_PRIVATE_PROPERTY_OFFSET \
	StoryGame_Source_StoryGame_EnemyPaperCharacter_h_18_SPARSE_DATA \
	StoryGame_Source_StoryGame_EnemyPaperCharacter_h_18_RPC_WRAPPERS \
	StoryGame_Source_StoryGame_EnemyPaperCharacter_h_18_INCLASS \
	StoryGame_Source_StoryGame_EnemyPaperCharacter_h_18_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define StoryGame_Source_StoryGame_EnemyPaperCharacter_h_18_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	StoryGame_Source_StoryGame_EnemyPaperCharacter_h_18_PRIVATE_PROPERTY_OFFSET \
	StoryGame_Source_StoryGame_EnemyPaperCharacter_h_18_SPARSE_DATA \
	StoryGame_Source_StoryGame_EnemyPaperCharacter_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	StoryGame_Source_StoryGame_EnemyPaperCharacter_h_18_INCLASS_NO_PURE_DECLS \
	StoryGame_Source_StoryGame_EnemyPaperCharacter_h_18_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> STORYGAME_API UClass* StaticClass<class AEnemyPaperCharacter>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID StoryGame_Source_StoryGame_EnemyPaperCharacter_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
