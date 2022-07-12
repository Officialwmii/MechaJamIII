// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MechaJamIII/MechaJamIIIGameMode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMechaJamIIIGameMode() {}
// Cross Module References
	MECHAJAMIII_API UClass* Z_Construct_UClass_AMechaJamIIIGameMode_NoRegister();
	MECHAJAMIII_API UClass* Z_Construct_UClass_AMechaJamIIIGameMode();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_MechaJamIII();
// End Cross Module References
	void AMechaJamIIIGameMode::StaticRegisterNativesAMechaJamIIIGameMode()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AMechaJamIIIGameMode);
	UClass* Z_Construct_UClass_AMechaJamIIIGameMode_NoRegister()
	{
		return AMechaJamIIIGameMode::StaticClass();
	}
	struct Z_Construct_UClass_AMechaJamIIIGameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AMechaJamIIIGameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_MechaJamIII,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMechaJamIIIGameMode_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "MechaJamIIIGameMode.h" },
		{ "ModuleRelativePath", "MechaJamIIIGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AMechaJamIIIGameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMechaJamIIIGameMode>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AMechaJamIIIGameMode_Statics::ClassParams = {
		&AMechaJamIIIGameMode::StaticClass,
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
		0x008802ACu,
		METADATA_PARAMS(Z_Construct_UClass_AMechaJamIIIGameMode_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AMechaJamIIIGameMode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AMechaJamIIIGameMode()
	{
		if (!Z_Registration_Info_UClass_AMechaJamIIIGameMode.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AMechaJamIIIGameMode.OuterSingleton, Z_Construct_UClass_AMechaJamIIIGameMode_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AMechaJamIIIGameMode.OuterSingleton;
	}
	template<> MECHAJAMIII_API UClass* StaticClass<AMechaJamIIIGameMode>()
	{
		return AMechaJamIIIGameMode::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AMechaJamIIIGameMode);
	struct Z_CompiledInDeferFile_FID_MechaJamIII_Source_MechaJamIII_MechaJamIIIGameMode_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MechaJamIII_Source_MechaJamIII_MechaJamIIIGameMode_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AMechaJamIIIGameMode, AMechaJamIIIGameMode::StaticClass, TEXT("AMechaJamIIIGameMode"), &Z_Registration_Info_UClass_AMechaJamIIIGameMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AMechaJamIIIGameMode), 3035411188U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MechaJamIII_Source_MechaJamIII_MechaJamIIIGameMode_h_728192559(TEXT("/Script/MechaJamIII"),
		Z_CompiledInDeferFile_FID_MechaJamIII_Source_MechaJamIII_MechaJamIIIGameMode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_MechaJamIII_Source_MechaJamIII_MechaJamIIIGameMode_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
