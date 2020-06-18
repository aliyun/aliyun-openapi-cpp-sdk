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

#include <alibabacloud/rds/model/RestoreDdrTableRequest.h>

using AlibabaCloud::Rds::Model::RestoreDdrTableRequest;

RestoreDdrTableRequest::RestoreDdrTableRequest() :
	RpcServiceRequest("rds", "2014-08-15", "RestoreDdrTable")
{
	setMethod(HttpRequest::Method::Post);
}

RestoreDdrTableRequest::~RestoreDdrTableRequest()
{}

long RestoreDdrTableRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void RestoreDdrTableRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string RestoreDdrTableRequest::getSourceDBInstanceName()const
{
	return sourceDBInstanceName_;
}

void RestoreDdrTableRequest::setSourceDBInstanceName(const std::string& sourceDBInstanceName)
{
	sourceDBInstanceName_ = sourceDBInstanceName;
	setParameter("SourceDBInstanceName", sourceDBInstanceName);
}

std::string RestoreDdrTableRequest::getClientToken()const
{
	return clientToken_;
}

void RestoreDdrTableRequest::setClientToken(const std::string& clientToken)
{
	clientToken_ = clientToken;
	setParameter("ClientToken", clientToken);
}

std::string RestoreDdrTableRequest::getUserBakSetURL()const
{
	return userBakSetURL_;
}

void RestoreDdrTableRequest::setUserBakSetURL(const std::string& userBakSetURL)
{
	userBakSetURL_ = userBakSetURL;
	setParameter("UserBakSetURL", userBakSetURL);
}

std::string RestoreDdrTableRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void RestoreDdrTableRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setParameter("AccessKeyId", accessKeyId);
}

std::string RestoreDdrTableRequest::getRegionId()const
{
	return regionId_;
}

void RestoreDdrTableRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setParameter("RegionId", regionId);
}

std::string RestoreDdrTableRequest::getTableMeta()const
{
	return tableMeta_;
}

void RestoreDdrTableRequest::setTableMeta(const std::string& tableMeta)
{
	tableMeta_ = tableMeta;
	setParameter("TableMeta", tableMeta);
}

std::string RestoreDdrTableRequest::getDBInstanceId()const
{
	return dBInstanceId_;
}

void RestoreDdrTableRequest::setDBInstanceId(const std::string& dBInstanceId)
{
	dBInstanceId_ = dBInstanceId;
	setParameter("DBInstanceId", dBInstanceId);
}

std::string RestoreDdrTableRequest::getBackupSetRegion()const
{
	return backupSetRegion_;
}

void RestoreDdrTableRequest::setBackupSetRegion(const std::string& backupSetRegion)
{
	backupSetRegion_ = backupSetRegion;
	setParameter("BackupSetRegion", backupSetRegion);
}

std::string RestoreDdrTableRequest::getBackupSetType()const
{
	return backupSetType_;
}

void RestoreDdrTableRequest::setBackupSetType(const std::string& backupSetType)
{
	backupSetType_ = backupSetType;
	setParameter("BackupSetType", backupSetType);
}

std::string RestoreDdrTableRequest::getRestoreTime()const
{
	return restoreTime_;
}

void RestoreDdrTableRequest::setRestoreTime(const std::string& restoreTime)
{
	restoreTime_ = restoreTime;
	setParameter("RestoreTime", restoreTime);
}

std::string RestoreDdrTableRequest::getBakSetName()const
{
	return bakSetName_;
}

void RestoreDdrTableRequest::setBakSetName(const std::string& bakSetName)
{
	bakSetName_ = bakSetName;
	setParameter("BakSetName", bakSetName);
}

std::string RestoreDdrTableRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void RestoreDdrTableRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string RestoreDdrTableRequest::getBackupId()const
{
	return backupId_;
}

void RestoreDdrTableRequest::setBackupId(const std::string& backupId)
{
	backupId_ = backupId;
	setParameter("BackupId", backupId);
}

long RestoreDdrTableRequest::getOwnerId()const
{
	return ownerId_;
}

void RestoreDdrTableRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setParameter("OwnerId", std::to_string(ownerId));
}

std::string RestoreDdrTableRequest::getRestoreType()const
{
	return restoreType_;
}

void RestoreDdrTableRequest::setRestoreType(const std::string& restoreType)
{
	restoreType_ = restoreType;
	setParameter("RestoreType", restoreType);
}

std::string RestoreDdrTableRequest::getSourceRegion()const
{
	return sourceRegion_;
}

void RestoreDdrTableRequest::setSourceRegion(const std::string& sourceRegion)
{
	sourceRegion_ = sourceRegion;
	setParameter("SourceRegion", sourceRegion);
}

