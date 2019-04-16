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

#include <alibabacloud/r-kvstore/model/VerifyPasswordRequest.h>

using AlibabaCloud::R_kvstore::Model::VerifyPasswordRequest;

VerifyPasswordRequest::VerifyPasswordRequest() :
	RpcServiceRequest("r-kvstore", "2015-01-01", "VerifyPassword")
{}

VerifyPasswordRequest::~VerifyPasswordRequest()
{}

long VerifyPasswordRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void VerifyPasswordRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setCoreParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string VerifyPasswordRequest::getPassword()const
{
	return password_;
}

void VerifyPasswordRequest::setPassword(const std::string& password)
{
	password_ = password;
	setCoreParameter("Password", password);
}

std::string VerifyPasswordRequest::getInstanceId()const
{
	return instanceId_;
}

void VerifyPasswordRequest::setInstanceId(const std::string& instanceId)
{
	instanceId_ = instanceId;
	setCoreParameter("InstanceId", instanceId);
}

std::string VerifyPasswordRequest::getSecurityToken()const
{
	return securityToken_;
}

void VerifyPasswordRequest::setSecurityToken(const std::string& securityToken)
{
	securityToken_ = securityToken;
	setCoreParameter("SecurityToken", securityToken);
}

std::string VerifyPasswordRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void VerifyPasswordRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setCoreParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string VerifyPasswordRequest::getRegionId()const
{
	return regionId_;
}

void VerifyPasswordRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setCoreParameter("RegionId", regionId);
}

std::string VerifyPasswordRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void VerifyPasswordRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setCoreParameter("OwnerAccount", ownerAccount);
}

long VerifyPasswordRequest::getOwnerId()const
{
	return ownerId_;
}

void VerifyPasswordRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setCoreParameter("OwnerId", std::to_string(ownerId));
}

std::string VerifyPasswordRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void VerifyPasswordRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", accessKeyId);
}

