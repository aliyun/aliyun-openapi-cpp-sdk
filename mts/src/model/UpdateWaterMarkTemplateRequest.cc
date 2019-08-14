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

#include <alibabacloud/mts/model/UpdateWaterMarkTemplateRequest.h>

using AlibabaCloud::Mts::Model::UpdateWaterMarkTemplateRequest;

UpdateWaterMarkTemplateRequest::UpdateWaterMarkTemplateRequest() :
	RpcServiceRequest("mts", "2014-06-18", "UpdateWaterMarkTemplate")
{}

UpdateWaterMarkTemplateRequest::~UpdateWaterMarkTemplateRequest()
{}

long UpdateWaterMarkTemplateRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void UpdateWaterMarkTemplateRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setCoreParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string UpdateWaterMarkTemplateRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void UpdateWaterMarkTemplateRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setCoreParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string UpdateWaterMarkTemplateRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void UpdateWaterMarkTemplateRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setCoreParameter("OwnerAccount", ownerAccount);
}

std::string UpdateWaterMarkTemplateRequest::getName()const
{
	return name_;
}

void UpdateWaterMarkTemplateRequest::setName(const std::string& name)
{
	name_ = name;
	setCoreParameter("Name", name);
}

long UpdateWaterMarkTemplateRequest::getOwnerId()const
{
	return ownerId_;
}

void UpdateWaterMarkTemplateRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setCoreParameter("OwnerId", std::to_string(ownerId));
}

std::string UpdateWaterMarkTemplateRequest::getWaterMarkTemplateId()const
{
	return waterMarkTemplateId_;
}

void UpdateWaterMarkTemplateRequest::setWaterMarkTemplateId(const std::string& waterMarkTemplateId)
{
	waterMarkTemplateId_ = waterMarkTemplateId;
	setCoreParameter("WaterMarkTemplateId", waterMarkTemplateId);
}

std::string UpdateWaterMarkTemplateRequest::getConfig()const
{
	return config_;
}

void UpdateWaterMarkTemplateRequest::setConfig(const std::string& config)
{
	config_ = config;
	setCoreParameter("Config", config);
}

std::string UpdateWaterMarkTemplateRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void UpdateWaterMarkTemplateRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", accessKeyId);
}

