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
#ifdef STORYGAME_SniperEnemyCharacter_generated_h
#error "SniperEnemyCharacter.generated.h already included, missing '#pragma once' in SniperEnemyCharacter.h"
#endif
#define STORYGAME_SniperEnemyCharacter_generated_h

#define StoryGame_Source_StoryGame_SniperEnemyCharacter_h_13_SPARSE_DATA
#define StoryGame_Source_StoryGame_SniperEnemyCharacter_h_13_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execDestroyPawn); \
	DECLARE_FUNCTION(execKillPawn); \
	DECLARE_FUNCTION(execNotOnAttackRadius); \
	DECLARE_FUNCTION(execOnAttackRadius);


#define StoryGame_Source_StoryGame_SniperEnemyCharacter_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execDestroyPawn); \
	DECLARE_FUNCTION(execKillPawn); \
	DECLARE_FUNCTION(execNotOnAttackRadius); \
	DECLARE_FUNCTION(execOnAttackRadius);


#define StoryGame_Source_StoryGame_SniperEnemyCharacter_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesASniperEnemyCharacter(); \
	friend struct Z_Construct_UClass_ASniperEnemyCharacter_Statics; \
public: \
	DECLARE_CLASS(ASniperEnemyCharacter, APaperCharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/StoryGame"), NO_API) \
	DECLARE_SERIALIZER(ASniperEnemyCharacter)


#define StoryGame_Source_StoryGame_SniperEnemyCharacter_h_13_INCLASS \
private: \
	static void StaticRegisterNativesASniperEnemyCharacter(); \
	friend struct Z_Construct_UClass_ASniperEnemyCharacter_Statics; \
public: \
	DECLARE_CLASS(ASniperEnemyCharacter, APaperCharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/StoryGame"), NO_API) \
	DECLARE_SERIALIZER(ASniperEnemyCharacter)


#define StoryGame_Source_StoryGame_SniperEnemyCharacter_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ASniperEnemyCharacter(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ASniperEnemyCharacter) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASniperEnemyCharacter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASniperEnemyCharacter); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ASniperEnemyCharacter(ASniperEnemyCharacter&&); \
	NO_API ASniperEnemyCharacter(const ASniperEnemyCharacter&); \
public:


#define StoryGame_Source_StoryGame_SniperEnemyCharacter_h_13_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ASniperEnemyCharacter(ASniperEnemyCharacter&&); \
	NO_API ASniperEnemyCharacter(const ASniperEnemyCharacter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASniperEnemyCharacter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASniperEnemyCharacter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ASniperEnemyCharacter)


#define StoryGame_Source_StoryGame_SniperEnemyCharacter_h_13_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__RunningAnimation() { return STRUCT_OFFSET(ASniperEnemyCharacter, RunningAnimation); } \
	FORCEINLINE static uint32 __PPO__IdleAnimation() { return STRUCT_OFFSET(ASniperEnemyCharacter, IdleAnimation); } \
	FORCEINLINE static uint32 __PPO__AttackAnimation() { return STRUCT_OFFSET(ASniperEnemyCharacter, AttackAnimation); } \
	FORCEINLINE static uint32 __PPO__TargetLocation() { return STRUCT_OFFSET(ASniperEnemyCharacter, TargetLocation); }


#define StoryGame_Source_StoryGame_SniperEnemyCharacter_h_10_PROLOG
#define StoryGame_Source_StoryGame_SniperEnemyCharacter_h_13_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	StoryGame_Source_StoryGame_SniperEnemyCharacter_h_13_PRIVATE_PROPERTY_OFFSET \
	StoryGame_Source_StoryGame_SniperEnemyCharacter_h_13_SPARSE_DATA \
	StoryGame_Source_StoryGame_SniperEnemyCharacter_h_13_RPC_WRAPPERS \
	StoryGame_Source_StoryGame_SniperEnemyCharacter_h_13_INCLASS \
	StoryGame_Source_StoryGame_SniperEnemyCharacter_h_13_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define StoryGame_Source_StoryGame_SniperEnemyCharacter_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	StoryGame_Source_StoryGame_SniperEnemyCharacter_h_13_PRIVATE_PROPERTY_OFFSET \
	StoryGame_Source_StoryGame_SniperEnemyCharacter_h_13_SPARSE_DATA \
	StoryGame_Source_StoryGame_SniperEnemyCharacter_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	StoryGame_Source_StoryGame_SniperEnemyCharacter_h_13_INCLASS_NO_PURE_DECLS \
	StoryGame_Source_StoryGame_SniperEnemyCharacter_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> STORYGAME_API UClass* StaticClass<class ASniperEnemyCharacter>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID StoryGame_Source_StoryGame_SniperEnemyCharacter_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
