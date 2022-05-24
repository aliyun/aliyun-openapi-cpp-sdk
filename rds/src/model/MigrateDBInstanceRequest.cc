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

MigrateDBInstanceRequest::MigrateDBInstanceRequest()
    : RpcServiceRequest("rds", "2014-08-15", "MigrateDBInstance") {
  setMethod(HttpRequest::Method::Post);
}

MigrateDBInstanceRequest::~MigrateDBInstanceRequest() {}

long MigrateDBInstanceRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void MigrateDBInstanceRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string MigrateDBInstanceRequest::getSpecifiedTime() const {
  return specifiedTime_;
}

void MigrateDBInstanceRequest::setSpecifiedTime(const std::string &specifiedTime) {
  specifiedTime_ = specifiedTime;
  setParameter(std::string("SpecifiedTime"), specifiedTime);
}

std::string MigrateDBInstanceRequest::getTargetDedicatedHostIdForSlave() const {
  return targetDedicatedHostIdForSlave_;
}

void MigrateDBInstanceRequest::setTargetDedicatedHostIdForSlave(const std::string &targetDedicatedHostIdForSlave) {
  targetDedicatedHostIdForSlave_ = targetDedicatedHostIdForSlave;
  setParameter(std::string("TargetDedicatedHostIdForSlave"), targetDedicatedHostIdForSlave);
}

std::string MigrateDBInstanceRequest::getZoneIdSlave1() const {
  return zoneIdSlave1_;
}

void MigrateDBInstanceRequest::setZoneIdSlave1(const std::string &zoneIdSlave1) {
  zoneIdSlave1_ = zoneIdSlave1;
  setParameter(std::string("ZoneIdSlave1"), zoneIdSlave1);
}

std::string MigrateDBInstanceRequest::getZoneIdSlave2() const {
  return zoneIdSlave2_;
}

void MigrateDBInstanceRequest::setZoneIdSlave2(const std::string &zoneIdSlave2) {
  zoneIdSlave2_ = zoneIdSlave2;
  setParameter(std::string("ZoneIdSlave2"), zoneIdSlave2);
}

std::string MigrateDBInstanceRequest::getEngineVersion() const {
  return engineVersion_;
}

void MigrateDBInstanceRequest::setEngineVersion(const std::string &engineVersion) {
  engineVersion_ = engineVersion;
  setParameter(std::string("EngineVersion"), engineVersion);
}

int MigrateDBInstanceRequest::getStorage() const {
  return storage_;
}

void MigrateDBInstanceRequest::setStorage(int storage) {
  storage_ = storage;
  setParameter(std::string("Storage"), std::to_string(storage));
}

std::string MigrateDBInstanceRequest::getZoneIdForFollower() const {
  return zoneIdForFollower_;
}

void MigrateDBInstanceRequest::setZoneIdForFollower(const std::string &zoneIdForFollower) {
  zoneIdForFollower_ = zoneIdForFollower;
  setParameter(std::string("ZoneIdForFollower"), zoneIdForFollower);
}

std::string MigrateDBInstanceRequest::getAccessKeyId() const {
  return accessKeyId_;
}

void MigrateDBInstanceRequest::setAccessKeyId(const std::string &accessKeyId) {
  accessKeyId_ = accessKeyId;
  setParameter(std::string("AccessKeyId"), accessKeyId);
}

std::string MigrateDBInstanceRequest::getRegionId() const {
  return regionId_;
}

void MigrateDBInstanceRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string MigrateDBInstanceRequest::getEffectiveTime() const {
  return effectiveTime_;
}

void MigrateDBInstanceRequest::setEffectiveTime(const std::string &effectiveTime) {
  effectiveTime_ = effectiveTime;
  setParameter(std::string("EffectiveTime"), effectiveTime);
}

int MigrateDBInstanceRequest::getDBInstanceTransType() const {
  return dBInstanceTransType_;
}

void MigrateDBInstanceRequest::setDBInstanceTransType(int dBInstanceTransType) {
  dBInstanceTransType_ = dBInstanceTransType;
  setParameter(std::string("DBInstanceTransType"), std::to_string(dBInstanceTransType));
}

std::string MigrateDBInstanceRequest::getTargetDedicatedHostIdForMaster() const {
  return targetDedicatedHostIdForMaster_;
}

void MigrateDBInstanceRequest::setTargetDedicatedHostIdForMaster(const std::string &targetDedicatedHostIdForMaster) {
  targetDedicatedHostIdForMaster_ = targetDedicatedHostIdForMaster;
  setParameter(std::string("TargetDedicatedHostIdForMaster"), targetDedicatedHostIdForMaster);
}

std::string MigrateDBInstanceRequest::getDBInstanceId() const {
  return dBInstanceId_;
}

void MigrateDBInstanceRequest::setDBInstanceId(const std::string &dBInstanceId) {
  dBInstanceId_ = dBInstanceId;
  setParameter(std::string("DBInstanceId"), dBInstanceId);
}

std::string MigrateDBInstanceRequest::getDedicatedHostGroupId() const {
  return dedicatedHostGroupId_;
}

void MigrateDBInstanceRequest::setDedicatedHostGroupId(const std::string &dedicatedHostGroupId) {
  dedicatedHostGroupId_ = dedicatedHostGroupId;
  setParameter(std::string("DedicatedHostGroupId"), dedicatedHostGroupId);
}

std::string MigrateDBInstanceRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void MigrateDBInstanceRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string MigrateDBInstanceRequest::getZoneIdForLog() const {
  return zoneIdForLog_;
}

void MigrateDBInstanceRequest::setZoneIdForLog(const std::string &zoneIdForLog) {
  zoneIdForLog_ = zoneIdForLog;
  setParameter(std::string("ZoneIdForLog"), zoneIdForLog);
}

long MigrateDBInstanceRequest::getOwnerId() const {
  return ownerId_;
}

void MigrateDBInstanceRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

std::string MigrateDBInstanceRequest::getTargetDBInstanceClass() const {
  return targetDBInstanceClass_;
}

void MigrateDBInstanceRequest::setTargetDBInstanceClass(const std::string &targetDBInstanceClass) {
  targetDBInstanceClass_ = targetDBInstanceClass;
  setParameter(std::string("TargetDBInstanceClass"), targetDBInstanceClass);
}

std::string MigrateDBInstanceRequest::getVSwitchId() const {
  return vSwitchId_;
}

void MigrateDBInstanceRequest::setVSwitchId(const std::string &vSwitchId) {
  vSwitchId_ = vSwitchId;
  setParameter(std::string("VSwitchId"), vSwitchId);
}

std::string MigrateDBInstanceRequest::getTargetDedicatedHostIdForLog() const {
  return targetDedicatedHostIdForLog_;
}

void MigrateDBInstanceRequest::setTargetDedicatedHostIdForLog(const std::string &targetDedicatedHostIdForLog) {
  targetDedicatedHostIdForLog_ = targetDedicatedHostIdForLog;
  setParameter(std::string("TargetDedicatedHostIdForLog"), targetDedicatedHostIdForLog);
}

std::string MigrateDBInstanceRequest::getZoneId() const {
  return zoneId_;
}

void MigrateDBInstanceRequest::setZoneId(const std::string &zoneId) {
  zoneId_ = zoneId;
  setParameter(std::string("ZoneId"), zoneId);
}

