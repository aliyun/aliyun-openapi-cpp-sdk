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

#include <alibabacloud/rds/model/CreateMigrateTaskRequest.h>

using AlibabaCloud::Rds::Model::CreateMigrateTaskRequest;

CreateMigrateTaskRequest::CreateMigrateTaskRequest() :
	RpcServiceRequest("rds", "2014-08-15", "CreateMigrateTask")
{}

CreateMigrateTaskRequest::~CreateMigrateTaskRequest()
{}

long CreateMigrateTaskRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void CreateMigrateTaskRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setCoreParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string CreateMigrateTaskRequest::getMigrateTaskId()const
{
	return migrateTaskId_;
}

void CreateMigrateTaskRequest::setMigrateTaskId(const std::string& migrateTaskId)
{
	migrateTaskId_ = migrateTaskId;
	setCoreParameter("MigrateTaskId", migrateTaskId);
}

std::string CreateMigrateTaskRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void CreateMigrateTaskRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setCoreParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string CreateMigrateTaskRequest::getIsOnlineDB()const
{
	return isOnlineDB_;
}

void CreateMigrateTaskRequest::setIsOnlineDB(const std::string& isOnlineDB)
{
	isOnlineDB_ = isOnlineDB;
	setCoreParameter("IsOnlineDB", isOnlineDB);
}

long CreateMigrateTaskRequest::getOwnerId()const
{
	return ownerId_;
}

void CreateMigrateTaskRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setCoreParameter("OwnerId", std::to_string(ownerId));
}

std::string CreateMigrateTaskRequest::getOssObjectPositions()const
{
	return ossObjectPositions_;
}

void CreateMigrateTaskRequest::setOssObjectPositions(const std::string& ossObjectPositions)
{
	ossObjectPositions_ = ossObjectPositions;
	setCoreParameter("OssObjectPositions", ossObjectPositions);
}

std::string CreateMigrateTaskRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void CreateMigrateTaskRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", accessKeyId);
}

std::string CreateMigrateTaskRequest::getOSSUrls()const
{
	return oSSUrls_;
}

void CreateMigrateTaskRequest::setOSSUrls(const std::string& oSSUrls)
{
	oSSUrls_ = oSSUrls;
	setCoreParameter("OSSUrls", oSSUrls);
}

std::string CreateMigrateTaskRequest::getDBName()const
{
	return dBName_;
}

void CreateMigrateTaskRequest::setDBName(const std::string& dBName)
{
	dBName_ = dBName;
	setCoreParameter("DBName", dBName);
}

std::string CreateMigrateTaskRequest::getDBInstanceId()const
{
	return dBInstanceId_;
}

void CreateMigrateTaskRequest::setDBInstanceId(const std::string& dBInstanceId)
{
	dBInstanceId_ = dBInstanceId;
	setCoreParameter("DBInstanceId", dBInstanceId);
}

std::string CreateMigrateTaskRequest::getBackupMode()const
{
	return backupMode_;
}

void CreateMigrateTaskRequest::setBackupMode(const std::string& backupMode)
{
	backupMode_ = backupMode;
	setCoreParameter("BackupMode", backupMode);
}

std::string CreateMigrateTaskRequest::getCheckDBMode()const
{
	return checkDBMode_;
}

void CreateMigrateTaskRequest::setCheckDBMode(const std::string& checkDBMode)
{
	checkDBMode_ = checkDBMode;
	setCoreParameter("CheckDBMode", checkDBMode);
}

