// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ItemPlugin/Public/ItemInterface.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeItemInterface() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
	ITEMPLUGIN_API UClass* Z_Construct_UClass_UItemInterface();
	ITEMPLUGIN_API UClass* Z_Construct_UClass_UItemInterface_NoRegister();
	ITEMPLUGIN_API UEnum* Z_Construct_UEnum_ItemPlugin_EItemType();
	UPackage* Z_Construct_UPackage__Script_ItemPlugin();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EItemType;
	static UEnum* EItemType_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EItemType.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EItemType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_ItemPlugin_EItemType, (UObject*)Z_Construct_UPackage__Script_ItemPlugin(), TEXT("EItemType"));
		}
		return Z_Registration_Info_UEnum_EItemType.OuterSingleton;
	}
	template<> ITEMPLUGIN_API UEnum* StaticEnum<EItemType>()
	{
		return EItemType_StaticEnum();
	}
	struct Z_Construct_UEnum_ItemPlugin_EItemType_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_ItemPlugin_EItemType_Statics::Enumerators[] = {
		{ "EItemType::IT_Heal", (int64)EItemType::IT_Heal },
		{ "EItemType::IT_Mag", (int64)EItemType::IT_Mag },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_ItemPlugin_EItemType_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IT_Heal.DisplayName", "Heal" },
		{ "IT_Heal.Name", "EItemType::IT_Heal" },
		{ "IT_Mag.DisplayName", "Mag" },
		{ "IT_Mag.Name", "EItemType::IT_Mag" },
		{ "ModuleRelativePath", "Public/ItemInterface.h" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_ItemPlugin_EItemType_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_ItemPlugin,
		nullptr,
		"EItemType",
		"EItemType",
		Z_Construct_UEnum_ItemPlugin_EItemType_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_ItemPlugin_EItemType_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_ItemPlugin_EItemType_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_ItemPlugin_EItemType_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_ItemPlugin_EItemType()
	{
		if (!Z_Registration_Info_UEnum_EItemType.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EItemType.InnerSingleton, Z_Construct_UEnum_ItemPlugin_EItemType_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EItemType.InnerSingleton;
	}
	DEFINE_FUNCTION(IItemInterface::execEventGetItem)
	{
		P_GET_ENUM(EItemType,Z_Param_itemType);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->EventGetItem_Implementation(EItemType(Z_Param_itemType));
		P_NATIVE_END;
	}
	struct ItemInterface_eventEventGetItem_Parms
	{
		EItemType itemType;
	};
	void IItemInterface::EventGetItem(EItemType itemType)
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_EventGetItem instead.");
	}
	void UItemInterface::StaticRegisterNativesUItemInterface()
	{
		UClass* Class = UItemInterface::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "EventGetItem", &IItemInterface::execEventGetItem },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UItemInterface_EventGetItem_Statics
	{
		static const UECodeGen_Private::FBytePropertyParams NewProp_itemType_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_itemType;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UItemInterface_EventGetItem_Statics::NewProp_itemType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UItemInterface_EventGetItem_Statics::NewProp_itemType = { "itemType", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ItemInterface_eventEventGetItem_Parms, itemType), Z_Construct_UEnum_ItemPlugin_EItemType, METADATA_PARAMS(nullptr, 0) }; // 1287472050
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UItemInterface_EventGetItem_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UItemInterface_EventGetItem_Statics::NewProp_itemType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UItemInterface_EventGetItem_Statics::NewProp_itemType,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UItemInterface_EventGetItem_Statics::Function_MetaDataParams[] = {
		{ "Category", "Event" },
		{ "ModuleRelativePath", "Public/ItemInterface.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UItemInterface_EventGetItem_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UItemInterface, nullptr, "EventGetItem", nullptr, nullptr, sizeof(ItemInterface_eventEventGetItem_Parms), Z_Construct_UFunction_UItemInterface_EventGetItem_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UItemInterface_EventGetItem_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UItemInterface_EventGetItem_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UItemInterface_EventGetItem_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UItemInterface_EventGetItem()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UItemInterface_EventGetItem_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UItemInterface);
	UClass* Z_Construct_UClass_UItemInterface_NoRegister()
	{
		return UItemInterface::StaticClass();
	}
	struct Z_Construct_UClass_UItemInterface_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UItemInterface_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_ItemPlugin,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UItemInterface_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UItemInterface_EventGetItem, "EventGetItem" }, // 2270256894
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UItemInterface_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/ItemInterface.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UItemInterface_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IItemInterface>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UItemInterface_Statics::ClassParams = {
		&UItemInterface::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x000040A1u,
		METADATA_PARAMS(Z_Construct_UClass_UItemInterface_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UItemInterface_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UItemInterface()
	{
		if (!Z_Registration_Info_UClass_UItemInterface.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UItemInterface.OuterSingleton, Z_Construct_UClass_UItemInterface_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UItemInterface.OuterSingleton;
	}
	template<> ITEMPLUGIN_API UClass* StaticClass<UItemInterface>()
	{
		return UItemInterface::StaticClass();
	}
	UItemInterface::UItemInterface(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UItemInterface);
	UItemInterface::~UItemInterface() {}
	static FName NAME_UItemInterface_EventGetItem = FName(TEXT("EventGetItem"));
	void IItemInterface::Execute_EventGetItem(UObject* O, EItemType itemType)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UItemInterface::StaticClass()));
		ItemInterface_eventEventGetItem_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UItemInterface_EventGetItem);
		if (Func)
		{
			Parms.itemType=itemType;
			O->ProcessEvent(Func, &Parms);
		}
		else if (auto I = (IItemInterface*)(O->GetNativeInterfaceAddress(UItemInterface::StaticClass())))
		{
			I->EventGetItem_Implementation(itemType);
		}
	}
	struct Z_CompiledInDeferFile_FID_Work_VR14_ShootingGameCode_Plugins_ItemPlugin_Source_ItemPlugin_Public_ItemInterface_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Work_VR14_ShootingGameCode_Plugins_ItemPlugin_Source_ItemPlugin_Public_ItemInterface_h_Statics::EnumInfo[] = {
		{ EItemType_StaticEnum, TEXT("EItemType"), &Z_Registration_Info_UEnum_EItemType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1287472050U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Work_VR14_ShootingGameCode_Plugins_ItemPlugin_Source_ItemPlugin_Public_ItemInterface_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UItemInterface, UItemInterface::StaticClass, TEXT("UItemInterface"), &Z_Registration_Info_UClass_UItemInterface, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UItemInterface), 3324882198U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Work_VR14_ShootingGameCode_Plugins_ItemPlugin_Source_ItemPlugin_Public_ItemInterface_h_4100154559(TEXT("/Script/ItemPlugin"),
		Z_CompiledInDeferFile_FID_Work_VR14_ShootingGameCode_Plugins_ItemPlugin_Source_ItemPlugin_Public_ItemInterface_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Work_VR14_ShootingGameCode_Plugins_ItemPlugin_Source_ItemPlugin_Public_ItemInterface_h_Statics::ClassInfo),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Work_VR14_ShootingGameCode_Plugins_ItemPlugin_Source_ItemPlugin_Public_ItemInterface_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Work_VR14_ShootingGameCode_Plugins_ItemPlugin_Source_ItemPlugin_Public_ItemInterface_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
