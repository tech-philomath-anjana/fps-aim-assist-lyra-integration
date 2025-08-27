// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "fps_aim_assist_lyraPlayerController.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodefps_aim_assist_lyraPlayerController() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
ENGINE_API UClass* Z_Construct_UClass_APlayerController();
ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputMappingContext_NoRegister();
FPS_AIM_ASSIST_LYRA_API UClass* Z_Construct_UClass_Afps_aim_assist_lyraPlayerController();
FPS_AIM_ASSIST_LYRA_API UClass* Z_Construct_UClass_Afps_aim_assist_lyraPlayerController_NoRegister();
UMG_API UClass* Z_Construct_UClass_UUserWidget_NoRegister();
UPackage* Z_Construct_UPackage__Script_fps_aim_assist_lyra();
// ********** End Cross Module References **********************************************************

// ********** Begin Class Afps_aim_assist_lyraPlayerController *************************************
void Afps_aim_assist_lyraPlayerController::StaticRegisterNativesAfps_aim_assist_lyraPlayerController()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_Afps_aim_assist_lyraPlayerController;
UClass* Afps_aim_assist_lyraPlayerController::GetPrivateStaticClass()
{
	using TClass = Afps_aim_assist_lyraPlayerController;
	if (!Z_Registration_Info_UClass_Afps_aim_assist_lyraPlayerController.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("fps_aim_assist_lyraPlayerController"),
			Z_Registration_Info_UClass_Afps_aim_assist_lyraPlayerController.InnerSingleton,
			StaticRegisterNativesAfps_aim_assist_lyraPlayerController,
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
	return Z_Registration_Info_UClass_Afps_aim_assist_lyraPlayerController.InnerSingleton;
}
UClass* Z_Construct_UClass_Afps_aim_assist_lyraPlayerController_NoRegister()
{
	return Afps_aim_assist_lyraPlayerController::GetPrivateStaticClass();
}
struct Z_Construct_UClass_Afps_aim_assist_lyraPlayerController_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n *  Simple first person Player Controller\n *  Manages the input mapping context.\n *  Overrides the Player Camera Manager class.\n */" },
#endif
		{ "HideCategories", "Collision Rendering Transformation" },
		{ "IncludePath", "fps_aim_assist_lyraPlayerController.h" },
		{ "ModuleRelativePath", "fps_aim_assist_lyraPlayerController.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Simple first person Player Controller\nManages the input mapping context.\nOverrides the Player Camera Manager class." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DefaultMappingContexts_MetaData[] = {
		{ "Category", "Input|Input Mappings" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Input Mapping Contexts */" },
#endif
		{ "ModuleRelativePath", "fps_aim_assist_lyraPlayerController.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Input Mapping Contexts" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MobileExcludedMappingContexts_MetaData[] = {
		{ "Category", "Input|Input Mappings" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Input Mapping Contexts */" },
#endif
		{ "ModuleRelativePath", "fps_aim_assist_lyraPlayerController.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Input Mapping Contexts" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MobileControlsWidgetClass_MetaData[] = {
		{ "Category", "Input|Touch Controls" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Mobile controls widget to spawn */" },
#endif
		{ "ModuleRelativePath", "fps_aim_assist_lyraPlayerController.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Mobile controls widget to spawn" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_DefaultMappingContexts_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_DefaultMappingContexts;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MobileExcludedMappingContexts_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_MobileExcludedMappingContexts;
	static const UECodeGen_Private::FClassPropertyParams NewProp_MobileControlsWidgetClass;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<Afps_aim_assist_lyraPlayerController>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_Afps_aim_assist_lyraPlayerController_Statics::NewProp_DefaultMappingContexts_Inner = { "DefaultMappingContexts", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UInputMappingContext_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_Afps_aim_assist_lyraPlayerController_Statics::NewProp_DefaultMappingContexts = { "DefaultMappingContexts", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Afps_aim_assist_lyraPlayerController, DefaultMappingContexts), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DefaultMappingContexts_MetaData), NewProp_DefaultMappingContexts_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_Afps_aim_assist_lyraPlayerController_Statics::NewProp_MobileExcludedMappingContexts_Inner = { "MobileExcludedMappingContexts", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UInputMappingContext_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_Afps_aim_assist_lyraPlayerController_Statics::NewProp_MobileExcludedMappingContexts = { "MobileExcludedMappingContexts", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Afps_aim_assist_lyraPlayerController, MobileExcludedMappingContexts), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MobileExcludedMappingContexts_MetaData), NewProp_MobileExcludedMappingContexts_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_Afps_aim_assist_lyraPlayerController_Statics::NewProp_MobileControlsWidgetClass = { "MobileControlsWidgetClass", nullptr, (EPropertyFlags)0x0024080000000001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Afps_aim_assist_lyraPlayerController, MobileControlsWidgetClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MobileControlsWidgetClass_MetaData), NewProp_MobileControlsWidgetClass_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_Afps_aim_assist_lyraPlayerController_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_Afps_aim_assist_lyraPlayerController_Statics::NewProp_DefaultMappingContexts_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_Afps_aim_assist_lyraPlayerController_Statics::NewProp_DefaultMappingContexts,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_Afps_aim_assist_lyraPlayerController_Statics::NewProp_MobileExcludedMappingContexts_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_Afps_aim_assist_lyraPlayerController_Statics::NewProp_MobileExcludedMappingContexts,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_Afps_aim_assist_lyraPlayerController_Statics::NewProp_MobileControlsWidgetClass,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_Afps_aim_assist_lyraPlayerController_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_Afps_aim_assist_lyraPlayerController_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_APlayerController,
	(UObject* (*)())Z_Construct_UPackage__Script_fps_aim_assist_lyra,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_Afps_aim_assist_lyraPlayerController_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_Afps_aim_assist_lyraPlayerController_Statics::ClassParams = {
	&Afps_aim_assist_lyraPlayerController::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_Afps_aim_assist_lyraPlayerController_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_Afps_aim_assist_lyraPlayerController_Statics::PropPointers),
	0,
	0x009003A5u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_Afps_aim_assist_lyraPlayerController_Statics::Class_MetaDataParams), Z_Construct_UClass_Afps_aim_assist_lyraPlayerController_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_Afps_aim_assist_lyraPlayerController()
{
	if (!Z_Registration_Info_UClass_Afps_aim_assist_lyraPlayerController.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_Afps_aim_assist_lyraPlayerController.OuterSingleton, Z_Construct_UClass_Afps_aim_assist_lyraPlayerController_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_Afps_aim_assist_lyraPlayerController.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(Afps_aim_assist_lyraPlayerController);
Afps_aim_assist_lyraPlayerController::~Afps_aim_assist_lyraPlayerController() {}
// ********** End Class Afps_aim_assist_lyraPlayerController ***************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Users_M_S_Anjana_Documents_Unreal_Projects_fps_aim_assist_lyra_Source_fps_aim_assist_lyra_fps_aim_assist_lyraPlayerController_h__Script_fps_aim_assist_lyra_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_Afps_aim_assist_lyraPlayerController, Afps_aim_assist_lyraPlayerController::StaticClass, TEXT("Afps_aim_assist_lyraPlayerController"), &Z_Registration_Info_UClass_Afps_aim_assist_lyraPlayerController, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(Afps_aim_assist_lyraPlayerController), 3329157596U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_M_S_Anjana_Documents_Unreal_Projects_fps_aim_assist_lyra_Source_fps_aim_assist_lyra_fps_aim_assist_lyraPlayerController_h__Script_fps_aim_assist_lyra_4272477662(TEXT("/Script/fps_aim_assist_lyra"),
	Z_CompiledInDeferFile_FID_Users_M_S_Anjana_Documents_Unreal_Projects_fps_aim_assist_lyra_Source_fps_aim_assist_lyra_fps_aim_assist_lyraPlayerController_h__Script_fps_aim_assist_lyra_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_M_S_Anjana_Documents_Unreal_Projects_fps_aim_assist_lyra_Source_fps_aim_assist_lyra_fps_aim_assist_lyraPlayerController_h__Script_fps_aim_assist_lyra_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
