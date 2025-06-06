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
BOMBERMAN_012025TYP_API UClass* Z_Construct_UClass_ABloque_NoRegister();
BOMBERMAN_012025TYP_API UClass* Z_Construct_UClass_ABomberMan_012025TypGameMode();
BOMBERMAN_012025TYP_API UClass* Z_Construct_UClass_ABomberMan_012025TypGameMode_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
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
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BloquesA_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Para bloque\n" },
#endif
		{ "ModuleRelativePath", "BomberMan_012025TypGameMode.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Para bloque" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MapaPrototipos_MetaData[] = {
		{ "ModuleRelativePath", "BomberMan_012025TypGameMode.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_BloquesA_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_BloquesA;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MapaPrototipos_ValueProp;
	static const UECodeGen_Private::FIntPropertyParams NewProp_MapaPrototipos_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_MapaPrototipos;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABomberMan_012025TypGameMode>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABomberMan_012025TypGameMode_Statics::NewProp_BloquesA_Inner = { "BloquesA", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_ABloque_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ABomberMan_012025TypGameMode_Statics::NewProp_BloquesA = { "BloquesA", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABomberMan_012025TypGameMode, BloquesA), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BloquesA_MetaData), NewProp_BloquesA_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABomberMan_012025TypGameMode_Statics::NewProp_MapaPrototipos_ValueProp = { "MapaPrototipos", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_ABomberMan_012025TypGameMode_Statics::NewProp_MapaPrototipos_Key_KeyProp = { "MapaPrototipos_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_ABomberMan_012025TypGameMode_Statics::NewProp_MapaPrototipos = { "MapaPrototipos", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABomberMan_012025TypGameMode, MapaPrototipos), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MapaPrototipos_MetaData), NewProp_MapaPrototipos_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ABomberMan_012025TypGameMode_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABomberMan_012025TypGameMode_Statics::NewProp_BloquesA_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABomberMan_012025TypGameMode_Statics::NewProp_BloquesA,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABomberMan_012025TypGameMode_Statics::NewProp_MapaPrototipos_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABomberMan_012025TypGameMode_Statics::NewProp_MapaPrototipos_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABomberMan_012025TypGameMode_Statics::NewProp_MapaPrototipos,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ABomberMan_012025TypGameMode_Statics::PropPointers) < 2048);
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
	Z_Construct_UClass_ABomberMan_012025TypGameMode_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_ABomberMan_012025TypGameMode_Statics::PropPointers),
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
		{ Z_Construct_UClass_ABomberMan_012025TypGameMode, ABomberMan_012025TypGameMode::StaticClass, TEXT("ABomberMan_012025TypGameMode"), &Z_Registration_Info_UClass_ABomberMan_012025TypGameMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ABomberMan_012025TypGameMode), 3024412155U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_BomberMan_012025Typ_Source_BomberMan_012025Typ_BomberMan_012025TypGameMode_h_1662100494(TEXT("/Script/BomberMan_012025Typ"),
	Z_CompiledInDeferFile_FID_BomberMan_012025Typ_Source_BomberMan_012025Typ_BomberMan_012025TypGameMode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_BomberMan_012025Typ_Source_BomberMan_012025Typ_BomberMan_012025TypGameMode_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
