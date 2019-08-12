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

#include <alibabacloud/rds/model/RestoreDBInstanceRequest.h>

using AlibabaCloud::Rds::Model::RestoreDBInstanceRequest;

RestoreDBInstanceRequest::RestoreDBInstanceRequest() :
	RpcServiceRequest("rds", "2014-08-15", "RestoreDBInstance")
{}

RestoreDBInstanceRequest::~RestoreDBInstanceRequest()
{}

long RestoreDBInstanceRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void RestoreDBInstanceRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setCoreParameter("ResourceOwnerId", resourceOwnerId);
}

std::string RestoreDBInstanceRequest::getRestoreTime()const
{
	return restoreTime_;
}

void RestoreDBInstanceRequest::setRestoreTime(const std::string& restoreTime)
{
	restoreTime_ = restoreTime;
	setCoreParameter("RestoreTime", std::to_string(restoreTime));
}

std::string RestoreDBInstanceRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void RestoreDBInstanceRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setCoreParameter("ResourceOwnerAccount", std::to_string(resourceOwnerAccount));
}

std::string RestoreDBInstanceRequest::getClientToken()const
{
	return clientToken_;
}

void RestoreDBInstanceRequest::setClientToken(const std::string& clientToken)
{
	clientToken_ = clientToken;
	setCoreParameter("ClientToken", std::to_string(clientToken));
}

std::string RestoreDBInstanceRequest::getBackupId()const
{
	return backupId_;
}

void RestoreDBInstanceRequest::setBackupId(const std::string& backupId)
{
	backupId_ = backupId;
	setCoreParameter("BackupId", std::to_string(backupId));
}

std::string RestoreDBInstanceRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void RestoreDBInstanceRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setCoreParameter("OwnerAccount", std::to_string(ownerAccount));
}

std::string RestoreDBInstanceRequest::getDBInstanceId()const
{
	return dBInstanceId_;
}

void RestoreDBInstanceRequest::setDBInstanceId(const std::string& dBInstanceId)
{
	dBInstanceId_ = dBInstanceId;
	setCoreParameter("DBInstanceId", std::to_string(dBInstanceId));
}

long RestoreDBInstanceRequest::getOwnerId()const
{
	return ownerId_;
}

void RestoreDBInstanceRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setCoreParameter("OwnerId", ownerId);
}

std::string RestoreDBInstanceRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void RestoreDBInstanceRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", std::to_string(accessKeyId));
}

