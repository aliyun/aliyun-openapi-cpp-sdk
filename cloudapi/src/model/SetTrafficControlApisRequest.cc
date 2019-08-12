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

#include <alibabacloud/cloudapi/model/SetTrafficControlApisRequest.h>

using AlibabaCloud::CloudAPI::Model::SetTrafficControlApisRequest;

SetTrafficControlApisRequest::SetTrafficControlApisRequest() :
	RpcServiceRequest("cloudapi", "2016-07-14", "SetTrafficControlApis")
{}

SetTrafficControlApisRequest::~SetTrafficControlApisRequest()
{}

std::string SetTrafficControlApisRequest::getTrafficControlId()const
{
	return trafficControlId_;
}

void SetTrafficControlApisRequest::setTrafficControlId(const std::string& trafficControlId)
{
	trafficControlId_ = trafficControlId;
	setCoreParameter("TrafficControlId", trafficControlId);
}

std::string SetTrafficControlApisRequest::getStageName()const
{
	return stageName_;
}

void SetTrafficControlApisRequest::setStageName(const std::string& stageName)
{
	stageName_ = stageName;
	setCoreParameter("StageName", stageName);
}

std::string SetTrafficControlApisRequest::getSecurityToken()const
{
	return securityToken_;
}

void SetTrafficControlApisRequest::setSecurityToken(const std::string& securityToken)
{
	securityToken_ = securityToken;
	setCoreParameter("SecurityToken", securityToken);
}

std::string SetTrafficControlApisRequest::getGroupId()const
{
	return groupId_;
}

void SetTrafficControlApisRequest::setGroupId(const std::string& groupId)
{
	groupId_ = groupId;
	setCoreParameter("GroupId", groupId);
}

std::string SetTrafficControlApisRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void SetTrafficControlApisRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", accessKeyId);
}

std::string SetTrafficControlApisRequest::getApiIds()const
{
	return apiIds_;
}

void SetTrafficControlApisRequest::setApiIds(const std::string& apiIds)
{
	apiIds_ = apiIds;
	setCoreParameter("ApiIds", apiIds);
}

