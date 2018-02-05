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

#include <alibabacloud/rds/model/UpgradeDBInstanceNetworkRequest.h>

using AlibabaCloud::Rds::Model::UpgradeDBInstanceNetworkRequest;

UpgradeDBInstanceNetworkRequest::UpgradeDBInstanceNetworkRequest() :
	RpcServiceRequest("rds", "2014-08-15", "UpgradeDBInstanceNetwork")
{}

UpgradeDBInstanceNetworkRequest::~UpgradeDBInstanceNetworkRequest()
{}

long UpgradeDBInstanceNetworkRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void UpgradeDBInstanceNetworkRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string UpgradeDBInstanceNetworkRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void UpgradeDBInstanceNetworkRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string UpgradeDBInstanceNetworkRequest::getConnectionString()const
{
	return connectionString_;
}

void UpgradeDBInstanceNetworkRequest::setConnectionString(const std::string& connectionString)
{
	connectionString_ = connectionString;
	setParameter("ConnectionString", connectionString);
}

std::string UpgradeDBInstanceNetworkRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void UpgradeDBInstanceNetworkRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setParameter("OwnerAccount", ownerAccount);
}

std::string UpgradeDBInstanceNetworkRequest::getDBInstanceId()const
{
	return dBInstanceId_;
}

void UpgradeDBInstanceNetworkRequest::setDBInstanceId(const std::string& dBInstanceId)
{
	dBInstanceId_ = dBInstanceId;
	setParameter("DBInstanceId", dBInstanceId);
}

long UpgradeDBInstanceNetworkRequest::getOwnerId()const
{
	return ownerId_;
}

void UpgradeDBInstanceNetworkRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setParameter("OwnerId", std::to_string(ownerId));
}

std::string UpgradeDBInstanceNetworkRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void UpgradeDBInstanceNetworkRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setParameter("AccessKeyId", accessKeyId);
}

