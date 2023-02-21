// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Chat_Client/Chat_ClientGameModeBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeChat_ClientGameModeBase() {}
// Cross Module References
	CHAT_CLIENT_API UClass* Z_Construct_UClass_AChat_ClientGameModeBase_NoRegister();
	CHAT_CLIENT_API UClass* Z_Construct_UClass_AChat_ClientGameModeBase();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_Chat_Client();
// End Cross Module References
	void AChat_ClientGameModeBase::StaticRegisterNativesAChat_ClientGameModeBase()
	{
	}
	UClass* Z_Construct_UClass_AChat_ClientGameModeBase_NoRegister()
	{
		return AChat_ClientGameModeBase::StaticClass();
	}
	struct Z_Construct_UClass_AChat_ClientGameModeBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AChat_ClientGameModeBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_Chat_Client,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AChat_ClientGameModeBase_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "Chat_ClientGameModeBase.h" },
		{ "ModuleRelativePath", "Chat_ClientGameModeBase.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AChat_ClientGameModeBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AChat_ClientGameModeBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AChat_ClientGameModeBase_Statics::ClassParams = {
		&AChat_ClientGameModeBase::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_AChat_ClientGameModeBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AChat_ClientGameModeBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AChat_ClientGameModeBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AChat_ClientGameModeBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AChat_ClientGameModeBase, 732446208);
	template<> CHAT_CLIENT_API UClass* StaticClass<AChat_ClientGameModeBase>()
	{
		return AChat_ClientGameModeBase::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AChat_ClientGameModeBase(Z_Construct_UClass_AChat_ClientGameModeBase, &AChat_ClientGameModeBase::StaticClass, TEXT("/Script/Chat_Client"), TEXT("AChat_ClientGameModeBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AChat_ClientGameModeBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
