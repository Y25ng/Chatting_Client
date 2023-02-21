// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Chat_Client/Login_HUD.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLogin_HUD() {}
// Cross Module References
	CHAT_CLIENT_API UClass* Z_Construct_UClass_ALogin_HUD_NoRegister();
	CHAT_CLIENT_API UClass* Z_Construct_UClass_ALogin_HUD();
	ENGINE_API UClass* Z_Construct_UClass_AHUD();
	UPackage* Z_Construct_UPackage__Script_Chat_Client();
// End Cross Module References
	void ALogin_HUD::StaticRegisterNativesALogin_HUD()
	{
	}
	UClass* Z_Construct_UClass_ALogin_HUD_NoRegister()
	{
		return ALogin_HUD::StaticClass();
	}
	struct Z_Construct_UClass_ALogin_HUD_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ALogin_HUD_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AHUD,
		(UObject* (*)())Z_Construct_UPackage__Script_Chat_Client,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALogin_HUD_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Rendering Actor Input Replication" },
		{ "IncludePath", "Login_HUD.h" },
		{ "ModuleRelativePath", "Login_HUD.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ALogin_HUD_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ALogin_HUD>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ALogin_HUD_Statics::ClassParams = {
		&ALogin_HUD::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_ALogin_HUD_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ALogin_HUD_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ALogin_HUD()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ALogin_HUD_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ALogin_HUD, 3491435839);
	template<> CHAT_CLIENT_API UClass* StaticClass<ALogin_HUD>()
	{
		return ALogin_HUD::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ALogin_HUD(Z_Construct_UClass_ALogin_HUD, &ALogin_HUD::StaticClass, TEXT("/Script/Chat_Client"), TEXT("ALogin_HUD"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ALogin_HUD);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
