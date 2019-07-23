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

#include <alibabacloud/polardb/model/CreateAccountRequest.h>

using AlibabaCloud::Polardb::Model::CreateAccountRequest;

CreateAccountRequest::CreateAccountRequest() :
	RpcServiceRequest("polardb", "2017-08-01", "CreateAccount")
{}

CreateAccountRequest::~CreateAccountRequest()
{}

long CreateAccountRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void CreateAccountRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setCoreParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string CreateAccountRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void CreateAccountRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setCoreParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string CreateAccountRequest::getDBClusterId()const
{
	return dBClusterId_;
}

void CreateAccountRequest::setDBClusterId(const std::string& dBClusterId)
{
	dBClusterId_ = dBClusterId;
	setCoreParameter("DBClusterId", dBClusterId);
}

std::string CreateAccountRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void CreateAccountRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setCoreParameter("OwnerAccount", ownerAccount);
}

std::string CreateAccountRequest::getAccountType()const
{
	return accountType_;
}

void CreateAccountRequest::setAccountType(const std::string& accountType)
{
	accountType_ = accountType;
	setCoreParameter("AccountType", accountType);
}

long CreateAccountRequest::getOwnerId()const
{
	return ownerId_;
}

void CreateAccountRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setCoreParameter("OwnerId", std::to_string(ownerId));
}

std::string CreateAccountRequest::getAccountDescription()const
{
	return accountDescription_;
}

void CreateAccountRequest::setAccountDescription(const std::string& accountDescription)
{
	accountDescription_ = accountDescription;
	setCoreParameter("AccountDescription", accountDescription);
}

std::string CreateAccountRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void CreateAccountRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", accessKeyId);
}

std::string CreateAccountRequest::getAccountPrivilege()const
{
	return accountPrivilege_;
}

void CreateAccountRequest::setAccountPrivilege(const std::string& accountPrivilege)
{
	accountPrivilege_ = accountPrivilege;
	setCoreParameter("AccountPrivilege", accountPrivilege);
}

std::string CreateAccountRequest::getAccountPassword()const
{
	return accountPassword_;
}

void CreateAccountRequest::setAccountPassword(const std::string& accountPassword)
{
	accountPassword_ = accountPassword;
	setCoreParameter("AccountPassword", accountPassword);
}

std::string CreateAccountRequest::getAccountName()const
{
	return accountName_;
}

void CreateAccountRequest::setAccountName(const std::string& accountName)
{
	accountName_ = accountName;
	setCoreParameter("AccountName", accountName);
}

std::string CreateAccountRequest::getDBName()const
{
	return dBName_;
}

void CreateAccountRequest::setDBName(const std::string& dBName)
{
	dBName_ = dBName;
	setCoreParameter("DBName", dBName);
}

