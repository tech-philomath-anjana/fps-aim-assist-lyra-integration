// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "fps_aim_assist_lyraCameraManager.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodefps_aim_assist_lyraCameraManager() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_APlayerCameraManager();
FPS_AIM_ASSIST_LYRA_API UClass* Z_Construct_UClass_Afps_aim_assist_lyraCameraManager();
FPS_AIM_ASSIST_LYRA_API UClass* Z_Construct_UClass_Afps_aim_assist_lyraCameraManager_NoRegister();
UPackage* Z_Construct_UPackage__Script_fps_aim_assist_lyra();
// ********** End Cross Module References **********************************************************

// ********** Begin Class Afps_aim_assist_lyraCameraManager ****************************************
void Afps_aim_assist_lyraCameraManager::StaticRegisterNativesAfps_aim_assist_lyraCameraManager()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_Afps_aim_assist_lyraCameraManager;
UClass* Afps_aim_assist_lyraCameraManager::GetPrivateStaticClass()
{
	using TClass = Afps_aim_assist_lyraCameraManager;
	if (!Z_Registration_Info_UClass_Afps_aim_assist_lyraCameraManager.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("fps_aim_assist_lyraCameraManager"),
			Z_Registration_Info_UClass_Afps_aim_assist_lyraCameraManager.InnerSingleton,
			StaticRegisterNativesAfps_aim_assist_lyraCameraManager,
			sizeof(TClass),
			alignof(TClass),
			TClass::StaticClassFlags,
			TClass::StaticClassCastFlags(),
			TClass::StaticConfigName(),
			(UClass::ClassConstructorType)InternalConstructor<TClass>,
			(UClass::ClassVTableHelperCtorCallerType)InternalVTableHelperCtorCaller<TClass>,
			UOBJECT_CPPCLASS_STATICFUNCTIONS_FORCLASS(TClass),
			&TClass::Super::StaticClass,
			&TClass::WithinClass::StaticClass
		);
	}
	return Z_Registration_Info_UClass_Afps_aim_assist_lyraCameraManager.InnerSingleton;
}
UClass* Z_Construct_UClass_Afps_aim_assist_lyraCameraManager_NoRegister()
{
	return Afps_aim_assist_lyraCameraManager::GetPrivateStaticClass();
}
struct Z_Construct_UClass_Afps_aim_assist_lyraCameraManager_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n *  Basic First Person camera manager.\n *  Limits min/max look pitch.\n */" },
#endif
		{ "IncludePath", "fps_aim_assist_lyraCameraManager.h" },
		{ "ModuleRelativePath", "fps_aim_assist_lyraCameraManager.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Basic First Person camera manager.\nLimits min/max look pitch." },
#endif
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<Afps_aim_assist_lyraCameraManager>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_Afps_aim_assist_lyraCameraManager_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_APlayerCameraManager,
	(UObject* (*)())Z_Construct_UPackage__Script_fps_aim_assist_lyra,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_Afps_aim_assist_lyraCameraManager_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_Afps_aim_assist_lyraCameraManager_Statics::ClassParams = {
	&Afps_aim_assist_lyraCameraManager::StaticClass,
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
	0x008003ACu,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_Afps_aim_assist_lyraCameraManager_Statics::Class_MetaDataParams), Z_Construct_UClass_Afps_aim_assist_lyraCameraManager_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_Afps_aim_assist_lyraCameraManager()
{
	if (!Z_Registration_Info_UClass_Afps_aim_assist_lyraCameraManager.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_Afps_aim_assist_lyraCameraManager.OuterSingleton, Z_Construct_UClass_Afps_aim_assist_lyraCameraManager_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_Afps_aim_assist_lyraCameraManager.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(Afps_aim_assist_lyraCameraManager);
Afps_aim_assist_lyraCameraManager::~Afps_aim_assist_lyraCameraManager() {}
// ********** End Class Afps_aim_assist_lyraCameraManager ******************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Users_M_S_Anjana_Documents_Unreal_Projects_fps_aim_assist_lyra_Source_fps_aim_assist_lyra_fps_aim_assist_lyraCameraManager_h__Script_fps_aim_assist_lyra_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_Afps_aim_assist_lyraCameraManager, Afps_aim_assist_lyraCameraManager::StaticClass, TEXT("Afps_aim_assist_lyraCameraManager"), &Z_Registration_Info_UClass_Afps_aim_assist_lyraCameraManager, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(Afps_aim_assist_lyraCameraManager), 2183910721U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_M_S_Anjana_Documents_Unreal_Projects_fps_aim_assist_lyra_Source_fps_aim_assist_lyra_fps_aim_assist_lyraCameraManager_h__Script_fps_aim_assist_lyra_1254575591(TEXT("/Script/fps_aim_assist_lyra"),
	Z_CompiledInDeferFile_FID_Users_M_S_Anjana_Documents_Unreal_Projects_fps_aim_assist_lyra_Source_fps_aim_assist_lyra_fps_aim_assist_lyraCameraManager_h__Script_fps_aim_assist_lyra_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_M_S_Anjana_Documents_Unreal_Projects_fps_aim_assist_lyra_Source_fps_aim_assist_lyra_fps_aim_assist_lyraCameraManager_h__Script_fps_aim_assist_lyra_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
