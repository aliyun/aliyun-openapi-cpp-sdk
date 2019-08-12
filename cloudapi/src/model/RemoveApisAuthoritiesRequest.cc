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

#include <alibabacloud/cloudapi/model/RemoveApisAuthoritiesRequest.h>

using AlibabaCloud::CloudAPI::Model::RemoveApisAuthoritiesRequest;

RemoveApisAuthoritiesRequest::RemoveApisAuthoritiesRequest() :
	RpcServiceRequest("cloudapi", "2016-07-14", "RemoveApisAuthorities")
{}

RemoveApisAuthoritiesRequest::~RemoveApisAuthoritiesRequest()
{}

std::string RemoveApisAuthoritiesRequest::getStageName()const
{
	return stageName_;
}

void RemoveApisAuthoritiesRequest::setStageName(const std::string& stageName)
{
	stageName_ = stageName;
	setCoreParameter("StageName", std::to_string(stageName));
}

std::string RemoveApisAuthoritiesRequest::getSecurityToken()const
{
	return securityToken_;
}

void RemoveApisAuthoritiesRequest::setSecurityToken(const std::string& securityToken)
{
	securityToken_ = securityToken;
	setCoreParameter("SecurityToken", std::to_string(securityToken));
}

std::string RemoveApisAuthoritiesRequest::getGroupId()const
{
	return groupId_;
}

void RemoveApisAuthoritiesRequest::setGroupId(const std::string& groupId)
{
	groupId_ = groupId;
	setCoreParameter("GroupId", std::to_string(groupId));
}

long RemoveApisAuthoritiesRequest::getAppId()const
{
	return appId_;
}

void RemoveApisAuthoritiesRequest::setAppId(long appId)
{
	appId_ = appId;
	setCoreParameter("AppId", appId);
}

std::string RemoveApisAuthoritiesRequest::getDescription()const
{
	return description_;
}

void RemoveApisAuthoritiesRequest::setDescription(const std::string& description)
{
	description_ = description;
	setCoreParameter("Description", std::to_string(description));
}

std::string RemoveApisAuthoritiesRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void RemoveApisAuthoritiesRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", std::to_string(accessKeyId));
}

std::string RemoveApisAuthoritiesRequest::getApiIds()const
{
	return apiIds_;
}

void RemoveApisAuthoritiesRequest::setApiIds(const std::string& apiIds)
{
	apiIds_ = apiIds;
	setCoreParameter("ApiIds", std::to_string(apiIds));
}

