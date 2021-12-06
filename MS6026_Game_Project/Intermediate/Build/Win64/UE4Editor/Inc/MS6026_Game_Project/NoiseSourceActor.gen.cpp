// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MS6026_Game_Project/NoiseSourceActor.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNoiseSourceActor() {}
// Cross Module References
	MS6026_GAME_PROJECT_API UClass* Z_Construct_UClass_ANoiseSourceActor_NoRegister();
	MS6026_GAME_PROJECT_API UClass* Z_Construct_UClass_ANoiseSourceActor();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_MS6026_Game_Project();
	ENGINE_API UClass* Z_Construct_UClass_USoundBase_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(ANoiseSourceActor::execplayNoise)
	{
		P_GET_OBJECT(USoundBase,Z_Param_SoundToPlay);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Volume);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->playNoise(Z_Param_SoundToPlay,Z_Param_Volume);
		P_NATIVE_END;
	}
	void ANoiseSourceActor::StaticRegisterNativesANoiseSourceActor()
	{
		UClass* Class = ANoiseSourceActor::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "playNoise", &ANoiseSourceActor::execplayNoise },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ANoiseSourceActor_playNoise_Statics
	{
		struct NoiseSourceActor_eventplayNoise_Parms
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
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ANoiseSourceActor_playNoise_Statics::NewProp_SoundToPlay = { "SoundToPlay", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(NoiseSourceActor_eventplayNoise_Parms, SoundToPlay), Z_Construct_UClass_USoundBase_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ANoiseSourceActor_playNoise_Statics::NewProp_Volume = { "Volume", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(NoiseSourceActor_eventplayNoise_Parms, Volume), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ANoiseSourceActor_playNoise_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ANoiseSourceActor_playNoise_Statics::NewProp_SoundToPlay,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ANoiseSourceActor_playNoise_Statics::NewProp_Volume,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ANoiseSourceActor_playNoise_Statics::Function_MetaDataParams[] = {
		{ "Category", "Noise Functions" },
		{ "ModuleRelativePath", "NoiseSourceActor.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ANoiseSourceActor_playNoise_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ANoiseSourceActor, nullptr, "playNoise", nullptr, nullptr, sizeof(NoiseSourceActor_eventplayNoise_Parms), Z_Construct_UFunction_ANoiseSourceActor_playNoise_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ANoiseSourceActor_playNoise_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ANoiseSourceActor_playNoise_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ANoiseSourceActor_playNoise_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ANoiseSourceActor_playNoise()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ANoiseSourceActor_playNoise_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ANoiseSourceActor_NoRegister()
	{
		return ANoiseSourceActor::StaticClass();
	}
	struct Z_Construct_UClass_ANoiseSourceActor_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ANoiseSourceActor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_MS6026_Game_Project,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ANoiseSourceActor_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ANoiseSourceActor_playNoise, "playNoise" }, // 3486792886
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ANoiseSourceActor_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "NoiseSourceActor.h" },
		{ "ModuleRelativePath", "NoiseSourceActor.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ANoiseSourceActor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ANoiseSourceActor>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ANoiseSourceActor_Statics::ClassParams = {
		&ANoiseSourceActor::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ANoiseSourceActor_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ANoiseSourceActor_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ANoiseSourceActor()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ANoiseSourceActor_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ANoiseSourceActor, 1659851246);
	template<> MS6026_GAME_PROJECT_API UClass* StaticClass<ANoiseSourceActor>()
	{
		return ANoiseSourceActor::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ANoiseSourceActor(Z_Construct_UClass_ANoiseSourceActor, &ANoiseSourceActor::StaticClass, TEXT("/Script/MS6026_Game_Project"), TEXT("ANoiseSourceActor"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ANoiseSourceActor);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
