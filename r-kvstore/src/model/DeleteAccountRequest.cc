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

#include <alibabacloud/r-kvstore/model/DeleteAccountRequest.h>

using AlibabaCloud::R_kvstore::Model::DeleteAccountRequest;

DeleteAccountRequest::DeleteAccountRequest() :
	RpcServiceRequest("r-kvstore", "2015-01-01", "DeleteAccount")
{}

DeleteAccountRequest::~DeleteAccountRequest()
{}

long DeleteAccountRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void DeleteAccountRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setCoreParameter("ResourceOwnerId", resourceOwnerId);
}

std::string DeleteAccountRequest::getInstanceId()const
{
	return instanceId_;
}

void DeleteAccountRequest::setInstanceId(const std::string& instanceId)
{
	instanceId_ = instanceId;
	setCoreParameter("InstanceId", instanceId);
}

std::string DeleteAccountRequest::getAccountName()const
{
	return accountName_;
}

void DeleteAccountRequest::setAccountName(const std::string& accountName)
{
	accountName_ = accountName;
	setCoreParameter("AccountName", accountName);
}

std::string DeleteAccountRequest::getSecurityToken()const
{
	return securityToken_;
}

void DeleteAccountRequest::setSecurityToken(const std::string& securityToken)
{
	securityToken_ = securityToken;
	setCoreParameter("SecurityToken", securityToken);
}

std::string DeleteAccountRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void DeleteAccountRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setCoreParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string DeleteAccountRequest::getRegionId()const
{
	return regionId_;
}

void DeleteAccountRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setCoreParameter("RegionId", regionId);
}

std::string DeleteAccountRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void DeleteAccountRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setCoreParameter("OwnerAccount", ownerAccount);
}

long DeleteAccountRequest::getOwnerId()const
{
	return ownerId_;
}

void DeleteAccountRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setCoreParameter("OwnerId", ownerId);
}

std::string DeleteAccountRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void DeleteAccountRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", accessKeyId);
}

