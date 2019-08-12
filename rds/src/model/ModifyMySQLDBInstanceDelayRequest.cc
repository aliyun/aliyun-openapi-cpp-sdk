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

#include <alibabacloud/rds/model/ModifyMySQLDBInstanceDelayRequest.h>

using AlibabaCloud::Rds::Model::ModifyMySQLDBInstanceDelayRequest;

ModifyMySQLDBInstanceDelayRequest::ModifyMySQLDBInstanceDelayRequest() :
	RpcServiceRequest("rds", "2014-08-15", "ModifyMySQLDBInstanceDelay")
{}

ModifyMySQLDBInstanceDelayRequest::~ModifyMySQLDBInstanceDelayRequest()
{}

long ModifyMySQLDBInstanceDelayRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void ModifyMySQLDBInstanceDelayRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setCoreParameter("ResourceOwnerId", resourceOwnerId);
}

std::string ModifyMySQLDBInstanceDelayRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void ModifyMySQLDBInstanceDelayRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setCoreParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string ModifyMySQLDBInstanceDelayRequest::getSqlDelay()const
{
	return sqlDelay_;
}

void ModifyMySQLDBInstanceDelayRequest::setSqlDelay(const std::string& sqlDelay)
{
	sqlDelay_ = sqlDelay;
	setCoreParameter("SqlDelay", sqlDelay);
}

std::string ModifyMySQLDBInstanceDelayRequest::getDBInstanceId()const
{
	return dBInstanceId_;
}

void ModifyMySQLDBInstanceDelayRequest::setDBInstanceId(const std::string& dBInstanceId)
{
	dBInstanceId_ = dBInstanceId;
	setCoreParameter("DBInstanceId", dBInstanceId);
}

long ModifyMySQLDBInstanceDelayRequest::getOwnerId()const
{
	return ownerId_;
}

void ModifyMySQLDBInstanceDelayRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setCoreParameter("OwnerId", ownerId);
}

std::string ModifyMySQLDBInstanceDelayRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void ModifyMySQLDBInstanceDelayRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", accessKeyId);
}

