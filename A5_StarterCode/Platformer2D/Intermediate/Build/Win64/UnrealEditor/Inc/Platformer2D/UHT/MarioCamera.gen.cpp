// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Platformer2D/MarioCamera.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeMarioCamera() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_AActor();
ENGINE_API UClass* Z_Construct_UClass_UCameraComponent_NoRegister();
PLATFORMER2D_API UClass* Z_Construct_UClass_AMarioCamera();
PLATFORMER2D_API UClass* Z_Construct_UClass_AMarioCamera_NoRegister();
PLATFORMER2D_API UClass* Z_Construct_UClass_UCameraDataAsset_NoRegister();
UPackage* Z_Construct_UPackage__Script_Platformer2D();
// ********** End Cross Module References **********************************************************

// ********** Begin Class AMarioCamera *************************************************************
void AMarioCamera::StaticRegisterNativesAMarioCamera()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_AMarioCamera;
UClass* AMarioCamera::GetPrivateStaticClass()
{
	using TClass = AMarioCamera;
	if (!Z_Registration_Info_UClass_AMarioCamera.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("MarioCamera"),
			Z_Registration_Info_UClass_AMarioCamera.InnerSingleton,
			StaticRegisterNativesAMarioCamera,
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
	return Z_Registration_Info_UClass_AMarioCamera.InnerSingleton;
}
UClass* Z_Construct_UClass_AMarioCamera_NoRegister()
{
	return AMarioCamera::GetPrivateStaticClass();
}
struct Z_Construct_UClass_AMarioCamera_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "MarioCamera.h" },
		{ "ModuleRelativePath", "MarioCamera.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Settings_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "MarioCamera.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Camera_MetaData[] = {
		{ "Category", "Camera" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "MarioCamera.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Settings;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Camera;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMarioCamera>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMarioCamera_Statics::NewProp_Settings = { "Settings", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMarioCamera, Settings), Z_Construct_UClass_UCameraDataAsset_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Settings_MetaData), NewProp_Settings_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMarioCamera_Statics::NewProp_Camera = { "Camera", nullptr, (EPropertyFlags)0x00100000000a000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMarioCamera, Camera), Z_Construct_UClass_UCameraComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Camera_MetaData), NewProp_Camera_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AMarioCamera_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMarioCamera_Statics::NewProp_Settings,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMarioCamera_Statics::NewProp_Camera,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AMarioCamera_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AMarioCamera_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_Platformer2D,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AMarioCamera_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AMarioCamera_Statics::ClassParams = {
	&AMarioCamera::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_AMarioCamera_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_AMarioCamera_Statics::PropPointers),
	0,
	0x009001A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMarioCamera_Statics::Class_MetaDataParams), Z_Construct_UClass_AMarioCamera_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AMarioCamera()
{
	if (!Z_Registration_Info_UClass_AMarioCamera.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AMarioCamera.OuterSingleton, Z_Construct_UClass_AMarioCamera_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AMarioCamera.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AMarioCamera);
AMarioCamera::~AMarioCamera() {}
// ********** End Class AMarioCamera ***************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Users_corey_Downloads_A5_StarterCode_Platformer2D_Source_Platformer2D_MarioCamera_h__Script_Platformer2D_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AMarioCamera, AMarioCamera::StaticClass, TEXT("AMarioCamera"), &Z_Registration_Info_UClass_AMarioCamera, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AMarioCamera), 152406159U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_corey_Downloads_A5_StarterCode_Platformer2D_Source_Platformer2D_MarioCamera_h__Script_Platformer2D_3239676266(TEXT("/Script/Platformer2D"),
	Z_CompiledInDeferFile_FID_Users_corey_Downloads_A5_StarterCode_Platformer2D_Source_Platformer2D_MarioCamera_h__Script_Platformer2D_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_corey_Downloads_A5_StarterCode_Platformer2D_Source_Platformer2D_MarioCamera_h__Script_Platformer2D_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
