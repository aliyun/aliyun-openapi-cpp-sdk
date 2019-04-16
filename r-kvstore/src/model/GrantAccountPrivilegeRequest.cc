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

#include <alibabacloud/r-kvstore/model/GrantAccountPrivilegeRequest.h>

using AlibabaCloud::R_kvstore::Model::GrantAccountPrivilegeRequest;

GrantAccountPrivilegeRequest::GrantAccountPrivilegeRequest() :
	RpcServiceRequest("r-kvstore", "2015-01-01", "GrantAccountPrivilege")
{}

GrantAccountPrivilegeRequest::~GrantAccountPrivilegeRequest()
{}

long GrantAccountPrivilegeRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void GrantAccountPrivilegeRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setCoreParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string GrantAccountPrivilegeRequest::getInstanceId()const
{
	return instanceId_;
}

void GrantAccountPrivilegeRequest::setInstanceId(const std::string& instanceId)
{
	instanceId_ = instanceId;
	setCoreParameter("InstanceId", instanceId);
}

std::string GrantAccountPrivilegeRequest::getAccountName()const
{
	return accountName_;
}

void GrantAccountPrivilegeRequest::setAccountName(const std::string& accountName)
{
	accountName_ = accountName;
	setCoreParameter("AccountName", accountName);
}

std::string GrantAccountPrivilegeRequest::getSecurityToken()const
{
	return securityToken_;
}

void GrantAccountPrivilegeRequest::setSecurityToken(const std::string& securityToken)
{
	securityToken_ = securityToken;
	setCoreParameter("SecurityToken", securityToken);
}

std::string GrantAccountPrivilegeRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void GrantAccountPrivilegeRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setCoreParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string GrantAccountPrivilegeRequest::getRegionId()const
{
	return regionId_;
}

void GrantAccountPrivilegeRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setCoreParameter("RegionId", regionId);
}

std::string GrantAccountPrivilegeRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void GrantAccountPrivilegeRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setCoreParameter("OwnerAccount", ownerAccount);
}

long GrantAccountPrivilegeRequest::getOwnerId()const
{
	return ownerId_;
}

void GrantAccountPrivilegeRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setCoreParameter("OwnerId", std::to_string(ownerId));
}

std::string GrantAccountPrivilegeRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void GrantAccountPrivilegeRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", accessKeyId);
}

std::string GrantAccountPrivilegeRequest::getAccountPrivilege()const
{
	return accountPrivilege_;
}

void GrantAccountPrivilegeRequest::setAccountPrivilege(const std::string& accountPrivilege)
{
	accountPrivilege_ = accountPrivilege;
	setCoreParameter("AccountPrivilege", accountPrivilege);
}

