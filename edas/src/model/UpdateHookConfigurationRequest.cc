/*
 * Copyright 2009-2017 Alibaba Cloud All rights reserved.
 * 
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 * 
 *      http://www.apache.org/licenses/LICENSE-2.0
 * 
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#include <alibabacloud/edas/model/UpdateHookConfigurationRequest.h>

using AlibabaCloud::Edas::Model::UpdateHookConfigurationRequest;

UpdateHookConfigurationRequest::UpdateHookConfigurationRequest() :
	RoaServiceRequest("edas", "2017-08-01")
{
	setResourcePath("/pop/app/config_app_hook_json");
	setMethod(HttpRequest::Method::Post);
}

UpdateHookConfigurationRequest::~UpdateHookConfigurationRequest()
{}

std::string UpdateHookConfigurationRequest::getAppId()const
{
	return appId_;
}

void UpdateHookConfigurationRequest::setAppId(const std::string& appId)
{
	appId_ = appId;
	setParameter("AppId", appId);
}

std::string UpdateHookConfigurationRequest::getGroupId()const
{
	return groupId_;
}

void UpdateHookConfigurationRequest::setGroupId(const std::string& groupId)
{
	groupId_ = groupId;
	setParameter("GroupId", groupId);
}

std::string UpdateHookConfigurationRequest::getHooks()const
{
	return hooks_;
}

void UpdateHookConfigurationRequest::setHooks(const std::string& hooks)
{
	hooks_ = hooks;
	setParameter("Hooks", hooks);
}

