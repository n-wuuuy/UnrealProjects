// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef STORYGAME_PlayerPaperCharacter_generated_h
#error "PlayerPaperCharacter.generated.h already included, missing '#pragma once' in PlayerPaperCharacter.h"
#endif
#define STORYGAME_PlayerPaperCharacter_generated_h

#define StoryGame_Source_StoryGame_PlayerPaperCharacter_h_9_DELEGATE \
static inline void FPawnDamagedEvent_DelegateWrapper(const FMulticastScriptDelegate& PawnDamagedEvent) \
{ \
	PawnDamagedEvent.ProcessMulticastDelegate<UObject>(NULL); \
}


#define StoryGame_Source_StoryGame_PlayerPaperCharacter_h_16_SPARSE_DATA
#define StoryGame_Source_StoryGame_PlayerPaperCharacter_h_16_RPC_WRAPPERS
#define StoryGame_Source_StoryGame_PlayerPaperCharacter_h_16_RPC_WRAPPERS_NO_PURE_DECLS
#define StoryGame_Source_StoryGame_PlayerPaperCharacter_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAPlayerPaperCharacter(); \
	friend struct Z_Construct_UClass_APlayerPaperCharacter_Statics; \
public: \
	DECLARE_CLASS(APlayerPaperCharacter, APaperCharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/StoryGame"), NO_API) \
	DECLARE_SERIALIZER(APlayerPaperCharacter)


#define StoryGame_Source_StoryGame_PlayerPaperCharacter_h_16_INCLASS \
private: \
	static void StaticRegisterNativesAPlayerPaperCharacter(); \
	friend struct Z_Construct_UClass_APlayerPaperCharacter_Statics; \
public: \
	DECLARE_CLASS(APlayerPaperCharacter, APaperCharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/StoryGame"), NO_API) \
	DECLARE_SERIALIZER(APlayerPaperCharacter)


#define StoryGame_Source_StoryGame_PlayerPaperCharacter_h_16_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API APlayerPaperCharacter(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(APlayerPaperCharacter) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, APlayerPaperCharacter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(APlayerPaperCharacter); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API APlayerPaperCharacter(APlayerPaperCharacter&&); \
	NO_API APlayerPaperCharacter(const APlayerPaperCharacter&); \
public:


#define StoryGame_Source_StoryGame_PlayerPaperCharacter_h_16_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API APlayerPaperCharacter(APlayerPaperCharacter&&); \
	NO_API APlayerPaperCharacter(const APlayerPaperCharacter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, APlayerPaperCharacter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(APlayerPaperCharacter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(APlayerPaperCharacter)


#define StoryGame_Source_StoryGame_PlayerPaperCharacter_h_16_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__RunningAnimation() { return STRUCT_OFFSET(APlayerPaperCharacter, RunningAnimation); } \
	FORCEINLINE static uint32 __PPO__IdleAnimation() { return STRUCT_OFFSET(APlayerPaperCharacter, IdleAnimation); } \
	FORCEINLINE static uint32 __PPO__TeleportAnimation() { return STRUCT_OFFSET(APlayerPaperCharacter, TeleportAnimation); }


#define StoryGame_Source_StoryGame_PlayerPaperCharacter_h_13_PROLOG
#define StoryGame_Source_StoryGame_PlayerPaperCharacter_h_16_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	StoryGame_Source_StoryGame_PlayerPaperCharacter_h_16_PRIVATE_PROPERTY_OFFSET \
	StoryGame_Source_StoryGame_PlayerPaperCharacter_h_16_SPARSE_DATA \
	StoryGame_Source_StoryGame_PlayerPaperCharacter_h_16_RPC_WRAPPERS \
	StoryGame_Source_StoryGame_PlayerPaperCharacter_h_16_INCLASS \
	StoryGame_Source_StoryGame_PlayerPaperCharacter_h_16_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define StoryGame_Source_StoryGame_PlayerPaperCharacter_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	StoryGame_Source_StoryGame_PlayerPaperCharacter_h_16_PRIVATE_PROPERTY_OFFSET \
	StoryGame_Source_StoryGame_PlayerPaperCharacter_h_16_SPARSE_DATA \
	StoryGame_Source_StoryGame_PlayerPaperCharacter_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	StoryGame_Source_StoryGame_PlayerPaperCharacter_h_16_INCLASS_NO_PURE_DECLS \
	StoryGame_Source_StoryGame_PlayerPaperCharacter_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> STORYGAME_API UClass* StaticClass<class APlayerPaperCharacter>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID StoryGame_Source_StoryGame_PlayerPaperCharacter_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
