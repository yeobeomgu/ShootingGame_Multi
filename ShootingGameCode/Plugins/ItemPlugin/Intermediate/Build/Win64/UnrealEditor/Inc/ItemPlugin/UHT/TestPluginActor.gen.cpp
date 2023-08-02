// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ItemPlugin/Public/TestPluginActor.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTestPluginActor() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	ITEMPLUGIN_API UClass* Z_Construct_UClass_ATestPluginActor();
	ITEMPLUGIN_API UClass* Z_Construct_UClass_ATestPluginActor_NoRegister();
	UPackage* Z_Construct_UPackage__Script_ItemPlugin();
// End Cross Module References
	void ATestPluginActor::StaticRegisterNativesATestPluginActor()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ATestPluginActor);
	UClass* Z_Construct_UClass_ATestPluginActor_NoRegister()
	{
		return ATestPluginActor::StaticClass();
	}
	struct Z_Construct_UClass_ATestPluginActor_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ATestPluginActor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_ItemPlugin,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATestPluginActor_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "TestPluginActor.h" },
		{ "ModuleRelativePath", "Public/TestPluginActor.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ATestPluginActor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ATestPluginActor>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ATestPluginActor_Statics::ClassParams = {
		&ATestPluginActor::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ATestPluginActor_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ATestPluginActor_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ATestPluginActor()
	{
		if (!Z_Registration_Info_UClass_ATestPluginActor.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ATestPluginActor.OuterSingleton, Z_Construct_UClass_ATestPluginActor_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ATestPluginActor.OuterSingleton;
	}
	template<> ITEMPLUGIN_API UClass* StaticClass<ATestPluginActor>()
	{
		return ATestPluginActor::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ATestPluginActor);
	ATestPluginActor::~ATestPluginActor() {}
	struct Z_CompiledInDeferFile_FID_Work_VR14_ShootingGameCode_Plugins_ItemPlugin_Source_ItemPlugin_Public_TestPluginActor_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Work_VR14_ShootingGameCode_Plugins_ItemPlugin_Source_ItemPlugin_Public_TestPluginActor_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ATestPluginActor, ATestPluginActor::StaticClass, TEXT("ATestPluginActor"), &Z_Registration_Info_UClass_ATestPluginActor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ATestPluginActor), 654814675U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Work_VR14_ShootingGameCode_Plugins_ItemPlugin_Source_ItemPlugin_Public_TestPluginActor_h_1560209412(TEXT("/Script/ItemPlugin"),
		Z_CompiledInDeferFile_FID_Work_VR14_ShootingGameCode_Plugins_ItemPlugin_Source_ItemPlugin_Public_TestPluginActor_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Work_VR14_ShootingGameCode_Plugins_ItemPlugin_Source_ItemPlugin_Public_TestPluginActor_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
