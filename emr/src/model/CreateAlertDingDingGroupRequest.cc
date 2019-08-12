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

#include <alibabacloud/emr/model/CreateAlertDingDingGroupRequest.h>

using AlibabaCloud::Emr::Model::CreateAlertDingDingGroupRequest;

CreateAlertDingDingGroupRequest::CreateAlertDingDingGroupRequest() :
	RpcServiceRequest("emr", "2016-04-08", "CreateAlertDingDingGroup")
{}

CreateAlertDingDingGroupRequest::~CreateAlertDingDingGroupRequest()
{}

long CreateAlertDingDingGroupRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void CreateAlertDingDingGroupRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setCoreParameter("ResourceOwnerId", resourceOwnerId);
}

std::string CreateAlertDingDingGroupRequest::getRegionId()const
{
	return regionId_;
}

void CreateAlertDingDingGroupRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setCoreParameter("RegionId", regionId);
}

std::string CreateAlertDingDingGroupRequest::getName()const
{
	return name_;
}

void CreateAlertDingDingGroupRequest::setName(const std::string& name)
{
	name_ = name;
	setCoreParameter("Name", name);
}

std::string CreateAlertDingDingGroupRequest::getDescription()const
{
	return description_;
}

void CreateAlertDingDingGroupRequest::setDescription(const std::string& description)
{
	description_ = description;
	setCoreParameter("Description", description);
}

std::string CreateAlertDingDingGroupRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void CreateAlertDingDingGroupRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", accessKeyId);
}

std::string CreateAlertDingDingGroupRequest::getWebHookUrl()const
{
	return webHookUrl_;
}

void CreateAlertDingDingGroupRequest::setWebHookUrl(const std::string& webHookUrl)
{
	webHookUrl_ = webHookUrl;
	setCoreParameter("WebHookUrl", webHookUrl);
}

