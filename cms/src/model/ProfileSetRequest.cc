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

#include <alibabacloud/cms/model/ProfileSetRequest.h>

using AlibabaCloud::Cms::Model::ProfileSetRequest;

ProfileSetRequest::ProfileSetRequest() :
	RpcServiceRequest("cms", "2018-03-08", "ProfileSet")
{
	setMethod(HttpRequest::Method::Post);
}

ProfileSetRequest::~ProfileSetRequest()
{}

bool ProfileSetRequest::getEnableInstallAgentNewECS()const
{
	return enableInstallAgentNewECS_;
}

void ProfileSetRequest::setEnableInstallAgentNewECS(bool enableInstallAgentNewECS)
{
	enableInstallAgentNewECS_ = enableInstallAgentNewECS;
	setCoreParameter("EnableInstallAgentNewECS", enableInstallAgentNewECS ? "true" : "false");
}

std::string ProfileSetRequest::getEnableActiveAlert()const
{
	return enableActiveAlert_;
}

void ProfileSetRequest::setEnableActiveAlert(const std::string& enableActiveAlert)
{
	enableActiveAlert_ = enableActiveAlert;
	setCoreParameter("EnableActiveAlert", enableActiveAlert);
}

bool ProfileSetRequest::getAutoInstall()const
{
	return autoInstall_;
}

void ProfileSetRequest::setAutoInstall(bool autoInstall)
{
	autoInstall_ = autoInstall;
	setCoreParameter("AutoInstall", autoInstall ? "true" : "false");
}

long ProfileSetRequest::getUserId()const
{
	return userId_;
}

void ProfileSetRequest::setUserId(long userId)
{
	userId_ = userId;
	setCoreParameter("UserId", std::to_string(userId));
}

