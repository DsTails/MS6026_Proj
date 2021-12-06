// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class USoundBase;
#ifdef MS6026_GAME_PROJECT_NoiseSourcePawn_generated_h
#error "NoiseSourcePawn.generated.h already included, missing '#pragma once' in NoiseSourcePawn.h"
#endif
#define MS6026_GAME_PROJECT_NoiseSourcePawn_generated_h

#define MS6026_Game_Project_Source_MS6026_Game_Project_NoiseSourcePawn_h_12_SPARSE_DATA
#define MS6026_Game_Project_Source_MS6026_Game_Project_NoiseSourcePawn_h_12_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execplayNoise);


#define MS6026_Game_Project_Source_MS6026_Game_Project_NoiseSourcePawn_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execplayNoise);


#define MS6026_Game_Project_Source_MS6026_Game_Project_NoiseSourcePawn_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesANoiseSourcePawn(); \
	friend struct Z_Construct_UClass_ANoiseSourcePawn_Statics; \
public: \
	DECLARE_CLASS(ANoiseSourcePawn, APawn, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/MS6026_Game_Project"), NO_API) \
	DECLARE_SERIALIZER(ANoiseSourcePawn)


#define MS6026_Game_Project_Source_MS6026_Game_Project_NoiseSourcePawn_h_12_INCLASS \
private: \
	static void StaticRegisterNativesANoiseSourcePawn(); \
	friend struct Z_Construct_UClass_ANoiseSourcePawn_Statics; \
public: \
	DECLARE_CLASS(ANoiseSourcePawn, APawn, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/MS6026_Game_Project"), NO_API) \
	DECLARE_SERIALIZER(ANoiseSourcePawn)


#define MS6026_Game_Project_Source_MS6026_Game_Project_NoiseSourcePawn_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ANoiseSourcePawn(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ANoiseSourcePawn) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ANoiseSourcePawn); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ANoiseSourcePawn); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ANoiseSourcePawn(ANoiseSourcePawn&&); \
	NO_API ANoiseSourcePawn(const ANoiseSourcePawn&); \
public:


#define MS6026_Game_Project_Source_MS6026_Game_Project_NoiseSourcePawn_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ANoiseSourcePawn(ANoiseSourcePawn&&); \
	NO_API ANoiseSourcePawn(const ANoiseSourcePawn&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ANoiseSourcePawn); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ANoiseSourcePawn); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ANoiseSourcePawn)


#define MS6026_Game_Project_Source_MS6026_Game_Project_NoiseSourcePawn_h_12_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__staticMesh() { return STRUCT_OFFSET(ANoiseSourcePawn, staticMesh); } \
	FORCEINLINE static uint32 __PPO__SceneRoot() { return STRUCT_OFFSET(ANoiseSourcePawn, SceneRoot); }


#define MS6026_Game_Project_Source_MS6026_Game_Project_NoiseSourcePawn_h_9_PROLOG
#define MS6026_Game_Project_Source_MS6026_Game_Project_NoiseSourcePawn_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	MS6026_Game_Project_Source_MS6026_Game_Project_NoiseSourcePawn_h_12_PRIVATE_PROPERTY_OFFSET \
	MS6026_Game_Project_Source_MS6026_Game_Project_NoiseSourcePawn_h_12_SPARSE_DATA \
	MS6026_Game_Project_Source_MS6026_Game_Project_NoiseSourcePawn_h_12_RPC_WRAPPERS \
	MS6026_Game_Project_Source_MS6026_Game_Project_NoiseSourcePawn_h_12_INCLASS \
	MS6026_Game_Project_Source_MS6026_Game_Project_NoiseSourcePawn_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define MS6026_Game_Project_Source_MS6026_Game_Project_NoiseSourcePawn_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	MS6026_Game_Project_Source_MS6026_Game_Project_NoiseSourcePawn_h_12_PRIVATE_PROPERTY_OFFSET \
	MS6026_Game_Project_Source_MS6026_Game_Project_NoiseSourcePawn_h_12_SPARSE_DATA \
	MS6026_Game_Project_Source_MS6026_Game_Project_NoiseSourcePawn_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	MS6026_Game_Project_Source_MS6026_Game_Project_NoiseSourcePawn_h_12_INCLASS_NO_PURE_DECLS \
	MS6026_Game_Project_Source_MS6026_Game_Project_NoiseSourcePawn_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MS6026_GAME_PROJECT_API UClass* StaticClass<class ANoiseSourcePawn>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID MS6026_Game_Project_Source_MS6026_Game_Project_NoiseSourcePawn_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
