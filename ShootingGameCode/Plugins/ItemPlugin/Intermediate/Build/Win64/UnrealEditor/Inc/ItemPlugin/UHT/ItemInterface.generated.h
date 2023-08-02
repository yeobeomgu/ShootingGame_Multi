// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ItemInterface.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class EItemType : uint8;
#ifdef ITEMPLUGIN_ItemInterface_generated_h
#error "ItemInterface.generated.h already included, missing '#pragma once' in ItemInterface.h"
#endif
#define ITEMPLUGIN_ItemInterface_generated_h

#define FID_Work_VR14_ShootingGameCode_Plugins_ItemPlugin_Source_ItemPlugin_Public_ItemInterface_h_19_SPARSE_DATA
#define FID_Work_VR14_ShootingGameCode_Plugins_ItemPlugin_Source_ItemPlugin_Public_ItemInterface_h_19_RPC_WRAPPERS \
	virtual void EventGetItem_Implementation(EItemType itemType) {}; \
 \
	DECLARE_FUNCTION(execEventGetItem);


#define FID_Work_VR14_ShootingGameCode_Plugins_ItemPlugin_Source_ItemPlugin_Public_ItemInterface_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void EventGetItem_Implementation(EItemType itemType) {}; \
 \
	DECLARE_FUNCTION(execEventGetItem);


#define FID_Work_VR14_ShootingGameCode_Plugins_ItemPlugin_Source_ItemPlugin_Public_ItemInterface_h_19_ACCESSORS
#define FID_Work_VR14_ShootingGameCode_Plugins_ItemPlugin_Source_ItemPlugin_Public_ItemInterface_h_19_CALLBACK_WRAPPERS
#define FID_Work_VR14_ShootingGameCode_Plugins_ItemPlugin_Source_ItemPlugin_Public_ItemInterface_h_19_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UItemInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UItemInterface) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UItemInterface); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UItemInterface); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UItemInterface(UItemInterface&&); \
	NO_API UItemInterface(const UItemInterface&); \
public: \
	NO_API virtual ~UItemInterface();


#define FID_Work_VR14_ShootingGameCode_Plugins_ItemPlugin_Source_ItemPlugin_Public_ItemInterface_h_19_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UItemInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UItemInterface(UItemInterface&&); \
	NO_API UItemInterface(const UItemInterface&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UItemInterface); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UItemInterface); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UItemInterface) \
	NO_API virtual ~UItemInterface();


#define FID_Work_VR14_ShootingGameCode_Plugins_ItemPlugin_Source_ItemPlugin_Public_ItemInterface_h_19_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUItemInterface(); \
	friend struct Z_Construct_UClass_UItemInterface_Statics; \
public: \
	DECLARE_CLASS(UItemInterface, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/ItemPlugin"), NO_API) \
	DECLARE_SERIALIZER(UItemInterface)


#define FID_Work_VR14_ShootingGameCode_Plugins_ItemPlugin_Source_ItemPlugin_Public_ItemInterface_h_19_GENERATED_BODY_LEGACY \
		PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_Work_VR14_ShootingGameCode_Plugins_ItemPlugin_Source_ItemPlugin_Public_ItemInterface_h_19_GENERATED_UINTERFACE_BODY() \
	FID_Work_VR14_ShootingGameCode_Plugins_ItemPlugin_Source_ItemPlugin_Public_ItemInterface_h_19_STANDARD_CONSTRUCTORS \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Work_VR14_ShootingGameCode_Plugins_ItemPlugin_Source_ItemPlugin_Public_ItemInterface_h_19_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_Work_VR14_ShootingGameCode_Plugins_ItemPlugin_Source_ItemPlugin_Public_ItemInterface_h_19_GENERATED_UINTERFACE_BODY() \
	FID_Work_VR14_ShootingGameCode_Plugins_ItemPlugin_Source_ItemPlugin_Public_ItemInterface_h_19_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Work_VR14_ShootingGameCode_Plugins_ItemPlugin_Source_ItemPlugin_Public_ItemInterface_h_19_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IItemInterface() {} \
public: \
	typedef UItemInterface UClassType; \
	typedef IItemInterface ThisClass; \
	static void Execute_EventGetItem(UObject* O, EItemType itemType); \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_Work_VR14_ShootingGameCode_Plugins_ItemPlugin_Source_ItemPlugin_Public_ItemInterface_h_19_INCLASS_IINTERFACE \
protected: \
	virtual ~IItemInterface() {} \
public: \
	typedef UItemInterface UClassType; \
	typedef IItemInterface ThisClass; \
	static void Execute_EventGetItem(UObject* O, EItemType itemType); \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_Work_VR14_ShootingGameCode_Plugins_ItemPlugin_Source_ItemPlugin_Public_ItemInterface_h_16_PROLOG
#define FID_Work_VR14_ShootingGameCode_Plugins_ItemPlugin_Source_ItemPlugin_Public_ItemInterface_h_27_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Work_VR14_ShootingGameCode_Plugins_ItemPlugin_Source_ItemPlugin_Public_ItemInterface_h_19_SPARSE_DATA \
	FID_Work_VR14_ShootingGameCode_Plugins_ItemPlugin_Source_ItemPlugin_Public_ItemInterface_h_19_RPC_WRAPPERS \
	FID_Work_VR14_ShootingGameCode_Plugins_ItemPlugin_Source_ItemPlugin_Public_ItemInterface_h_19_ACCESSORS \
	FID_Work_VR14_ShootingGameCode_Plugins_ItemPlugin_Source_ItemPlugin_Public_ItemInterface_h_19_CALLBACK_WRAPPERS \
	FID_Work_VR14_ShootingGameCode_Plugins_ItemPlugin_Source_ItemPlugin_Public_ItemInterface_h_19_INCLASS_IINTERFACE \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Work_VR14_ShootingGameCode_Plugins_ItemPlugin_Source_ItemPlugin_Public_ItemInterface_h_27_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Work_VR14_ShootingGameCode_Plugins_ItemPlugin_Source_ItemPlugin_Public_ItemInterface_h_19_SPARSE_DATA \
	FID_Work_VR14_ShootingGameCode_Plugins_ItemPlugin_Source_ItemPlugin_Public_ItemInterface_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Work_VR14_ShootingGameCode_Plugins_ItemPlugin_Source_ItemPlugin_Public_ItemInterface_h_19_ACCESSORS \
	FID_Work_VR14_ShootingGameCode_Plugins_ItemPlugin_Source_ItemPlugin_Public_ItemInterface_h_19_CALLBACK_WRAPPERS \
	FID_Work_VR14_ShootingGameCode_Plugins_ItemPlugin_Source_ItemPlugin_Public_ItemInterface_h_19_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ITEMPLUGIN_API UClass* StaticClass<class UItemInterface>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Work_VR14_ShootingGameCode_Plugins_ItemPlugin_Source_ItemPlugin_Public_ItemInterface_h


#define FOREACH_ENUM_EITEMTYPE(op) \
	op(EItemType::IT_Heal) \
	op(EItemType::IT_Mag) 

enum class EItemType : uint8;
template<> struct TIsUEnumClass<EItemType> { enum { Value = true }; };
template<> ITEMPLUGIN_API UEnum* StaticEnum<EItemType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
