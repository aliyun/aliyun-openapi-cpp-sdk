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

#include <alibabacloud/rds/model/ModifyDBInstanceNetworkExpireTimeRequest.h>

using AlibabaCloud::Rds::Model::ModifyDBInstanceNetworkExpireTimeRequest;

ModifyDBInstanceNetworkExpireTimeRequest::ModifyDBInstanceNetworkExpireTimeRequest() :
	RpcServiceRequest("rds", "2014-08-15", "ModifyDBInstanceNetworkExpireTime")
{}

ModifyDBInstanceNetworkExpireTimeRequest::~ModifyDBInstanceNetworkExpireTimeRequest()
{}

long ModifyDBInstanceNetworkExpireTimeRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void ModifyDBInstanceNetworkExpireTimeRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setCoreParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string ModifyDBInstanceNetworkExpireTimeRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void ModifyDBInstanceNetworkExpireTimeRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setCoreParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string ModifyDBInstanceNetworkExpireTimeRequest::getConnectionString()const
{
	return connectionString_;
}

void ModifyDBInstanceNetworkExpireTimeRequest::setConnectionString(const std::string& connectionString)
{
	connectionString_ = connectionString;
	setCoreParameter("ConnectionString", connectionString);
}

int ModifyDBInstanceNetworkExpireTimeRequest::getClassicExpiredDays()const
{
	return classicExpiredDays_;
}

void ModifyDBInstanceNetworkExpireTimeRequest::setClassicExpiredDays(int classicExpiredDays)
{
	classicExpiredDays_ = classicExpiredDays;
	setCoreParameter("ClassicExpiredDays", std::to_string(classicExpiredDays));
}

std::string ModifyDBInstanceNetworkExpireTimeRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void ModifyDBInstanceNetworkExpireTimeRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setCoreParameter("OwnerAccount", ownerAccount);
}

std::string ModifyDBInstanceNetworkExpireTimeRequest::getDBInstanceId()const
{
	return dBInstanceId_;
}

void ModifyDBInstanceNetworkExpireTimeRequest::setDBInstanceId(const std::string& dBInstanceId)
{
	dBInstanceId_ = dBInstanceId;
	setCoreParameter("DBInstanceId", dBInstanceId);
}

long ModifyDBInstanceNetworkExpireTimeRequest::getOwnerId()const
{
	return ownerId_;
}

void ModifyDBInstanceNetworkExpireTimeRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setCoreParameter("OwnerId", std::to_string(ownerId));
}

std::string ModifyDBInstanceNetworkExpireTimeRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void ModifyDBInstanceNetworkExpireTimeRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", accessKeyId);
}

