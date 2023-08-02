// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeItemPlugin_init() {}
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_ItemPlugin;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_ItemPlugin()
	{
		if (!Z_Registration_Info_UPackage__Script_ItemPlugin.OuterSingleton)
		{
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/ItemPlugin",
				nullptr,
				0,
				PKG_CompiledIn | 0x00000000,
				0x68942380,
				0xBA4912F1,
				METADATA_PARAMS(nullptr, 0)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_ItemPlugin.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_ItemPlugin.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_ItemPlugin(Z_Construct_UPackage__Script_ItemPlugin, TEXT("/Script/ItemPlugin"), Z_Registration_Info_UPackage__Script_ItemPlugin, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0x68942380, 0xBA4912F1));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
