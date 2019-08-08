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

#include <alibabacloud/vod/model/AddVodTemplateRequest.h>

using AlibabaCloud::Vod::Model::AddVodTemplateRequest;

AddVodTemplateRequest::AddVodTemplateRequest() :
	RpcServiceRequest("vod", "2017-03-21", "AddVodTemplate")
{}

AddVodTemplateRequest::~AddVodTemplateRequest()
{}

long AddVodTemplateRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void AddVodTemplateRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setCoreParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string AddVodTemplateRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void AddVodTemplateRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setCoreParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string AddVodTemplateRequest::getTemplateConfig()const
{
	return templateConfig_;
}

void AddVodTemplateRequest::setTemplateConfig(const std::string& templateConfig)
{
	templateConfig_ = templateConfig;
	setCoreParameter("TemplateConfig", templateConfig);
}

std::string AddVodTemplateRequest::getTemplateType()const
{
	return templateType_;
}

void AddVodTemplateRequest::setTemplateType(const std::string& templateType)
{
	templateType_ = templateType;
	setCoreParameter("TemplateType", templateType);
}

std::string AddVodTemplateRequest::getAppId()const
{
	return appId_;
}

void AddVodTemplateRequest::setAppId(const std::string& appId)
{
	appId_ = appId;
	setCoreParameter("AppId", appId);
}

std::string AddVodTemplateRequest::getName()const
{
	return name_;
}

void AddVodTemplateRequest::setName(const std::string& name)
{
	name_ = name;
	setCoreParameter("Name", name);
}

long AddVodTemplateRequest::getOwnerId()const
{
	return ownerId_;
}

void AddVodTemplateRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setCoreParameter("OwnerId", std::to_string(ownerId));
}

std::string AddVodTemplateRequest::getSubTemplateType()const
{
	return subTemplateType_;
}

void AddVodTemplateRequest::setSubTemplateType(const std::string& subTemplateType)
{
	subTemplateType_ = subTemplateType;
	setCoreParameter("SubTemplateType", subTemplateType);
}

