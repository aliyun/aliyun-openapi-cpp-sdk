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

#include <alibabacloud/r-kvstore/model/ResetAccountRequest.h>

using AlibabaCloud::R_kvstore::Model::ResetAccountRequest;

ResetAccountRequest::ResetAccountRequest() :
	RpcServiceRequest("r-kvstore", "2015-01-01", "ResetAccount")
{}

ResetAccountRequest::~ResetAccountRequest()
{}

long ResetAccountRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void ResetAccountRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setCoreParameter("ResourceOwnerId", resourceOwnerId);
}

std::string ResetAccountRequest::getAccountPassword()const
{
	return accountPassword_;
}

void ResetAccountRequest::setAccountPassword(const std::string& accountPassword)
{
	accountPassword_ = accountPassword;
	setCoreParameter("AccountPassword", accountPassword);
}

std::string ResetAccountRequest::getInstanceId()const
{
	return instanceId_;
}

void ResetAccountRequest::setInstanceId(const std::string& instanceId)
{
	instanceId_ = instanceId;
	setCoreParameter("InstanceId", instanceId);
}

std::string ResetAccountRequest::getAccountName()const
{
	return accountName_;
}

void ResetAccountRequest::setAccountName(const std::string& accountName)
{
	accountName_ = accountName;
	setCoreParameter("AccountName", accountName);
}

std::string ResetAccountRequest::getSecurityToken()const
{
	return securityToken_;
}

void ResetAccountRequest::setSecurityToken(const std::string& securityToken)
{
	securityToken_ = securityToken;
	setCoreParameter("SecurityToken", securityToken);
}

std::string ResetAccountRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void ResetAccountRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setCoreParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string ResetAccountRequest::getRegionId()const
{
	return regionId_;
}

void ResetAccountRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setCoreParameter("RegionId", regionId);
}

std::string ResetAccountRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void ResetAccountRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setCoreParameter("OwnerAccount", ownerAccount);
}

long ResetAccountRequest::getOwnerId()const
{
	return ownerId_;
}

void ResetAccountRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setCoreParameter("OwnerId", ownerId);
}

std::string ResetAccountRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void ResetAccountRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", accessKeyId);
}

