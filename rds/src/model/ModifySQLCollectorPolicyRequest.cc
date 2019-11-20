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

#include <alibabacloud/rds/model/ModifySQLCollectorPolicyRequest.h>

using AlibabaCloud::Rds::Model::ModifySQLCollectorPolicyRequest;

ModifySQLCollectorPolicyRequest::ModifySQLCollectorPolicyRequest() :
	RpcServiceRequest("rds", "2014-08-15", "ModifySQLCollectorPolicy")
{
	setMethod(HttpRequest::Method::Post);
}

ModifySQLCollectorPolicyRequest::~ModifySQLCollectorPolicyRequest()
{}

long ModifySQLCollectorPolicyRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void ModifySQLCollectorPolicyRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setCoreParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

int ModifySQLCollectorPolicyRequest::getStoragePeriod()const
{
	return storagePeriod_;
}

void ModifySQLCollectorPolicyRequest::setStoragePeriod(int storagePeriod)
{
	storagePeriod_ = storagePeriod;
	setCoreParameter("StoragePeriod", std::to_string(storagePeriod));
}

std::string ModifySQLCollectorPolicyRequest::getClientToken()const
{
	return clientToken_;
}

void ModifySQLCollectorPolicyRequest::setClientToken(const std::string& clientToken)
{
	clientToken_ = clientToken;
	setCoreParameter("ClientToken", clientToken);
}

std::string ModifySQLCollectorPolicyRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void ModifySQLCollectorPolicyRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", accessKeyId);
}

std::string ModifySQLCollectorPolicyRequest::getSQLCollectorStatus()const
{
	return sQLCollectorStatus_;
}

void ModifySQLCollectorPolicyRequest::setSQLCollectorStatus(const std::string& sQLCollectorStatus)
{
	sQLCollectorStatus_ = sQLCollectorStatus;
	setCoreParameter("SQLCollectorStatus", sQLCollectorStatus);
}

std::string ModifySQLCollectorPolicyRequest::getDBInstanceId()const
{
	return dBInstanceId_;
}

void ModifySQLCollectorPolicyRequest::setDBInstanceId(const std::string& dBInstanceId)
{
	dBInstanceId_ = dBInstanceId;
	setCoreParameter("DBInstanceId", dBInstanceId);
}

std::string ModifySQLCollectorPolicyRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void ModifySQLCollectorPolicyRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setCoreParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string ModifySQLCollectorPolicyRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void ModifySQLCollectorPolicyRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setCoreParameter("OwnerAccount", ownerAccount);
}

long ModifySQLCollectorPolicyRequest::getOwnerId()const
{
	return ownerId_;
}

void ModifySQLCollectorPolicyRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setCoreParameter("OwnerId", std::to_string(ownerId));
}

