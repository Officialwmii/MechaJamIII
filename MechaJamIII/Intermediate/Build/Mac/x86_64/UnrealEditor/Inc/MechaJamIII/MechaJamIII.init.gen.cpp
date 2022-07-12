// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMechaJamIII_init() {}
	MECHAJAMIII_API UFunction* Z_Construct_UDelegateFunction_MechaJamIII_OnPickUp__DelegateSignature();
	MECHAJAMIII_API UFunction* Z_Construct_UDelegateFunction_MechaJamIII_OnUseItem__DelegateSignature();
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_MechaJamIII;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_MechaJamIII()
	{
		if (!Z_Registration_Info_UPackage__Script_MechaJamIII.OuterSingleton)
		{
			static UObject* (*const SingletonFuncArray[])() = {
				(UObject* (*)())Z_Construct_UDelegateFunction_MechaJamIII_OnPickUp__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_MechaJamIII_OnUseItem__DelegateSignature,
			};
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/MechaJamIII",
				SingletonFuncArray,
				UE_ARRAY_COUNT(SingletonFuncArray),
				PKG_CompiledIn | 0x00000000,
				0xBF3F7089,
				0x016FC2DE,
				METADATA_PARAMS(nullptr, 0)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_MechaJamIII.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_MechaJamIII.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_MechaJamIII(Z_Construct_UPackage__Script_MechaJamIII, TEXT("/Script/MechaJamIII"), Z_Registration_Info_UPackage__Script_MechaJamIII, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0xBF3F7089, 0x016FC2DE));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
