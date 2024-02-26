// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "LoadConfigSaveData/LoadConfigSaveDataGameModeBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLoadConfigSaveDataGameModeBase() {}
// Cross Module References
	LOADCONFIGSAVEDATA_API UClass* Z_Construct_UClass_ALoadConfigSaveDataGameModeBase_NoRegister();
	LOADCONFIGSAVEDATA_API UClass* Z_Construct_UClass_ALoadConfigSaveDataGameModeBase();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_LoadConfigSaveData();
// End Cross Module References
	void ALoadConfigSaveDataGameModeBase::StaticRegisterNativesALoadConfigSaveDataGameModeBase()
	{
	}
	UClass* Z_Construct_UClass_ALoadConfigSaveDataGameModeBase_NoRegister()
	{
		return ALoadConfigSaveDataGameModeBase::StaticClass();
	}
	struct Z_Construct_UClass_ALoadConfigSaveDataGameModeBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ALoadConfigSaveDataGameModeBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_LoadConfigSaveData,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALoadConfigSaveDataGameModeBase_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "LoadConfigSaveDataGameModeBase.h" },
		{ "ModuleRelativePath", "LoadConfigSaveDataGameModeBase.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ALoadConfigSaveDataGameModeBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ALoadConfigSaveDataGameModeBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ALoadConfigSaveDataGameModeBase_Statics::ClassParams = {
		&ALoadConfigSaveDataGameModeBase::StaticClass,
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
		0x009002ACu,
		METADATA_PARAMS(Z_Construct_UClass_ALoadConfigSaveDataGameModeBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ALoadConfigSaveDataGameModeBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ALoadConfigSaveDataGameModeBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ALoadConfigSaveDataGameModeBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ALoadConfigSaveDataGameModeBase, 578820317);
	template<> LOADCONFIGSAVEDATA_API UClass* StaticClass<ALoadConfigSaveDataGameModeBase>()
	{
		return ALoadConfigSaveDataGameModeBase::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ALoadConfigSaveDataGameModeBase(Z_Construct_UClass_ALoadConfigSaveDataGameModeBase, &ALoadConfigSaveDataGameModeBase::StaticClass, TEXT("/Script/LoadConfigSaveData"), TEXT("ALoadConfigSaveDataGameModeBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ALoadConfigSaveDataGameModeBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
