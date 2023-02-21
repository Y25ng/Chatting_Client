// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Chat_Client/UserInfo.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUserInfo() {}
// Cross Module References
	CHAT_CLIENT_API UClass* Z_Construct_UClass_AUserInfo_NoRegister();
	CHAT_CLIENT_API UClass* Z_Construct_UClass_AUserInfo();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_Chat_Client();
// End Cross Module References
	void AUserInfo::StaticRegisterNativesAUserInfo()
	{
	}
	UClass* Z_Construct_UClass_AUserInfo_NoRegister()
	{
		return AUserInfo::StaticClass();
	}
	struct Z_Construct_UClass_AUserInfo_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AUserInfo_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_Chat_Client,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AUserInfo_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "UserInfo.h" },
		{ "ModuleRelativePath", "UserInfo.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AUserInfo_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AUserInfo>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AUserInfo_Statics::ClassParams = {
		&AUserInfo::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AUserInfo_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AUserInfo_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AUserInfo()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AUserInfo_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AUserInfo, 2557742021);
	template<> CHAT_CLIENT_API UClass* StaticClass<AUserInfo>()
	{
		return AUserInfo::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AUserInfo(Z_Construct_UClass_AUserInfo, &AUserInfo::StaticClass, TEXT("/Script/Chat_Client"), TEXT("AUserInfo"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AUserInfo);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
