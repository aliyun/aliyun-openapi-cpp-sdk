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

#include <alibabacloud/r-kvstore/model/ModifyCertificationRequest.h>

using AlibabaCloud::R_kvstore::Model::ModifyCertificationRequest;

ModifyCertificationRequest::ModifyCertificationRequest() :
	RpcServiceRequest("r-kvstore", "2015-01-01", "ModifyCertification")
{}

ModifyCertificationRequest::~ModifyCertificationRequest()
{}

long ModifyCertificationRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void ModifyCertificationRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setCoreParameter("ResourceOwnerId", resourceOwnerId);
}

std::string ModifyCertificationRequest::getInstanceId()const
{
	return instanceId_;
}

void ModifyCertificationRequest::setInstanceId(const std::string& instanceId)
{
	instanceId_ = instanceId;
	setCoreParameter("InstanceId", std::to_string(instanceId));
}

std::string ModifyCertificationRequest::getSecurityToken()const
{
	return securityToken_;
}

void ModifyCertificationRequest::setSecurityToken(const std::string& securityToken)
{
	securityToken_ = securityToken;
	setCoreParameter("SecurityToken", std::to_string(securityToken));
}

std::string ModifyCertificationRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void ModifyCertificationRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setCoreParameter("ResourceOwnerAccount", std::to_string(resourceOwnerAccount));
}

std::string ModifyCertificationRequest::getRegionId()const
{
	return regionId_;
}

void ModifyCertificationRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setCoreParameter("RegionId", std::to_string(regionId));
}

std::string ModifyCertificationRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void ModifyCertificationRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setCoreParameter("OwnerAccount", std::to_string(ownerAccount));
}

long ModifyCertificationRequest::getOwnerId()const
{
	return ownerId_;
}

void ModifyCertificationRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setCoreParameter("OwnerId", ownerId);
}

bool ModifyCertificationRequest::getNoCertification()const
{
	return noCertification_;
}

void ModifyCertificationRequest::setNoCertification(bool noCertification)
{
	noCertification_ = noCertification;
	setCoreParameter("NoCertification", noCertification ? "true" : "false");
}

std::string ModifyCertificationRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void ModifyCertificationRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", std::to_string(accessKeyId));
}

