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

#include <alibabacloud/rds/model/CreateHostAccountRequest.h>

using AlibabaCloud::Rds::Model::CreateHostAccountRequest;

CreateHostAccountRequest::CreateHostAccountRequest() :
	RpcServiceRequest("rds", "2014-08-15", "CreateHostAccount")
{
	setMethod(HttpRequest::Method::Post);
}

CreateHostAccountRequest::~CreateHostAccountRequest()
{}

long CreateHostAccountRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void CreateHostAccountRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string CreateHostAccountRequest::getClientToken()const
{
	return clientToken_;
}

void CreateHostAccountRequest::setClientToken(const std::string& clientToken)
{
	clientToken_ = clientToken;
	setParameter("ClientToken", clientToken);
}

std::string CreateHostAccountRequest::getAccountType()const
{
	return accountType_;
}

void CreateHostAccountRequest::setAccountType(const std::string& accountType)
{
	accountType_ = accountType;
	setParameter("AccountType", accountType);
}

std::string CreateHostAccountRequest::getAccountDescription()const
{
	return accountDescription_;
}

void CreateHostAccountRequest::setAccountDescription(const std::string& accountDescription)
{
	accountDescription_ = accountDescription;
	setParameter("AccountDescription", accountDescription);
}

std::string CreateHostAccountRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void CreateHostAccountRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setParameter("AccessKeyId", accessKeyId);
}

std::string CreateHostAccountRequest::getAccountName()const
{
	return accountName_;
}

void CreateHostAccountRequest::setAccountName(const std::string& accountName)
{
	accountName_ = accountName;
	setParameter("AccountName", accountName);
}

std::string CreateHostAccountRequest::getDBInstanceId()const
{
	return dBInstanceId_;
}

void CreateHostAccountRequest::setDBInstanceId(const std::string& dBInstanceId)
{
	dBInstanceId_ = dBInstanceId;
	setParameter("DBInstanceId", dBInstanceId);
}

std::string CreateHostAccountRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void CreateHostAccountRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

long CreateHostAccountRequest::getOwnerId()const
{
	return ownerId_;
}

void CreateHostAccountRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setParameter("OwnerId", std::to_string(ownerId));
}

std::string CreateHostAccountRequest::getAccountPassword()const
{
	return accountPassword_;
}

void CreateHostAccountRequest::setAccountPassword(const std::string& accountPassword)
{
	accountPassword_ = accountPassword;
	setParameter("AccountPassword", accountPassword);
}

