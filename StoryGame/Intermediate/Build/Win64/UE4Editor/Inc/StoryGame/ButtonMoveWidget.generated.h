// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef STORYGAME_ButtonMoveWidget_generated_h
#error "ButtonMoveWidget.generated.h already included, missing '#pragma once' in ButtonMoveWidget.h"
#endif
#define STORYGAME_ButtonMoveWidget_generated_h

#define StoryGame_Source_StoryGame_ButtonMoveWidget_h_15_SPARSE_DATA
#define StoryGame_Source_StoryGame_ButtonMoveWidget_h_15_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execJumpButtonClicked);


#define StoryGame_Source_StoryGame_ButtonMoveWidget_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execJumpButtonClicked);


#define StoryGame_Source_StoryGame_ButtonMoveWidget_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUButtonMoveWidget(); \
	friend struct Z_Construct_UClass_UButtonMoveWidget_Statics; \
public: \
	DECLARE_CLASS(UButtonMoveWidget, UUserWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/StoryGame"), NO_API) \
	DECLARE_SERIALIZER(UButtonMoveWidget)


#define StoryGame_Source_StoryGame_ButtonMoveWidget_h_15_INCLASS \
private: \
	static void StaticRegisterNativesUButtonMoveWidget(); \
	friend struct Z_Construct_UClass_UButtonMoveWidget_Statics; \
public: \
	DECLARE_CLASS(UButtonMoveWidget, UUserWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/StoryGame"), NO_API) \
	DECLARE_SERIALIZER(UButtonMoveWidget)


#define StoryGame_Source_StoryGame_ButtonMoveWidget_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UButtonMoveWidget(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UButtonMoveWidget) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UButtonMoveWidget); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UButtonMoveWidget); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UButtonMoveWidget(UButtonMoveWidget&&); \
	NO_API UButtonMoveWidget(const UButtonMoveWidget&); \
public:


#define StoryGame_Source_StoryGame_ButtonMoveWidget_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UButtonMoveWidget(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UButtonMoveWidget(UButtonMoveWidget&&); \
	NO_API UButtonMoveWidget(const UButtonMoveWidget&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UButtonMoveWidget); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UButtonMoveWidget); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UButtonMoveWidget)


#define StoryGame_Source_StoryGame_ButtonMoveWidget_h_15_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__Jump() { return STRUCT_OFFSET(UButtonMoveWidget, Jump); }


#define StoryGame_Source_StoryGame_ButtonMoveWidget_h_12_PROLOG
#define StoryGame_Source_StoryGame_ButtonMoveWidget_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	StoryGame_Source_StoryGame_ButtonMoveWidget_h_15_PRIVATE_PROPERTY_OFFSET \
	StoryGame_Source_StoryGame_ButtonMoveWidget_h_15_SPARSE_DATA \
	StoryGame_Source_StoryGame_ButtonMoveWidget_h_15_RPC_WRAPPERS \
	StoryGame_Source_StoryGame_ButtonMoveWidget_h_15_INCLASS \
	StoryGame_Source_StoryGame_ButtonMoveWidget_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define StoryGame_Source_StoryGame_ButtonMoveWidget_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	StoryGame_Source_StoryGame_ButtonMoveWidget_h_15_PRIVATE_PROPERTY_OFFSET \
	StoryGame_Source_StoryGame_ButtonMoveWidget_h_15_SPARSE_DATA \
	StoryGame_Source_StoryGame_ButtonMoveWidget_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	StoryGame_Source_StoryGame_ButtonMoveWidget_h_15_INCLASS_NO_PURE_DECLS \
	StoryGame_Source_StoryGame_ButtonMoveWidget_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> STORYGAME_API UClass* StaticClass<class UButtonMoveWidget>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID StoryGame_Source_StoryGame_ButtonMoveWidget_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
