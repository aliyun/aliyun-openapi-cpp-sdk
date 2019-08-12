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

#include <alibabacloud/r-kvstore/model/ModifyInstanceConfigRequest.h>

using AlibabaCloud::R_kvstore::Model::ModifyInstanceConfigRequest;

ModifyInstanceConfigRequest::ModifyInstanceConfigRequest() :
	RpcServiceRequest("r-kvstore", "2015-01-01", "ModifyInstanceConfig")
{}

ModifyInstanceConfigRequest::~ModifyInstanceConfigRequest()
{}

long ModifyInstanceConfigRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void ModifyInstanceConfigRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setCoreParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string ModifyInstanceConfigRequest::getInstanceId()const
{
	return instanceId_;
}

void ModifyInstanceConfigRequest::setInstanceId(const std::string& instanceId)
{
	instanceId_ = instanceId;
	setCoreParameter("InstanceId", instanceId);
}

std::string ModifyInstanceConfigRequest::getSecurityToken()const
{
	return securityToken_;
}

void ModifyInstanceConfigRequest::setSecurityToken(const std::string& securityToken)
{
	securityToken_ = securityToken;
	setCoreParameter("SecurityToken", securityToken);
}

std::string ModifyInstanceConfigRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void ModifyInstanceConfigRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setCoreParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string ModifyInstanceConfigRequest::getRegionId()const
{
	return regionId_;
}

void ModifyInstanceConfigRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setCoreParameter("RegionId", regionId);
}

std::string ModifyInstanceConfigRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void ModifyInstanceConfigRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setCoreParameter("OwnerAccount", ownerAccount);
}

long ModifyInstanceConfigRequest::getOwnerId()const
{
	return ownerId_;
}

void ModifyInstanceConfigRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setCoreParameter("OwnerId", std::to_string(ownerId));
}

std::string ModifyInstanceConfigRequest::getConfig()const
{
	return config_;
}

void ModifyInstanceConfigRequest::setConfig(const std::string& config)
{
	config_ = config;
	setCoreParameter("Config", config);
}

std::string ModifyInstanceConfigRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void ModifyInstanceConfigRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", accessKeyId);
}

