// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ItemPlugin/Public/BaseItem.h"
#include "../../Source/Runtime/Engine/Classes/Engine/HitResult.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBaseItem() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USphereComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FHitResult();
	ITEMPLUGIN_API UClass* Z_Construct_UClass_ABaseItem();
	ITEMPLUGIN_API UClass* Z_Construct_UClass_ABaseItem_NoRegister();
	ITEMPLUGIN_API UEnum* Z_Construct_UEnum_ItemPlugin_EItemType();
	UPackage* Z_Construct_UPackage__Script_ItemPlugin();
// End Cross Module References
	DEFINE_FUNCTION(ABaseItem::execMeshBeginOverlap)
	{
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OverlappedComponent);
		P_GET_OBJECT(AActor,Z_Param_OtherActor);
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp);
		P_GET_PROPERTY(FIntProperty,Z_Param_OtherBodyIndex);
		P_GET_UBOOL(Z_Param_bFromSweep);
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_SweepResult);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->MeshBeginOverlap(Z_Param_OverlappedComponent,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_OtherBodyIndex,Z_Param_bFromSweep,Z_Param_Out_SweepResult);
		P_NATIVE_END;
	}
	void ABaseItem::StaticRegisterNativesABaseItem()
	{
		UClass* Class = ABaseItem::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "MeshBeginOverlap", &ABaseItem::execMeshBeginOverlap },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ABaseItem_MeshBeginOverlap_Statics
	{
		struct BaseItem_eventMeshBeginOverlap_Parms
		{
			UPrimitiveComponent* OverlappedComponent;
			AActor* OtherActor;
			UPrimitiveComponent* OtherComp;
			int32 OtherBodyIndex;
			bool bFromSweep;
			FHitResult SweepResult;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OverlappedComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OverlappedComponent;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OtherActor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OtherComp_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OtherComp;
		static const UECodeGen_Private::FIntPropertyParams NewProp_OtherBodyIndex;
		static void NewProp_bFromSweep_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bFromSweep;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SweepResult_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_SweepResult;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABaseItem_MeshBeginOverlap_Statics::NewProp_OverlappedComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ABaseItem_MeshBeginOverlap_Statics::NewProp_OverlappedComponent = { "OverlappedComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(BaseItem_eventMeshBeginOverlap_Parms, OverlappedComponent), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ABaseItem_MeshBeginOverlap_Statics::NewProp_OverlappedComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ABaseItem_MeshBeginOverlap_Statics::NewProp_OverlappedComponent_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ABaseItem_MeshBeginOverlap_Statics::NewProp_OtherActor = { "OtherActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(BaseItem_eventMeshBeginOverlap_Parms, OtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABaseItem_MeshBeginOverlap_Statics::NewProp_OtherComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ABaseItem_MeshBeginOverlap_Statics::NewProp_OtherComp = { "OtherComp", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(BaseItem_eventMeshBeginOverlap_Parms, OtherComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ABaseItem_MeshBeginOverlap_Statics::NewProp_OtherComp_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ABaseItem_MeshBeginOverlap_Statics::NewProp_OtherComp_MetaData)) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ABaseItem_MeshBeginOverlap_Statics::NewProp_OtherBodyIndex = { "OtherBodyIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(BaseItem_eventMeshBeginOverlap_Parms, OtherBodyIndex), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_ABaseItem_MeshBeginOverlap_Statics::NewProp_bFromSweep_SetBit(void* Obj)
	{
		((BaseItem_eventMeshBeginOverlap_Parms*)Obj)->bFromSweep = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ABaseItem_MeshBeginOverlap_Statics::NewProp_bFromSweep = { "bFromSweep", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(BaseItem_eventMeshBeginOverlap_Parms), &Z_Construct_UFunction_ABaseItem_MeshBeginOverlap_Statics::NewProp_bFromSweep_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABaseItem_MeshBeginOverlap_Statics::NewProp_SweepResult_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ABaseItem_MeshBeginOverlap_Statics::NewProp_SweepResult = { "SweepResult", nullptr, (EPropertyFlags)0x0010008008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(BaseItem_eventMeshBeginOverlap_Parms, SweepResult), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(Z_Construct_UFunction_ABaseItem_MeshBeginOverlap_Statics::NewProp_SweepResult_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ABaseItem_MeshBeginOverlap_Statics::NewProp_SweepResult_MetaData)) }; // 1287526515
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ABaseItem_MeshBeginOverlap_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABaseItem_MeshBeginOverlap_Statics::NewProp_OverlappedComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABaseItem_MeshBeginOverlap_Statics::NewProp_OtherActor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABaseItem_MeshBeginOverlap_Statics::NewProp_OtherComp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABaseItem_MeshBeginOverlap_Statics::NewProp_OtherBodyIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABaseItem_MeshBeginOverlap_Statics::NewProp_bFromSweep,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABaseItem_MeshBeginOverlap_Statics::NewProp_SweepResult,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABaseItem_MeshBeginOverlap_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/BaseItem.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ABaseItem_MeshBeginOverlap_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABaseItem, nullptr, "MeshBeginOverlap", nullptr, nullptr, sizeof(Z_Construct_UFunction_ABaseItem_MeshBeginOverlap_Statics::BaseItem_eventMeshBeginOverlap_Parms), Z_Construct_UFunction_ABaseItem_MeshBeginOverlap_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ABaseItem_MeshBeginOverlap_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ABaseItem_MeshBeginOverlap_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ABaseItem_MeshBeginOverlap_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ABaseItem_MeshBeginOverlap()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ABaseItem_MeshBeginOverlap_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ABaseItem);
	UClass* Z_Construct_UClass_ABaseItem_NoRegister()
	{
		return ABaseItem::StaticClass();
	}
	struct Z_Construct_UClass_ABaseItem_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StaticMesh_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_StaticMesh;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Sphere_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Sphere;
		static const UECodeGen_Private::FBytePropertyParams NewProp_eItemType_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_eItemType_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_eItemType;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ABaseItem_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_ItemPlugin,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ABaseItem_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ABaseItem_MeshBeginOverlap, "MeshBeginOverlap" }, // 947039212
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABaseItem_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "BaseItem.h" },
		{ "ModuleRelativePath", "Public/BaseItem.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABaseItem_Statics::NewProp_StaticMesh_MetaData[] = {
		{ "Category", "Item" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/BaseItem.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABaseItem_Statics::NewProp_StaticMesh = { "StaticMesh", nullptr, (EPropertyFlags)0x001000000008000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ABaseItem, StaticMesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ABaseItem_Statics::NewProp_StaticMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABaseItem_Statics::NewProp_StaticMesh_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABaseItem_Statics::NewProp_Sphere_MetaData[] = {
		{ "Category", "Item" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/BaseItem.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABaseItem_Statics::NewProp_Sphere = { "Sphere", nullptr, (EPropertyFlags)0x001000000008000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ABaseItem, Sphere), Z_Construct_UClass_USphereComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ABaseItem_Statics::NewProp_Sphere_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABaseItem_Statics::NewProp_Sphere_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_ABaseItem_Statics::NewProp_eItemType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABaseItem_Statics::NewProp_eItemType_MetaData[] = {
		{ "Category", "Item" },
		{ "ModuleRelativePath", "Public/BaseItem.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_ABaseItem_Statics::NewProp_eItemType = { "eItemType", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ABaseItem, eItemType), Z_Construct_UEnum_ItemPlugin_EItemType, METADATA_PARAMS(Z_Construct_UClass_ABaseItem_Statics::NewProp_eItemType_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABaseItem_Statics::NewProp_eItemType_MetaData)) }; // 1287472050
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ABaseItem_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABaseItem_Statics::NewProp_StaticMesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABaseItem_Statics::NewProp_Sphere,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABaseItem_Statics::NewProp_eItemType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABaseItem_Statics::NewProp_eItemType,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ABaseItem_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABaseItem>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ABaseItem_Statics::ClassParams = {
		&ABaseItem::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ABaseItem_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ABaseItem_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ABaseItem_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ABaseItem_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ABaseItem()
	{
		if (!Z_Registration_Info_UClass_ABaseItem.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ABaseItem.OuterSingleton, Z_Construct_UClass_ABaseItem_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ABaseItem.OuterSingleton;
	}
	template<> ITEMPLUGIN_API UClass* StaticClass<ABaseItem>()
	{
		return ABaseItem::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ABaseItem);
	ABaseItem::~ABaseItem() {}
	struct Z_CompiledInDeferFile_FID_Work_VR14_ShootingGameCode_Plugins_ItemPlugin_Source_ItemPlugin_Public_BaseItem_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Work_VR14_ShootingGameCode_Plugins_ItemPlugin_Source_ItemPlugin_Public_BaseItem_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ABaseItem, ABaseItem::StaticClass, TEXT("ABaseItem"), &Z_Registration_Info_UClass_ABaseItem, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ABaseItem), 1775373473U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Work_VR14_ShootingGameCode_Plugins_ItemPlugin_Source_ItemPlugin_Public_BaseItem_h_1760350697(TEXT("/Script/ItemPlugin"),
		Z_CompiledInDeferFile_FID_Work_VR14_ShootingGameCode_Plugins_ItemPlugin_Source_ItemPlugin_Public_BaseItem_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Work_VR14_ShootingGameCode_Plugins_ItemPlugin_Source_ItemPlugin_Public_BaseItem_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
