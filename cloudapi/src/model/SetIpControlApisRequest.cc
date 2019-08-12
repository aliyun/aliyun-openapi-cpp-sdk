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

#include <alibabacloud/cloudapi/model/SetIpControlApisRequest.h>

using AlibabaCloud::CloudAPI::Model::SetIpControlApisRequest;

SetIpControlApisRequest::SetIpControlApisRequest() :
	RpcServiceRequest("cloudapi", "2016-07-14", "SetIpControlApis")
{}

SetIpControlApisRequest::~SetIpControlApisRequest()
{}

std::string SetIpControlApisRequest::getStageName()const
{
	return stageName_;
}

void SetIpControlApisRequest::setStageName(const std::string& stageName)
{
	stageName_ = stageName;
	setCoreParameter("StageName", std::to_string(stageName));
}

std::string SetIpControlApisRequest::getIpControlId()const
{
	return ipControlId_;
}

void SetIpControlApisRequest::setIpControlId(const std::string& ipControlId)
{
	ipControlId_ = ipControlId;
	setCoreParameter("IpControlId", std::to_string(ipControlId));
}

std::string SetIpControlApisRequest::getSecurityToken()const
{
	return securityToken_;
}

void SetIpControlApisRequest::setSecurityToken(const std::string& securityToken)
{
	securityToken_ = securityToken;
	setCoreParameter("SecurityToken", std::to_string(securityToken));
}

std::string SetIpControlApisRequest::getGroupId()const
{
	return groupId_;
}

void SetIpControlApisRequest::setGroupId(const std::string& groupId)
{
	groupId_ = groupId;
	setCoreParameter("GroupId", std::to_string(groupId));
}

std::string SetIpControlApisRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void SetIpControlApisRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", std::to_string(accessKeyId));
}

std::string SetIpControlApisRequest::getApiIds()const
{
	return apiIds_;
}

void SetIpControlApisRequest::setApiIds(const std::string& apiIds)
{
	apiIds_ = apiIds;
	setCoreParameter("ApiIds", std::to_string(apiIds));
}

