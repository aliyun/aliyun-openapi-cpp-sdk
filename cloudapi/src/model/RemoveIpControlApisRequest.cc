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

#include <alibabacloud/cloudapi/model/RemoveIpControlApisRequest.h>

using AlibabaCloud::CloudAPI::Model::RemoveIpControlApisRequest;

RemoveIpControlApisRequest::RemoveIpControlApisRequest() :
	RpcServiceRequest("cloudapi", "2016-07-14", "RemoveIpControlApis")
{}

RemoveIpControlApisRequest::~RemoveIpControlApisRequest()
{}

std::string RemoveIpControlApisRequest::getStageName()const
{
	return stageName_;
}

void RemoveIpControlApisRequest::setStageName(const std::string& stageName)
{
	stageName_ = stageName;
	setCoreParameter("StageName", stageName);
}

std::string RemoveIpControlApisRequest::getIpControlId()const
{
	return ipControlId_;
}

void RemoveIpControlApisRequest::setIpControlId(const std::string& ipControlId)
{
	ipControlId_ = ipControlId;
	setCoreParameter("IpControlId", ipControlId);
}

std::string RemoveIpControlApisRequest::getSecurityToken()const
{
	return securityToken_;
}

void RemoveIpControlApisRequest::setSecurityToken(const std::string& securityToken)
{
	securityToken_ = securityToken;
	setCoreParameter("SecurityToken", securityToken);
}

std::string RemoveIpControlApisRequest::getGroupId()const
{
	return groupId_;
}

void RemoveIpControlApisRequest::setGroupId(const std::string& groupId)
{
	groupId_ = groupId;
	setCoreParameter("GroupId", groupId);
}

std::string RemoveIpControlApisRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void RemoveIpControlApisRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", accessKeyId);
}

std::string RemoveIpControlApisRequest::getApiIds()const
{
	return apiIds_;
}

void RemoveIpControlApisRequest::setApiIds(const std::string& apiIds)
{
	apiIds_ = apiIds;
	setCoreParameter("ApiIds", apiIds);
}

