// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UPrimitiveComponent;
class AActor;
struct FHitResult;
#ifdef MECHAJAMIII_MechaJamIIIProjectile_generated_h
#error "MechaJamIIIProjectile.generated.h already included, missing '#pragma once' in MechaJamIIIProjectile.h"
#endif
#define MECHAJAMIII_MechaJamIIIProjectile_generated_h

#define FID_MechaJamIII_Source_MechaJamIII_MechaJamIIIProjectile_h_15_SPARSE_DATA
#define FID_MechaJamIII_Source_MechaJamIII_MechaJamIIIProjectile_h_15_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnHit);


#define FID_MechaJamIII_Source_MechaJamIII_MechaJamIIIProjectile_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnHit);


#define FID_MechaJamIII_Source_MechaJamIII_MechaJamIIIProjectile_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAMechaJamIIIProjectile(); \
	friend struct Z_Construct_UClass_AMechaJamIIIProjectile_Statics; \
public: \
	DECLARE_CLASS(AMechaJamIIIProjectile, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/MechaJamIII"), NO_API) \
	DECLARE_SERIALIZER(AMechaJamIIIProjectile) \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define FID_MechaJamIII_Source_MechaJamIII_MechaJamIIIProjectile_h_15_INCLASS \
private: \
	static void StaticRegisterNativesAMechaJamIIIProjectile(); \
	friend struct Z_Construct_UClass_AMechaJamIIIProjectile_Statics; \
public: \
	DECLARE_CLASS(AMechaJamIIIProjectile, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/MechaJamIII"), NO_API) \
	DECLARE_SERIALIZER(AMechaJamIIIProjectile) \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define FID_MechaJamIII_Source_MechaJamIII_MechaJamIIIProjectile_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AMechaJamIIIProjectile(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AMechaJamIIIProjectile) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMechaJamIIIProjectile); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMechaJamIIIProjectile); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AMechaJamIIIProjectile(AMechaJamIIIProjectile&&); \
	NO_API AMechaJamIIIProjectile(const AMechaJamIIIProjectile&); \
public:


#define FID_MechaJamIII_Source_MechaJamIII_MechaJamIIIProjectile_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AMechaJamIIIProjectile(AMechaJamIIIProjectile&&); \
	NO_API AMechaJamIIIProjectile(const AMechaJamIIIProjectile&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMechaJamIIIProjectile); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMechaJamIIIProjectile); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AMechaJamIIIProjectile)


#define FID_MechaJamIII_Source_MechaJamIII_MechaJamIIIProjectile_h_12_PROLOG
#define FID_MechaJamIII_Source_MechaJamIII_MechaJamIIIProjectile_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_MechaJamIII_Source_MechaJamIII_MechaJamIIIProjectile_h_15_SPARSE_DATA \
	FID_MechaJamIII_Source_MechaJamIII_MechaJamIIIProjectile_h_15_RPC_WRAPPERS \
	FID_MechaJamIII_Source_MechaJamIII_MechaJamIIIProjectile_h_15_INCLASS \
	FID_MechaJamIII_Source_MechaJamIII_MechaJamIIIProjectile_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_MechaJamIII_Source_MechaJamIII_MechaJamIIIProjectile_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_MechaJamIII_Source_MechaJamIII_MechaJamIIIProjectile_h_15_SPARSE_DATA \
	FID_MechaJamIII_Source_MechaJamIII_MechaJamIIIProjectile_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_MechaJamIII_Source_MechaJamIII_MechaJamIIIProjectile_h_15_INCLASS_NO_PURE_DECLS \
	FID_MechaJamIII_Source_MechaJamIII_MechaJamIIIProjectile_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MECHAJAMIII_API UClass* StaticClass<class AMechaJamIIIProjectile>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_MechaJamIII_Source_MechaJamIII_MechaJamIIIProjectile_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
