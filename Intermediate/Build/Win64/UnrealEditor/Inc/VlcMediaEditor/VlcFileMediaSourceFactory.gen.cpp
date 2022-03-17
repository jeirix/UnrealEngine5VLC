// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "VlcMediaEditor/Private/VlcFileMediaSourceFactory.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVlcFileMediaSourceFactory() {}
// Cross Module References
	VLCMEDIAEDITOR_API UClass* Z_Construct_UClass_UVlcFileMediaSourceFactory_NoRegister();
	VLCMEDIAEDITOR_API UClass* Z_Construct_UClass_UVlcFileMediaSourceFactory();
	UNREALED_API UClass* Z_Construct_UClass_UFactory();
	UPackage* Z_Construct_UPackage__Script_VlcMediaEditor();
// End Cross Module References
	void UVlcFileMediaSourceFactory::StaticRegisterNativesUVlcFileMediaSourceFactory()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UVlcFileMediaSourceFactory);
	UClass* Z_Construct_UClass_UVlcFileMediaSourceFactory_NoRegister()
	{
		return UVlcFileMediaSourceFactory::StaticClass();
	}
	struct Z_Construct_UClass_UVlcFileMediaSourceFactory_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UVlcFileMediaSourceFactory_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UFactory,
		(UObject* (*)())Z_Construct_UPackage__Script_VlcMediaEditor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVlcFileMediaSourceFactory_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Implements a factory for UFileMediaSource objects.\n */" },
		{ "HideCategories", "Object" },
		{ "IncludePath", "VlcFileMediaSourceFactory.h" },
		{ "ModuleRelativePath", "Private/VlcFileMediaSourceFactory.h" },
		{ "ToolTip", "Implements a factory for UFileMediaSource objects." },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UVlcFileMediaSourceFactory_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVlcFileMediaSourceFactory>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UVlcFileMediaSourceFactory_Statics::ClassParams = {
		&UVlcFileMediaSourceFactory::StaticClass,
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
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UVlcFileMediaSourceFactory_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UVlcFileMediaSourceFactory_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UVlcFileMediaSourceFactory()
	{
		if (!Z_Registration_Info_UClass_UVlcFileMediaSourceFactory.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UVlcFileMediaSourceFactory.OuterSingleton, Z_Construct_UClass_UVlcFileMediaSourceFactory_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UVlcFileMediaSourceFactory.OuterSingleton;
	}
	template<> VLCMEDIAEDITOR_API UClass* StaticClass<UVlcFileMediaSourceFactory>()
	{
		return UVlcFileMediaSourceFactory::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UVlcFileMediaSourceFactory);
	struct Z_CompiledInDeferFile_FID_MyProject_Plugins_VlcMedia_Source_VlcMediaEditor_Private_VlcFileMediaSourceFactory_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MyProject_Plugins_VlcMedia_Source_VlcMediaEditor_Private_VlcFileMediaSourceFactory_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UVlcFileMediaSourceFactory, UVlcFileMediaSourceFactory::StaticClass, TEXT("UVlcFileMediaSourceFactory"), &Z_Registration_Info_UClass_UVlcFileMediaSourceFactory, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UVlcFileMediaSourceFactory), 2971760037U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MyProject_Plugins_VlcMedia_Source_VlcMediaEditor_Private_VlcFileMediaSourceFactory_h_186442117(TEXT("/Script/VlcMediaEditor"),
		Z_CompiledInDeferFile_FID_MyProject_Plugins_VlcMedia_Source_VlcMediaEditor_Private_VlcFileMediaSourceFactory_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_MyProject_Plugins_VlcMedia_Source_VlcMediaEditor_Private_VlcFileMediaSourceFactory_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
