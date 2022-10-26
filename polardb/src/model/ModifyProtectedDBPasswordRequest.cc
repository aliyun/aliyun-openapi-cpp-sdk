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

#include <alibabacloud/polardb/model/ModifyProtectedDBPasswordRequest.h>

using AlibabaCloud::Polardb::Model::ModifyProtectedDBPasswordRequest;

ModifyProtectedDBPasswordRequest::ModifyProtectedDBPasswordRequest() :
	RpcServiceRequest("polardb", "2017-08-01", "ModifyProtectedDBPassword")
{
	setMethod(HttpRequest::Method::Post);
}

ModifyProtectedDBPasswordRequest::~ModifyProtectedDBPasswordRequest()
{}

long ModifyProtectedDBPasswordRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void ModifyProtectedDBPasswordRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string ModifyProtectedDBPasswordRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void ModifyProtectedDBPasswordRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setParameter("AccessKeyId", accessKeyId);
}

std::string ModifyProtectedDBPasswordRequest::getResourceGroupId()const
{
	return resourceGroupId_;
}

void ModifyProtectedDBPasswordRequest::setResourceGroupId(const std::string& resourceGroupId)
{
	resourceGroupId_ = resourceGroupId;
	setParameter("ResourceGroupId", resourceGroupId);
}

std::string ModifyProtectedDBPasswordRequest::getAccountName()const
{
	return accountName_;
}

void ModifyProtectedDBPasswordRequest::setAccountName(const std::string& accountName)
{
	accountName_ = accountName;
	setParameter("AccountName", accountName);
}

std::string ModifyProtectedDBPasswordRequest::getSecurityToken()const
{
	return securityToken_;
}

void ModifyProtectedDBPasswordRequest::setSecurityToken(const std::string& securityToken)
{
	securityToken_ = securityToken;
	setParameter("SecurityToken", securityToken);
}

std::string ModifyProtectedDBPasswordRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void ModifyProtectedDBPasswordRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string ModifyProtectedDBPasswordRequest::getDBClusterId()const
{
	return dBClusterId_;
}

void ModifyProtectedDBPasswordRequest::setDBClusterId(const std::string& dBClusterId)
{
	dBClusterId_ = dBClusterId;
	setParameter("DBClusterId", dBClusterId);
}

std::string ModifyProtectedDBPasswordRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void ModifyProtectedDBPasswordRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setParameter("OwnerAccount", ownerAccount);
}

long ModifyProtectedDBPasswordRequest::getOwnerId()const
{
	return ownerId_;
}

void ModifyProtectedDBPasswordRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setParameter("OwnerId", std::to_string(ownerId));
}

std::string ModifyProtectedDBPasswordRequest::getAccountPassword()const
{
	return accountPassword_;
}

void ModifyProtectedDBPasswordRequest::setAccountPassword(const std::string& accountPassword)
{
	accountPassword_ = accountPassword;
	setParameter("AccountPassword", accountPassword);
}

std::string ModifyProtectedDBPasswordRequest::getDBName()const
{
	return dBName_;
}

void ModifyProtectedDBPasswordRequest::setDBName(const std::string& dBName)
{
	dBName_ = dBName;
	setParameter("DBName", dBName);
}

