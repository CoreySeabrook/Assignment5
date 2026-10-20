// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Platformer2D/CameraDataAsset.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeCameraDataAsset() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_UDataAsset();
PLATFORMER2D_API UClass* Z_Construct_UClass_UCameraDataAsset();
PLATFORMER2D_API UClass* Z_Construct_UClass_UCameraDataAsset_NoRegister();
UPackage* Z_Construct_UPackage__Script_Platformer2D();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UCameraDataAsset *********************************************************
void UCameraDataAsset::StaticRegisterNativesUCameraDataAsset()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UCameraDataAsset;
UClass* UCameraDataAsset::GetPrivateStaticClass()
{
	using TClass = UCameraDataAsset;
	if (!Z_Registration_Info_UClass_UCameraDataAsset.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("CameraDataAsset"),
			Z_Registration_Info_UClass_UCameraDataAsset.InnerSingleton,
			StaticRegisterNativesUCameraDataAsset,
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
	return Z_Registration_Info_UClass_UCameraDataAsset.InnerSingleton;
}
UClass* Z_Construct_UClass_UCameraDataAsset_NoRegister()
{
	return UCameraDataAsset::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UCameraDataAsset_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "CameraDataAsset.h" },
		{ "ModuleRelativePath", "CameraDataAsset.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ResolutionWidth_MetaData[] = {
		{ "Category", "Resolution" },
		{ "ModuleRelativePath", "CameraDataAsset.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ResolutionHeight_MetaData[] = {
		{ "Category", "Resolution" },
		{ "ModuleRelativePath", "CameraDataAsset.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CameraInitialX_MetaData[] = {
		{ "Category", "Position" },
		{ "ModuleRelativePath", "CameraDataAsset.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CameraInitialZ_MetaData[] = {
		{ "Category", "Position" },
		{ "ModuleRelativePath", "CameraDataAsset.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CameraDepthY_MetaData[] = {
		{ "Category", "Position" },
		{ "ModuleRelativePath", "CameraDataAsset.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CameraRotationYaw_MetaData[] = {
		{ "Category", "Rotation" },
		{ "ModuleRelativePath", "CameraDataAsset.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ResolutionWidth;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ResolutionHeight;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_CameraInitialX;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_CameraInitialZ;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_CameraDepthY;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_CameraRotationYaw;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCameraDataAsset>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UCameraDataAsset_Statics::NewProp_ResolutionWidth = { "ResolutionWidth", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCameraDataAsset, ResolutionWidth), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ResolutionWidth_MetaData), NewProp_ResolutionWidth_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UCameraDataAsset_Statics::NewProp_ResolutionHeight = { "ResolutionHeight", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCameraDataAsset, ResolutionHeight), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ResolutionHeight_MetaData), NewProp_ResolutionHeight_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UCameraDataAsset_Statics::NewProp_CameraInitialX = { "CameraInitialX", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCameraDataAsset, CameraInitialX), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CameraInitialX_MetaData), NewProp_CameraInitialX_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UCameraDataAsset_Statics::NewProp_CameraInitialZ = { "CameraInitialZ", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCameraDataAsset, CameraInitialZ), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CameraInitialZ_MetaData), NewProp_CameraInitialZ_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UCameraDataAsset_Statics::NewProp_CameraDepthY = { "CameraDepthY", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCameraDataAsset, CameraDepthY), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CameraDepthY_MetaData), NewProp_CameraDepthY_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UCameraDataAsset_Statics::NewProp_CameraRotationYaw = { "CameraRotationYaw", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCameraDataAsset, CameraRotationYaw), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CameraRotationYaw_MetaData), NewProp_CameraRotationYaw_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCameraDataAsset_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCameraDataAsset_Statics::NewProp_ResolutionWidth,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCameraDataAsset_Statics::NewProp_ResolutionHeight,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCameraDataAsset_Statics::NewProp_CameraInitialX,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCameraDataAsset_Statics::NewProp_CameraInitialZ,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCameraDataAsset_Statics::NewProp_CameraDepthY,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCameraDataAsset_Statics::NewProp_CameraRotationYaw,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCameraDataAsset_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UCameraDataAsset_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UDataAsset,
	(UObject* (*)())Z_Construct_UPackage__Script_Platformer2D,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCameraDataAsset_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UCameraDataAsset_Statics::ClassParams = {
	&UCameraDataAsset::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UCameraDataAsset_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UCameraDataAsset_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCameraDataAsset_Statics::Class_MetaDataParams), Z_Construct_UClass_UCameraDataAsset_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UCameraDataAsset()
{
	if (!Z_Registration_Info_UClass_UCameraDataAsset.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCameraDataAsset.OuterSingleton, Z_Construct_UClass_UCameraDataAsset_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UCameraDataAsset.OuterSingleton;
}
UCameraDataAsset::UCameraDataAsset(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UCameraDataAsset);
UCameraDataAsset::~UCameraDataAsset() {}
// ********** End Class UCameraDataAsset ***********************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Users_corey_Downloads_A5_StarterCode_Platformer2D_Source_Platformer2D_CameraDataAsset_h__Script_Platformer2D_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UCameraDataAsset, UCameraDataAsset::StaticClass, TEXT("UCameraDataAsset"), &Z_Registration_Info_UClass_UCameraDataAsset, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCameraDataAsset), 2981873384U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_corey_Downloads_A5_StarterCode_Platformer2D_Source_Platformer2D_CameraDataAsset_h__Script_Platformer2D_1952154514(TEXT("/Script/Platformer2D"),
	Z_CompiledInDeferFile_FID_Users_corey_Downloads_A5_StarterCode_Platformer2D_Source_Platformer2D_CameraDataAsset_h__Script_Platformer2D_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_corey_Downloads_A5_StarterCode_Platformer2D_Source_Platformer2D_CameraDataAsset_h__Script_Platformer2D_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
