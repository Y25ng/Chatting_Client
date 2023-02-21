// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Chat_Client/Lobby_UserWidget.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLobby_UserWidget() {}
// Cross Module References
	CHAT_CLIENT_API UClass* Z_Construct_UClass_ULobby_UserWidget_NoRegister();
	CHAT_CLIENT_API UClass* Z_Construct_UClass_ULobby_UserWidget();
	UMG_API UClass* Z_Construct_UClass_UUserWidget();
	UPackage* Z_Construct_UPackage__Script_Chat_Client();
// End Cross Module References
	void ULobby_UserWidget::StaticRegisterNativesULobby_UserWidget()
	{
	}
	UClass* Z_Construct_UClass_ULobby_UserWidget_NoRegister()
	{
		return ULobby_UserWidget::StaticClass();
	}
	struct Z_Construct_UClass_ULobby_UserWidget_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ULobby_UserWidget_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UUserWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_Chat_Client,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULobby_UserWidget_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "Lobby_UserWidget.h" },
		{ "ModuleRelativePath", "Lobby_UserWidget.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ULobby_UserWidget_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULobby_UserWidget>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ULobby_UserWidget_Statics::ClassParams = {
		&ULobby_UserWidget::StaticClass,
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
		0x00B010A0u,
		METADATA_PARAMS(Z_Construct_UClass_ULobby_UserWidget_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ULobby_UserWidget_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ULobby_UserWidget()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ULobby_UserWidget_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ULobby_UserWidget, 3281802901);
	template<> CHAT_CLIENT_API UClass* StaticClass<ULobby_UserWidget>()
	{
		return ULobby_UserWidget::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ULobby_UserWidget(Z_Construct_UClass_ULobby_UserWidget, &ULobby_UserWidget::StaticClass, TEXT("/Script/Chat_Client"), TEXT("ULobby_UserWidget"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ULobby_UserWidget);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
