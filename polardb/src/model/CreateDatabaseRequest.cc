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

#include <alibabacloud/polardb/model/CreateDatabaseRequest.h>

using AlibabaCloud::Polardb::Model::CreateDatabaseRequest;

CreateDatabaseRequest::CreateDatabaseRequest() :
	RpcServiceRequest("polardb", "2017-08-01", "CreateDatabase")
{
	setMethod(HttpRequest::Method::Post);
}

CreateDatabaseRequest::~CreateDatabaseRequest()
{}

long CreateDatabaseRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void CreateDatabaseRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setCoreParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string CreateDatabaseRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void CreateDatabaseRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", accessKeyId);
}

std::string CreateDatabaseRequest::getAccountPrivilege()const
{
	return accountPrivilege_;
}

void CreateDatabaseRequest::setAccountPrivilege(const std::string& accountPrivilege)
{
	accountPrivilege_ = accountPrivilege;
	setCoreParameter("AccountPrivilege", accountPrivilege);
}

std::string CreateDatabaseRequest::getAccountName()const
{
	return accountName_;
}

void CreateDatabaseRequest::setAccountName(const std::string& accountName)
{
	accountName_ = accountName;
	setCoreParameter("AccountName", accountName);
}

std::string CreateDatabaseRequest::getDBDescription()const
{
	return dBDescription_;
}

void CreateDatabaseRequest::setDBDescription(const std::string& dBDescription)
{
	dBDescription_ = dBDescription;
	setCoreParameter("DBDescription", dBDescription);
}

std::string CreateDatabaseRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void CreateDatabaseRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setCoreParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string CreateDatabaseRequest::getDBClusterId()const
{
	return dBClusterId_;
}

void CreateDatabaseRequest::setDBClusterId(const std::string& dBClusterId)
{
	dBClusterId_ = dBClusterId;
	setCoreParameter("DBClusterId", dBClusterId);
}

std::string CreateDatabaseRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void CreateDatabaseRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setCoreParameter("OwnerAccount", ownerAccount);
}

long CreateDatabaseRequest::getOwnerId()const
{
	return ownerId_;
}

void CreateDatabaseRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setCoreParameter("OwnerId", std::to_string(ownerId));
}

std::string CreateDatabaseRequest::getCollate()const
{
	return collate_;
}

void CreateDatabaseRequest::setCollate(const std::string& collate)
{
	collate_ = collate;
	setCoreParameter("Collate", collate);
}

std::string CreateDatabaseRequest::getDBName()const
{
	return dBName_;
}

void CreateDatabaseRequest::setDBName(const std::string& dBName)
{
	dBName_ = dBName;
	setCoreParameter("DBName", dBName);
}

std::string CreateDatabaseRequest::getCtype()const
{
	return ctype_;
}

void CreateDatabaseRequest::setCtype(const std::string& ctype)
{
	ctype_ = ctype;
	setCoreParameter("Ctype", ctype);
}

std::string CreateDatabaseRequest::getCharacterSetName()const
{
	return characterSetName_;
}

void CreateDatabaseRequest::setCharacterSetName(const std::string& characterSetName)
{
	characterSetName_ = characterSetName;
	setCoreParameter("CharacterSetName", characterSetName);
}

