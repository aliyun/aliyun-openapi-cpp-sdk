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

#include <alibabacloud/rds/model/CreateTempDBInstanceRequest.h>

using AlibabaCloud::Rds::Model::CreateTempDBInstanceRequest;

CreateTempDBInstanceRequest::CreateTempDBInstanceRequest() :
	RpcServiceRequest("rds", "2014-08-15", "CreateTempDBInstance")
{}

CreateTempDBInstanceRequest::~CreateTempDBInstanceRequest()
{}

long CreateTempDBInstanceRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void CreateTempDBInstanceRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setCoreParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string CreateTempDBInstanceRequest::getRestoreTime()const
{
	return restoreTime_;
}

void CreateTempDBInstanceRequest::setRestoreTime(const std::string& restoreTime)
{
	restoreTime_ = restoreTime;
	setCoreParameter("RestoreTime", restoreTime);
}

std::string CreateTempDBInstanceRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void CreateTempDBInstanceRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setCoreParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

int CreateTempDBInstanceRequest::getBackupId()const
{
	return backupId_;
}

void CreateTempDBInstanceRequest::setBackupId(int backupId)
{
	backupId_ = backupId;
	setCoreParameter("BackupId", std::to_string(backupId));
}

std::string CreateTempDBInstanceRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void CreateTempDBInstanceRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setCoreParameter("OwnerAccount", ownerAccount);
}

std::string CreateTempDBInstanceRequest::getDBInstanceId()const
{
	return dBInstanceId_;
}

void CreateTempDBInstanceRequest::setDBInstanceId(const std::string& dBInstanceId)
{
	dBInstanceId_ = dBInstanceId;
	setCoreParameter("DBInstanceId", dBInstanceId);
}

long CreateTempDBInstanceRequest::getOwnerId()const
{
	return ownerId_;
}

void CreateTempDBInstanceRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setCoreParameter("OwnerId", std::to_string(ownerId));
}

std::string CreateTempDBInstanceRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void CreateTempDBInstanceRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", accessKeyId);
}

