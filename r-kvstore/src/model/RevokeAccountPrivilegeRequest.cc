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

#include <alibabacloud/r-kvstore/model/RevokeAccountPrivilegeRequest.h>

using AlibabaCloud::R_kvstore::Model::RevokeAccountPrivilegeRequest;

RevokeAccountPrivilegeRequest::RevokeAccountPrivilegeRequest() :
	RpcServiceRequest("r-kvstore", "2015-01-01", "RevokeAccountPrivilege")
{}

RevokeAccountPrivilegeRequest::~RevokeAccountPrivilegeRequest()
{}

long RevokeAccountPrivilegeRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void RevokeAccountPrivilegeRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setCoreParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string RevokeAccountPrivilegeRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void RevokeAccountPrivilegeRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", accessKeyId);
}

std::string RevokeAccountPrivilegeRequest::getAccountName()const
{
	return accountName_;
}

void RevokeAccountPrivilegeRequest::setAccountName(const std::string& accountName)
{
	accountName_ = accountName;
	setCoreParameter("AccountName", accountName);
}

std::string RevokeAccountPrivilegeRequest::getSecurityToken()const
{
	return securityToken_;
}

void RevokeAccountPrivilegeRequest::setSecurityToken(const std::string& securityToken)
{
	securityToken_ = securityToken;
	setCoreParameter("SecurityToken", securityToken);
}

std::string RevokeAccountPrivilegeRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void RevokeAccountPrivilegeRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setCoreParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string RevokeAccountPrivilegeRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void RevokeAccountPrivilegeRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setCoreParameter("OwnerAccount", ownerAccount);
}

long RevokeAccountPrivilegeRequest::getOwnerId()const
{
	return ownerId_;
}

void RevokeAccountPrivilegeRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setCoreParameter("OwnerId", std::to_string(ownerId));
}

std::string RevokeAccountPrivilegeRequest::getInstanceId()const
{
	return instanceId_;
}

void RevokeAccountPrivilegeRequest::setInstanceId(const std::string& instanceId)
{
	instanceId_ = instanceId;
	setCoreParameter("InstanceId", instanceId);
}

