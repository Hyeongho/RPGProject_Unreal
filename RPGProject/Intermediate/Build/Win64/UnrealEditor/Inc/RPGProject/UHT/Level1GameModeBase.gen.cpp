// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "RPGProject/Level1GameModeBase.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLevel1GameModeBase() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	RPGPROJECT_API UClass* Z_Construct_UClass_ALevel1GameModeBase();
	RPGPROJECT_API UClass* Z_Construct_UClass_ALevel1GameModeBase_NoRegister();
	UPackage* Z_Construct_UPackage__Script_RPGProject();
// End Cross Module References
	void ALevel1GameModeBase::StaticRegisterNativesALevel1GameModeBase()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ALevel1GameModeBase);
	UClass* Z_Construct_UClass_ALevel1GameModeBase_NoRegister()
	{
		return ALevel1GameModeBase::StaticClass();
	}
	struct Z_Construct_UClass_ALevel1GameModeBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ALevel1GameModeBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_RPGProject,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALevel1GameModeBase_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "Level1GameModeBase.h" },
		{ "ModuleRelativePath", "Level1GameModeBase.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ALevel1GameModeBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ALevel1GameModeBase>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ALevel1GameModeBase_Statics::ClassParams = {
		&ALevel1GameModeBase::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_ALevel1GameModeBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ALevel1GameModeBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ALevel1GameModeBase()
	{
		if (!Z_Registration_Info_UClass_ALevel1GameModeBase.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ALevel1GameModeBase.OuterSingleton, Z_Construct_UClass_ALevel1GameModeBase_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ALevel1GameModeBase.OuterSingleton;
	}
	template<> RPGPROJECT_API UClass* StaticClass<ALevel1GameModeBase>()
	{
		return ALevel1GameModeBase::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ALevel1GameModeBase);
	struct Z_CompiledInDeferFile_FID_Unreal_RPGProject_RPGProject_Source_RPGProject_Level1GameModeBase_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_RPGProject_RPGProject_Source_RPGProject_Level1GameModeBase_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ALevel1GameModeBase, ALevel1GameModeBase::StaticClass, TEXT("ALevel1GameModeBase"), &Z_Registration_Info_UClass_ALevel1GameModeBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ALevel1GameModeBase), 3231165001U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_RPGProject_RPGProject_Source_RPGProject_Level1GameModeBase_h_3476011517(TEXT("/Script/RPGProject"),
		Z_CompiledInDeferFile_FID_Unreal_RPGProject_RPGProject_Source_RPGProject_Level1GameModeBase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_RPGProject_RPGProject_Source_RPGProject_Level1GameModeBase_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
