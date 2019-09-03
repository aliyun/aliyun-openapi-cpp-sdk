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

#include <alibabacloud/rds/model/DeleteBackupRequest.h>

using AlibabaCloud::Rds::Model::DeleteBackupRequest;

DeleteBackupRequest::DeleteBackupRequest() :
	RpcServiceRequest("rds", "2014-08-15", "DeleteBackup")
{}

DeleteBackupRequest::~DeleteBackupRequest()
{}

long DeleteBackupRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void DeleteBackupRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setCoreParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string DeleteBackupRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void DeleteBackupRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setCoreParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string DeleteBackupRequest::getBackupId()const
{
	return backupId_;
}

void DeleteBackupRequest::setBackupId(const std::string& backupId)
{
	backupId_ = backupId;
	setCoreParameter("BackupId", backupId);
}

std::string DeleteBackupRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void DeleteBackupRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setCoreParameter("OwnerAccount", ownerAccount);
}

long DeleteBackupRequest::getOwnerId()const
{
	return ownerId_;
}

void DeleteBackupRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setCoreParameter("OwnerId", std::to_string(ownerId));
}

std::string DeleteBackupRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void DeleteBackupRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", accessKeyId);
}

std::string DeleteBackupRequest::getDBInstanceId()const
{
	return dBInstanceId_;
}

void DeleteBackupRequest::setDBInstanceId(const std::string& dBInstanceId)
{
	dBInstanceId_ = dBInstanceId;
	setCoreParameter("DBInstanceId", dBInstanceId);
}

