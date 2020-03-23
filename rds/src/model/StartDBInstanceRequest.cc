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

#include <alibabacloud/rds/model/StartDBInstanceRequest.h>

using AlibabaCloud::Rds::Model::StartDBInstanceRequest;

StartDBInstanceRequest::StartDBInstanceRequest() :
	RpcServiceRequest("rds", "2014-08-15", "StartDBInstance")
{
	setMethod(HttpRequest::Method::Post);
}

StartDBInstanceRequest::~StartDBInstanceRequest()
{}

long StartDBInstanceRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void StartDBInstanceRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string StartDBInstanceRequest::getSpecifiedTime()const
{
	return specifiedTime_;
}

void StartDBInstanceRequest::setSpecifiedTime(const std::string& specifiedTime)
{
	specifiedTime_ = specifiedTime;
	setParameter("SpecifiedTime", specifiedTime);
}

std::string StartDBInstanceRequest::getTargetDedicatedHostIdForSlave()const
{
	return targetDedicatedHostIdForSlave_;
}

void StartDBInstanceRequest::setTargetDedicatedHostIdForSlave(const std::string& targetDedicatedHostIdForSlave)
{
	targetDedicatedHostIdForSlave_ = targetDedicatedHostIdForSlave;
	setParameter("TargetDedicatedHostIdForSlave", targetDedicatedHostIdForSlave);
}

std::string StartDBInstanceRequest::getEngineVersion()const
{
	return engineVersion_;
}

void StartDBInstanceRequest::setEngineVersion(const std::string& engineVersion)
{
	engineVersion_ = engineVersion;
	setParameter("EngineVersion", engineVersion);
}

int StartDBInstanceRequest::getStorage()const
{
	return storage_;
}

void StartDBInstanceRequest::setStorage(int storage)
{
	storage_ = storage;
	setParameter("Storage", std::to_string(storage));
}

std::string StartDBInstanceRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void StartDBInstanceRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setParameter("AccessKeyId", accessKeyId);
}

std::string StartDBInstanceRequest::getRegionId()const
{
	return regionId_;
}

void StartDBInstanceRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setParameter("RegionId", regionId);
}

std::string StartDBInstanceRequest::getEffectiveTime()const
{
	return effectiveTime_;
}

void StartDBInstanceRequest::setEffectiveTime(const std::string& effectiveTime)
{
	effectiveTime_ = effectiveTime;
	setParameter("EffectiveTime", effectiveTime);
}

int StartDBInstanceRequest::getDBInstanceTransType()const
{
	return dBInstanceTransType_;
}

void StartDBInstanceRequest::setDBInstanceTransType(int dBInstanceTransType)
{
	dBInstanceTransType_ = dBInstanceTransType;
	setParameter("DBInstanceTransType", std::to_string(dBInstanceTransType));
}

std::string StartDBInstanceRequest::getTargetDedicatedHostIdForMaster()const
{
	return targetDedicatedHostIdForMaster_;
}

void StartDBInstanceRequest::setTargetDedicatedHostIdForMaster(const std::string& targetDedicatedHostIdForMaster)
{
	targetDedicatedHostIdForMaster_ = targetDedicatedHostIdForMaster;
	setParameter("TargetDedicatedHostIdForMaster", targetDedicatedHostIdForMaster);
}

std::string StartDBInstanceRequest::getDBInstanceId()const
{
	return dBInstanceId_;
}

void StartDBInstanceRequest::setDBInstanceId(const std::string& dBInstanceId)
{
	dBInstanceId_ = dBInstanceId;
	setParameter("DBInstanceId", dBInstanceId);
}

std::string StartDBInstanceRequest::getDedicatedHostGroupId()const
{
	return dedicatedHostGroupId_;
}

void StartDBInstanceRequest::setDedicatedHostGroupId(const std::string& dedicatedHostGroupId)
{
	dedicatedHostGroupId_ = dedicatedHostGroupId;
	setParameter("DedicatedHostGroupId", dedicatedHostGroupId);
}

std::string StartDBInstanceRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void StartDBInstanceRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

long StartDBInstanceRequest::getOwnerId()const
{
	return ownerId_;
}

void StartDBInstanceRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setParameter("OwnerId", std::to_string(ownerId));
}

std::string StartDBInstanceRequest::getTargetDBInstanceClass()const
{
	return targetDBInstanceClass_;
}

void StartDBInstanceRequest::setTargetDBInstanceClass(const std::string& targetDBInstanceClass)
{
	targetDBInstanceClass_ = targetDBInstanceClass;
	setParameter("TargetDBInstanceClass", targetDBInstanceClass);
}

std::string StartDBInstanceRequest::getVSwitchId()const
{
	return vSwitchId_;
}

void StartDBInstanceRequest::setVSwitchId(const std::string& vSwitchId)
{
	vSwitchId_ = vSwitchId;
	setParameter("VSwitchId", vSwitchId);
}

std::string StartDBInstanceRequest::getTargetDedicatedHostIdForLog()const
{
	return targetDedicatedHostIdForLog_;
}

void StartDBInstanceRequest::setTargetDedicatedHostIdForLog(const std::string& targetDedicatedHostIdForLog)
{
	targetDedicatedHostIdForLog_ = targetDedicatedHostIdForLog;
	setParameter("TargetDedicatedHostIdForLog", targetDedicatedHostIdForLog);
}

std::string StartDBInstanceRequest::getZoneId()const
{
	return zoneId_;
}

void StartDBInstanceRequest::setZoneId(const std::string& zoneId)
{
	zoneId_ = zoneId;
	setParameter("ZoneId", zoneId);
}

