/// GENERATED BY SDK TOOL.

/// DON'T MODIFY THIS FILE UNLESS YOU'RE FULLY UNDERSTANDING WHAT YOU ARE DOING!!!

#include "../PubSub/MessageCreator.h" 

using namespace Ruyi;

std::map<string, MessageCreatorFunc> MessageCreator::ccs;

void MessageCreator::Initialize()
{
	REGIST_CREATION_FUNCTION("Ruyi.SDK.StorageLayer.GetLocalPathResult", Ruyi::SDK::StorageLayer::GetLocalPathResult);
	REGIST_CREATION_FUNCTION("Ruyi.SDK.SettingSystem.Api.CategoryNode", Ruyi::SDK::SettingSystem::Api::CategoryNode);
	REGIST_CREATION_FUNCTION("Ruyi.SDK.SettingSystem.Api.SettingSearchResult", Ruyi::SDK::SettingSystem::Api::SettingSearchResult);
	REGIST_CREATION_FUNCTION("Ruyi.SDK.SettingSystem.Api.SettingTree", Ruyi::SDK::SettingSystem::Api::SettingTree);
	REGIST_CREATION_FUNCTION("Ruyi.SDK.SettingSystem.Api.NodeList", Ruyi::SDK::SettingSystem::Api::NodeList);
	REGIST_CREATION_FUNCTION("Ruyi.SDK.SettingSystem.Api.SettingItemNotification", Ruyi::SDK::SettingSystem::Api::SettingItemNotification);
	REGIST_CREATION_FUNCTION("Ruyi.SDK.BrainCloudApi.FileUploadSuccessResult", Ruyi::SDK::BrainCloudApi::FileUploadSuccessResult);
	REGIST_CREATION_FUNCTION("Ruyi.SDK.BrainCloudApi.FileUploadFailedResult", Ruyi::SDK::BrainCloudApi::FileUploadFailedResult);
	REGIST_CREATION_FUNCTION("Ruyi.SDK.LocalizationService.LanguageChangedMsg", Ruyi::SDK::LocalizationService::LanguageChangedMsg);
	REGIST_CREATION_FUNCTION("Ruyi.SDK.UserServiceExternal.TriggerKeys", Ruyi::SDK::UserServiceExternal::TriggerKeys);
	REGIST_CREATION_FUNCTION("Ruyi.SDK.UserServiceExternal.InputActionEvent", Ruyi::SDK::UserServiceExternal::InputActionEvent);
	REGIST_CREATION_FUNCTION("Ruyi.SDK.UserServiceExternal.UserEvent", Ruyi::SDK::UserServiceExternal::UserEvent);
	REGIST_CREATION_FUNCTION("Ruyi.SDK.UserServiceExternal.UserInfo_Public", Ruyi::SDK::UserServiceExternal::UserInfo_Public);
}