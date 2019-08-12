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

#include <alibabacloud/rds/model/CopyDatabaseBetweenInstancesRequest.h>

using AlibabaCloud::Rds::Model::CopyDatabaseBetweenInstancesRequest;

CopyDatabaseBetweenInstancesRequest::CopyDatabaseBetweenInstancesRequest() :
	RpcServiceRequest("rds", "2014-08-15", "CopyDatabaseBetweenInstances")
{}

CopyDatabaseBetweenInstancesRequest::~CopyDatabaseBetweenInstancesRequest()
{}

long CopyDatabaseBetweenInstancesRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void CopyDatabaseBetweenInstancesRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setCoreParameter("ResourceOwnerId", resourceOwnerId);
}

std::string CopyDatabaseBetweenInstancesRequest::getRestoreTime()const
{
	return restoreTime_;
}

void CopyDatabaseBetweenInstancesRequest::setRestoreTime(const std::string& restoreTime)
{
	restoreTime_ = restoreTime;
	setCoreParameter("RestoreTime", std::to_string(restoreTime));
}

std::string CopyDatabaseBetweenInstancesRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void CopyDatabaseBetweenInstancesRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setCoreParameter("ResourceOwnerAccount", std::to_string(resourceOwnerAccount));
}

std::string CopyDatabaseBetweenInstancesRequest::getClientToken()const
{
	return clientToken_;
}

void CopyDatabaseBetweenInstancesRequest::setClientToken(const std::string& clientToken)
{
	clientToken_ = clientToken;
	setCoreParameter("ClientToken", std::to_string(clientToken));
}

std::string CopyDatabaseBetweenInstancesRequest::getBackupId()const
{
	return backupId_;
}

void CopyDatabaseBetweenInstancesRequest::setBackupId(const std::string& backupId)
{
	backupId_ = backupId;
	setCoreParameter("BackupId", std::to_string(backupId));
}

std::string CopyDatabaseBetweenInstancesRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void CopyDatabaseBetweenInstancesRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setCoreParameter("OwnerAccount", std::to_string(ownerAccount));
}

long CopyDatabaseBetweenInstancesRequest::getOwnerId()const
{
	return ownerId_;
}

void CopyDatabaseBetweenInstancesRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setCoreParameter("OwnerId", ownerId);
}

std::string CopyDatabaseBetweenInstancesRequest::getSyncUserPrivilege()const
{
	return syncUserPrivilege_;
}

void CopyDatabaseBetweenInstancesRequest::setSyncUserPrivilege(const std::string& syncUserPrivilege)
{
	syncUserPrivilege_ = syncUserPrivilege;
	setCoreParameter("SyncUserPrivilege", std::to_string(syncUserPrivilege));
}

std::string CopyDatabaseBetweenInstancesRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void CopyDatabaseBetweenInstancesRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", std::to_string(accessKeyId));
}

std::string CopyDatabaseBetweenInstancesRequest::getDbNames()const
{
	return dbNames_;
}

void CopyDatabaseBetweenInstancesRequest::setDbNames(const std::string& dbNames)
{
	dbNames_ = dbNames;
	setCoreParameter("DbNames", std::to_string(dbNames));
}

std::string CopyDatabaseBetweenInstancesRequest::getResourceGroupId()const
{
	return resourceGroupId_;
}

void CopyDatabaseBetweenInstancesRequest::setResourceGroupId(const std::string& resourceGroupId)
{
	resourceGroupId_ = resourceGroupId;
	setCoreParameter("ResourceGroupId", std::to_string(resourceGroupId));
}

std::string CopyDatabaseBetweenInstancesRequest::getTargetDBInstanceId()const
{
	return targetDBInstanceId_;
}

void CopyDatabaseBetweenInstancesRequest::setTargetDBInstanceId(const std::string& targetDBInstanceId)
{
	targetDBInstanceId_ = targetDBInstanceId;
	setCoreParameter("TargetDBInstanceId", std::to_string(targetDBInstanceId));
}

std::string CopyDatabaseBetweenInstancesRequest::getDBInstanceId()const
{
	return dBInstanceId_;
}

void CopyDatabaseBetweenInstancesRequest::setDBInstanceId(const std::string& dBInstanceId)
{
	dBInstanceId_ = dBInstanceId;
	setCoreParameter("DBInstanceId", std::to_string(dBInstanceId));
}

std::string CopyDatabaseBetweenInstancesRequest::getPayType()const
{
	return payType_;
}

void CopyDatabaseBetweenInstancesRequest::setPayType(const std::string& payType)
{
	payType_ = payType;
	setCoreParameter("PayType", std::to_string(payType));
}

