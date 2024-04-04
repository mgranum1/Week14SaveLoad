// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Week14Saving/Public/MySaveGame2.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMySaveGame2() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_USaveGame();
	UPackage* Z_Construct_UPackage__Script_Week14Saving();
	WEEK14SAVING_API UClass* Z_Construct_UClass_UMySaveGame2();
	WEEK14SAVING_API UClass* Z_Construct_UClass_UMySaveGame2_NoRegister();
// End Cross Module References
	void UMySaveGame2::StaticRegisterNativesUMySaveGame2()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMySaveGame2);
	UClass* Z_Construct_UClass_UMySaveGame2_NoRegister()
	{
		return UMySaveGame2::StaticClass();
	}
	struct Z_Construct_UClass_UMySaveGame2_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMySaveGame2_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USaveGame,
		(UObject* (*)())Z_Construct_UPackage__Script_Week14Saving,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMySaveGame2_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMySaveGame2_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "MySaveGame2.h" },
		{ "ModuleRelativePath", "Public/MySaveGame2.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMySaveGame2_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMySaveGame2>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMySaveGame2_Statics::ClassParams = {
		&UMySaveGame2::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x001000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMySaveGame2_Statics::Class_MetaDataParams), Z_Construct_UClass_UMySaveGame2_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_UMySaveGame2()
	{
		if (!Z_Registration_Info_UClass_UMySaveGame2.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMySaveGame2.OuterSingleton, Z_Construct_UClass_UMySaveGame2_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMySaveGame2.OuterSingleton;
	}
	template<> WEEK14SAVING_API UClass* StaticClass<UMySaveGame2>()
	{
		return UMySaveGame2::StaticClass();
	}
	UMySaveGame2::UMySaveGame2(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMySaveGame2);
	UMySaveGame2::~UMySaveGame2() {}
	struct Z_CompiledInDeferFile_FID_Week14Saving_Source_Week14Saving_Public_MySaveGame2_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Week14Saving_Source_Week14Saving_Public_MySaveGame2_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UMySaveGame2, UMySaveGame2::StaticClass, TEXT("UMySaveGame2"), &Z_Registration_Info_UClass_UMySaveGame2, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMySaveGame2), 3562798249U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Week14Saving_Source_Week14Saving_Public_MySaveGame2_h_2031490191(TEXT("/Script/Week14Saving"),
		Z_CompiledInDeferFile_FID_Week14Saving_Source_Week14Saving_Public_MySaveGame2_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Week14Saving_Source_Week14Saving_Public_MySaveGame2_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
