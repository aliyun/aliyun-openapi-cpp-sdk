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

#include <alibabacloud/rds/model/GrantAccountPrivilegeRequest.h>

using AlibabaCloud::Rds::Model::GrantAccountPrivilegeRequest;

GrantAccountPrivilegeRequest::GrantAccountPrivilegeRequest() :
	RpcServiceRequest("rds", "2014-08-15", "GrantAccountPrivilege")
{
	setMethod(HttpRequest::Method::Post);
}

GrantAccountPrivilegeRequest::~GrantAccountPrivilegeRequest()
{}

long GrantAccountPrivilegeRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void GrantAccountPrivilegeRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string GrantAccountPrivilegeRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void GrantAccountPrivilegeRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setParameter("AccessKeyId", accessKeyId);
}

std::string GrantAccountPrivilegeRequest::getAccountPrivilege()const
{
	return accountPrivilege_;
}

void GrantAccountPrivilegeRequest::setAccountPrivilege(const std::string& accountPrivilege)
{
	accountPrivilege_ = accountPrivilege;
	setParameter("AccountPrivilege", accountPrivilege);
}

std::string GrantAccountPrivilegeRequest::getAccountName()const
{
	return accountName_;
}

void GrantAccountPrivilegeRequest::setAccountName(const std::string& accountName)
{
	accountName_ = accountName;
	setParameter("AccountName", accountName);
}

std::string GrantAccountPrivilegeRequest::getDBInstanceId()const
{
	return dBInstanceId_;
}

void GrantAccountPrivilegeRequest::setDBInstanceId(const std::string& dBInstanceId)
{
	dBInstanceId_ = dBInstanceId;
	setParameter("DBInstanceId", dBInstanceId);
}

std::string GrantAccountPrivilegeRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void GrantAccountPrivilegeRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string GrantAccountPrivilegeRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void GrantAccountPrivilegeRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setParameter("OwnerAccount", ownerAccount);
}

long GrantAccountPrivilegeRequest::getOwnerId()const
{
	return ownerId_;
}

void GrantAccountPrivilegeRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setParameter("OwnerId", std::to_string(ownerId));
}

std::string GrantAccountPrivilegeRequest::getDBName()const
{
	return dBName_;
}

void GrantAccountPrivilegeRequest::setDBName(const std::string& dBName)
{
	dBName_ = dBName;
	setParameter("DBName", dBName);
}

