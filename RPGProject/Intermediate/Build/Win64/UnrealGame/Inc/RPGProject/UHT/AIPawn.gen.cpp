// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "RPGProject/AI/AIPawn.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAIPawn() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_APawn();
	ENGINE_API UClass* Z_Construct_UClass_UCapsuleComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UFloatingPawnMovement_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USkeletalMeshComponent_NoRegister();
	RPGPROJECT_API UClass* Z_Construct_UClass_AAIPawn();
	RPGPROJECT_API UClass* Z_Construct_UClass_AAIPawn_NoRegister();
	RPGPROJECT_API UClass* Z_Construct_UClass_UAIState_NoRegister();
	UPackage* Z_Construct_UPackage__Script_RPGProject();
// End Cross Module References
	void AAIPawn::StaticRegisterNativesAAIPawn()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AAIPawn);
	UClass* Z_Construct_UClass_AAIPawn_NoRegister()
	{
		return AAIPawn::StaticClass();
	}
	struct Z_Construct_UClass_AAIPawn_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_m_Body_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_m_Body;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_m_Mesh_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_m_Mesh;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_m_Movement_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_m_Movement;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_m_AIState_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_m_AIState;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_m_Name_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_m_Name;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AAIPawn_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APawn,
		(UObject* (*)())Z_Construct_UPackage__Script_RPGProject,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAIPawn_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "AI/AIPawn.h" },
		{ "ModuleRelativePath", "AI/AIPawn.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAIPawn_Statics::NewProp_m_Body_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Component" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "AI/AIPawn.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_AAIPawn_Statics::NewProp_m_Body = { "m_Body", nullptr, (EPropertyFlags)0x00240800000a001d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AAIPawn, m_Body), Z_Construct_UClass_UCapsuleComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AAIPawn_Statics::NewProp_m_Body_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AAIPawn_Statics::NewProp_m_Body_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAIPawn_Statics::NewProp_m_Mesh_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Component" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "AI/AIPawn.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_AAIPawn_Statics::NewProp_m_Mesh = { "m_Mesh", nullptr, (EPropertyFlags)0x00240800000a001d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AAIPawn, m_Mesh), Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AAIPawn_Statics::NewProp_m_Mesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AAIPawn_Statics::NewProp_m_Mesh_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAIPawn_Statics::NewProp_m_Movement_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Component" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "AI/AIPawn.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_AAIPawn_Statics::NewProp_m_Movement = { "m_Movement", nullptr, (EPropertyFlags)0x002408000008001d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AAIPawn, m_Movement), Z_Construct_UClass_UFloatingPawnMovement_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AAIPawn_Statics::NewProp_m_Movement_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AAIPawn_Statics::NewProp_m_Movement_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAIPawn_Statics::NewProp_m_AIState_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Component" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "AI/AIPawn.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_AAIPawn_Statics::NewProp_m_AIState = { "m_AIState", nullptr, (EPropertyFlags)0x00240800000a001d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AAIPawn, m_AIState), Z_Construct_UClass_UAIState_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AAIPawn_Statics::NewProp_m_AIState_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AAIPawn_Statics::NewProp_m_AIState_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAIPawn_Statics::NewProp_m_Name_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Component" },
		{ "ModuleRelativePath", "AI/AIPawn.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_AAIPawn_Statics::NewProp_m_Name = { "m_Name", nullptr, (EPropertyFlags)0x0020080000020015, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AAIPawn, m_Name), METADATA_PARAMS(Z_Construct_UClass_AAIPawn_Statics::NewProp_m_Name_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AAIPawn_Statics::NewProp_m_Name_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AAIPawn_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAIPawn_Statics::NewProp_m_Body,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAIPawn_Statics::NewProp_m_Mesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAIPawn_Statics::NewProp_m_Movement,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAIPawn_Statics::NewProp_m_AIState,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAIPawn_Statics::NewProp_m_Name,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AAIPawn_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AAIPawn>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AAIPawn_Statics::ClassParams = {
		&AAIPawn::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AAIPawn_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AAIPawn_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AAIPawn_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AAIPawn_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AAIPawn()
	{
		if (!Z_Registration_Info_UClass_AAIPawn.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AAIPawn.OuterSingleton, Z_Construct_UClass_AAIPawn_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AAIPawn.OuterSingleton;
	}
	template<> RPGPROJECT_API UClass* StaticClass<AAIPawn>()
	{
		return AAIPawn::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AAIPawn);
	AAIPawn::~AAIPawn() {}
	struct Z_CompiledInDeferFile_FID_Unreal_RPGProject_RPGProject_Source_RPGProject_AI_AIPawn_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_RPGProject_RPGProject_Source_RPGProject_AI_AIPawn_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AAIPawn, AAIPawn::StaticClass, TEXT("AAIPawn"), &Z_Registration_Info_UClass_AAIPawn, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AAIPawn), 3960057706U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_RPGProject_RPGProject_Source_RPGProject_AI_AIPawn_h_2663427305(TEXT("/Script/RPGProject"),
		Z_CompiledInDeferFile_FID_Unreal_RPGProject_RPGProject_Source_RPGProject_AI_AIPawn_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_RPGProject_RPGProject_Source_RPGProject_AI_AIPawn_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
