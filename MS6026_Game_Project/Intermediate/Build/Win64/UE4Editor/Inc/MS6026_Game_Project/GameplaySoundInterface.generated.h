// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
#ifdef MS6026_GAME_PROJECT_GameplaySoundInterface_generated_h
#error "GameplaySoundInterface.generated.h already included, missing '#pragma once' in GameplaySoundInterface.h"
#endif
#define MS6026_GAME_PROJECT_GameplaySoundInterface_generated_h

#define MS6026_Game_Project_Source_MS6026_Game_Project_GameplaySoundInterface_h_15_SPARSE_DATA
#define MS6026_Game_Project_Source_MS6026_Game_Project_GameplaySoundInterface_h_15_RPC_WRAPPERS \
	virtual void triggerObjectNoise_Implementation(AActor* TargetObject) {}; \
 \
	DECLARE_FUNCTION(exectriggerObjectNoise);


#define MS6026_Game_Project_Source_MS6026_Game_Project_GameplaySoundInterface_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void triggerObjectNoise_Implementation(AActor* TargetObject) {}; \
 \
	DECLARE_FUNCTION(exectriggerObjectNoise);


#define MS6026_Game_Project_Source_MS6026_Game_Project_GameplaySoundInterface_h_15_EVENT_PARMS \
	struct GameplaySoundInterface_eventtriggerObjectNoise_Parms \
	{ \
		AActor* TargetObject; \
	};


#define MS6026_Game_Project_Source_MS6026_Game_Project_GameplaySoundInterface_h_15_CALLBACK_WRAPPERS
#define MS6026_Game_Project_Source_MS6026_Game_Project_GameplaySoundInterface_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	MS6026_GAME_PROJECT_API UGameplaySoundInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGameplaySoundInterface) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(MS6026_GAME_PROJECT_API, UGameplaySoundInterface); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGameplaySoundInterface); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	MS6026_GAME_PROJECT_API UGameplaySoundInterface(UGameplaySoundInterface&&); \
	MS6026_GAME_PROJECT_API UGameplaySoundInterface(const UGameplaySoundInterface&); \
public:


#define MS6026_Game_Project_Source_MS6026_Game_Project_GameplaySoundInterface_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	MS6026_GAME_PROJECT_API UGameplaySoundInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	MS6026_GAME_PROJECT_API UGameplaySoundInterface(UGameplaySoundInterface&&); \
	MS6026_GAME_PROJECT_API UGameplaySoundInterface(const UGameplaySoundInterface&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(MS6026_GAME_PROJECT_API, UGameplaySoundInterface); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGameplaySoundInterface); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGameplaySoundInterface)


#define MS6026_Game_Project_Source_MS6026_Game_Project_GameplaySoundInterface_h_15_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUGameplaySoundInterface(); \
	friend struct Z_Construct_UClass_UGameplaySoundInterface_Statics; \
public: \
	DECLARE_CLASS(UGameplaySoundInterface, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/MS6026_Game_Project"), MS6026_GAME_PROJECT_API) \
	DECLARE_SERIALIZER(UGameplaySoundInterface)


#define MS6026_Game_Project_Source_MS6026_Game_Project_GameplaySoundInterface_h_15_GENERATED_BODY_LEGACY \
		PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	MS6026_Game_Project_Source_MS6026_Game_Project_GameplaySoundInterface_h_15_GENERATED_UINTERFACE_BODY() \
	MS6026_Game_Project_Source_MS6026_Game_Project_GameplaySoundInterface_h_15_STANDARD_CONSTRUCTORS \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define MS6026_Game_Project_Source_MS6026_Game_Project_GameplaySoundInterface_h_15_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	MS6026_Game_Project_Source_MS6026_Game_Project_GameplaySoundInterface_h_15_GENERATED_UINTERFACE_BODY() \
	MS6026_Game_Project_Source_MS6026_Game_Project_GameplaySoundInterface_h_15_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define MS6026_Game_Project_Source_MS6026_Game_Project_GameplaySoundInterface_h_15_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IGameplaySoundInterface() {} \
public: \
	typedef UGameplaySoundInterface UClassType; \
	typedef IGameplaySoundInterface ThisClass; \
	static void Execute_triggerObjectNoise(UObject* O, AActor* TargetObject); \
	virtual UObject* _getUObject() const { check(0 && "Missing required implementation."); return nullptr; }


#define MS6026_Game_Project_Source_MS6026_Game_Project_GameplaySoundInterface_h_15_INCLASS_IINTERFACE \
protected: \
	virtual ~IGameplaySoundInterface() {} \
public: \
	typedef UGameplaySoundInterface UClassType; \
	typedef IGameplaySoundInterface ThisClass; \
	static void Execute_triggerObjectNoise(UObject* O, AActor* TargetObject); \
	virtual UObject* _getUObject() const { check(0 && "Missing required implementation."); return nullptr; }


#define MS6026_Game_Project_Source_MS6026_Game_Project_GameplaySoundInterface_h_12_PROLOG \
	MS6026_Game_Project_Source_MS6026_Game_Project_GameplaySoundInterface_h_15_EVENT_PARMS


#define MS6026_Game_Project_Source_MS6026_Game_Project_GameplaySoundInterface_h_23_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	MS6026_Game_Project_Source_MS6026_Game_Project_GameplaySoundInterface_h_15_SPARSE_DATA \
	MS6026_Game_Project_Source_MS6026_Game_Project_GameplaySoundInterface_h_15_RPC_WRAPPERS \
	MS6026_Game_Project_Source_MS6026_Game_Project_GameplaySoundInterface_h_15_CALLBACK_WRAPPERS \
	MS6026_Game_Project_Source_MS6026_Game_Project_GameplaySoundInterface_h_15_INCLASS_IINTERFACE \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define MS6026_Game_Project_Source_MS6026_Game_Project_GameplaySoundInterface_h_23_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	MS6026_Game_Project_Source_MS6026_Game_Project_GameplaySoundInterface_h_15_SPARSE_DATA \
	MS6026_Game_Project_Source_MS6026_Game_Project_GameplaySoundInterface_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	MS6026_Game_Project_Source_MS6026_Game_Project_GameplaySoundInterface_h_15_CALLBACK_WRAPPERS \
	MS6026_Game_Project_Source_MS6026_Game_Project_GameplaySoundInterface_h_15_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MS6026_GAME_PROJECT_API UClass* StaticClass<class UGameplaySoundInterface>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID MS6026_Game_Project_Source_MS6026_Game_Project_GameplaySoundInterface_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
