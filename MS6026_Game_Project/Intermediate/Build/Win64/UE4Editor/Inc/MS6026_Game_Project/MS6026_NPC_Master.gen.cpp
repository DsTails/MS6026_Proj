// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MS6026_Game_Project/MS6026_NPC_Master.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMS6026_NPC_Master() {}
// Cross Module References
	MS6026_GAME_PROJECT_API UEnum* Z_Construct_UEnum_MS6026_Game_Project_NPC_Reaction();
	UPackage* Z_Construct_UPackage__Script_MS6026_Game_Project();
	MS6026_GAME_PROJECT_API UEnum* Z_Construct_UEnum_MS6026_Game_Project_NPC_Type();
	MS6026_GAME_PROJECT_API UClass* Z_Construct_UClass_AMS6026_NPC_Master_NoRegister();
	MS6026_GAME_PROJECT_API UClass* Z_Construct_UClass_AMS6026_NPC_Master();
	MS6026_GAME_PROJECT_API UClass* Z_Construct_UClass_AMS6026_Character_Master();
	AIMODULE_API UClass* Z_Construct_UClass_UPawnSensingComponent_NoRegister();
	AIMODULE_API UClass* Z_Construct_UClass_UBehaviorTree_NoRegister();
// End Cross Module References
	static UEnum* NPC_Reaction_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_MS6026_Game_Project_NPC_Reaction, Z_Construct_UPackage__Script_MS6026_Game_Project(), TEXT("NPC_Reaction"));
		}
		return Singleton;
	}
	template<> MS6026_GAME_PROJECT_API UEnum* StaticEnum<NPC_Reaction>()
	{
		return NPC_Reaction_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_NPC_Reaction(NPC_Reaction_StaticEnum, TEXT("/Script/MS6026_Game_Project"), TEXT("NPC_Reaction"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_MS6026_Game_Project_NPC_Reaction_Hash() { return 2466172249U; }
	UEnum* Z_Construct_UEnum_MS6026_Game_Project_NPC_Reaction()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_MS6026_Game_Project();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("NPC_Reaction"), 0, Get_Z_Construct_UEnum_MS6026_Game_Project_NPC_Reaction_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "Run_Away", (int64)Run_Away },
				{ "Run_Towards", (int64)Run_Towards },
				{ "Stand_Point", (int64)Stand_Point },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "ModuleRelativePath", "MS6026_NPC_Master.h" },
				{ "Run_Away.DisplayName", "Run Away" },
				{ "Run_Away.Name", "Run_Away" },
				{ "Run_Towards.DisplayName", "Run Towards" },
				{ "Run_Towards.Name", "Run_Towards" },
				{ "Stand_Point.DisplayName", "Stand and Point" },
				{ "Stand_Point.Name", "Stand_Point" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_MS6026_Game_Project,
				nullptr,
				"NPC_Reaction",
				"NPC_Reaction",
				Enumerators,
				UE_ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				EEnumFlags::None,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::Regular,
				METADATA_PARAMS(Enum_MetaDataParams, UE_ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	static UEnum* NPC_Type_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_MS6026_Game_Project_NPC_Type, Z_Construct_UPackage__Script_MS6026_Game_Project(), TEXT("NPC_Type"));
		}
		return Singleton;
	}
	template<> MS6026_GAME_PROJECT_API UEnum* StaticEnum<NPC_Type>()
	{
		return NPC_Type_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_NPC_Type(NPC_Type_StaticEnum, TEXT("/Script/MS6026_Game_Project"), TEXT("NPC_Type"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_MS6026_Game_Project_NPC_Type_Hash() { return 1492667701U; }
	UEnum* Z_Construct_UEnum_MS6026_Game_Project_NPC_Type()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_MS6026_Game_Project();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("NPC_Type"), 0, Get_Z_Construct_UEnum_MS6026_Game_Project_NPC_Type_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "Standing", (int64)Standing },
				{ "Walking", (int64)Walking },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "Comment", "/**\n * \n */" },
				{ "ModuleRelativePath", "MS6026_NPC_Master.h" },
				{ "Standing.Comment", "/**\n * \n */" },
				{ "Standing.DisplayName", "Standing" },
				{ "Standing.Name", "Standing" },
				{ "Walking.Comment", "/**\n * \n */" },
				{ "Walking.DisplayName", "Walking" },
				{ "Walking.Name", "Walking" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_MS6026_Game_Project,
				nullptr,
				"NPC_Type",
				"NPC_Type",
				Enumerators,
				UE_ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				EEnumFlags::None,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::Regular,
				METADATA_PARAMS(Enum_MetaDataParams, UE_ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	void AMS6026_NPC_Master::StaticRegisterNativesAMS6026_NPC_Master()
	{
	}
	UClass* Z_Construct_UClass_AMS6026_NPC_Master_NoRegister()
	{
		return AMS6026_NPC_Master::StaticClass();
	}
	struct Z_Construct_UClass_AMS6026_NPC_Master_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PawnSensing_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PawnSensing;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BehaviorTree_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_BehaviorTree;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NPC_Typing_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_NPC_Typing;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_isPlayerHeard_MetaData[];
#endif
		static void NewProp_isPlayerHeard_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_isPlayerHeard;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AMS6026_NPC_Master_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AMS6026_Character_Master,
		(UObject* (*)())Z_Construct_UPackage__Script_MS6026_Game_Project,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMS6026_NPC_Master_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "MS6026_NPC_Master.h" },
		{ "ModuleRelativePath", "MS6026_NPC_Master.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMS6026_NPC_Master_Statics::NewProp_PawnSensing_MetaData[] = {
		{ "Category", "MS6026_NPC_Master" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "MS6026_NPC_Master.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMS6026_NPC_Master_Statics::NewProp_PawnSensing = { "PawnSensing", nullptr, (EPropertyFlags)0x00100000000a0009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMS6026_NPC_Master, PawnSensing), Z_Construct_UClass_UPawnSensingComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AMS6026_NPC_Master_Statics::NewProp_PawnSensing_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMS6026_NPC_Master_Statics::NewProp_PawnSensing_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMS6026_NPC_Master_Statics::NewProp_BehaviorTree_MetaData[] = {
		{ "Category", "MS6026_NPC_Master" },
		{ "ModuleRelativePath", "MS6026_NPC_Master.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMS6026_NPC_Master_Statics::NewProp_BehaviorTree = { "BehaviorTree", nullptr, (EPropertyFlags)0x0010000000010001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMS6026_NPC_Master, BehaviorTree), Z_Construct_UClass_UBehaviorTree_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AMS6026_NPC_Master_Statics::NewProp_BehaviorTree_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMS6026_NPC_Master_Statics::NewProp_BehaviorTree_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMS6026_NPC_Master_Statics::NewProp_NPC_Typing_MetaData[] = {
		{ "Category", "MS6026_NPC_Master" },
		{ "ModuleRelativePath", "MS6026_NPC_Master.h" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_AMS6026_NPC_Master_Statics::NewProp_NPC_Typing = { "NPC_Typing", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMS6026_NPC_Master, NPC_Typing), Z_Construct_UEnum_MS6026_Game_Project_NPC_Type, METADATA_PARAMS(Z_Construct_UClass_AMS6026_NPC_Master_Statics::NewProp_NPC_Typing_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMS6026_NPC_Master_Statics::NewProp_NPC_Typing_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMS6026_NPC_Master_Statics::NewProp_isPlayerHeard_MetaData[] = {
		{ "Category", "MS6026_NPC_Master" },
		{ "ModuleRelativePath", "MS6026_NPC_Master.h" },
	};
#endif
	void Z_Construct_UClass_AMS6026_NPC_Master_Statics::NewProp_isPlayerHeard_SetBit(void* Obj)
	{
		((AMS6026_NPC_Master*)Obj)->isPlayerHeard = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AMS6026_NPC_Master_Statics::NewProp_isPlayerHeard = { "isPlayerHeard", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AMS6026_NPC_Master), &Z_Construct_UClass_AMS6026_NPC_Master_Statics::NewProp_isPlayerHeard_SetBit, METADATA_PARAMS(Z_Construct_UClass_AMS6026_NPC_Master_Statics::NewProp_isPlayerHeard_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMS6026_NPC_Master_Statics::NewProp_isPlayerHeard_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AMS6026_NPC_Master_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMS6026_NPC_Master_Statics::NewProp_PawnSensing,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMS6026_NPC_Master_Statics::NewProp_BehaviorTree,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMS6026_NPC_Master_Statics::NewProp_NPC_Typing,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMS6026_NPC_Master_Statics::NewProp_isPlayerHeard,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AMS6026_NPC_Master_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMS6026_NPC_Master>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AMS6026_NPC_Master_Statics::ClassParams = {
		&AMS6026_NPC_Master::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AMS6026_NPC_Master_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AMS6026_NPC_Master_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AMS6026_NPC_Master_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AMS6026_NPC_Master_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AMS6026_NPC_Master()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AMS6026_NPC_Master_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AMS6026_NPC_Master, 2257839645);
	template<> MS6026_GAME_PROJECT_API UClass* StaticClass<AMS6026_NPC_Master>()
	{
		return AMS6026_NPC_Master::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AMS6026_NPC_Master(Z_Construct_UClass_AMS6026_NPC_Master, &AMS6026_NPC_Master::StaticClass, TEXT("/Script/MS6026_Game_Project"), TEXT("AMS6026_NPC_Master"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AMS6026_NPC_Master);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
