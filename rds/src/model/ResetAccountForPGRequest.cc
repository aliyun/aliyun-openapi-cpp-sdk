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

#include <alibabacloud/rds/model/ResetAccountForPGRequest.h>

using AlibabaCloud::Rds::Model::ResetAccountForPGRequest;

ResetAccountForPGRequest::ResetAccountForPGRequest() :
	RpcServiceRequest("rds", "2014-08-15", "ResetAccountForPG")
{}

ResetAccountForPGRequest::~ResetAccountForPGRequest()
{}

long ResetAccountForPGRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void ResetAccountForPGRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string ResetAccountForPGRequest::getAccountPassword()const
{
	return accountPassword_;
}

void ResetAccountForPGRequest::setAccountPassword(const std::string& accountPassword)
{
	accountPassword_ = accountPassword;
	setParameter("AccountPassword", accountPassword);
}

std::string ResetAccountForPGRequest::getAccountName()const
{
	return accountName_;
}

void ResetAccountForPGRequest::setAccountName(const std::string& accountName)
{
	accountName_ = accountName;
	setParameter("AccountName", accountName);
}

std::string ResetAccountForPGRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void ResetAccountForPGRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string ResetAccountForPGRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void ResetAccountForPGRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setParameter("OwnerAccount", ownerAccount);
}

std::string ResetAccountForPGRequest::getDBInstanceId()const
{
	return dBInstanceId_;
}

void ResetAccountForPGRequest::setDBInstanceId(const std::string& dBInstanceId)
{
	dBInstanceId_ = dBInstanceId;
	setParameter("DBInstanceId", dBInstanceId);
}

long ResetAccountForPGRequest::getOwnerId()const
{
	return ownerId_;
}

void ResetAccountForPGRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setParameter("OwnerId", std::to_string(ownerId));
}

std::string ResetAccountForPGRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void ResetAccountForPGRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setParameter("AccessKeyId", accessKeyId);
}

