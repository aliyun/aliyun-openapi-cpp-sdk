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

#include <alibabacloud/rds/model/CheckCreateDdrDBInstanceRequest.h>

using AlibabaCloud::Rds::Model::CheckCreateDdrDBInstanceRequest;

CheckCreateDdrDBInstanceRequest::CheckCreateDdrDBInstanceRequest() :
	RpcServiceRequest("rds", "2014-08-15", "CheckCreateDdrDBInstance")
{}

CheckCreateDdrDBInstanceRequest::~CheckCreateDdrDBInstanceRequest()
{}

long CheckCreateDdrDBInstanceRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void CheckCreateDdrDBInstanceRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setCoreParameter("ResourceOwnerId", resourceOwnerId);
}

std::string CheckCreateDdrDBInstanceRequest::getRestoreTime()const
{
	return restoreTime_;
}

void CheckCreateDdrDBInstanceRequest::setRestoreTime(const std::string& restoreTime)
{
	restoreTime_ = restoreTime;
	setCoreParameter("RestoreTime", std::to_string(restoreTime));
}

int CheckCreateDdrDBInstanceRequest::getDBInstanceStorage()const
{
	return dBInstanceStorage_;
}

void CheckCreateDdrDBInstanceRequest::setDBInstanceStorage(int dBInstanceStorage)
{
	dBInstanceStorage_ = dBInstanceStorage;
	setCoreParameter("DBInstanceStorage", dBInstanceStorage);
}

std::string CheckCreateDdrDBInstanceRequest::getSourceDBInstanceName()const
{
	return sourceDBInstanceName_;
}

void CheckCreateDdrDBInstanceRequest::setSourceDBInstanceName(const std::string& sourceDBInstanceName)
{
	sourceDBInstanceName_ = sourceDBInstanceName;
	setCoreParameter("SourceDBInstanceName", std::to_string(sourceDBInstanceName));
}

std::string CheckCreateDdrDBInstanceRequest::getBakSetName()const
{
	return bakSetName_;
}

void CheckCreateDdrDBInstanceRequest::setBakSetName(const std::string& bakSetName)
{
	bakSetName_ = bakSetName;
	setCoreParameter("BakSetName", std::to_string(bakSetName));
}

std::string CheckCreateDdrDBInstanceRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void CheckCreateDdrDBInstanceRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setCoreParameter("ResourceOwnerAccount", std::to_string(resourceOwnerAccount));
}

std::string CheckCreateDdrDBInstanceRequest::getHostType()const
{
	return hostType_;
}

void CheckCreateDdrDBInstanceRequest::setHostType(const std::string& hostType)
{
	hostType_ = hostType;
	setCoreParameter("HostType", std::to_string(hostType));
}

std::string CheckCreateDdrDBInstanceRequest::getBackupSetId()const
{
	return backupSetId_;
}

void CheckCreateDdrDBInstanceRequest::setBackupSetId(const std::string& backupSetId)
{
	backupSetId_ = backupSetId;
	setCoreParameter("BackupSetId", std::to_string(backupSetId));
}

std::string CheckCreateDdrDBInstanceRequest::getEngineVersion()const
{
	return engineVersion_;
}

void CheckCreateDdrDBInstanceRequest::setEngineVersion(const std::string& engineVersion)
{
	engineVersion_ = engineVersion;
	setCoreParameter("EngineVersion", std::to_string(engineVersion));
}

long CheckCreateDdrDBInstanceRequest::getOwnerId()const
{
	return ownerId_;
}

void CheckCreateDdrDBInstanceRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setCoreParameter("OwnerId", ownerId);
}

std::string CheckCreateDdrDBInstanceRequest::getUserBakSetURL()const
{
	return userBakSetURL_;
}

void CheckCreateDdrDBInstanceRequest::setUserBakSetURL(const std::string& userBakSetURL)
{
	userBakSetURL_ = userBakSetURL;
	setCoreParameter("UserBakSetURL", std::to_string(userBakSetURL));
}

std::string CheckCreateDdrDBInstanceRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void CheckCreateDdrDBInstanceRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", std::to_string(accessKeyId));
}

std::string CheckCreateDdrDBInstanceRequest::getDBInstanceClass()const
{
	return dBInstanceClass_;
}

void CheckCreateDdrDBInstanceRequest::setDBInstanceClass(const std::string& dBInstanceClass)
{
	dBInstanceClass_ = dBInstanceClass;
	setCoreParameter("DBInstanceClass", std::to_string(dBInstanceClass));
}

std::string CheckCreateDdrDBInstanceRequest::getRestoreType()const
{
	return restoreType_;
}

void CheckCreateDdrDBInstanceRequest::setRestoreType(const std::string& restoreType)
{
	restoreType_ = restoreType;
	setCoreParameter("RestoreType", std::to_string(restoreType));
}

std::string CheckCreateDdrDBInstanceRequest::getRegionId()const
{
	return regionId_;
}

void CheckCreateDdrDBInstanceRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setCoreParameter("RegionId", std::to_string(regionId));
}

std::string CheckCreateDdrDBInstanceRequest::getEngine()const
{
	return engine_;
}

void CheckCreateDdrDBInstanceRequest::setEngine(const std::string& engine)
{
	engine_ = engine;
	setCoreParameter("Engine", std::to_string(engine));
}

std::string CheckCreateDdrDBInstanceRequest::getSourceRegion()const
{
	return sourceRegion_;
}

void CheckCreateDdrDBInstanceRequest::setSourceRegion(const std::string& sourceRegion)
{
	sourceRegion_ = sourceRegion;
	setCoreParameter("SourceRegion", std::to_string(sourceRegion));
}

std::string CheckCreateDdrDBInstanceRequest::getBackupSetRegion()const
{
	return backupSetRegion_;
}

void CheckCreateDdrDBInstanceRequest::setBackupSetRegion(const std::string& backupSetRegion)
{
	backupSetRegion_ = backupSetRegion;
	setCoreParameter("BackupSetRegion", std::to_string(backupSetRegion));
}

std::string CheckCreateDdrDBInstanceRequest::getBackupSetType()const
{
	return backupSetType_;
}

void CheckCreateDdrDBInstanceRequest::setBackupSetType(const std::string& backupSetType)
{
	backupSetType_ = backupSetType;
	setCoreParameter("BackupSetType", std::to_string(backupSetType));
}

