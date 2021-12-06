// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
struct FAIStimulus;
#ifdef MS6026_GAME_PROJECT_NPC_Controller_generated_h
#error "NPC_Controller.generated.h already included, missing '#pragma once' in NPC_Controller.h"
#endif
#define MS6026_GAME_PROJECT_NPC_Controller_generated_h

#define MS6026_Game_Project_Source_MS6026_Game_Project_NPC_Controller_h_19_SPARSE_DATA
#define MS6026_Game_Project_Source_MS6026_Game_Project_NPC_Controller_h_19_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnPerception);


#define MS6026_Game_Project_Source_MS6026_Game_Project_NPC_Controller_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnPerception);


#define MS6026_Game_Project_Source_MS6026_Game_Project_NPC_Controller_h_19_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesANPC_Controller(); \
	friend struct Z_Construct_UClass_ANPC_Controller_Statics; \
public: \
	DECLARE_CLASS(ANPC_Controller, AAIController, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/MS6026_Game_Project"), NO_API) \
	DECLARE_SERIALIZER(ANPC_Controller)


#define MS6026_Game_Project_Source_MS6026_Game_Project_NPC_Controller_h_19_INCLASS \
private: \
	static void StaticRegisterNativesANPC_Controller(); \
	friend struct Z_Construct_UClass_ANPC_Controller_Statics; \
public: \
	DECLARE_CLASS(ANPC_Controller, AAIController, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/MS6026_Game_Project"), NO_API) \
	DECLARE_SERIALIZER(ANPC_Controller)


#define MS6026_Game_Project_Source_MS6026_Game_Project_NPC_Controller_h_19_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ANPC_Controller(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ANPC_Controller) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ANPC_Controller); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ANPC_Controller); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ANPC_Controller(ANPC_Controller&&); \
	NO_API ANPC_Controller(const ANPC_Controller&); \
public:


#define MS6026_Game_Project_Source_MS6026_Game_Project_NPC_Controller_h_19_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ANPC_Controller(ANPC_Controller&&); \
	NO_API ANPC_Controller(const ANPC_Controller&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ANPC_Controller); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ANPC_Controller); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ANPC_Controller)


#define MS6026_Game_Project_Source_MS6026_Game_Project_NPC_Controller_h_19_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__TargetKey() { return STRUCT_OFFSET(ANPC_Controller, TargetKey); } \
	FORCEINLINE static uint32 __PPO__AIPercept() { return STRUCT_OFFSET(ANPC_Controller, AIPercept); }


#define MS6026_Game_Project_Source_MS6026_Game_Project_NPC_Controller_h_16_PROLOG
#define MS6026_Game_Project_Source_MS6026_Game_Project_NPC_Controller_h_19_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	MS6026_Game_Project_Source_MS6026_Game_Project_NPC_Controller_h_19_PRIVATE_PROPERTY_OFFSET \
	MS6026_Game_Project_Source_MS6026_Game_Project_NPC_Controller_h_19_SPARSE_DATA \
	MS6026_Game_Project_Source_MS6026_Game_Project_NPC_Controller_h_19_RPC_WRAPPERS \
	MS6026_Game_Project_Source_MS6026_Game_Project_NPC_Controller_h_19_INCLASS \
	MS6026_Game_Project_Source_MS6026_Game_Project_NPC_Controller_h_19_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define MS6026_Game_Project_Source_MS6026_Game_Project_NPC_Controller_h_19_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	MS6026_Game_Project_Source_MS6026_Game_Project_NPC_Controller_h_19_PRIVATE_PROPERTY_OFFSET \
	MS6026_Game_Project_Source_MS6026_Game_Project_NPC_Controller_h_19_SPARSE_DATA \
	MS6026_Game_Project_Source_MS6026_Game_Project_NPC_Controller_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
	MS6026_Game_Project_Source_MS6026_Game_Project_NPC_Controller_h_19_INCLASS_NO_PURE_DECLS \
	MS6026_Game_Project_Source_MS6026_Game_Project_NPC_Controller_h_19_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MS6026_GAME_PROJECT_API UClass* StaticClass<class ANPC_Controller>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID MS6026_Game_Project_Source_MS6026_Game_Project_NPC_Controller_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
