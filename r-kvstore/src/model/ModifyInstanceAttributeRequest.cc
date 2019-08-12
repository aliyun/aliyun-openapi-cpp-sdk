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

#include <alibabacloud/r-kvstore/model/ModifyInstanceAttributeRequest.h>

using AlibabaCloud::R_kvstore::Model::ModifyInstanceAttributeRequest;

ModifyInstanceAttributeRequest::ModifyInstanceAttributeRequest() :
	RpcServiceRequest("r-kvstore", "2015-01-01", "ModifyInstanceAttribute")
{}

ModifyInstanceAttributeRequest::~ModifyInstanceAttributeRequest()
{}

long ModifyInstanceAttributeRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void ModifyInstanceAttributeRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setCoreParameter("ResourceOwnerId", resourceOwnerId);
}

std::string ModifyInstanceAttributeRequest::getInstanceId()const
{
	return instanceId_;
}

void ModifyInstanceAttributeRequest::setInstanceId(const std::string& instanceId)
{
	instanceId_ = instanceId;
	setCoreParameter("InstanceId", std::to_string(instanceId));
}

std::string ModifyInstanceAttributeRequest::getInstanceName()const
{
	return instanceName_;
}

void ModifyInstanceAttributeRequest::setInstanceName(const std::string& instanceName)
{
	instanceName_ = instanceName;
	setCoreParameter("InstanceName", std::to_string(instanceName));
}

std::string ModifyInstanceAttributeRequest::getSecurityToken()const
{
	return securityToken_;
}

void ModifyInstanceAttributeRequest::setSecurityToken(const std::string& securityToken)
{
	securityToken_ = securityToken;
	setCoreParameter("SecurityToken", std::to_string(securityToken));
}

std::string ModifyInstanceAttributeRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void ModifyInstanceAttributeRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setCoreParameter("ResourceOwnerAccount", std::to_string(resourceOwnerAccount));
}

std::string ModifyInstanceAttributeRequest::getRegionId()const
{
	return regionId_;
}

void ModifyInstanceAttributeRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setCoreParameter("RegionId", std::to_string(regionId));
}

std::string ModifyInstanceAttributeRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void ModifyInstanceAttributeRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setCoreParameter("OwnerAccount", std::to_string(ownerAccount));
}

long ModifyInstanceAttributeRequest::getOwnerId()const
{
	return ownerId_;
}

void ModifyInstanceAttributeRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setCoreParameter("OwnerId", ownerId);
}

std::string ModifyInstanceAttributeRequest::getNewPassword()const
{
	return newPassword_;
}

void ModifyInstanceAttributeRequest::setNewPassword(const std::string& newPassword)
{
	newPassword_ = newPassword;
	setCoreParameter("NewPassword", std::to_string(newPassword));
}

std::string ModifyInstanceAttributeRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void ModifyInstanceAttributeRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", std::to_string(accessKeyId));
}

