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

#include <alibabacloud/rds/model/MigrateDBInstanceRequest.h>

using AlibabaCloud::Rds::Model::MigrateDBInstanceRequest;

MigrateDBInstanceRequest::MigrateDBInstanceRequest() :
	RpcServiceRequest("rds", "2014-08-15", "MigrateDBInstance")
{
	setMethod(HttpRequest::Method::Post);
}

MigrateDBInstanceRequest::~MigrateDBInstanceRequest()
{}

long MigrateDBInstanceRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void MigrateDBInstanceRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string MigrateDBInstanceRequest::getSpecifiedTime()const
{
	return specifiedTime_;
}

void MigrateDBInstanceRequest::setSpecifiedTime(const std::string& specifiedTime)
{
	specifiedTime_ = specifiedTime;
	setParameter("SpecifiedTime", specifiedTime);
}

std::string MigrateDBInstanceRequest::getTargetDedicatedHostIdForSlave()const
{
	return targetDedicatedHostIdForSlave_;
}

void MigrateDBInstanceRequest::setTargetDedicatedHostIdForSlave(const std::string& targetDedicatedHostIdForSlave)
{
	targetDedicatedHostIdForSlave_ = targetDedicatedHostIdForSlave;
	setParameter("TargetDedicatedHostIdForSlave", targetDedicatedHostIdForSlave);
}

std::string MigrateDBInstanceRequest::getEngineVersion()const
{
	return engineVersion_;
}

void MigrateDBInstanceRequest::setEngineVersion(const std::string& engineVersion)
{
	engineVersion_ = engineVersion;
	setParameter("EngineVersion", engineVersion);
}

int MigrateDBInstanceRequest::getStorage()const
{
	return storage_;
}

void MigrateDBInstanceRequest::setStorage(int storage)
{
	storage_ = storage;
	setParameter("Storage", std::to_string(storage));
}

std::string MigrateDBInstanceRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void MigrateDBInstanceRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setParameter("AccessKeyId", accessKeyId);
}

std::string MigrateDBInstanceRequest::getRegionId()const
{
	return regionId_;
}

void MigrateDBInstanceRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setParameter("RegionId", regionId);
}

std::string MigrateDBInstanceRequest::getEffectiveTime()const
{
	return effectiveTime_;
}

void MigrateDBInstanceRequest::setEffectiveTime(const std::string& effectiveTime)
{
	effectiveTime_ = effectiveTime;
	setParameter("EffectiveTime", effectiveTime);
}

int MigrateDBInstanceRequest::getDBInstanceTransType()const
{
	return dBInstanceTransType_;
}

void MigrateDBInstanceRequest::setDBInstanceTransType(int dBInstanceTransType)
{
	dBInstanceTransType_ = dBInstanceTransType;
	setParameter("DBInstanceTransType", std::to_string(dBInstanceTransType));
}

std::string MigrateDBInstanceRequest::getTargetDedicatedHostIdForMaster()const
{
	return targetDedicatedHostIdForMaster_;
}

void MigrateDBInstanceRequest::setTargetDedicatedHostIdForMaster(const std::string& targetDedicatedHostIdForMaster)
{
	targetDedicatedHostIdForMaster_ = targetDedicatedHostIdForMaster;
	setParameter("TargetDedicatedHostIdForMaster", targetDedicatedHostIdForMaster);
}

std::string MigrateDBInstanceRequest::getDBInstanceId()const
{
	return dBInstanceId_;
}

void MigrateDBInstanceRequest::setDBInstanceId(const std::string& dBInstanceId)
{
	dBInstanceId_ = dBInstanceId;
	setParameter("DBInstanceId", dBInstanceId);
}

std::string MigrateDBInstanceRequest::getDedicatedHostGroupId()const
{
	return dedicatedHostGroupId_;
}

void MigrateDBInstanceRequest::setDedicatedHostGroupId(const std::string& dedicatedHostGroupId)
{
	dedicatedHostGroupId_ = dedicatedHostGroupId;
	setParameter("DedicatedHostGroupId", dedicatedHostGroupId);
}

std::string MigrateDBInstanceRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void MigrateDBInstanceRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

long MigrateDBInstanceRequest::getOwnerId()const
{
	return ownerId_;
}

void MigrateDBInstanceRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setParameter("OwnerId", std::to_string(ownerId));
}

std::string MigrateDBInstanceRequest::getTargetDBInstanceClass()const
{
	return targetDBInstanceClass_;
}

void MigrateDBInstanceRequest::setTargetDBInstanceClass(const std::string& targetDBInstanceClass)
{
	targetDBInstanceClass_ = targetDBInstanceClass;
	setParameter("TargetDBInstanceClass", targetDBInstanceClass);
}

std::string MigrateDBInstanceRequest::getVSwitchId()const
{
	return vSwitchId_;
}

void MigrateDBInstanceRequest::setVSwitchId(const std::string& vSwitchId)
{
	vSwitchId_ = vSwitchId;
	setParameter("VSwitchId", vSwitchId);
}

std::string MigrateDBInstanceRequest::getTargetDedicatedHostIdForLog()const
{
	return targetDedicatedHostIdForLog_;
}

void MigrateDBInstanceRequest::setTargetDedicatedHostIdForLog(const std::string& targetDedicatedHostIdForLog)
{
	targetDedicatedHostIdForLog_ = targetDedicatedHostIdForLog;
	setParameter("TargetDedicatedHostIdForLog", targetDedicatedHostIdForLog);
}

std::string MigrateDBInstanceRequest::getZoneId()const
{
	return zoneId_;
}

void MigrateDBInstanceRequest::setZoneId(const std::string& zoneId)
{
	zoneId_ = zoneId;
	setParameter("ZoneId", zoneId);
}

