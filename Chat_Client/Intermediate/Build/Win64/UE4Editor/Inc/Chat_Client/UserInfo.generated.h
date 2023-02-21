// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef CHAT_CLIENT_UserInfo_generated_h
#error "UserInfo.generated.h already included, missing '#pragma once' in UserInfo.h"
#endif
#define CHAT_CLIENT_UserInfo_generated_h

#define Chat_Client_Source_Chat_Client_UserInfo_h_13_SPARSE_DATA
#define Chat_Client_Source_Chat_Client_UserInfo_h_13_RPC_WRAPPERS
#define Chat_Client_Source_Chat_Client_UserInfo_h_13_RPC_WRAPPERS_NO_PURE_DECLS
#define Chat_Client_Source_Chat_Client_UserInfo_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAUserInfo(); \
	friend struct Z_Construct_UClass_AUserInfo_Statics; \
public: \
	DECLARE_CLASS(AUserInfo, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Chat_Client"), NO_API) \
	DECLARE_SERIALIZER(AUserInfo)


#define Chat_Client_Source_Chat_Client_UserInfo_h_13_INCLASS \
private: \
	static void StaticRegisterNativesAUserInfo(); \
	friend struct Z_Construct_UClass_AUserInfo_Statics; \
public: \
	DECLARE_CLASS(AUserInfo, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Chat_Client"), NO_API) \
	DECLARE_SERIALIZER(AUserInfo)


#define Chat_Client_Source_Chat_Client_UserInfo_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AUserInfo(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AUserInfo) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AUserInfo); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AUserInfo); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AUserInfo(AUserInfo&&); \
	NO_API AUserInfo(const AUserInfo&); \
public:


#define Chat_Client_Source_Chat_Client_UserInfo_h_13_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AUserInfo(AUserInfo&&); \
	NO_API AUserInfo(const AUserInfo&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AUserInfo); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AUserInfo); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AUserInfo)


#define Chat_Client_Source_Chat_Client_UserInfo_h_13_PRIVATE_PROPERTY_OFFSET
#define Chat_Client_Source_Chat_Client_UserInfo_h_9_PROLOG
#define Chat_Client_Source_Chat_Client_UserInfo_h_13_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Chat_Client_Source_Chat_Client_UserInfo_h_13_PRIVATE_PROPERTY_OFFSET \
	Chat_Client_Source_Chat_Client_UserInfo_h_13_SPARSE_DATA \
	Chat_Client_Source_Chat_Client_UserInfo_h_13_RPC_WRAPPERS \
	Chat_Client_Source_Chat_Client_UserInfo_h_13_INCLASS \
	Chat_Client_Source_Chat_Client_UserInfo_h_13_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Chat_Client_Source_Chat_Client_UserInfo_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Chat_Client_Source_Chat_Client_UserInfo_h_13_PRIVATE_PROPERTY_OFFSET \
	Chat_Client_Source_Chat_Client_UserInfo_h_13_SPARSE_DATA \
	Chat_Client_Source_Chat_Client_UserInfo_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	Chat_Client_Source_Chat_Client_UserInfo_h_13_INCLASS_NO_PURE_DECLS \
	Chat_Client_Source_Chat_Client_UserInfo_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> CHAT_CLIENT_API UClass* StaticClass<class AUserInfo>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Chat_Client_Source_Chat_Client_UserInfo_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
