// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef MS6026_GAME_PROJECT_MS6026_NPC_Master_generated_h
#error "MS6026_NPC_Master.generated.h already included, missing '#pragma once' in MS6026_NPC_Master.h"
#endif
#define MS6026_GAME_PROJECT_MS6026_NPC_Master_generated_h

#define MS6026_Game_Project_Source_MS6026_Game_Project_MS6026_NPC_Master_h_32_SPARSE_DATA
#define MS6026_Game_Project_Source_MS6026_Game_Project_MS6026_NPC_Master_h_32_RPC_WRAPPERS
#define MS6026_Game_Project_Source_MS6026_Game_Project_MS6026_NPC_Master_h_32_RPC_WRAPPERS_NO_PURE_DECLS
#define MS6026_Game_Project_Source_MS6026_Game_Project_MS6026_NPC_Master_h_32_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAMS6026_NPC_Master(); \
	friend struct Z_Construct_UClass_AMS6026_NPC_Master_Statics; \
public: \
	DECLARE_CLASS(AMS6026_NPC_Master, AMS6026_Character_Master, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/MS6026_Game_Project"), NO_API) \
	DECLARE_SERIALIZER(AMS6026_NPC_Master)


#define MS6026_Game_Project_Source_MS6026_Game_Project_MS6026_NPC_Master_h_32_INCLASS \
private: \
	static void StaticRegisterNativesAMS6026_NPC_Master(); \
	friend struct Z_Construct_UClass_AMS6026_NPC_Master_Statics; \
public: \
	DECLARE_CLASS(AMS6026_NPC_Master, AMS6026_Character_Master, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/MS6026_Game_Project"), NO_API) \
	DECLARE_SERIALIZER(AMS6026_NPC_Master)


#define MS6026_Game_Project_Source_MS6026_Game_Project_MS6026_NPC_Master_h_32_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AMS6026_NPC_Master(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AMS6026_NPC_Master) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMS6026_NPC_Master); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMS6026_NPC_Master); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AMS6026_NPC_Master(AMS6026_NPC_Master&&); \
	NO_API AMS6026_NPC_Master(const AMS6026_NPC_Master&); \
public:


#define MS6026_Game_Project_Source_MS6026_Game_Project_MS6026_NPC_Master_h_32_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AMS6026_NPC_Master(AMS6026_NPC_Master&&); \
	NO_API AMS6026_NPC_Master(const AMS6026_NPC_Master&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMS6026_NPC_Master); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMS6026_NPC_Master); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AMS6026_NPC_Master)


#define MS6026_Game_Project_Source_MS6026_Game_Project_MS6026_NPC_Master_h_32_PRIVATE_PROPERTY_OFFSET
#define MS6026_Game_Project_Source_MS6026_Game_Project_MS6026_NPC_Master_h_29_PROLOG
#define MS6026_Game_Project_Source_MS6026_Game_Project_MS6026_NPC_Master_h_32_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	MS6026_Game_Project_Source_MS6026_Game_Project_MS6026_NPC_Master_h_32_PRIVATE_PROPERTY_OFFSET \
	MS6026_Game_Project_Source_MS6026_Game_Project_MS6026_NPC_Master_h_32_SPARSE_DATA \
	MS6026_Game_Project_Source_MS6026_Game_Project_MS6026_NPC_Master_h_32_RPC_WRAPPERS \
	MS6026_Game_Project_Source_MS6026_Game_Project_MS6026_NPC_Master_h_32_INCLASS \
	MS6026_Game_Project_Source_MS6026_Game_Project_MS6026_NPC_Master_h_32_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define MS6026_Game_Project_Source_MS6026_Game_Project_MS6026_NPC_Master_h_32_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	MS6026_Game_Project_Source_MS6026_Game_Project_MS6026_NPC_Master_h_32_PRIVATE_PROPERTY_OFFSET \
	MS6026_Game_Project_Source_MS6026_Game_Project_MS6026_NPC_Master_h_32_SPARSE_DATA \
	MS6026_Game_Project_Source_MS6026_Game_Project_MS6026_NPC_Master_h_32_RPC_WRAPPERS_NO_PURE_DECLS \
	MS6026_Game_Project_Source_MS6026_Game_Project_MS6026_NPC_Master_h_32_INCLASS_NO_PURE_DECLS \
	MS6026_Game_Project_Source_MS6026_Game_Project_MS6026_NPC_Master_h_32_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MS6026_GAME_PROJECT_API UClass* StaticClass<class AMS6026_NPC_Master>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID MS6026_Game_Project_Source_MS6026_Game_Project_MS6026_NPC_Master_h


#define FOREACH_ENUM_NPC_REACTION(op) \
	op(Run_Away) \
	op(Run_Towards) \
	op(Stand_Point) 
#define FOREACH_ENUM_NPC_TYPE(op) \
	op(Standing) \
	op(Walking) 
PRAGMA_ENABLE_DEPRECATION_WARNINGS
