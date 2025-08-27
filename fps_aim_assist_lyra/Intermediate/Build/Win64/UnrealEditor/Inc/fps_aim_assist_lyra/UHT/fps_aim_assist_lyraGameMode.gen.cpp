// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "fps_aim_assist_lyraGameMode.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodefps_aim_assist_lyraGameMode() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
FPS_AIM_ASSIST_LYRA_API UClass* Z_Construct_UClass_Afps_aim_assist_lyraGameMode();
FPS_AIM_ASSIST_LYRA_API UClass* Z_Construct_UClass_Afps_aim_assist_lyraGameMode_NoRegister();
UPackage* Z_Construct_UPackage__Script_fps_aim_assist_lyra();
// ********** End Cross Module References **********************************************************

// ********** Begin Class Afps_aim_assist_lyraGameMode *********************************************
void Afps_aim_assist_lyraGameMode::StaticRegisterNativesAfps_aim_assist_lyraGameMode()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_Afps_aim_assist_lyraGameMode;
UClass* Afps_aim_assist_lyraGameMode::GetPrivateStaticClass()
{
	using TClass = Afps_aim_assist_lyraGameMode;
	if (!Z_Registration_Info_UClass_Afps_aim_assist_lyraGameMode.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("fps_aim_assist_lyraGameMode"),
			Z_Registration_Info_UClass_Afps_aim_assist_lyraGameMode.InnerSingleton,
			StaticRegisterNativesAfps_aim_assist_lyraGameMode,
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
	return Z_Registration_Info_UClass_Afps_aim_assist_lyraGameMode.InnerSingleton;
}
UClass* Z_Construct_UClass_Afps_aim_assist_lyraGameMode_NoRegister()
{
	return Afps_aim_assist_lyraGameMode::GetPrivateStaticClass();
}
struct Z_Construct_UClass_Afps_aim_assist_lyraGameMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n *  Simple GameMode for a first person game\n */" },
#endif
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "fps_aim_assist_lyraGameMode.h" },
		{ "ModuleRelativePath", "fps_aim_assist_lyraGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Simple GameMode for a first person game" },
#endif
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<Afps_aim_assist_lyraGameMode>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_Afps_aim_assist_lyraGameMode_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AGameModeBase,
	(UObject* (*)())Z_Construct_UPackage__Script_fps_aim_assist_lyra,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_Afps_aim_assist_lyraGameMode_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_Afps_aim_assist_lyraGameMode_Statics::ClassParams = {
	&Afps_aim_assist_lyraGameMode::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x008003ADu,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_Afps_aim_assist_lyraGameMode_Statics::Class_MetaDataParams), Z_Construct_UClass_Afps_aim_assist_lyraGameMode_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_Afps_aim_assist_lyraGameMode()
{
	if (!Z_Registration_Info_UClass_Afps_aim_assist_lyraGameMode.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_Afps_aim_assist_lyraGameMode.OuterSingleton, Z_Construct_UClass_Afps_aim_assist_lyraGameMode_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_Afps_aim_assist_lyraGameMode.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(Afps_aim_assist_lyraGameMode);
Afps_aim_assist_lyraGameMode::~Afps_aim_assist_lyraGameMode() {}
// ********** End Class Afps_aim_assist_lyraGameMode ***********************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Users_M_S_Anjana_Documents_Unreal_Projects_fps_aim_assist_lyra_Source_fps_aim_assist_lyra_fps_aim_assist_lyraGameMode_h__Script_fps_aim_assist_lyra_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_Afps_aim_assist_lyraGameMode, Afps_aim_assist_lyraGameMode::StaticClass, TEXT("Afps_aim_assist_lyraGameMode"), &Z_Registration_Info_UClass_Afps_aim_assist_lyraGameMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(Afps_aim_assist_lyraGameMode), 248680811U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_M_S_Anjana_Documents_Unreal_Projects_fps_aim_assist_lyra_Source_fps_aim_assist_lyra_fps_aim_assist_lyraGameMode_h__Script_fps_aim_assist_lyra_332201022(TEXT("/Script/fps_aim_assist_lyra"),
	Z_CompiledInDeferFile_FID_Users_M_S_Anjana_Documents_Unreal_Projects_fps_aim_assist_lyra_Source_fps_aim_assist_lyra_fps_aim_assist_lyraGameMode_h__Script_fps_aim_assist_lyra_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_M_S_Anjana_Documents_Unreal_Projects_fps_aim_assist_lyra_Source_fps_aim_assist_lyra_fps_aim_assist_lyraGameMode_h__Script_fps_aim_assist_lyra_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
