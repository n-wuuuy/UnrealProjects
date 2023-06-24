// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef STORYGAME_GameHealtheComponent_generated_h
#error "GameHealtheComponent.generated.h already included, missing '#pragma once' in GameHealtheComponent.h"
#endif
#define STORYGAME_GameHealtheComponent_generated_h

#define StoryGame_Source_StoryGame_GameHealtheComponent_h_10_DELEGATE \
struct _Script_StoryGame_eventHealthsChangedEvent_Parms \
{ \
	int32 ChangeValue; \
}; \
static inline void FHealthsChangedEvent_DelegateWrapper(const FMulticastScriptDelegate& HealthsChangedEvent, int32 ChangeValue) \
{ \
	_Script_StoryGame_eventHealthsChangedEvent_Parms Parms; \
	Parms.ChangeValue=ChangeValue; \
	HealthsChangedEvent.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define StoryGame_Source_StoryGame_GameHealtheComponent_h_9_DELEGATE \
static inline void FHealthsEndedEvent_DelegateWrapper(const FMulticastScriptDelegate& HealthsEndedEvent) \
{ \
	HealthsEndedEvent.ProcessMulticastDelegate<UObject>(NULL); \
}


#define StoryGame_Source_StoryGame_GameHealtheComponent_h_15_SPARSE_DATA
#define StoryGame_Source_StoryGame_GameHealtheComponent_h_15_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetHealths); \
	DECLARE_FUNCTION(execChangeHealths);


#define StoryGame_Source_StoryGame_GameHealtheComponent_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetHealths); \
	DECLARE_FUNCTION(execChangeHealths);


#define StoryGame_Source_StoryGame_GameHealtheComponent_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUGameHealtheComponent(); \
	friend struct Z_Construct_UClass_UGameHealtheComponent_Statics; \
public: \
	DECLARE_CLASS(UGameHealtheComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/StoryGame"), NO_API) \
	DECLARE_SERIALIZER(UGameHealtheComponent)


#define StoryGame_Source_StoryGame_GameHealtheComponent_h_15_INCLASS \
private: \
	static void StaticRegisterNativesUGameHealtheComponent(); \
	friend struct Z_Construct_UClass_UGameHealtheComponent_Statics; \
public: \
	DECLARE_CLASS(UGameHealtheComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/StoryGame"), NO_API) \
	DECLARE_SERIALIZER(UGameHealtheComponent)


#define StoryGame_Source_StoryGame_GameHealtheComponent_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UGameHealtheComponent(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGameHealtheComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGameHealtheComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGameHealtheComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UGameHealtheComponent(UGameHealtheComponent&&); \
	NO_API UGameHealtheComponent(const UGameHealtheComponent&); \
public:


#define StoryGame_Source_StoryGame_GameHealtheComponent_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UGameHealtheComponent(UGameHealtheComponent&&); \
	NO_API UGameHealtheComponent(const UGameHealtheComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGameHealtheComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGameHealtheComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UGameHealtheComponent)


#define StoryGame_Source_StoryGame_GameHealtheComponent_h_15_PRIVATE_PROPERTY_OFFSET
#define StoryGame_Source_StoryGame_GameHealtheComponent_h_12_PROLOG
#define StoryGame_Source_StoryGame_GameHealtheComponent_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	StoryGame_Source_StoryGame_GameHealtheComponent_h_15_PRIVATE_PROPERTY_OFFSET \
	StoryGame_Source_StoryGame_GameHealtheComponent_h_15_SPARSE_DATA \
	StoryGame_Source_StoryGame_GameHealtheComponent_h_15_RPC_WRAPPERS \
	StoryGame_Source_StoryGame_GameHealtheComponent_h_15_INCLASS \
	StoryGame_Source_StoryGame_GameHealtheComponent_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define StoryGame_Source_StoryGame_GameHealtheComponent_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	StoryGame_Source_StoryGame_GameHealtheComponent_h_15_PRIVATE_PROPERTY_OFFSET \
	StoryGame_Source_StoryGame_GameHealtheComponent_h_15_SPARSE_DATA \
	StoryGame_Source_StoryGame_GameHealtheComponent_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	StoryGame_Source_StoryGame_GameHealtheComponent_h_15_INCLASS_NO_PURE_DECLS \
	StoryGame_Source_StoryGame_GameHealtheComponent_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> STORYGAME_API UClass* StaticClass<class UGameHealtheComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID StoryGame_Source_StoryGame_GameHealtheComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
