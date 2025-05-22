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

#include <alibabacloud/rds/model/MigrateToOtherZoneRequest.h>

using AlibabaCloud::Rds::Model::MigrateToOtherZoneRequest;

MigrateToOtherZoneRequest::MigrateToOtherZoneRequest()
    : RpcServiceRequest("rds", "2014-08-15", "MigrateToOtherZone") {
  setMethod(HttpRequest::Method::Post);
}

MigrateToOtherZoneRequest::~MigrateToOtherZoneRequest() {}

long MigrateToOtherZoneRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void MigrateToOtherZoneRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

long MigrateToOtherZoneRequest::getDBInstanceStorage() const {
  return dBInstanceStorage_;
}

void MigrateToOtherZoneRequest::setDBInstanceStorage(long dBInstanceStorage) {
  dBInstanceStorage_ = dBInstanceStorage;
  setParameter(std::string("DBInstanceStorage"), std::to_string(dBInstanceStorage));
}

std::string MigrateToOtherZoneRequest::getIsModifySpec() const {
  return isModifySpec_;
}

void MigrateToOtherZoneRequest::setIsModifySpec(const std::string &isModifySpec) {
  isModifySpec_ = isModifySpec;
  setParameter(std::string("IsModifySpec"), isModifySpec);
}

std::string MigrateToOtherZoneRequest::getZoneIdSlave1() const {
  return zoneIdSlave1_;
}

void MigrateToOtherZoneRequest::setZoneIdSlave1(const std::string &zoneIdSlave1) {
  zoneIdSlave1_ = zoneIdSlave1;
  setParameter(std::string("ZoneIdSlave1"), zoneIdSlave1);
}

std::string MigrateToOtherZoneRequest::getZoneIdSlave2() const {
  return zoneIdSlave2_;
}

void MigrateToOtherZoneRequest::setZoneIdSlave2(const std::string &zoneIdSlave2) {
  zoneIdSlave2_ = zoneIdSlave2;
  setParameter(std::string("ZoneIdSlave2"), zoneIdSlave2);
}

std::string MigrateToOtherZoneRequest::getIoAccelerationEnabled() const {
  return ioAccelerationEnabled_;
}

void MigrateToOtherZoneRequest::setIoAccelerationEnabled(const std::string &ioAccelerationEnabled) {
  ioAccelerationEnabled_ = ioAccelerationEnabled;
  setParameter(std::string("IoAccelerationEnabled"), ioAccelerationEnabled);
}

std::string MigrateToOtherZoneRequest::getAccessKeyId() const {
  return accessKeyId_;
}

void MigrateToOtherZoneRequest::setAccessKeyId(const std::string &accessKeyId) {
  accessKeyId_ = accessKeyId;
  setParameter(std::string("AccessKeyId"), accessKeyId);
}

std::string MigrateToOtherZoneRequest::getEffectiveTime() const {
  return effectiveTime_;
}

void MigrateToOtherZoneRequest::setEffectiveTime(const std::string &effectiveTime) {
  effectiveTime_ = effectiveTime;
  setParameter(std::string("EffectiveTime"), effectiveTime);
}

std::string MigrateToOtherZoneRequest::getRegionId() const {
  return regionId_;
}

void MigrateToOtherZoneRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string MigrateToOtherZoneRequest::getDBInstanceId() const {
  return dBInstanceId_;
}

void MigrateToOtherZoneRequest::setDBInstanceId(const std::string &dBInstanceId) {
  dBInstanceId_ = dBInstanceId;
  setParameter(std::string("DBInstanceId"), dBInstanceId);
}

std::string MigrateToOtherZoneRequest::getSwitchTime() const {
  return switchTime_;
}

void MigrateToOtherZoneRequest::setSwitchTime(const std::string &switchTime) {
  switchTime_ = switchTime;
  setParameter(std::string("SwitchTime"), switchTime);
}

std::string MigrateToOtherZoneRequest::getDBInstanceStorageType() const {
  return dBInstanceStorageType_;
}

void MigrateToOtherZoneRequest::setDBInstanceStorageType(const std::string &dBInstanceStorageType) {
  dBInstanceStorageType_ = dBInstanceStorageType;
  setParameter(std::string("DBInstanceStorageType"), dBInstanceStorageType);
}

std::string MigrateToOtherZoneRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void MigrateToOtherZoneRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string MigrateToOtherZoneRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void MigrateToOtherZoneRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

long MigrateToOtherZoneRequest::getOwnerId() const {
  return ownerId_;
}

void MigrateToOtherZoneRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

std::string MigrateToOtherZoneRequest::getDBInstanceClass() const {
  return dBInstanceClass_;
}

void MigrateToOtherZoneRequest::setDBInstanceClass(const std::string &dBInstanceClass) {
  dBInstanceClass_ = dBInstanceClass;
  setParameter(std::string("DBInstanceClass"), dBInstanceClass);
}

std::string MigrateToOtherZoneRequest::getVSwitchId() const {
  return vSwitchId_;
}

void MigrateToOtherZoneRequest::setVSwitchId(const std::string &vSwitchId) {
  vSwitchId_ = vSwitchId;
  setParameter(std::string("VSwitchId"), vSwitchId);
}

std::string MigrateToOtherZoneRequest::getVPCId() const {
  return vPCId_;
}

void MigrateToOtherZoneRequest::setVPCId(const std::string &vPCId) {
  vPCId_ = vPCId;
  setParameter(std::string("VPCId"), vPCId);
}

std::string MigrateToOtherZoneRequest::getZoneId() const {
  return zoneId_;
}

void MigrateToOtherZoneRequest::setZoneId(const std::string &zoneId) {
  zoneId_ = zoneId;
  setParameter(std::string("ZoneId"), zoneId);
}

std::string MigrateToOtherZoneRequest::getCategory() const {
  return category_;
}

void MigrateToOtherZoneRequest::setCategory(const std::string &category) {
  category_ = category;
  setParameter(std::string("Category"), category);
}

