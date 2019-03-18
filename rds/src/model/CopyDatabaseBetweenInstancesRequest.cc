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
	setParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string CopyDatabaseBetweenInstancesRequest::getRestoreTime()const
{
	return restoreTime_;
}

void CopyDatabaseBetweenInstancesRequest::setRestoreTime(const std::string& restoreTime)
{
	restoreTime_ = restoreTime;
	setParameter("RestoreTime", restoreTime);
}

std::string CopyDatabaseBetweenInstancesRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void CopyDatabaseBetweenInstancesRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string CopyDatabaseBetweenInstancesRequest::getClientToken()const
{
	return clientToken_;
}

void CopyDatabaseBetweenInstancesRequest::setClientToken(const std::string& clientToken)
{
	clientToken_ = clientToken;
	setParameter("ClientToken", clientToken);
}

std::string CopyDatabaseBetweenInstancesRequest::getBackupId()const
{
	return backupId_;
}

void CopyDatabaseBetweenInstancesRequest::setBackupId(const std::string& backupId)
{
	backupId_ = backupId;
	setParameter("BackupId", backupId);
}

std::string CopyDatabaseBetweenInstancesRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void CopyDatabaseBetweenInstancesRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setParameter("OwnerAccount", ownerAccount);
}

long CopyDatabaseBetweenInstancesRequest::getOwnerId()const
{
	return ownerId_;
}

void CopyDatabaseBetweenInstancesRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setParameter("OwnerId", std::to_string(ownerId));
}

std::string CopyDatabaseBetweenInstancesRequest::getSyncUserPrivilege()const
{
	return syncUserPrivilege_;
}

void CopyDatabaseBetweenInstancesRequest::setSyncUserPrivilege(const std::string& syncUserPrivilege)
{
	syncUserPrivilege_ = syncUserPrivilege;
	setParameter("SyncUserPrivilege", syncUserPrivilege);
}

std::string CopyDatabaseBetweenInstancesRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void CopyDatabaseBetweenInstancesRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setParameter("AccessKeyId", accessKeyId);
}

std::string CopyDatabaseBetweenInstancesRequest::getDbNames()const
{
	return dbNames_;
}

void CopyDatabaseBetweenInstancesRequest::setDbNames(const std::string& dbNames)
{
	dbNames_ = dbNames;
	setParameter("DbNames", dbNames);
}

std::string CopyDatabaseBetweenInstancesRequest::getResourceGroupId()const
{
	return resourceGroupId_;
}

void CopyDatabaseBetweenInstancesRequest::setResourceGroupId(const std::string& resourceGroupId)
{
	resourceGroupId_ = resourceGroupId;
	setParameter("ResourceGroupId", resourceGroupId);
}

std::string CopyDatabaseBetweenInstancesRequest::getTargetDBInstanceId()const
{
	return targetDBInstanceId_;
}

void CopyDatabaseBetweenInstancesRequest::setTargetDBInstanceId(const std::string& targetDBInstanceId)
{
	targetDBInstanceId_ = targetDBInstanceId;
	setParameter("TargetDBInstanceId", targetDBInstanceId);
}

std::string CopyDatabaseBetweenInstancesRequest::getDBInstanceId()const
{
	return dBInstanceId_;
}

void CopyDatabaseBetweenInstancesRequest::setDBInstanceId(const std::string& dBInstanceId)
{
	dBInstanceId_ = dBInstanceId;
	setParameter("DBInstanceId", dBInstanceId);
}

std::string CopyDatabaseBetweenInstancesRequest::getPayType()const
{
	return payType_;
}

void CopyDatabaseBetweenInstancesRequest::setPayType(const std::string& payType)
{
	payType_ = payType;
	setParameter("PayType", payType);
}

