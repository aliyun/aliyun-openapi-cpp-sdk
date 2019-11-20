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

#include <alibabacloud/rds/model/CreateOnlineDatabaseTaskRequest.h>

using AlibabaCloud::Rds::Model::CreateOnlineDatabaseTaskRequest;

CreateOnlineDatabaseTaskRequest::CreateOnlineDatabaseTaskRequest() :
	RpcServiceRequest("rds", "2014-08-15", "CreateOnlineDatabaseTask")
{
	setMethod(HttpRequest::Method::Post);
}

CreateOnlineDatabaseTaskRequest::~CreateOnlineDatabaseTaskRequest()
{}

long CreateOnlineDatabaseTaskRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void CreateOnlineDatabaseTaskRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setCoreParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string CreateOnlineDatabaseTaskRequest::getClientToken()const
{
	return clientToken_;
}

void CreateOnlineDatabaseTaskRequest::setClientToken(const std::string& clientToken)
{
	clientToken_ = clientToken;
	setCoreParameter("ClientToken", clientToken);
}

std::string CreateOnlineDatabaseTaskRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void CreateOnlineDatabaseTaskRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", accessKeyId);
}

std::string CreateOnlineDatabaseTaskRequest::getDBInstanceId()const
{
	return dBInstanceId_;
}

void CreateOnlineDatabaseTaskRequest::setDBInstanceId(const std::string& dBInstanceId)
{
	dBInstanceId_ = dBInstanceId;
	setCoreParameter("DBInstanceId", dBInstanceId);
}

std::string CreateOnlineDatabaseTaskRequest::getMigrateTaskId()const
{
	return migrateTaskId_;
}

void CreateOnlineDatabaseTaskRequest::setMigrateTaskId(const std::string& migrateTaskId)
{
	migrateTaskId_ = migrateTaskId;
	setCoreParameter("MigrateTaskId", migrateTaskId);
}

std::string CreateOnlineDatabaseTaskRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void CreateOnlineDatabaseTaskRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setCoreParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string CreateOnlineDatabaseTaskRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void CreateOnlineDatabaseTaskRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setCoreParameter("OwnerAccount", ownerAccount);
}

long CreateOnlineDatabaseTaskRequest::getOwnerId()const
{
	return ownerId_;
}

void CreateOnlineDatabaseTaskRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setCoreParameter("OwnerId", std::to_string(ownerId));
}

std::string CreateOnlineDatabaseTaskRequest::getDBName()const
{
	return dBName_;
}

void CreateOnlineDatabaseTaskRequest::setDBName(const std::string& dBName)
{
	dBName_ = dBName;
	setCoreParameter("DBName", dBName);
}

std::string CreateOnlineDatabaseTaskRequest::getCheckDBMode()const
{
	return checkDBMode_;
}

void CreateOnlineDatabaseTaskRequest::setCheckDBMode(const std::string& checkDBMode)
{
	checkDBMode_ = checkDBMode;
	setCoreParameter("CheckDBMode", checkDBMode);
}

