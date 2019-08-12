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

#include <alibabacloud/rds/model/ResetAccountPasswordRequest.h>

using AlibabaCloud::Rds::Model::ResetAccountPasswordRequest;

ResetAccountPasswordRequest::ResetAccountPasswordRequest() :
	RpcServiceRequest("rds", "2014-08-15", "ResetAccountPassword")
{}

ResetAccountPasswordRequest::~ResetAccountPasswordRequest()
{}

long ResetAccountPasswordRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void ResetAccountPasswordRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setCoreParameter("ResourceOwnerId", resourceOwnerId);
}

std::string ResetAccountPasswordRequest::getAccountPassword()const
{
	return accountPassword_;
}

void ResetAccountPasswordRequest::setAccountPassword(const std::string& accountPassword)
{
	accountPassword_ = accountPassword;
	setCoreParameter("AccountPassword", std::to_string(accountPassword));
}

std::string ResetAccountPasswordRequest::getAccountName()const
{
	return accountName_;
}

void ResetAccountPasswordRequest::setAccountName(const std::string& accountName)
{
	accountName_ = accountName;
	setCoreParameter("AccountName", std::to_string(accountName));
}

std::string ResetAccountPasswordRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void ResetAccountPasswordRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setCoreParameter("ResourceOwnerAccount", std::to_string(resourceOwnerAccount));
}

std::string ResetAccountPasswordRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void ResetAccountPasswordRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setCoreParameter("OwnerAccount", std::to_string(ownerAccount));
}

std::string ResetAccountPasswordRequest::getDBInstanceId()const
{
	return dBInstanceId_;
}

void ResetAccountPasswordRequest::setDBInstanceId(const std::string& dBInstanceId)
{
	dBInstanceId_ = dBInstanceId;
	setCoreParameter("DBInstanceId", std::to_string(dBInstanceId));
}

long ResetAccountPasswordRequest::getOwnerId()const
{
	return ownerId_;
}

void ResetAccountPasswordRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setCoreParameter("OwnerId", ownerId);
}

std::string ResetAccountPasswordRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void ResetAccountPasswordRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", std::to_string(accessKeyId));
}

