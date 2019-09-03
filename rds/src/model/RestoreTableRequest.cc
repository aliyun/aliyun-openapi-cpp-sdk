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

#include <alibabacloud/rds/model/RestoreTableRequest.h>

using AlibabaCloud::Rds::Model::RestoreTableRequest;

RestoreTableRequest::RestoreTableRequest() :
	RpcServiceRequest("rds", "2014-08-15", "RestoreTable")
{}

RestoreTableRequest::~RestoreTableRequest()
{}

long RestoreTableRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void RestoreTableRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setCoreParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string RestoreTableRequest::getClientToken()const
{
	return clientToken_;
}

void RestoreTableRequest::setClientToken(const std::string& clientToken)
{
	clientToken_ = clientToken;
	setCoreParameter("ClientToken", clientToken);
}

std::string RestoreTableRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void RestoreTableRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", accessKeyId);
}

std::string RestoreTableRequest::getTableMeta()const
{
	return tableMeta_;
}

void RestoreTableRequest::setTableMeta(const std::string& tableMeta)
{
	tableMeta_ = tableMeta;
	setCoreParameter("TableMeta", tableMeta);
}

std::string RestoreTableRequest::getDBInstanceId()const
{
	return dBInstanceId_;
}

void RestoreTableRequest::setDBInstanceId(const std::string& dBInstanceId)
{
	dBInstanceId_ = dBInstanceId;
	setCoreParameter("DBInstanceId", dBInstanceId);
}

std::string RestoreTableRequest::getRestoreTime()const
{
	return restoreTime_;
}

void RestoreTableRequest::setRestoreTime(const std::string& restoreTime)
{
	restoreTime_ = restoreTime;
	setCoreParameter("RestoreTime", restoreTime);
}

std::string RestoreTableRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void RestoreTableRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setCoreParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string RestoreTableRequest::getBackupId()const
{
	return backupId_;
}

void RestoreTableRequest::setBackupId(const std::string& backupId)
{
	backupId_ = backupId;
	setCoreParameter("BackupId", backupId);
}

std::string RestoreTableRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void RestoreTableRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setCoreParameter("OwnerAccount", ownerAccount);
}

long RestoreTableRequest::getOwnerId()const
{
	return ownerId_;
}

void RestoreTableRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setCoreParameter("OwnerId", std::to_string(ownerId));
}

