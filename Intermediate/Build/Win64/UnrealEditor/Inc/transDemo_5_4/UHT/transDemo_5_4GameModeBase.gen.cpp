// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "transDemo_5_4/transDemo_5_4GameModeBase.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodetransDemo_5_4GameModeBase() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
TRANSDEMO_5_4_API UClass* Z_Construct_UClass_AtransDemo_5_4GameModeBase();
TRANSDEMO_5_4_API UClass* Z_Construct_UClass_AtransDemo_5_4GameModeBase_NoRegister();
UPackage* Z_Construct_UPackage__Script_transDemo_5_4();
// End Cross Module References

// Begin Class AtransDemo_5_4GameModeBase
void AtransDemo_5_4GameModeBase::StaticRegisterNativesAtransDemo_5_4GameModeBase()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AtransDemo_5_4GameModeBase);
UClass* Z_Construct_UClass_AtransDemo_5_4GameModeBase_NoRegister()
{
	return AtransDemo_5_4GameModeBase::StaticClass();
}
struct Z_Construct_UClass_AtransDemo_5_4GameModeBase_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "transDemo_5_4GameModeBase.h" },
		{ "ModuleRelativePath", "transDemo_5_4GameModeBase.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AtransDemo_5_4GameModeBase>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_AtransDemo_5_4GameModeBase_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AGameModeBase,
	(UObject* (*)())Z_Construct_UPackage__Script_transDemo_5_4,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AtransDemo_5_4GameModeBase_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AtransDemo_5_4GameModeBase_Statics::ClassParams = {
	&AtransDemo_5_4GameModeBase::StaticClass,
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
	0x009002ACu,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AtransDemo_5_4GameModeBase_Statics::Class_MetaDataParams), Z_Construct_UClass_AtransDemo_5_4GameModeBase_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AtransDemo_5_4GameModeBase()
{
	if (!Z_Registration_Info_UClass_AtransDemo_5_4GameModeBase.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AtransDemo_5_4GameModeBase.OuterSingleton, Z_Construct_UClass_AtransDemo_5_4GameModeBase_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AtransDemo_5_4GameModeBase.OuterSingleton;
}
template<> TRANSDEMO_5_4_API UClass* StaticClass<AtransDemo_5_4GameModeBase>()
{
	return AtransDemo_5_4GameModeBase::StaticClass();
}
AtransDemo_5_4GameModeBase::AtransDemo_5_4GameModeBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(AtransDemo_5_4GameModeBase);
AtransDemo_5_4GameModeBase::~AtransDemo_5_4GameModeBase() {}
// End Class AtransDemo_5_4GameModeBase

// Begin Registration
struct Z_CompiledInDeferFile_FID_projects_demo_trans_transDemo_5_4_Source_transDemo_5_4_transDemo_5_4GameModeBase_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AtransDemo_5_4GameModeBase, AtransDemo_5_4GameModeBase::StaticClass, TEXT("AtransDemo_5_4GameModeBase"), &Z_Registration_Info_UClass_AtransDemo_5_4GameModeBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AtransDemo_5_4GameModeBase), 1244222185U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_projects_demo_trans_transDemo_5_4_Source_transDemo_5_4_transDemo_5_4GameModeBase_h_1314281797(TEXT("/Script/transDemo_5_4"),
	Z_CompiledInDeferFile_FID_projects_demo_trans_transDemo_5_4_Source_transDemo_5_4_transDemo_5_4GameModeBase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_projects_demo_trans_transDemo_5_4_Source_transDemo_5_4_transDemo_5_4GameModeBase_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
