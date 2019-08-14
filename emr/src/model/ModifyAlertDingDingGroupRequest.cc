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

#include <alibabacloud/emr/model/ModifyAlertDingDingGroupRequest.h>

using AlibabaCloud::Emr::Model::ModifyAlertDingDingGroupRequest;

ModifyAlertDingDingGroupRequest::ModifyAlertDingDingGroupRequest() :
	RpcServiceRequest("emr", "2016-04-08", "ModifyAlertDingDingGroup")
{}

ModifyAlertDingDingGroupRequest::~ModifyAlertDingDingGroupRequest()
{}

long ModifyAlertDingDingGroupRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void ModifyAlertDingDingGroupRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setCoreParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string ModifyAlertDingDingGroupRequest::getRegionId()const
{
	return regionId_;
}

void ModifyAlertDingDingGroupRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setCoreParameter("RegionId", regionId);
}

std::string ModifyAlertDingDingGroupRequest::getBizId()const
{
	return bizId_;
}

void ModifyAlertDingDingGroupRequest::setBizId(const std::string& bizId)
{
	bizId_ = bizId;
	setCoreParameter("BizId", bizId);
}

std::string ModifyAlertDingDingGroupRequest::getName()const
{
	return name_;
}

void ModifyAlertDingDingGroupRequest::setName(const std::string& name)
{
	name_ = name;
	setCoreParameter("Name", name);
}

std::string ModifyAlertDingDingGroupRequest::getDescription()const
{
	return description_;
}

void ModifyAlertDingDingGroupRequest::setDescription(const std::string& description)
{
	description_ = description;
	setCoreParameter("Description", description);
}

std::string ModifyAlertDingDingGroupRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void ModifyAlertDingDingGroupRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", accessKeyId);
}

std::string ModifyAlertDingDingGroupRequest::getWebHookUrl()const
{
	return webHookUrl_;
}

void ModifyAlertDingDingGroupRequest::setWebHookUrl(const std::string& webHookUrl)
{
	webHookUrl_ = webHookUrl;
	setCoreParameter("WebHookUrl", webHookUrl);
}

