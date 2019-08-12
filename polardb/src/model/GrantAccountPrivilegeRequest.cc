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

#include <alibabacloud/polardb/model/GrantAccountPrivilegeRequest.h>

using AlibabaCloud::Polardb::Model::GrantAccountPrivilegeRequest;

GrantAccountPrivilegeRequest::GrantAccountPrivilegeRequest() :
	RpcServiceRequest("polardb", "2017-08-01", "GrantAccountPrivilege")
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

std::string GrantAccountPrivilegeRequest::getAccountName()const
{
	return accountName_;
}

void GrantAccountPrivilegeRequest::setAccountName(const std::string& accountName)
{
	accountName_ = accountName;
	setCoreParameter("AccountName", accountName);
}

std::string GrantAccountPrivilegeRequest::getDBName()const
{
	return dBName_;
}

void GrantAccountPrivilegeRequest::setDBName(const std::string& dBName)
{
	dBName_ = dBName;
	setCoreParameter("DBName", dBName);
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

std::string GrantAccountPrivilegeRequest::getDBClusterId()const
{
	return dBClusterId_;
}

void GrantAccountPrivilegeRequest::setDBClusterId(const std::string& dBClusterId)
{
	dBClusterId_ = dBClusterId;
	setCoreParameter("DBClusterId", dBClusterId);
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

