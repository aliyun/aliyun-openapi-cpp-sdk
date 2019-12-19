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

#include <alibabacloud/polardb/model/ModifyAccountPasswordRequest.h>

using AlibabaCloud::Polardb::Model::ModifyAccountPasswordRequest;

ModifyAccountPasswordRequest::ModifyAccountPasswordRequest() :
	RpcServiceRequest("polardb", "2017-08-01", "ModifyAccountPassword")
{
	setMethod(HttpRequest::Method::Post);
}

ModifyAccountPasswordRequest::~ModifyAccountPasswordRequest()
{}

long ModifyAccountPasswordRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void ModifyAccountPasswordRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setCoreParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string ModifyAccountPasswordRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void ModifyAccountPasswordRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", accessKeyId);
}

std::string ModifyAccountPasswordRequest::getAccountName()const
{
	return accountName_;
}

void ModifyAccountPasswordRequest::setAccountName(const std::string& accountName)
{
	accountName_ = accountName;
	setCoreParameter("AccountName", accountName);
}

std::string ModifyAccountPasswordRequest::getNewAccountPassword()const
{
	return newAccountPassword_;
}

void ModifyAccountPasswordRequest::setNewAccountPassword(const std::string& newAccountPassword)
{
	newAccountPassword_ = newAccountPassword;
	setCoreParameter("NewAccountPassword", newAccountPassword);
}

std::string ModifyAccountPasswordRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void ModifyAccountPasswordRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setCoreParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string ModifyAccountPasswordRequest::getDBClusterId()const
{
	return dBClusterId_;
}

void ModifyAccountPasswordRequest::setDBClusterId(const std::string& dBClusterId)
{
	dBClusterId_ = dBClusterId;
	setCoreParameter("DBClusterId", dBClusterId);
}

std::string ModifyAccountPasswordRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void ModifyAccountPasswordRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setCoreParameter("OwnerAccount", ownerAccount);
}

long ModifyAccountPasswordRequest::getOwnerId()const
{
	return ownerId_;
}

void ModifyAccountPasswordRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setCoreParameter("OwnerId", std::to_string(ownerId));
}

