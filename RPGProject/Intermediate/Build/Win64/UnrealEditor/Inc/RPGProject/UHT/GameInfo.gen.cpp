// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "RPGProject/GameInfo.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGameInfo() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTableRowBase();
	RPGPROJECT_API UClass* Z_Construct_UClass_UGameInfo();
	RPGPROJECT_API UClass* Z_Construct_UClass_UGameInfo_NoRegister();
	RPGPROJECT_API UEnum* Z_Construct_UEnum_RPGProject_EPlayerJob();
	RPGPROJECT_API UScriptStruct* Z_Construct_UScriptStruct_FAIDataTable();
	RPGPROJECT_API UScriptStruct* Z_Construct_UScriptStruct_FPlayerDataTable();
	UPackage* Z_Construct_UPackage__Script_RPGProject();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EPlayerJob;
	static UEnum* EPlayerJob_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EPlayerJob.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EPlayerJob.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_RPGProject_EPlayerJob, (UObject*)Z_Construct_UPackage__Script_RPGProject(), TEXT("EPlayerJob"));
		}
		return Z_Registration_Info_UEnum_EPlayerJob.OuterSingleton;
	}
	template<> RPGPROJECT_API UEnum* StaticEnum<EPlayerJob>()
	{
		return EPlayerJob_StaticEnum();
	}
	struct Z_Construct_UEnum_RPGProject_EPlayerJob_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_RPGProject_EPlayerJob_Statics::Enumerators[] = {
		{ "EPlayerJob::None", (int64)EPlayerJob::None },
		{ "EPlayerJob::Knight", (int64)EPlayerJob::Knight },
		{ "EPlayerJob::Archer", (int64)EPlayerJob::Archer },
		{ "EPlayerJob::Magicion", (int64)EPlayerJob::Magicion },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_RPGProject_EPlayerJob_Statics::Enum_MetaDataParams[] = {
		{ "Archer.Name", "EPlayerJob::Archer" },
		{ "BlueprintType", "true" },
		{ "Knight.Name", "EPlayerJob::Knight" },
		{ "Magicion.Name", "EPlayerJob::Magicion" },
		{ "ModuleRelativePath", "GameInfo.h" },
		{ "None.Name", "EPlayerJob::None" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_RPGProject_EPlayerJob_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_RPGProject,
		nullptr,
		"EPlayerJob",
		"EPlayerJob",
		Z_Construct_UEnum_RPGProject_EPlayerJob_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_RPGProject_EPlayerJob_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_RPGProject_EPlayerJob_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_RPGProject_EPlayerJob_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_RPGProject_EPlayerJob()
	{
		if (!Z_Registration_Info_UEnum_EPlayerJob.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EPlayerJob.InnerSingleton, Z_Construct_UEnum_RPGProject_EPlayerJob_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EPlayerJob.InnerSingleton;
	}

static_assert(std::is_polymorphic<FPlayerDataTable>() == std::is_polymorphic<FTableRowBase>(), "USTRUCT FPlayerDataTable cannot be polymorphic unless super FTableRowBase is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_PlayerDataTable;
class UScriptStruct* FPlayerDataTable::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_PlayerDataTable.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_PlayerDataTable.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FPlayerDataTable, (UObject*)Z_Construct_UPackage__Script_RPGProject(), TEXT("PlayerDataTable"));
	}
	return Z_Registration_Info_UScriptStruct_PlayerDataTable.OuterSingleton;
}
template<> RPGPROJECT_API UScriptStruct* StaticStruct<FPlayerDataTable>()
{
	return FPlayerDataTable::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FPlayerDataTable_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FBytePropertyParams NewProp_Job_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Job_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_Job;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AttackPoint_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_AttackPoint;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ArmorPoint_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_ArmorPoint;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HP_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_HP;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MP_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_MP;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Level_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_Level;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Exp_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_Exp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Gold_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_Gold;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MoveSpeed_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MoveSpeed;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AttackDistance_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_AttackDistance;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPlayerDataTable_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "GameInfo.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FPlayerDataTable_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPlayerDataTable>();
	}
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FPlayerDataTable_Statics::NewProp_Job_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPlayerDataTable_Statics::NewProp_Job_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "PlayerDataTable" },
		{ "ModuleRelativePath", "GameInfo.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FPlayerDataTable_Statics::NewProp_Job = { "Job", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPlayerDataTable, Job), Z_Construct_UEnum_RPGProject_EPlayerJob, METADATA_PARAMS(Z_Construct_UScriptStruct_FPlayerDataTable_Statics::NewProp_Job_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPlayerDataTable_Statics::NewProp_Job_MetaData)) }; // 103546461
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPlayerDataTable_Statics::NewProp_AttackPoint_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "PlayerDataTable" },
		{ "ModuleRelativePath", "GameInfo.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FPlayerDataTable_Statics::NewProp_AttackPoint = { "AttackPoint", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPlayerDataTable, AttackPoint), METADATA_PARAMS(Z_Construct_UScriptStruct_FPlayerDataTable_Statics::NewProp_AttackPoint_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPlayerDataTable_Statics::NewProp_AttackPoint_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPlayerDataTable_Statics::NewProp_ArmorPoint_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "PlayerDataTable" },
		{ "ModuleRelativePath", "GameInfo.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FPlayerDataTable_Statics::NewProp_ArmorPoint = { "ArmorPoint", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPlayerDataTable, ArmorPoint), METADATA_PARAMS(Z_Construct_UScriptStruct_FPlayerDataTable_Statics::NewProp_ArmorPoint_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPlayerDataTable_Statics::NewProp_ArmorPoint_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPlayerDataTable_Statics::NewProp_HP_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "PlayerDataTable" },
		{ "ModuleRelativePath", "GameInfo.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FPlayerDataTable_Statics::NewProp_HP = { "HP", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPlayerDataTable, HP), METADATA_PARAMS(Z_Construct_UScriptStruct_FPlayerDataTable_Statics::NewProp_HP_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPlayerDataTable_Statics::NewProp_HP_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPlayerDataTable_Statics::NewProp_MP_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "PlayerDataTable" },
		{ "ModuleRelativePath", "GameInfo.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FPlayerDataTable_Statics::NewProp_MP = { "MP", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPlayerDataTable, MP), METADATA_PARAMS(Z_Construct_UScriptStruct_FPlayerDataTable_Statics::NewProp_MP_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPlayerDataTable_Statics::NewProp_MP_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPlayerDataTable_Statics::NewProp_Level_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "PlayerDataTable" },
		{ "ModuleRelativePath", "GameInfo.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FPlayerDataTable_Statics::NewProp_Level = { "Level", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPlayerDataTable, Level), METADATA_PARAMS(Z_Construct_UScriptStruct_FPlayerDataTable_Statics::NewProp_Level_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPlayerDataTable_Statics::NewProp_Level_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPlayerDataTable_Statics::NewProp_Exp_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "PlayerDataTable" },
		{ "ModuleRelativePath", "GameInfo.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FPlayerDataTable_Statics::NewProp_Exp = { "Exp", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPlayerDataTable, Exp), METADATA_PARAMS(Z_Construct_UScriptStruct_FPlayerDataTable_Statics::NewProp_Exp_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPlayerDataTable_Statics::NewProp_Exp_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPlayerDataTable_Statics::NewProp_Gold_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "PlayerDataTable" },
		{ "ModuleRelativePath", "GameInfo.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FPlayerDataTable_Statics::NewProp_Gold = { "Gold", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPlayerDataTable, Gold), METADATA_PARAMS(Z_Construct_UScriptStruct_FPlayerDataTable_Statics::NewProp_Gold_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPlayerDataTable_Statics::NewProp_Gold_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPlayerDataTable_Statics::NewProp_MoveSpeed_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "PlayerDataTable" },
		{ "ModuleRelativePath", "GameInfo.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPlayerDataTable_Statics::NewProp_MoveSpeed = { "MoveSpeed", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPlayerDataTable, MoveSpeed), METADATA_PARAMS(Z_Construct_UScriptStruct_FPlayerDataTable_Statics::NewProp_MoveSpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPlayerDataTable_Statics::NewProp_MoveSpeed_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPlayerDataTable_Statics::NewProp_AttackDistance_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "PlayerDataTable" },
		{ "ModuleRelativePath", "GameInfo.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPlayerDataTable_Statics::NewProp_AttackDistance = { "AttackDistance", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPlayerDataTable, AttackDistance), METADATA_PARAMS(Z_Construct_UScriptStruct_FPlayerDataTable_Statics::NewProp_AttackDistance_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPlayerDataTable_Statics::NewProp_AttackDistance_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPlayerDataTable_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPlayerDataTable_Statics::NewProp_Job_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPlayerDataTable_Statics::NewProp_Job,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPlayerDataTable_Statics::NewProp_AttackPoint,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPlayerDataTable_Statics::NewProp_ArmorPoint,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPlayerDataTable_Statics::NewProp_HP,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPlayerDataTable_Statics::NewProp_MP,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPlayerDataTable_Statics::NewProp_Level,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPlayerDataTable_Statics::NewProp_Exp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPlayerDataTable_Statics::NewProp_Gold,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPlayerDataTable_Statics::NewProp_MoveSpeed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPlayerDataTable_Statics::NewProp_AttackDistance,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPlayerDataTable_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_RPGProject,
		Z_Construct_UScriptStruct_FTableRowBase,
		&NewStructOps,
		"PlayerDataTable",
		sizeof(FPlayerDataTable),
		alignof(FPlayerDataTable),
		Z_Construct_UScriptStruct_FPlayerDataTable_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPlayerDataTable_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FPlayerDataTable_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPlayerDataTable_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FPlayerDataTable()
	{
		if (!Z_Registration_Info_UScriptStruct_PlayerDataTable.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_PlayerDataTable.InnerSingleton, Z_Construct_UScriptStruct_FPlayerDataTable_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_PlayerDataTable.InnerSingleton;
	}

static_assert(std::is_polymorphic<FAIDataTable>() == std::is_polymorphic<FTableRowBase>(), "USTRUCT FAIDataTable cannot be polymorphic unless super FTableRowBase is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_AIDataTable;
class UScriptStruct* FAIDataTable::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_AIDataTable.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_AIDataTable.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAIDataTable, (UObject*)Z_Construct_UPackage__Script_RPGProject(), TEXT("AIDataTable"));
	}
	return Z_Registration_Info_UScriptStruct_AIDataTable.OuterSingleton;
}
template<> RPGPROJECT_API UScriptStruct* StaticStruct<FAIDataTable>()
{
	return FAIDataTable::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FAIDataTable_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AttackPoint_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_AttackPoint;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ArmorPoint_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_ArmorPoint;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HP_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_HP;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MP_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_MP;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Level_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_Level;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Exp_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_Exp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Gold_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_Gold;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MoveSpeed_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MoveSpeed;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AttackDistance_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_AttackDistance;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InteractionDistance_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_InteractionDistance;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAIDataTable_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "GameInfo.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAIDataTable_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAIDataTable>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAIDataTable_Statics::NewProp_AttackPoint_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "AIDataTable" },
		{ "ModuleRelativePath", "GameInfo.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FAIDataTable_Statics::NewProp_AttackPoint = { "AttackPoint", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAIDataTable, AttackPoint), METADATA_PARAMS(Z_Construct_UScriptStruct_FAIDataTable_Statics::NewProp_AttackPoint_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAIDataTable_Statics::NewProp_AttackPoint_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAIDataTable_Statics::NewProp_ArmorPoint_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "AIDataTable" },
		{ "ModuleRelativePath", "GameInfo.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FAIDataTable_Statics::NewProp_ArmorPoint = { "ArmorPoint", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAIDataTable, ArmorPoint), METADATA_PARAMS(Z_Construct_UScriptStruct_FAIDataTable_Statics::NewProp_ArmorPoint_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAIDataTable_Statics::NewProp_ArmorPoint_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAIDataTable_Statics::NewProp_HP_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "AIDataTable" },
		{ "ModuleRelativePath", "GameInfo.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FAIDataTable_Statics::NewProp_HP = { "HP", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAIDataTable, HP), METADATA_PARAMS(Z_Construct_UScriptStruct_FAIDataTable_Statics::NewProp_HP_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAIDataTable_Statics::NewProp_HP_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAIDataTable_Statics::NewProp_MP_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "AIDataTable" },
		{ "ModuleRelativePath", "GameInfo.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FAIDataTable_Statics::NewProp_MP = { "MP", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAIDataTable, MP), METADATA_PARAMS(Z_Construct_UScriptStruct_FAIDataTable_Statics::NewProp_MP_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAIDataTable_Statics::NewProp_MP_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAIDataTable_Statics::NewProp_Level_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "AIDataTable" },
		{ "ModuleRelativePath", "GameInfo.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FAIDataTable_Statics::NewProp_Level = { "Level", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAIDataTable, Level), METADATA_PARAMS(Z_Construct_UScriptStruct_FAIDataTable_Statics::NewProp_Level_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAIDataTable_Statics::NewProp_Level_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAIDataTable_Statics::NewProp_Exp_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "AIDataTable" },
		{ "ModuleRelativePath", "GameInfo.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FAIDataTable_Statics::NewProp_Exp = { "Exp", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAIDataTable, Exp), METADATA_PARAMS(Z_Construct_UScriptStruct_FAIDataTable_Statics::NewProp_Exp_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAIDataTable_Statics::NewProp_Exp_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAIDataTable_Statics::NewProp_Gold_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "AIDataTable" },
		{ "ModuleRelativePath", "GameInfo.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FAIDataTable_Statics::NewProp_Gold = { "Gold", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAIDataTable, Gold), METADATA_PARAMS(Z_Construct_UScriptStruct_FAIDataTable_Statics::NewProp_Gold_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAIDataTable_Statics::NewProp_Gold_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAIDataTable_Statics::NewProp_MoveSpeed_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "AIDataTable" },
		{ "ModuleRelativePath", "GameInfo.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAIDataTable_Statics::NewProp_MoveSpeed = { "MoveSpeed", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAIDataTable, MoveSpeed), METADATA_PARAMS(Z_Construct_UScriptStruct_FAIDataTable_Statics::NewProp_MoveSpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAIDataTable_Statics::NewProp_MoveSpeed_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAIDataTable_Statics::NewProp_AttackDistance_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "AIDataTable" },
		{ "ModuleRelativePath", "GameInfo.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAIDataTable_Statics::NewProp_AttackDistance = { "AttackDistance", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAIDataTable, AttackDistance), METADATA_PARAMS(Z_Construct_UScriptStruct_FAIDataTable_Statics::NewProp_AttackDistance_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAIDataTable_Statics::NewProp_AttackDistance_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAIDataTable_Statics::NewProp_InteractionDistance_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "AIDataTable" },
		{ "ModuleRelativePath", "GameInfo.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAIDataTable_Statics::NewProp_InteractionDistance = { "InteractionDistance", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAIDataTable, InteractionDistance), METADATA_PARAMS(Z_Construct_UScriptStruct_FAIDataTable_Statics::NewProp_InteractionDistance_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAIDataTable_Statics::NewProp_InteractionDistance_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAIDataTable_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAIDataTable_Statics::NewProp_AttackPoint,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAIDataTable_Statics::NewProp_ArmorPoint,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAIDataTable_Statics::NewProp_HP,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAIDataTable_Statics::NewProp_MP,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAIDataTable_Statics::NewProp_Level,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAIDataTable_Statics::NewProp_Exp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAIDataTable_Statics::NewProp_Gold,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAIDataTable_Statics::NewProp_MoveSpeed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAIDataTable_Statics::NewProp_AttackDistance,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAIDataTable_Statics::NewProp_InteractionDistance,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAIDataTable_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_RPGProject,
		Z_Construct_UScriptStruct_FTableRowBase,
		&NewStructOps,
		"AIDataTable",
		sizeof(FAIDataTable),
		alignof(FAIDataTable),
		Z_Construct_UScriptStruct_FAIDataTable_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAIDataTable_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAIDataTable_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAIDataTable_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAIDataTable()
	{
		if (!Z_Registration_Info_UScriptStruct_AIDataTable.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_AIDataTable.InnerSingleton, Z_Construct_UScriptStruct_FAIDataTable_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_AIDataTable.InnerSingleton;
	}
	void UGameInfo::StaticRegisterNativesUGameInfo()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UGameInfo);
	UClass* Z_Construct_UClass_UGameInfo_NoRegister()
	{
		return UGameInfo::StaticClass();
	}
	struct Z_Construct_UClass_UGameInfo_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UGameInfo_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_RPGProject,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGameInfo_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "GameInfo.h" },
		{ "ModuleRelativePath", "GameInfo.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UGameInfo_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGameInfo>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UGameInfo_Statics::ClassParams = {
		&UGameInfo::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UGameInfo_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UGameInfo_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UGameInfo()
	{
		if (!Z_Registration_Info_UClass_UGameInfo.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGameInfo.OuterSingleton, Z_Construct_UClass_UGameInfo_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UGameInfo.OuterSingleton;
	}
	template<> RPGPROJECT_API UClass* StaticClass<UGameInfo>()
	{
		return UGameInfo::StaticClass();
	}
	UGameInfo::UGameInfo(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UGameInfo);
	UGameInfo::~UGameInfo() {}
	struct Z_CompiledInDeferFile_FID_Unreal_RPGProject_RPGProject_Source_RPGProject_GameInfo_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_RPGProject_RPGProject_Source_RPGProject_GameInfo_h_Statics::EnumInfo[] = {
		{ EPlayerJob_StaticEnum, TEXT("EPlayerJob"), &Z_Registration_Info_UEnum_EPlayerJob, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 103546461U) },
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_RPGProject_RPGProject_Source_RPGProject_GameInfo_h_Statics::ScriptStructInfo[] = {
		{ FPlayerDataTable::StaticStruct, Z_Construct_UScriptStruct_FPlayerDataTable_Statics::NewStructOps, TEXT("PlayerDataTable"), &Z_Registration_Info_UScriptStruct_PlayerDataTable, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FPlayerDataTable), 3194121051U) },
		{ FAIDataTable::StaticStruct, Z_Construct_UScriptStruct_FAIDataTable_Statics::NewStructOps, TEXT("AIDataTable"), &Z_Registration_Info_UScriptStruct_AIDataTable, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAIDataTable), 3292212460U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_RPGProject_RPGProject_Source_RPGProject_GameInfo_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UGameInfo, UGameInfo::StaticClass, TEXT("UGameInfo"), &Z_Registration_Info_UClass_UGameInfo, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGameInfo), 2637487858U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_RPGProject_RPGProject_Source_RPGProject_GameInfo_h_327087083(TEXT("/Script/RPGProject"),
		Z_CompiledInDeferFile_FID_Unreal_RPGProject_RPGProject_Source_RPGProject_GameInfo_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_RPGProject_RPGProject_Source_RPGProject_GameInfo_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Unreal_RPGProject_RPGProject_Source_RPGProject_GameInfo_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_RPGProject_RPGProject_Source_RPGProject_GameInfo_h_Statics::ScriptStructInfo),
		Z_CompiledInDeferFile_FID_Unreal_RPGProject_RPGProject_Source_RPGProject_GameInfo_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_RPGProject_RPGProject_Source_RPGProject_GameInfo_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
