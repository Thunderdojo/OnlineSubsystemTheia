// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class EBPLoginStatus : uint8;
struct FBPUniqueNetId;
struct FBlueprintSessionResult;
#ifdef ADVANCEDSESSIONS_AdvancedFriendsGameInstance_generated_h
#error "AdvancedFriendsGameInstance.generated.h already included, missing '#pragma once' in AdvancedFriendsGameInstance.h"
#endif
#define ADVANCEDSESSIONS_AdvancedFriendsGameInstance_generated_h

#define NetworkTestProject_Plugins_AdvancedSessions_Source_AdvancedSessions_Classes_AdvancedFriendsGameInstance_h_29_RPC_WRAPPERS
#define NetworkTestProject_Plugins_AdvancedSessions_Source_AdvancedSessions_Classes_AdvancedFriendsGameInstance_h_29_RPC_WRAPPERS_NO_PURE_DECLS
#define NetworkTestProject_Plugins_AdvancedSessions_Source_AdvancedSessions_Classes_AdvancedFriendsGameInstance_h_29_EVENT_PARMS \
	struct AdvancedFriendsGameInstance_eventOnPlayerLoginChanged_Parms \
	{ \
		int32 PlayerNum; \
	}; \
	struct AdvancedFriendsGameInstance_eventOnPlayerLoginStatusChanged_Parms \
	{ \
		int32 PlayerNum; \
		EBPLoginStatus PreviousStatus; \
		EBPLoginStatus NewStatus; \
		FBPUniqueNetId NewPlayerUniqueNetID; \
	}; \
	struct AdvancedFriendsGameInstance_eventOnPlayerTalkingStateChanged_Parms \
	{ \
		FBPUniqueNetId PlayerId; \
		bool bIsTalking; \
	}; \
	struct AdvancedFriendsGameInstance_eventOnSessionInviteAccepted_Parms \
	{ \
		int32 LocalPlayerNum; \
		FBPUniqueNetId PersonInvited; \
		FBlueprintSessionResult SessionToJoin; \
	}; \
	struct AdvancedFriendsGameInstance_eventOnSessionInviteReceived_Parms \
	{ \
		int32 LocalPlayerNum; \
		FBPUniqueNetId PersonInviting; \
		FString AppId; \
		FBlueprintSessionResult SessionToJoin; \
	};


#define NetworkTestProject_Plugins_AdvancedSessions_Source_AdvancedSessions_Classes_AdvancedFriendsGameInstance_h_29_CALLBACK_WRAPPERS
#define NetworkTestProject_Plugins_AdvancedSessions_Source_AdvancedSessions_Classes_AdvancedFriendsGameInstance_h_29_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAdvancedFriendsGameInstance(); \
	friend ADVANCEDSESSIONS_API class UClass* Z_Construct_UClass_UAdvancedFriendsGameInstance(); \
public: \
	DECLARE_CLASS(UAdvancedFriendsGameInstance, UGameInstance, COMPILED_IN_FLAGS(0 | CLASS_Transient), 0, TEXT("/Script/AdvancedSessions"), NO_API) \
	DECLARE_SERIALIZER(UAdvancedFriendsGameInstance) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define NetworkTestProject_Plugins_AdvancedSessions_Source_AdvancedSessions_Classes_AdvancedFriendsGameInstance_h_29_INCLASS \
private: \
	static void StaticRegisterNativesUAdvancedFriendsGameInstance(); \
	friend ADVANCEDSESSIONS_API class UClass* Z_Construct_UClass_UAdvancedFriendsGameInstance(); \
public: \
	DECLARE_CLASS(UAdvancedFriendsGameInstance, UGameInstance, COMPILED_IN_FLAGS(0 | CLASS_Transient), 0, TEXT("/Script/AdvancedSessions"), NO_API) \
	DECLARE_SERIALIZER(UAdvancedFriendsGameInstance) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define NetworkTestProject_Plugins_AdvancedSessions_Source_AdvancedSessions_Classes_AdvancedFriendsGameInstance_h_29_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAdvancedFriendsGameInstance(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAdvancedFriendsGameInstance) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAdvancedFriendsGameInstance); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAdvancedFriendsGameInstance); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAdvancedFriendsGameInstance(UAdvancedFriendsGameInstance&&); \
	NO_API UAdvancedFriendsGameInstance(const UAdvancedFriendsGameInstance&); \
public:


#define NetworkTestProject_Plugins_AdvancedSessions_Source_AdvancedSessions_Classes_AdvancedFriendsGameInstance_h_29_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAdvancedFriendsGameInstance(UAdvancedFriendsGameInstance&&); \
	NO_API UAdvancedFriendsGameInstance(const UAdvancedFriendsGameInstance&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAdvancedFriendsGameInstance); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAdvancedFriendsGameInstance); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAdvancedFriendsGameInstance)


#define NetworkTestProject_Plugins_AdvancedSessions_Source_AdvancedSessions_Classes_AdvancedFriendsGameInstance_h_29_PRIVATE_PROPERTY_OFFSET
#define NetworkTestProject_Plugins_AdvancedSessions_Source_AdvancedSessions_Classes_AdvancedFriendsGameInstance_h_26_PROLOG \
	NetworkTestProject_Plugins_AdvancedSessions_Source_AdvancedSessions_Classes_AdvancedFriendsGameInstance_h_29_EVENT_PARMS


#define NetworkTestProject_Plugins_AdvancedSessions_Source_AdvancedSessions_Classes_AdvancedFriendsGameInstance_h_29_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	NetworkTestProject_Plugins_AdvancedSessions_Source_AdvancedSessions_Classes_AdvancedFriendsGameInstance_h_29_PRIVATE_PROPERTY_OFFSET \
	NetworkTestProject_Plugins_AdvancedSessions_Source_AdvancedSessions_Classes_AdvancedFriendsGameInstance_h_29_RPC_WRAPPERS \
	NetworkTestProject_Plugins_AdvancedSessions_Source_AdvancedSessions_Classes_AdvancedFriendsGameInstance_h_29_CALLBACK_WRAPPERS \
	NetworkTestProject_Plugins_AdvancedSessions_Source_AdvancedSessions_Classes_AdvancedFriendsGameInstance_h_29_INCLASS \
	NetworkTestProject_Plugins_AdvancedSessions_Source_AdvancedSessions_Classes_AdvancedFriendsGameInstance_h_29_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define NetworkTestProject_Plugins_AdvancedSessions_Source_AdvancedSessions_Classes_AdvancedFriendsGameInstance_h_29_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	NetworkTestProject_Plugins_AdvancedSessions_Source_AdvancedSessions_Classes_AdvancedFriendsGameInstance_h_29_PRIVATE_PROPERTY_OFFSET \
	NetworkTestProject_Plugins_AdvancedSessions_Source_AdvancedSessions_Classes_AdvancedFriendsGameInstance_h_29_RPC_WRAPPERS_NO_PURE_DECLS \
	NetworkTestProject_Plugins_AdvancedSessions_Source_AdvancedSessions_Classes_AdvancedFriendsGameInstance_h_29_CALLBACK_WRAPPERS \
	NetworkTestProject_Plugins_AdvancedSessions_Source_AdvancedSessions_Classes_AdvancedFriendsGameInstance_h_29_INCLASS_NO_PURE_DECLS \
	NetworkTestProject_Plugins_AdvancedSessions_Source_AdvancedSessions_Classes_AdvancedFriendsGameInstance_h_29_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID NetworkTestProject_Plugins_AdvancedSessions_Source_AdvancedSessions_Classes_AdvancedFriendsGameInstance_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
