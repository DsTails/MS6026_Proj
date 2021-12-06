// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MS6026_Game_Project/NoiseSourcePawn.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNoiseSourcePawn() {}
// Cross Module References
	MS6026_GAME_PROJECT_API UClass* Z_Construct_UClass_ANoiseSourcePawn_NoRegister();
	MS6026_GAME_PROJECT_API UClass* Z_Construct_UClass_ANoiseSourcePawn();
	ENGINE_API UClass* Z_Construct_UClass_APawn();
	UPackage* Z_Construct_UPackage__Script_MS6026_Game_Project();
	ENGINE_API UClass* Z_Construct_UClass_USoundBase_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(ANoiseSourcePawn::execplayNoise)
	{
		P_GET_OBJECT(USoundBase,Z_Param_SoundToPlay);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Volume);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->playNoise(Z_Param_SoundToPlay,Z_Param_Volume);
		P_NATIVE_END;
	}
	void ANoiseSourcePawn::StaticRegisterNativesANoiseSourcePawn()
	{
		UClass* Class = ANoiseSourcePawn::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "playNoise", &ANoiseSourcePawn::execplayNoise },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ANoiseSourcePawn_playNoise_Statics
	{
		struct NoiseSourcePawn_eventplayNoise_Parms
		{
			USoundBase* SoundToPlay;
			float Volume;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SoundToPlay;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Volume;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ANoiseSourcePawn_playNoise_Statics::NewProp_SoundToPlay = { "SoundToPlay", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(NoiseSourcePawn_eventplayNoise_Parms, SoundToPlay), Z_Construct_UClass_USoundBase_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ANoiseSourcePawn_playNoise_Statics::NewProp_Volume = { "Volume", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(NoiseSourcePawn_eventplayNoise_Parms, Volume), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ANoiseSourcePawn_playNoise_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ANoiseSourcePawn_playNoise_Statics::NewProp_SoundToPlay,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ANoiseSourcePawn_playNoise_Statics::NewProp_Volume,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ANoiseSourcePawn_playNoise_Statics::Function_MetaDataParams[] = {
		{ "Category", "Noise Functions" },
		{ "ModuleRelativePath", "NoiseSourcePawn.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ANoiseSourcePawn_playNoise_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ANoiseSourcePawn, nullptr, "playNoise", nullptr, nullptr, sizeof(NoiseSourcePawn_eventplayNoise_Parms), Z_Construct_UFunction_ANoiseSourcePawn_playNoise_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ANoiseSourcePawn_playNoise_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ANoiseSourcePawn_playNoise_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ANoiseSourcePawn_playNoise_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ANoiseSourcePawn_playNoise()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ANoiseSourcePawn_playNoise_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ANoiseSourcePawn_NoRegister()
	{
		return ANoiseSourcePawn::StaticClass();
	}
	struct Z_Construct_UClass_ANoiseSourcePawn_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_staticMesh_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_staticMesh;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SceneRoot_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SceneRoot;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ANoiseSourcePawn_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APawn,
		(UObject* (*)())Z_Construct_UPackage__Script_MS6026_Game_Project,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ANoiseSourcePawn_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ANoiseSourcePawn_playNoise, "playNoise" }, // 4290463189
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ANoiseSourcePawn_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "NoiseSourcePawn.h" },
		{ "ModuleRelativePath", "NoiseSourcePawn.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ANoiseSourcePawn_Statics::NewProp_staticMesh_MetaData[] = {
		{ "Category", "Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "NoiseSourcePawn.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ANoiseSourcePawn_Statics::NewProp_staticMesh = { "staticMesh", nullptr, (EPropertyFlags)0x0020080000080009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ANoiseSourcePawn, staticMesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ANoiseSourcePawn_Statics::NewProp_staticMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ANoiseSourcePawn_Statics::NewProp_staticMesh_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ANoiseSourcePawn_Statics::NewProp_SceneRoot_MetaData[] = {
		{ "Category", "Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "NoiseSourcePawn.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ANoiseSourcePawn_Statics::NewProp_SceneRoot = { "SceneRoot", nullptr, (EPropertyFlags)0x0020080000080009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ANoiseSourcePawn, SceneRoot), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ANoiseSourcePawn_Statics::NewProp_SceneRoot_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ANoiseSourcePawn_Statics::NewProp_SceneRoot_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ANoiseSourcePawn_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANoiseSourcePawn_Statics::NewProp_staticMesh,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANoiseSourcePawn_Statics::NewProp_SceneRoot,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ANoiseSourcePawn_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ANoiseSourcePawn>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ANoiseSourcePawn_Statics::ClassParams = {
		&ANoiseSourcePawn::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ANoiseSourcePawn_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ANoiseSourcePawn_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ANoiseSourcePawn_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ANoiseSourcePawn_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ANoiseSourcePawn()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ANoiseSourcePawn_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ANoiseSourcePawn, 1337511004);
	template<> MS6026_GAME_PROJECT_API UClass* StaticClass<ANoiseSourcePawn>()
	{
		return ANoiseSourcePawn::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ANoiseSourcePawn(Z_Construct_UClass_ANoiseSourcePawn, &ANoiseSourcePawn::StaticClass, TEXT("/Script/MS6026_Game_Project"), TEXT("ANoiseSourcePawn"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ANoiseSourcePawn);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
