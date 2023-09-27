// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "RPGProject/SpawnPoint.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSpawnPoint() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	ENGINE_API UClass* Z_Construct_UClass_UArrowComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
	RPGPROJECT_API UClass* Z_Construct_UClass_AAICharacter_NoRegister();
	RPGPROJECT_API UClass* Z_Construct_UClass_ASpawnPoint();
	RPGPROJECT_API UClass* Z_Construct_UClass_ASpawnPoint_NoRegister();
	UPackage* Z_Construct_UPackage__Script_RPGProject();
// End Cross Module References
	void ASpawnPoint::StaticRegisterNativesASpawnPoint()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ASpawnPoint);
	UClass* Z_Construct_UClass_ASpawnPoint_NoRegister()
	{
		return ASpawnPoint::StaticClass();
	}
	struct Z_Construct_UClass_ASpawnPoint_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_m_Root_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_m_Root;
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_m_Arrow_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_m_Arrow;
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_m_SpawnClass_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_m_SpawnClass;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_m_SpawnTime_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_m_SpawnTime;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ASpawnPoint_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_RPGProject,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASpawnPoint_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "SpawnPoint.h" },
		{ "ModuleRelativePath", "SpawnPoint.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASpawnPoint_Statics::NewProp_m_Root_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Component" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "SpawnPoint.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_ASpawnPoint_Statics::NewProp_m_Root = { "m_Root", nullptr, (EPropertyFlags)0x00240800000a001d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ASpawnPoint, m_Root), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASpawnPoint_Statics::NewProp_m_Root_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASpawnPoint_Statics::NewProp_m_Root_MetaData)) };
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASpawnPoint_Statics::NewProp_m_Arrow_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "SpawnPoint.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_ASpawnPoint_Statics::NewProp_m_Arrow = { "m_Arrow", nullptr, (EPropertyFlags)0x0024080800080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ASpawnPoint, m_Arrow), Z_Construct_UClass_UArrowComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASpawnPoint_Statics::NewProp_m_Arrow_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASpawnPoint_Statics::NewProp_m_Arrow_MetaData)) };
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASpawnPoint_Statics::NewProp_m_SpawnClass_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Component" },
		{ "ModuleRelativePath", "SpawnPoint.h" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_ASpawnPoint_Statics::NewProp_m_SpawnClass = { "m_SpawnClass", nullptr, (EPropertyFlags)0x0024080000000015, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ASpawnPoint, m_SpawnClass), Z_Construct_UClass_UClass, Z_Construct_UClass_AAICharacter_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASpawnPoint_Statics::NewProp_m_SpawnClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASpawnPoint_Statics::NewProp_m_SpawnClass_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASpawnPoint_Statics::NewProp_m_SpawnTime_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Component" },
		{ "ModuleRelativePath", "SpawnPoint.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ASpawnPoint_Statics::NewProp_m_SpawnTime = { "m_SpawnTime", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ASpawnPoint, m_SpawnTime), METADATA_PARAMS(Z_Construct_UClass_ASpawnPoint_Statics::NewProp_m_SpawnTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASpawnPoint_Statics::NewProp_m_SpawnTime_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ASpawnPoint_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASpawnPoint_Statics::NewProp_m_Root,
#if WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASpawnPoint_Statics::NewProp_m_Arrow,
#endif // WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASpawnPoint_Statics::NewProp_m_SpawnClass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASpawnPoint_Statics::NewProp_m_SpawnTime,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ASpawnPoint_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASpawnPoint>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ASpawnPoint_Statics::ClassParams = {
		&ASpawnPoint::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ASpawnPoint_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ASpawnPoint_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ASpawnPoint_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ASpawnPoint_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ASpawnPoint()
	{
		if (!Z_Registration_Info_UClass_ASpawnPoint.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ASpawnPoint.OuterSingleton, Z_Construct_UClass_ASpawnPoint_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ASpawnPoint.OuterSingleton;
	}
	template<> RPGPROJECT_API UClass* StaticClass<ASpawnPoint>()
	{
		return ASpawnPoint::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ASpawnPoint);
	ASpawnPoint::~ASpawnPoint() {}
	struct Z_CompiledInDeferFile_FID_Unreal_RPGProject_RPGProject_Source_RPGProject_SpawnPoint_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_RPGProject_RPGProject_Source_RPGProject_SpawnPoint_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ASpawnPoint, ASpawnPoint::StaticClass, TEXT("ASpawnPoint"), &Z_Registration_Info_UClass_ASpawnPoint, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ASpawnPoint), 2612574590U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_RPGProject_RPGProject_Source_RPGProject_SpawnPoint_h_2024387420(TEXT("/Script/RPGProject"),
		Z_CompiledInDeferFile_FID_Unreal_RPGProject_RPGProject_Source_RPGProject_SpawnPoint_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_RPGProject_RPGProject_Source_RPGProject_SpawnPoint_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
