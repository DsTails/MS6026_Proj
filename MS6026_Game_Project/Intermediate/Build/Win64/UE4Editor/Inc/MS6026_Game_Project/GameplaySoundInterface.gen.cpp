// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MS6026_Game_Project/GameplaySoundInterface.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGameplaySoundInterface() {}
// Cross Module References
	MS6026_GAME_PROJECT_API UClass* Z_Construct_UClass_UGameplaySoundInterface_NoRegister();
	MS6026_GAME_PROJECT_API UClass* Z_Construct_UClass_UGameplaySoundInterface();
	COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
	UPackage* Z_Construct_UPackage__Script_MS6026_Game_Project();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(IGameplaySoundInterface::exectriggerObjectNoise)
	{
		P_GET_OBJECT(AActor,Z_Param_TargetObject);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->triggerObjectNoise_Implementation(Z_Param_TargetObject);
		P_NATIVE_END;
	}
	void IGameplaySoundInterface::triggerObjectNoise(AActor* TargetObject)
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_triggerObjectNoise instead.");
	}
	void UGameplaySoundInterface::StaticRegisterNativesUGameplaySoundInterface()
	{
		UClass* Class = UGameplaySoundInterface::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "triggerObjectNoise", &IGameplaySoundInterface::exectriggerObjectNoise },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UGameplaySoundInterface_triggerObjectNoise_Statics
	{
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TargetObject;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGameplaySoundInterface_triggerObjectNoise_Statics::NewProp_TargetObject = { "TargetObject", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GameplaySoundInterface_eventtriggerObjectNoise_Parms, TargetObject), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGameplaySoundInterface_triggerObjectNoise_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameplaySoundInterface_triggerObjectNoise_Statics::NewProp_TargetObject,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameplaySoundInterface_triggerObjectNoise_Statics::Function_MetaDataParams[] = {
		{ "Category", "Noise Event Funct" },
		{ "ModuleRelativePath", "GameplaySoundInterface.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGameplaySoundInterface_triggerObjectNoise_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGameplaySoundInterface, nullptr, "triggerObjectNoise", nullptr, nullptr, sizeof(GameplaySoundInterface_eventtriggerObjectNoise_Parms), Z_Construct_UFunction_UGameplaySoundInterface_triggerObjectNoise_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameplaySoundInterface_triggerObjectNoise_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGameplaySoundInterface_triggerObjectNoise_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameplaySoundInterface_triggerObjectNoise_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGameplaySoundInterface_triggerObjectNoise()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGameplaySoundInterface_triggerObjectNoise_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UGameplaySoundInterface_NoRegister()
	{
		return UGameplaySoundInterface::StaticClass();
	}
	struct Z_Construct_UClass_UGameplaySoundInterface_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UGameplaySoundInterface_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_MS6026_Game_Project,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UGameplaySoundInterface_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UGameplaySoundInterface_triggerObjectNoise, "triggerObjectNoise" }, // 3139336929
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGameplaySoundInterface_Statics::Class_MetaDataParams[] = {
		{ "ModuleRelativePath", "GameplaySoundInterface.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UGameplaySoundInterface_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IGameplaySoundInterface>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UGameplaySoundInterface_Statics::ClassParams = {
		&UGameplaySoundInterface::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x000840A1u,
		METADATA_PARAMS(Z_Construct_UClass_UGameplaySoundInterface_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UGameplaySoundInterface_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UGameplaySoundInterface()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UGameplaySoundInterface_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UGameplaySoundInterface, 4200522078);
	template<> MS6026_GAME_PROJECT_API UClass* StaticClass<UGameplaySoundInterface>()
	{
		return UGameplaySoundInterface::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UGameplaySoundInterface(Z_Construct_UClass_UGameplaySoundInterface, &UGameplaySoundInterface::StaticClass, TEXT("/Script/MS6026_Game_Project"), TEXT("UGameplaySoundInterface"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UGameplaySoundInterface);
	static FName NAME_UGameplaySoundInterface_triggerObjectNoise = FName(TEXT("triggerObjectNoise"));
	void IGameplaySoundInterface::Execute_triggerObjectNoise(UObject* O, AActor* TargetObject)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UGameplaySoundInterface::StaticClass()));
		GameplaySoundInterface_eventtriggerObjectNoise_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UGameplaySoundInterface_triggerObjectNoise);
		if (Func)
		{
			Parms.TargetObject=TargetObject;
			O->ProcessEvent(Func, &Parms);
		}
		else if (auto I = (IGameplaySoundInterface*)(O->GetNativeInterfaceAddress(UGameplaySoundInterface::StaticClass())))
		{
			I->triggerObjectNoise_Implementation(TargetObject);
		}
	}
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
