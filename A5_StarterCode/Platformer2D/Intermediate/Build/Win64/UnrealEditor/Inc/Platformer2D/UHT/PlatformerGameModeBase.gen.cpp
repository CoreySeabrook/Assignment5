// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Platformer2D/PlatformerGameModeBase.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodePlatformerGameModeBase() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
PLATFORMER2D_API UClass* Z_Construct_UClass_AMarioCamera_NoRegister();
PLATFORMER2D_API UClass* Z_Construct_UClass_APlatformerGameModeBase();
PLATFORMER2D_API UClass* Z_Construct_UClass_APlatformerGameModeBase_NoRegister();
UPackage* Z_Construct_UPackage__Script_Platformer2D();
// ********** End Cross Module References **********************************************************

// ********** Begin Class APlatformerGameModeBase **************************************************
void APlatformerGameModeBase::StaticRegisterNativesAPlatformerGameModeBase()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_APlatformerGameModeBase;
UClass* APlatformerGameModeBase::GetPrivateStaticClass()
{
	using TClass = APlatformerGameModeBase;
	if (!Z_Registration_Info_UClass_APlatformerGameModeBase.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("PlatformerGameModeBase"),
			Z_Registration_Info_UClass_APlatformerGameModeBase.InnerSingleton,
			StaticRegisterNativesAPlatformerGameModeBase,
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
	return Z_Registration_Info_UClass_APlatformerGameModeBase.InnerSingleton;
}
UClass* Z_Construct_UClass_APlatformerGameModeBase_NoRegister()
{
	return APlatformerGameModeBase::GetPrivateStaticClass();
}
struct Z_Construct_UClass_APlatformerGameModeBase_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "PlatformerGameModeBase.h" },
		{ "ModuleRelativePath", "PlatformerGameModeBase.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CameraTemplate_MetaData[] = {
		{ "Category", "Camera Template" },
		{ "ModuleRelativePath", "PlatformerGameModeBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Camera_MetaData[] = {
		{ "ModuleRelativePath", "PlatformerGameModeBase.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FClassPropertyParams NewProp_CameraTemplate;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Camera;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APlatformerGameModeBase>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_APlatformerGameModeBase_Statics::NewProp_CameraTemplate = { "CameraTemplate", nullptr, (EPropertyFlags)0x0014000000000001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APlatformerGameModeBase, CameraTemplate), Z_Construct_UClass_UClass, Z_Construct_UClass_AMarioCamera_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CameraTemplate_MetaData), NewProp_CameraTemplate_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APlatformerGameModeBase_Statics::NewProp_Camera = { "Camera", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APlatformerGameModeBase, Camera), Z_Construct_UClass_AMarioCamera_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Camera_MetaData), NewProp_Camera_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_APlatformerGameModeBase_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlatformerGameModeBase_Statics::NewProp_CameraTemplate,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlatformerGameModeBase_Statics::NewProp_Camera,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_APlatformerGameModeBase_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_APlatformerGameModeBase_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AGameModeBase,
	(UObject* (*)())Z_Construct_UPackage__Script_Platformer2D,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_APlatformerGameModeBase_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_APlatformerGameModeBase_Statics::ClassParams = {
	&APlatformerGameModeBase::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_APlatformerGameModeBase_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_APlatformerGameModeBase_Statics::PropPointers),
	0,
	0x009003ACu,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_APlatformerGameModeBase_Statics::Class_MetaDataParams), Z_Construct_UClass_APlatformerGameModeBase_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_APlatformerGameModeBase()
{
	if (!Z_Registration_Info_UClass_APlatformerGameModeBase.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_APlatformerGameModeBase.OuterSingleton, Z_Construct_UClass_APlatformerGameModeBase_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_APlatformerGameModeBase.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(APlatformerGameModeBase);
APlatformerGameModeBase::~APlatformerGameModeBase() {}
// ********** End Class APlatformerGameModeBase ****************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Users_corey_Downloads_A5_StarterCode_Platformer2D_Source_Platformer2D_PlatformerGameModeBase_h__Script_Platformer2D_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_APlatformerGameModeBase, APlatformerGameModeBase::StaticClass, TEXT("APlatformerGameModeBase"), &Z_Registration_Info_UClass_APlatformerGameModeBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(APlatformerGameModeBase), 1221018646U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_corey_Downloads_A5_StarterCode_Platformer2D_Source_Platformer2D_PlatformerGameModeBase_h__Script_Platformer2D_2587076865(TEXT("/Script/Platformer2D"),
	Z_CompiledInDeferFile_FID_Users_corey_Downloads_A5_StarterCode_Platformer2D_Source_Platformer2D_PlatformerGameModeBase_h__Script_Platformer2D_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_corey_Downloads_A5_StarterCode_Platformer2D_Source_Platformer2D_PlatformerGameModeBase_h__Script_Platformer2D_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
