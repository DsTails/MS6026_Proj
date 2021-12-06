// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MS6026_Game_Project/MS6026_Game_ProjectGameMode.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMS6026_Game_ProjectGameMode() {}
// Cross Module References
	MS6026_GAME_PROJECT_API UClass* Z_Construct_UClass_AMS6026_Game_ProjectGameMode_NoRegister();
	MS6026_GAME_PROJECT_API UClass* Z_Construct_UClass_AMS6026_Game_ProjectGameMode();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_MS6026_Game_Project();
// End Cross Module References
	void AMS6026_Game_ProjectGameMode::StaticRegisterNativesAMS6026_Game_ProjectGameMode()
	{
	}
	UClass* Z_Construct_UClass_AMS6026_Game_ProjectGameMode_NoRegister()
	{
		return AMS6026_Game_ProjectGameMode::StaticClass();
	}
	struct Z_Construct_UClass_AMS6026_Game_ProjectGameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AMS6026_Game_ProjectGameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_MS6026_Game_Project,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMS6026_Game_ProjectGameMode_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "MS6026_Game_ProjectGameMode.h" },
		{ "ModuleRelativePath", "MS6026_Game_ProjectGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AMS6026_Game_ProjectGameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMS6026_Game_ProjectGameMode>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AMS6026_Game_ProjectGameMode_Statics::ClassParams = {
		&AMS6026_Game_ProjectGameMode::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x008802ACu,
		METADATA_PARAMS(Z_Construct_UClass_AMS6026_Game_ProjectGameMode_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AMS6026_Game_ProjectGameMode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AMS6026_Game_ProjectGameMode()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AMS6026_Game_ProjectGameMode_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AMS6026_Game_ProjectGameMode, 4082425983);
	template<> MS6026_GAME_PROJECT_API UClass* StaticClass<AMS6026_Game_ProjectGameMode>()
	{
		return AMS6026_Game_ProjectGameMode::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AMS6026_Game_ProjectGameMode(Z_Construct_UClass_AMS6026_Game_ProjectGameMode, &AMS6026_Game_ProjectGameMode::StaticClass, TEXT("/Script/MS6026_Game_Project"), TEXT("AMS6026_Game_ProjectGameMode"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AMS6026_Game_ProjectGameMode);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
