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

#include <alibabacloud/polardb/model/CreateProtectedDBRequest.h>

using AlibabaCloud::Polardb::Model::CreateProtectedDBRequest;

CreateProtectedDBRequest::CreateProtectedDBRequest() :
	RpcServiceRequest("polardb", "2017-08-01", "CreateProtectedDB")
{
	setMethod(HttpRequest::Method::Post);
}

CreateProtectedDBRequest::~CreateProtectedDBRequest()
{}

long CreateProtectedDBRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void CreateProtectedDBRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string CreateProtectedDBRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void CreateProtectedDBRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setParameter("AccessKeyId", accessKeyId);
}

std::string CreateProtectedDBRequest::getAccountName()const
{
	return accountName_;
}

void CreateProtectedDBRequest::setAccountName(const std::string& accountName)
{
	accountName_ = accountName;
	setParameter("AccountName", accountName);
}

std::string CreateProtectedDBRequest::getSecurityToken()const
{
	return securityToken_;
}

void CreateProtectedDBRequest::setSecurityToken(const std::string& securityToken)
{
	securityToken_ = securityToken;
	setParameter("SecurityToken", securityToken);
}

std::string CreateProtectedDBRequest::getDBDescription()const
{
	return dBDescription_;
}

void CreateProtectedDBRequest::setDBDescription(const std::string& dBDescription)
{
	dBDescription_ = dBDescription;
	setParameter("DBDescription", dBDescription);
}

std::string CreateProtectedDBRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void CreateProtectedDBRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string CreateProtectedDBRequest::getDBClusterId()const
{
	return dBClusterId_;
}

void CreateProtectedDBRequest::setDBClusterId(const std::string& dBClusterId)
{
	dBClusterId_ = dBClusterId;
	setParameter("DBClusterId", dBClusterId);
}

std::string CreateProtectedDBRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void CreateProtectedDBRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setParameter("OwnerAccount", ownerAccount);
}

long CreateProtectedDBRequest::getOwnerId()const
{
	return ownerId_;
}

void CreateProtectedDBRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setParameter("OwnerId", std::to_string(ownerId));
}

std::string CreateProtectedDBRequest::getAccountPassword()const
{
	return accountPassword_;
}

void CreateProtectedDBRequest::setAccountPassword(const std::string& accountPassword)
{
	accountPassword_ = accountPassword;
	setParameter("AccountPassword", accountPassword);
}

std::string CreateProtectedDBRequest::getDBName()const
{
	return dBName_;
}

void CreateProtectedDBRequest::setDBName(const std::string& dBName)
{
	dBName_ = dBName;
	setParameter("DBName", dBName);
}

std::string CreateProtectedDBRequest::getCharacterSetName()const
{
	return characterSetName_;
}

void CreateProtectedDBRequest::setCharacterSetName(const std::string& characterSetName)
{
	characterSetName_ = characterSetName;
	setParameter("CharacterSetName", characterSetName);
}

