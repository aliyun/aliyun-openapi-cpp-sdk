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

#include <alibabacloud/r-kvstore/model/ModifyInstanceSpecPreCheckRequest.h>

using AlibabaCloud::R_kvstore::Model::ModifyInstanceSpecPreCheckRequest;

ModifyInstanceSpecPreCheckRequest::ModifyInstanceSpecPreCheckRequest() :
	RpcServiceRequest("r-kvstore", "2015-01-01", "ModifyInstanceSpecPreCheck")
{}

ModifyInstanceSpecPreCheckRequest::~ModifyInstanceSpecPreCheckRequest()
{}

long ModifyInstanceSpecPreCheckRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void ModifyInstanceSpecPreCheckRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setCoreParameter("ResourceOwnerId", resourceOwnerId);
}

std::string ModifyInstanceSpecPreCheckRequest::getInstanceId()const
{
	return instanceId_;
}

void ModifyInstanceSpecPreCheckRequest::setInstanceId(const std::string& instanceId)
{
	instanceId_ = instanceId;
	setCoreParameter("InstanceId", std::to_string(instanceId));
}

std::string ModifyInstanceSpecPreCheckRequest::getSecurityToken()const
{
	return securityToken_;
}

void ModifyInstanceSpecPreCheckRequest::setSecurityToken(const std::string& securityToken)
{
	securityToken_ = securityToken;
	setCoreParameter("SecurityToken", std::to_string(securityToken));
}

std::string ModifyInstanceSpecPreCheckRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void ModifyInstanceSpecPreCheckRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setCoreParameter("ResourceOwnerAccount", std::to_string(resourceOwnerAccount));
}

std::string ModifyInstanceSpecPreCheckRequest::getRegionId()const
{
	return regionId_;
}

void ModifyInstanceSpecPreCheckRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setCoreParameter("RegionId", std::to_string(regionId));
}

std::string ModifyInstanceSpecPreCheckRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void ModifyInstanceSpecPreCheckRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setCoreParameter("OwnerAccount", std::to_string(ownerAccount));
}

long ModifyInstanceSpecPreCheckRequest::getOwnerId()const
{
	return ownerId_;
}

void ModifyInstanceSpecPreCheckRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setCoreParameter("OwnerId", ownerId);
}

std::string ModifyInstanceSpecPreCheckRequest::getTargetInstanceClass()const
{
	return targetInstanceClass_;
}

void ModifyInstanceSpecPreCheckRequest::setTargetInstanceClass(const std::string& targetInstanceClass)
{
	targetInstanceClass_ = targetInstanceClass;
	setCoreParameter("TargetInstanceClass", std::to_string(targetInstanceClass));
}

std::string ModifyInstanceSpecPreCheckRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void ModifyInstanceSpecPreCheckRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", std::to_string(accessKeyId));
}

