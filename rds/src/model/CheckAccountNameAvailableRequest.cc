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

#include <alibabacloud/rds/model/CheckAccountNameAvailableRequest.h>

using AlibabaCloud::Rds::Model::CheckAccountNameAvailableRequest;

CheckAccountNameAvailableRequest::CheckAccountNameAvailableRequest() :
	RpcServiceRequest("rds", "2014-08-15", "CheckAccountNameAvailable")
{
	setMethod(HttpRequest::Method::Post);
}

CheckAccountNameAvailableRequest::~CheckAccountNameAvailableRequest()
{}

long CheckAccountNameAvailableRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void CheckAccountNameAvailableRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setCoreParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string CheckAccountNameAvailableRequest::getClientToken()const
{
	return clientToken_;
}

void CheckAccountNameAvailableRequest::setClientToken(const std::string& clientToken)
{
	clientToken_ = clientToken;
	setCoreParameter("ClientToken", clientToken);
}

std::string CheckAccountNameAvailableRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void CheckAccountNameAvailableRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", accessKeyId);
}

std::string CheckAccountNameAvailableRequest::getAccountName()const
{
	return accountName_;
}

void CheckAccountNameAvailableRequest::setAccountName(const std::string& accountName)
{
	accountName_ = accountName;
	setCoreParameter("AccountName", accountName);
}

std::string CheckAccountNameAvailableRequest::getDBInstanceId()const
{
	return dBInstanceId_;
}

void CheckAccountNameAvailableRequest::setDBInstanceId(const std::string& dBInstanceId)
{
	dBInstanceId_ = dBInstanceId;
	setCoreParameter("DBInstanceId", dBInstanceId);
}

std::string CheckAccountNameAvailableRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void CheckAccountNameAvailableRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setCoreParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string CheckAccountNameAvailableRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void CheckAccountNameAvailableRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setCoreParameter("OwnerAccount", ownerAccount);
}

long CheckAccountNameAvailableRequest::getOwnerId()const
{
	return ownerId_;
}

void CheckAccountNameAvailableRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setCoreParameter("OwnerId", std::to_string(ownerId));
}

