// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MS6026_Game_Project/InteractibleActor.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInteractibleActor() {}
// Cross Module References
	MS6026_GAME_PROJECT_API UClass* Z_Construct_UClass_AInteractibleActor_NoRegister();
	MS6026_GAME_PROJECT_API UClass* Z_Construct_UClass_AInteractibleActor();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_MS6026_Game_Project();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
	MS6026_GAME_PROJECT_API UClass* Z_Construct_UClass_UGameplaySoundInterface_NoRegister();
// End Cross Module References
	void AInteractibleActor::StaticRegisterNativesAInteractibleActor()
	{
	}
	UClass* Z_Construct_UClass_AInteractibleActor_NoRegister()
	{
		return AInteractibleActor::StaticClass();
	}
	struct Z_Construct_UClass_AInteractibleActor_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Interactible_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Interactible;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_sceneRoot_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_sceneRoot;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AInteractibleActor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_MS6026_Game_Project,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AInteractibleActor_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "InteractibleActor.h" },
		{ "ModuleRelativePath", "InteractibleActor.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AInteractibleActor_Statics::NewProp_Interactible_MetaData[] = {
		{ "Category", "Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "InteractibleActor.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AInteractibleActor_Statics::NewProp_Interactible = { "Interactible", nullptr, (EPropertyFlags)0x0020080000080009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AInteractibleActor, Interactible), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AInteractibleActor_Statics::NewProp_Interactible_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AInteractibleActor_Statics::NewProp_Interactible_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AInteractibleActor_Statics::NewProp_sceneRoot_MetaData[] = {
		{ "Category", "Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "InteractibleActor.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AInteractibleActor_Statics::NewProp_sceneRoot = { "sceneRoot", nullptr, (EPropertyFlags)0x0020080000080009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AInteractibleActor, sceneRoot), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AInteractibleActor_Statics::NewProp_sceneRoot_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AInteractibleActor_Statics::NewProp_sceneRoot_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AInteractibleActor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AInteractibleActor_Statics::NewProp_Interactible,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AInteractibleActor_Statics::NewProp_sceneRoot,
	};
		const UE4CodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_AInteractibleActor_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UGameplaySoundInterface_NoRegister, (int32)VTABLE_OFFSET(AInteractibleActor, IGameplaySoundInterface), false },
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AInteractibleActor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AInteractibleActor>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AInteractibleActor_Statics::ClassParams = {
		&AInteractibleActor::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AInteractibleActor_Statics::PropPointers,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AInteractibleActor_Statics::PropPointers),
		UE_ARRAY_COUNT(InterfaceParams),
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AInteractibleActor_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AInteractibleActor_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AInteractibleActor()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AInteractibleActor_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AInteractibleActor, 2844056361);
	template<> MS6026_GAME_PROJECT_API UClass* StaticClass<AInteractibleActor>()
	{
		return AInteractibleActor::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AInteractibleActor(Z_Construct_UClass_AInteractibleActor, &AInteractibleActor::StaticClass, TEXT("/Script/MS6026_Game_Project"), TEXT("AInteractibleActor"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AInteractibleActor);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
