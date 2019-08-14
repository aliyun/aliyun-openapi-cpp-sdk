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

#include <alibabacloud/mts/model/AddWaterMarkTemplateRequest.h>

using AlibabaCloud::Mts::Model::AddWaterMarkTemplateRequest;

AddWaterMarkTemplateRequest::AddWaterMarkTemplateRequest() :
	RpcServiceRequest("mts", "2014-06-18", "AddWaterMarkTemplate")
{}

AddWaterMarkTemplateRequest::~AddWaterMarkTemplateRequest()
{}

long AddWaterMarkTemplateRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void AddWaterMarkTemplateRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setCoreParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string AddWaterMarkTemplateRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void AddWaterMarkTemplateRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setCoreParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string AddWaterMarkTemplateRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void AddWaterMarkTemplateRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setCoreParameter("OwnerAccount", ownerAccount);
}

std::string AddWaterMarkTemplateRequest::getName()const
{
	return name_;
}

void AddWaterMarkTemplateRequest::setName(const std::string& name)
{
	name_ = name;
	setCoreParameter("Name", name);
}

long AddWaterMarkTemplateRequest::getOwnerId()const
{
	return ownerId_;
}

void AddWaterMarkTemplateRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setCoreParameter("OwnerId", std::to_string(ownerId));
}

std::string AddWaterMarkTemplateRequest::getConfig()const
{
	return config_;
}

void AddWaterMarkTemplateRequest::setConfig(const std::string& config)
{
	config_ = config;
	setCoreParameter("Config", config);
}

std::string AddWaterMarkTemplateRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void AddWaterMarkTemplateRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", accessKeyId);
}

