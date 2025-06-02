// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BomberMan_012025Typ/BomberMan_012025TypGameMode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBomberMan_012025TypGameMode() {}

// Begin Cross Module References
BOMBERMAN_012025TYP_API UClass* Z_Construct_UClass_ABomberMan_012025TypGameMode();
BOMBERMAN_012025TYP_API UClass* Z_Construct_UClass_ABomberMan_012025TypGameMode_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
UPackage* Z_Construct_UPackage__Script_BomberMan_012025Typ();
// End Cross Module References

// Begin Class ABomberMan_012025TypGameMode
void ABomberMan_012025TypGameMode::StaticRegisterNativesABomberMan_012025TypGameMode()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ABomberMan_012025TypGameMode);
UClass* Z_Construct_UClass_ABomberMan_012025TypGameMode_NoRegister()
{
	return ABomberMan_012025TypGameMode::StaticClass();
}
struct Z_Construct_UClass_ABomberMan_012025TypGameMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "BomberMan_012025TypGameMode.h" },
		{ "ModuleRelativePath", "BomberMan_012025TypGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABomberMan_012025TypGameMode>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_ABomberMan_012025TypGameMode_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AGameModeBase,
	(UObject* (*)())Z_Construct_UPackage__Script_BomberMan_012025Typ,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ABomberMan_012025TypGameMode_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ABomberMan_012025TypGameMode_Statics::ClassParams = {
	&ABomberMan_012025TypGameMode::StaticClass,
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
	0x008802ACu,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ABomberMan_012025TypGameMode_Statics::Class_MetaDataParams), Z_Construct_UClass_ABomberMan_012025TypGameMode_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ABomberMan_012025TypGameMode()
{
	if (!Z_Registration_Info_UClass_ABomberMan_012025TypGameMode.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ABomberMan_012025TypGameMode.OuterSingleton, Z_Construct_UClass_ABomberMan_012025TypGameMode_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ABomberMan_012025TypGameMode.OuterSingleton;
}
template<> BOMBERMAN_012025TYP_API UClass* StaticClass<ABomberMan_012025TypGameMode>()
{
	return ABomberMan_012025TypGameMode::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ABomberMan_012025TypGameMode);
ABomberMan_012025TypGameMode::~ABomberMan_012025TypGameMode() {}
// End Class ABomberMan_012025TypGameMode

// Begin Registration
struct Z_CompiledInDeferFile_FID_BomberMan_012025Typ_Source_BomberMan_012025Typ_BomberMan_012025TypGameMode_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ABomberMan_012025TypGameMode, ABomberMan_012025TypGameMode::StaticClass, TEXT("ABomberMan_012025TypGameMode"), &Z_Registration_Info_UClass_ABomberMan_012025TypGameMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ABomberMan_012025TypGameMode), 3947958564U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_BomberMan_012025Typ_Source_BomberMan_012025Typ_BomberMan_012025TypGameMode_h_3232672508(TEXT("/Script/BomberMan_012025Typ"),
	Z_CompiledInDeferFile_FID_BomberMan_012025Typ_Source_BomberMan_012025Typ_BomberMan_012025TypGameMode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_BomberMan_012025Typ_Source_BomberMan_012025Typ_BomberMan_012025TypGameMode_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
