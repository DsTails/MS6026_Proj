// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MS6026_Game_Project/NPC_Controller.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNPC_Controller() {}
// Cross Module References
	MS6026_GAME_PROJECT_API UClass* Z_Construct_UClass_ANPC_Controller_NoRegister();
	MS6026_GAME_PROJECT_API UClass* Z_Construct_UClass_ANPC_Controller();
	AIMODULE_API UClass* Z_Construct_UClass_AAIController();
	UPackage* Z_Construct_UPackage__Script_MS6026_Game_Project();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	AIMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FAIStimulus();
	AIMODULE_API UClass* Z_Construct_UClass_UAIPerceptionComponent_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(ANPC_Controller::execOnPerception)
	{
		P_GET_OBJECT(AActor,Z_Param_Actor);
		P_GET_STRUCT(FAIStimulus,Z_Param_Stimulus);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnPerception(Z_Param_Actor,Z_Param_Stimulus);
		P_NATIVE_END;
	}
	void ANPC_Controller::StaticRegisterNativesANPC_Controller()
	{
		UClass* Class = ANPC_Controller::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnPerception", &ANPC_Controller::execOnPerception },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ANPC_Controller_OnPerception_Statics
	{
		struct NPC_Controller_eventOnPerception_Parms
		{
			AActor* Actor;
			FAIStimulus Stimulus;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Actor;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Stimulus;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ANPC_Controller_OnPerception_Statics::NewProp_Actor = { "Actor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(NPC_Controller_eventOnPerception_Parms, Actor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ANPC_Controller_OnPerception_Statics::NewProp_Stimulus = { "Stimulus", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(NPC_Controller_eventOnPerception_Parms, Stimulus), Z_Construct_UScriptStruct_FAIStimulus, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ANPC_Controller_OnPerception_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ANPC_Controller_OnPerception_Statics::NewProp_Actor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ANPC_Controller_OnPerception_Statics::NewProp_Stimulus,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ANPC_Controller_OnPerception_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "NPC_Controller.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ANPC_Controller_OnPerception_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ANPC_Controller, nullptr, "OnPerception", nullptr, nullptr, sizeof(NPC_Controller_eventOnPerception_Parms), Z_Construct_UFunction_ANPC_Controller_OnPerception_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ANPC_Controller_OnPerception_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ANPC_Controller_OnPerception_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ANPC_Controller_OnPerception_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ANPC_Controller_OnPerception()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ANPC_Controller_OnPerception_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ANPC_Controller_NoRegister()
	{
		return ANPC_Controller::StaticClass();
	}
	struct Z_Construct_UClass_ANPC_Controller_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TargetKey_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_TargetKey;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AIPercept_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AIPercept;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ANPC_Controller_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AAIController,
		(UObject* (*)())Z_Construct_UPackage__Script_MS6026_Game_Project,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ANPC_Controller_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ANPC_Controller_OnPerception, "OnPerception" }, // 3010932465
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ANPC_Controller_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "NPC_Controller.h" },
		{ "ModuleRelativePath", "NPC_Controller.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ANPC_Controller_Statics::NewProp_TargetKey_MetaData[] = {
		{ "Category", "NPC_Controller" },
		{ "ModuleRelativePath", "NPC_Controller.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_ANPC_Controller_Statics::NewProp_TargetKey = { "TargetKey", nullptr, (EPropertyFlags)0x0020080000010001, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ANPC_Controller, TargetKey), METADATA_PARAMS(Z_Construct_UClass_ANPC_Controller_Statics::NewProp_TargetKey_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ANPC_Controller_Statics::NewProp_TargetKey_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ANPC_Controller_Statics::NewProp_AIPercept_MetaData[] = {
		{ "Category", "NPC_Controller" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "NPC_Controller.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ANPC_Controller_Statics::NewProp_AIPercept = { "AIPercept", nullptr, (EPropertyFlags)0x002008000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ANPC_Controller, AIPercept), Z_Construct_UClass_UAIPerceptionComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ANPC_Controller_Statics::NewProp_AIPercept_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ANPC_Controller_Statics::NewProp_AIPercept_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ANPC_Controller_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANPC_Controller_Statics::NewProp_TargetKey,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANPC_Controller_Statics::NewProp_AIPercept,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ANPC_Controller_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ANPC_Controller>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ANPC_Controller_Statics::ClassParams = {
		&ANPC_Controller::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ANPC_Controller_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ANPC_Controller_Statics::PropPointers),
		0,
		0x009002A4u,
		METADATA_PARAMS(Z_Construct_UClass_ANPC_Controller_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ANPC_Controller_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ANPC_Controller()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ANPC_Controller_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ANPC_Controller, 2970430249);
	template<> MS6026_GAME_PROJECT_API UClass* StaticClass<ANPC_Controller>()
	{
		return ANPC_Controller::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ANPC_Controller(Z_Construct_UClass_ANPC_Controller, &ANPC_Controller::StaticClass, TEXT("/Script/MS6026_Game_Project"), TEXT("ANPC_Controller"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ANPC_Controller);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
