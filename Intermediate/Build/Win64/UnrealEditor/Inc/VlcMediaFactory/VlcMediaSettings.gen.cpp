// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "VlcMediaFactory/Public/VlcMediaSettings.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVlcMediaSettings() {}
// Cross Module References
	VLCMEDIAFACTORY_API UEnum* Z_Construct_UEnum_VlcMediaFactory_EVlcMediaLogLevel();
	UPackage* Z_Construct_UPackage__Script_VlcMediaFactory();
	VLCMEDIAFACTORY_API UClass* Z_Construct_UClass_UVlcMediaSettings_NoRegister();
	VLCMEDIAFACTORY_API UClass* Z_Construct_UClass_UVlcMediaSettings();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTimespan();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EVlcMediaLogLevel;
	static UEnum* EVlcMediaLogLevel_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EVlcMediaLogLevel.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EVlcMediaLogLevel.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_VlcMediaFactory_EVlcMediaLogLevel, Z_Construct_UPackage__Script_VlcMediaFactory(), TEXT("EVlcMediaLogLevel"));
		}
		return Z_Registration_Info_UEnum_EVlcMediaLogLevel.OuterSingleton;
	}
	template<> VLCMEDIAFACTORY_API UEnum* StaticEnum<EVlcMediaLogLevel>()
	{
		return EVlcMediaLogLevel_StaticEnum();
	}
	struct Z_Construct_UEnum_VlcMediaFactory_EVlcMediaLogLevel_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_VlcMediaFactory_EVlcMediaLogLevel_Statics::Enumerators[] = {
		{ "EVlcMediaLogLevel::Error", (int64)EVlcMediaLogLevel::Error },
		{ "EVlcMediaLogLevel::Warning", (int64)EVlcMediaLogLevel::Warning },
		{ "EVlcMediaLogLevel::Debug", (int64)EVlcMediaLogLevel::Debug },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_VlcMediaFactory_EVlcMediaLogLevel_Statics::Enum_MetaDataParams[] = {
		{ "Comment", "/**\n * Available levels for LibVLC log messages.\n */" },
		{ "Debug.Comment", "/** Debug messages. */" },
		{ "Debug.Name", "EVlcMediaLogLevel::Debug" },
		{ "Debug.ToolTip", "Debug messages." },
		{ "Error.Comment", "/** Error messages. */" },
		{ "Error.Name", "EVlcMediaLogLevel::Error" },
		{ "Error.ToolTip", "Error messages." },
		{ "ModuleRelativePath", "Public/VlcMediaSettings.h" },
		{ "ToolTip", "Available levels for LibVLC log messages." },
		{ "Warning.Comment", "/** Warnings and potential errors. */" },
		{ "Warning.Name", "EVlcMediaLogLevel::Warning" },
		{ "Warning.ToolTip", "Warnings and potential errors." },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_VlcMediaFactory_EVlcMediaLogLevel_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_VlcMediaFactory,
		nullptr,
		"EVlcMediaLogLevel",
		"EVlcMediaLogLevel",
		Z_Construct_UEnum_VlcMediaFactory_EVlcMediaLogLevel_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_VlcMediaFactory_EVlcMediaLogLevel_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_VlcMediaFactory_EVlcMediaLogLevel_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_VlcMediaFactory_EVlcMediaLogLevel_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_VlcMediaFactory_EVlcMediaLogLevel()
	{
		if (!Z_Registration_Info_UEnum_EVlcMediaLogLevel.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EVlcMediaLogLevel.InnerSingleton, Z_Construct_UEnum_VlcMediaFactory_EVlcMediaLogLevel_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EVlcMediaLogLevel.InnerSingleton;
	}
	void UVlcMediaSettings::StaticRegisterNativesUVlcMediaSettings()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UVlcMediaSettings);
	UClass* Z_Construct_UClass_UVlcMediaSettings_NoRegister()
	{
		return UVlcMediaSettings::StaticClass();
	}
	struct Z_Construct_UClass_UVlcMediaSettings_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DiscCaching_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_DiscCaching;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FileCaching_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_FileCaching;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LiveCaching_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_LiveCaching;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NetworkCaching_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_NetworkCaching;
		static const UECodeGen_Private::FBytePropertyParams NewProp_LogLevel_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LogLevel_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_LogLevel;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ShowLogContext_MetaData[];
#endif
		static void NewProp_ShowLogContext_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ShowLogContext;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UVlcMediaSettings_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_VlcMediaFactory,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVlcMediaSettings_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Settings for the VlcMedia plug-in.\n */" },
		{ "IncludePath", "VlcMediaSettings.h" },
		{ "ModuleRelativePath", "Public/VlcMediaSettings.h" },
		{ "ToolTip", "Settings for the VlcMedia plug-in." },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVlcMediaSettings_Statics::NewProp_DiscCaching_MetaData[] = {
		{ "Category", "Caching" },
		{ "Comment", "/** Caching duration for optical media (default = 300 ms). */" },
		{ "ModuleRelativePath", "Public/VlcMediaSettings.h" },
		{ "ToolTip", "Caching duration for optical media (default = 300 ms)." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UVlcMediaSettings_Statics::NewProp_DiscCaching = { "DiscCaching", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVlcMediaSettings, DiscCaching), Z_Construct_UScriptStruct_FTimespan, METADATA_PARAMS(Z_Construct_UClass_UVlcMediaSettings_Statics::NewProp_DiscCaching_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVlcMediaSettings_Statics::NewProp_DiscCaching_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVlcMediaSettings_Statics::NewProp_FileCaching_MetaData[] = {
		{ "Category", "Caching" },
		{ "Comment", "/** Caching duration for local files (default = 300 ms). */" },
		{ "ModuleRelativePath", "Public/VlcMediaSettings.h" },
		{ "ToolTip", "Caching duration for local files (default = 300 ms)." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UVlcMediaSettings_Statics::NewProp_FileCaching = { "FileCaching", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVlcMediaSettings, FileCaching), Z_Construct_UScriptStruct_FTimespan, METADATA_PARAMS(Z_Construct_UClass_UVlcMediaSettings_Statics::NewProp_FileCaching_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVlcMediaSettings_Statics::NewProp_FileCaching_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVlcMediaSettings_Statics::NewProp_LiveCaching_MetaData[] = {
		{ "Category", "Caching" },
		{ "Comment", "/** Caching duration for cameras and microphones (default = 300 ms). */" },
		{ "ModuleRelativePath", "Public/VlcMediaSettings.h" },
		{ "ToolTip", "Caching duration for cameras and microphones (default = 300 ms)." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UVlcMediaSettings_Statics::NewProp_LiveCaching = { "LiveCaching", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVlcMediaSettings, LiveCaching), Z_Construct_UScriptStruct_FTimespan, METADATA_PARAMS(Z_Construct_UClass_UVlcMediaSettings_Statics::NewProp_LiveCaching_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVlcMediaSettings_Statics::NewProp_LiveCaching_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVlcMediaSettings_Statics::NewProp_NetworkCaching_MetaData[] = {
		{ "Category", "Caching" },
		{ "Comment", "/** Caching duration for network resources (default = 1000 ms). */" },
		{ "ModuleRelativePath", "Public/VlcMediaSettings.h" },
		{ "ToolTip", "Caching duration for network resources (default = 1000 ms)." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UVlcMediaSettings_Statics::NewProp_NetworkCaching = { "NetworkCaching", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVlcMediaSettings, NetworkCaching), Z_Construct_UScriptStruct_FTimespan, METADATA_PARAMS(Z_Construct_UClass_UVlcMediaSettings_Statics::NewProp_NetworkCaching_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVlcMediaSettings_Statics::NewProp_NetworkCaching_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UVlcMediaSettings_Statics::NewProp_LogLevel_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVlcMediaSettings_Statics::NewProp_LogLevel_MetaData[] = {
		{ "Category", "Debugging" },
		{ "Comment", "/**\n\x09 * Log level for LibVLC log messages to be forwarded to UE4 log file (default = Warning).\n\x09 *\n\x09 * This setting is used only in Debug and Development builds.\n\x09 * No log entries will written in Shipping and Test builds.\n\x09 */" },
		{ "ModuleRelativePath", "Public/VlcMediaSettings.h" },
		{ "ToolTip", "Log level for LibVLC log messages to be forwarded to UE4 log file (default = Warning).\n\nThis setting is used only in Debug and Development builds.\nNo log entries will written in Shipping and Test builds." },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UVlcMediaSettings_Statics::NewProp_LogLevel = { "LogLevel", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVlcMediaSettings, LogLevel), Z_Construct_UEnum_VlcMediaFactory_EVlcMediaLogLevel, METADATA_PARAMS(Z_Construct_UClass_UVlcMediaSettings_Statics::NewProp_LogLevel_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVlcMediaSettings_Statics::NewProp_LogLevel_MetaData)) }; // 2927436001
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVlcMediaSettings_Statics::NewProp_ShowLogContext_MetaData[] = {
		{ "Category", "Debugging" },
		{ "Comment", "/** Whether to include file name & line number in LibVLC log messages. */" },
		{ "ModuleRelativePath", "Public/VlcMediaSettings.h" },
		{ "ToolTip", "Whether to include file name & line number in LibVLC log messages." },
	};
#endif
	void Z_Construct_UClass_UVlcMediaSettings_Statics::NewProp_ShowLogContext_SetBit(void* Obj)
	{
		((UVlcMediaSettings*)Obj)->ShowLogContext = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UVlcMediaSettings_Statics::NewProp_ShowLogContext = { "ShowLogContext", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UVlcMediaSettings), &Z_Construct_UClass_UVlcMediaSettings_Statics::NewProp_ShowLogContext_SetBit, METADATA_PARAMS(Z_Construct_UClass_UVlcMediaSettings_Statics::NewProp_ShowLogContext_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVlcMediaSettings_Statics::NewProp_ShowLogContext_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UVlcMediaSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVlcMediaSettings_Statics::NewProp_DiscCaching,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVlcMediaSettings_Statics::NewProp_FileCaching,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVlcMediaSettings_Statics::NewProp_LiveCaching,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVlcMediaSettings_Statics::NewProp_NetworkCaching,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVlcMediaSettings_Statics::NewProp_LogLevel_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVlcMediaSettings_Statics::NewProp_LogLevel,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVlcMediaSettings_Statics::NewProp_ShowLogContext,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UVlcMediaSettings_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVlcMediaSettings>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UVlcMediaSettings_Statics::ClassParams = {
		&UVlcMediaSettings::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UVlcMediaSettings_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UVlcMediaSettings_Statics::PropPointers),
		0,
		0x001000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UVlcMediaSettings_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UVlcMediaSettings_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UVlcMediaSettings()
	{
		if (!Z_Registration_Info_UClass_UVlcMediaSettings.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UVlcMediaSettings.OuterSingleton, Z_Construct_UClass_UVlcMediaSettings_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UVlcMediaSettings.OuterSingleton;
	}
	template<> VLCMEDIAFACTORY_API UClass* StaticClass<UVlcMediaSettings>()
	{
		return UVlcMediaSettings::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UVlcMediaSettings);
	struct Z_CompiledInDeferFile_FID_MyProject_Plugins_VlcMedia_Source_VlcMediaFactory_Public_VlcMediaSettings_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MyProject_Plugins_VlcMedia_Source_VlcMediaFactory_Public_VlcMediaSettings_h_Statics::EnumInfo[] = {
		{ EVlcMediaLogLevel_StaticEnum, TEXT("EVlcMediaLogLevel"), &Z_Registration_Info_UEnum_EVlcMediaLogLevel, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2927436001U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MyProject_Plugins_VlcMedia_Source_VlcMediaFactory_Public_VlcMediaSettings_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UVlcMediaSettings, UVlcMediaSettings::StaticClass, TEXT("UVlcMediaSettings"), &Z_Registration_Info_UClass_UVlcMediaSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UVlcMediaSettings), 617009265U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MyProject_Plugins_VlcMedia_Source_VlcMediaFactory_Public_VlcMediaSettings_h_884348108(TEXT("/Script/VlcMediaFactory"),
		Z_CompiledInDeferFile_FID_MyProject_Plugins_VlcMedia_Source_VlcMediaFactory_Public_VlcMediaSettings_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_MyProject_Plugins_VlcMedia_Source_VlcMediaFactory_Public_VlcMediaSettings_h_Statics::ClassInfo),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_MyProject_Plugins_VlcMedia_Source_VlcMediaFactory_Public_VlcMediaSettings_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_MyProject_Plugins_VlcMedia_Source_VlcMediaFactory_Public_VlcMediaSettings_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
