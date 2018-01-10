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

#include <alibabacloud/rds/model/UpgradeDBInstanceNetWorkInfoRequest.h>

using namespace AlibabaCloud::Rds;
using namespace AlibabaCloud::Rds::Model;

UpgradeDBInstanceNetWorkInfoRequest::UpgradeDBInstanceNetWorkInfoRequest() :
	RdsRequest("UpgradeDBInstanceNetWorkInfo")
{}

UpgradeDBInstanceNetWorkInfoRequest::~UpgradeDBInstanceNetWorkInfoRequest()
{}

long UpgradeDBInstanceNetWorkInfoRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void UpgradeDBInstanceNetWorkInfoRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string UpgradeDBInstanceNetWorkInfoRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void UpgradeDBInstanceNetWorkInfoRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string UpgradeDBInstanceNetWorkInfoRequest::getConnectionString()const
{
	return connectionString_;
}

void UpgradeDBInstanceNetWorkInfoRequest::setConnectionString(const std::string& connectionString)
{
	connectionString_ = connectionString;
	setParameter("ConnectionString", connectionString);
}

std::string UpgradeDBInstanceNetWorkInfoRequest::getDBInstanceId()const
{
	return dBInstanceId_;
}

void UpgradeDBInstanceNetWorkInfoRequest::setDBInstanceId(const std::string& dBInstanceId)
{
	dBInstanceId_ = dBInstanceId;
	setParameter("DBInstanceId", dBInstanceId);
}

long UpgradeDBInstanceNetWorkInfoRequest::getOwnerId()const
{
	return ownerId_;
}

void UpgradeDBInstanceNetWorkInfoRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setParameter("OwnerId", std::to_string(ownerId));
}

std::string UpgradeDBInstanceNetWorkInfoRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void UpgradeDBInstanceNetWorkInfoRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setParameter("AccessKeyId", accessKeyId);
}

