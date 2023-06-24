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
#ifdef STORYGAME_PaperProjectail_generated_h
#error "PaperProjectail.generated.h already included, missing '#pragma once' in PaperProjectail.h"
#endif
#define STORYGAME_PaperProjectail_generated_h

#define StoryGame_Source_StoryGame_PaperProjectail_h_15_SPARSE_DATA
#define StoryGame_Source_StoryGame_PaperProjectail_h_15_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnProjectailOverlap);


#define StoryGame_Source_StoryGame_PaperProjectail_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnProjectailOverlap);


#define StoryGame_Source_StoryGame_PaperProjectail_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAPaperProjectail(); \
	friend struct Z_Construct_UClass_APaperProjectail_Statics; \
public: \
	DECLARE_CLASS(APaperProjectail, APaperFlipbookActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/StoryGame"), NO_API) \
	DECLARE_SERIALIZER(APaperProjectail)


#define StoryGame_Source_StoryGame_PaperProjectail_h_15_INCLASS \
private: \
	static void StaticRegisterNativesAPaperProjectail(); \
	friend struct Z_Construct_UClass_APaperProjectail_Statics; \
public: \
	DECLARE_CLASS(APaperProjectail, APaperFlipbookActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/StoryGame"), NO_API) \
	DECLARE_SERIALIZER(APaperProjectail)


#define StoryGame_Source_StoryGame_PaperProjectail_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API APaperProjectail(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(APaperProjectail) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, APaperProjectail); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(APaperProjectail); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API APaperProjectail(APaperProjectail&&); \
	NO_API APaperProjectail(const APaperProjectail&); \
public:


#define StoryGame_Source_StoryGame_PaperProjectail_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API APaperProjectail(APaperProjectail&&); \
	NO_API APaperProjectail(const APaperProjectail&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, APaperProjectail); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(APaperProjectail); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(APaperProjectail)


#define StoryGame_Source_StoryGame_PaperProjectail_h_15_PRIVATE_PROPERTY_OFFSET
#define StoryGame_Source_StoryGame_PaperProjectail_h_12_PROLOG
#define StoryGame_Source_StoryGame_PaperProjectail_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	StoryGame_Source_StoryGame_PaperProjectail_h_15_PRIVATE_PROPERTY_OFFSET \
	StoryGame_Source_StoryGame_PaperProjectail_h_15_SPARSE_DATA \
	StoryGame_Source_StoryGame_PaperProjectail_h_15_RPC_WRAPPERS \
	StoryGame_Source_StoryGame_PaperProjectail_h_15_INCLASS \
	StoryGame_Source_StoryGame_PaperProjectail_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define StoryGame_Source_StoryGame_PaperProjectail_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	StoryGame_Source_StoryGame_PaperProjectail_h_15_PRIVATE_PROPERTY_OFFSET \
	StoryGame_Source_StoryGame_PaperProjectail_h_15_SPARSE_DATA \
	StoryGame_Source_StoryGame_PaperProjectail_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	StoryGame_Source_StoryGame_PaperProjectail_h_15_INCLASS_NO_PURE_DECLS \
	StoryGame_Source_StoryGame_PaperProjectail_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> STORYGAME_API UClass* StaticClass<class APaperProjectail>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID StoryGame_Source_StoryGame_PaperProjectail_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
