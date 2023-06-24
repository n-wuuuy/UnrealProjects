// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef STORYGAME_MoveWidget_generated_h
#error "MoveWidget.generated.h already included, missing '#pragma once' in MoveWidget.h"
#endif
#define STORYGAME_MoveWidget_generated_h

#define StoryGame_Source_StoryGame_MoveWidget_h_15_SPARSE_DATA
#define StoryGame_Source_StoryGame_MoveWidget_h_15_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execShootButtonStopClicked); \
	DECLARE_FUNCTION(execShootButtonClicked); \
	DECLARE_FUNCTION(execTeleportButtonClicked); \
	DECLARE_FUNCTION(execJumpButtonClicked);


#define StoryGame_Source_StoryGame_MoveWidget_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execShootButtonStopClicked); \
	DECLARE_FUNCTION(execShootButtonClicked); \
	DECLARE_FUNCTION(execTeleportButtonClicked); \
	DECLARE_FUNCTION(execJumpButtonClicked);


#define StoryGame_Source_StoryGame_MoveWidget_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMoveWidget(); \
	friend struct Z_Construct_UClass_UMoveWidget_Statics; \
public: \
	DECLARE_CLASS(UMoveWidget, UUserWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/StoryGame"), NO_API) \
	DECLARE_SERIALIZER(UMoveWidget)


#define StoryGame_Source_StoryGame_MoveWidget_h_15_INCLASS \
private: \
	static void StaticRegisterNativesUMoveWidget(); \
	friend struct Z_Construct_UClass_UMoveWidget_Statics; \
public: \
	DECLARE_CLASS(UMoveWidget, UUserWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/StoryGame"), NO_API) \
	DECLARE_SERIALIZER(UMoveWidget)


#define StoryGame_Source_StoryGame_MoveWidget_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMoveWidget(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMoveWidget) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMoveWidget); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMoveWidget); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UMoveWidget(UMoveWidget&&); \
	NO_API UMoveWidget(const UMoveWidget&); \
public:


#define StoryGame_Source_StoryGame_MoveWidget_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMoveWidget(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UMoveWidget(UMoveWidget&&); \
	NO_API UMoveWidget(const UMoveWidget&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMoveWidget); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMoveWidget); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMoveWidget)


#define StoryGame_Source_StoryGame_MoveWidget_h_15_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__Jump() { return STRUCT_OFFSET(UMoveWidget, Jump); } \
	FORCEINLINE static uint32 __PPO__Teleport() { return STRUCT_OFFSET(UMoveWidget, Teleport); } \
	FORCEINLINE static uint32 __PPO__Shoot() { return STRUCT_OFFSET(UMoveWidget, Shoot); }


#define StoryGame_Source_StoryGame_MoveWidget_h_12_PROLOG
#define StoryGame_Source_StoryGame_MoveWidget_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	StoryGame_Source_StoryGame_MoveWidget_h_15_PRIVATE_PROPERTY_OFFSET \
	StoryGame_Source_StoryGame_MoveWidget_h_15_SPARSE_DATA \
	StoryGame_Source_StoryGame_MoveWidget_h_15_RPC_WRAPPERS \
	StoryGame_Source_StoryGame_MoveWidget_h_15_INCLASS \
	StoryGame_Source_StoryGame_MoveWidget_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define StoryGame_Source_StoryGame_MoveWidget_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	StoryGame_Source_StoryGame_MoveWidget_h_15_PRIVATE_PROPERTY_OFFSET \
	StoryGame_Source_StoryGame_MoveWidget_h_15_SPARSE_DATA \
	StoryGame_Source_StoryGame_MoveWidget_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	StoryGame_Source_StoryGame_MoveWidget_h_15_INCLASS_NO_PURE_DECLS \
	StoryGame_Source_StoryGame_MoveWidget_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> STORYGAME_API UClass* StaticClass<class UMoveWidget>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID StoryGame_Source_StoryGame_MoveWidget_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
