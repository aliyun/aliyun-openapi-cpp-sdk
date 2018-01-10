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

#include <alibabacloud/rds/model/ModifyDBInstanceConnectionModeRequest.h>

using namespace AlibabaCloud::Rds;
using namespace AlibabaCloud::Rds::Model;

ModifyDBInstanceConnectionModeRequest::ModifyDBInstanceConnectionModeRequest() :
	RdsRequest("ModifyDBInstanceConnectionMode")
{}

ModifyDBInstanceConnectionModeRequest::~ModifyDBInstanceConnectionModeRequest()
{}

std::string ModifyDBInstanceConnectionModeRequest::getConnectionMode()const
{
	return connectionMode_;
}

void ModifyDBInstanceConnectionModeRequest::setConnectionMode(const std::string& connectionMode)
{
	connectionMode_ = connectionMode;
	setParameter("ConnectionMode", connectionMode);
}

long ModifyDBInstanceConnectionModeRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void ModifyDBInstanceConnectionModeRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string ModifyDBInstanceConnectionModeRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void ModifyDBInstanceConnectionModeRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string ModifyDBInstanceConnectionModeRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void ModifyDBInstanceConnectionModeRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setParameter("OwnerAccount", ownerAccount);
}

std::string ModifyDBInstanceConnectionModeRequest::getDBInstanceId()const
{
	return dBInstanceId_;
}

void ModifyDBInstanceConnectionModeRequest::setDBInstanceId(const std::string& dBInstanceId)
{
	dBInstanceId_ = dBInstanceId;
	setParameter("DBInstanceId", dBInstanceId);
}

long ModifyDBInstanceConnectionModeRequest::getOwnerId()const
{
	return ownerId_;
}

void ModifyDBInstanceConnectionModeRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setParameter("OwnerId", std::to_string(ownerId));
}

std::string ModifyDBInstanceConnectionModeRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void ModifyDBInstanceConnectionModeRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setParameter("AccessKeyId", accessKeyId);
}

