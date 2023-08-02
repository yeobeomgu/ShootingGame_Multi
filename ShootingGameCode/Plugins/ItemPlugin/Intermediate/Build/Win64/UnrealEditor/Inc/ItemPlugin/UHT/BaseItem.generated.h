// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "BaseItem.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class UPrimitiveComponent;
struct FHitResult;
#ifdef ITEMPLUGIN_BaseItem_generated_h
#error "BaseItem.generated.h already included, missing '#pragma once' in BaseItem.h"
#endif
#define ITEMPLUGIN_BaseItem_generated_h

#define FID_Work_VR14_ShootingGameCode_Plugins_ItemPlugin_Source_ItemPlugin_Public_BaseItem_h_14_SPARSE_DATA
#define FID_Work_VR14_ShootingGameCode_Plugins_ItemPlugin_Source_ItemPlugin_Public_BaseItem_h_14_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execMeshBeginOverlap);


#define FID_Work_VR14_ShootingGameCode_Plugins_ItemPlugin_Source_ItemPlugin_Public_BaseItem_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execMeshBeginOverlap);


#define FID_Work_VR14_ShootingGameCode_Plugins_ItemPlugin_Source_ItemPlugin_Public_BaseItem_h_14_ACCESSORS
#define FID_Work_VR14_ShootingGameCode_Plugins_ItemPlugin_Source_ItemPlugin_Public_BaseItem_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesABaseItem(); \
	friend struct Z_Construct_UClass_ABaseItem_Statics; \
public: \
	DECLARE_CLASS(ABaseItem, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ItemPlugin"), NO_API) \
	DECLARE_SERIALIZER(ABaseItem)


#define FID_Work_VR14_ShootingGameCode_Plugins_ItemPlugin_Source_ItemPlugin_Public_BaseItem_h_14_INCLASS \
private: \
	static void StaticRegisterNativesABaseItem(); \
	friend struct Z_Construct_UClass_ABaseItem_Statics; \
public: \
	DECLARE_CLASS(ABaseItem, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ItemPlugin"), NO_API) \
	DECLARE_SERIALIZER(ABaseItem)


#define FID_Work_VR14_ShootingGameCode_Plugins_ItemPlugin_Source_ItemPlugin_Public_BaseItem_h_14_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ABaseItem(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ABaseItem) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ABaseItem); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABaseItem); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ABaseItem(ABaseItem&&); \
	NO_API ABaseItem(const ABaseItem&); \
public: \
	NO_API virtual ~ABaseItem();


#define FID_Work_VR14_ShootingGameCode_Plugins_ItemPlugin_Source_ItemPlugin_Public_BaseItem_h_14_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ABaseItem(ABaseItem&&); \
	NO_API ABaseItem(const ABaseItem&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ABaseItem); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABaseItem); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ABaseItem) \
	NO_API virtual ~ABaseItem();


#define FID_Work_VR14_ShootingGameCode_Plugins_ItemPlugin_Source_ItemPlugin_Public_BaseItem_h_11_PROLOG
#define FID_Work_VR14_ShootingGameCode_Plugins_ItemPlugin_Source_ItemPlugin_Public_BaseItem_h_14_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Work_VR14_ShootingGameCode_Plugins_ItemPlugin_Source_ItemPlugin_Public_BaseItem_h_14_SPARSE_DATA \
	FID_Work_VR14_ShootingGameCode_Plugins_ItemPlugin_Source_ItemPlugin_Public_BaseItem_h_14_RPC_WRAPPERS \
	FID_Work_VR14_ShootingGameCode_Plugins_ItemPlugin_Source_ItemPlugin_Public_BaseItem_h_14_ACCESSORS \
	FID_Work_VR14_ShootingGameCode_Plugins_ItemPlugin_Source_ItemPlugin_Public_BaseItem_h_14_INCLASS \
	FID_Work_VR14_ShootingGameCode_Plugins_ItemPlugin_Source_ItemPlugin_Public_BaseItem_h_14_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Work_VR14_ShootingGameCode_Plugins_ItemPlugin_Source_ItemPlugin_Public_BaseItem_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Work_VR14_ShootingGameCode_Plugins_ItemPlugin_Source_ItemPlugin_Public_BaseItem_h_14_SPARSE_DATA \
	FID_Work_VR14_ShootingGameCode_Plugins_ItemPlugin_Source_ItemPlugin_Public_BaseItem_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Work_VR14_ShootingGameCode_Plugins_ItemPlugin_Source_ItemPlugin_Public_BaseItem_h_14_ACCESSORS \
	FID_Work_VR14_ShootingGameCode_Plugins_ItemPlugin_Source_ItemPlugin_Public_BaseItem_h_14_INCLASS_NO_PURE_DECLS \
	FID_Work_VR14_ShootingGameCode_Plugins_ItemPlugin_Source_ItemPlugin_Public_BaseItem_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ITEMPLUGIN_API UClass* StaticClass<class ABaseItem>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Work_VR14_ShootingGameCode_Plugins_ItemPlugin_Source_ItemPlugin_Public_BaseItem_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
