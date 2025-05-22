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

#include <alibabacloud/rds/model/UpgradeDBInstanceMajorVersionRequest.h>

using AlibabaCloud::Rds::Model::UpgradeDBInstanceMajorVersionRequest;

UpgradeDBInstanceMajorVersionRequest::UpgradeDBInstanceMajorVersionRequest()
    : RpcServiceRequest("rds", "2014-08-15", "UpgradeDBInstanceMajorVersion") {
  setMethod(HttpRequest::Method::Post);
}

UpgradeDBInstanceMajorVersionRequest::~UpgradeDBInstanceMajorVersionRequest() {}

long UpgradeDBInstanceMajorVersionRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void UpgradeDBInstanceMajorVersionRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

int UpgradeDBInstanceMajorVersionRequest::getDBInstanceStorage() const {
  return dBInstanceStorage_;
}

void UpgradeDBInstanceMajorVersionRequest::setDBInstanceStorage(int dBInstanceStorage) {
  dBInstanceStorage_ = dBInstanceStorage;
  setParameter(std::string("DBInstanceStorage"), std::to_string(dBInstanceStorage));
}

std::string UpgradeDBInstanceMajorVersionRequest::getResourceGroupId() const {
  return resourceGroupId_;
}

void UpgradeDBInstanceMajorVersionRequest::setResourceGroupId(const std::string &resourceGroupId) {
  resourceGroupId_ = resourceGroupId;
  setParameter(std::string("ResourceGroupId"), resourceGroupId);
}

std::string UpgradeDBInstanceMajorVersionRequest::getDBInstanceDescription() const {
  return dBInstanceDescription_;
}

void UpgradeDBInstanceMajorVersionRequest::setDBInstanceDescription(const std::string &dBInstanceDescription) {
  dBInstanceDescription_ = dBInstanceDescription;
  setParameter(std::string("DBInstanceDescription"), dBInstanceDescription);
}

std::string UpgradeDBInstanceMajorVersionRequest::getPeriod() const {
  return period_;
}

void UpgradeDBInstanceMajorVersionRequest::setPeriod(const std::string &period) {
  period_ = period;
  setParameter(std::string("Period"), period);
}

std::string UpgradeDBInstanceMajorVersionRequest::getUpgradeMode() const {
  return upgradeMode_;
}

void UpgradeDBInstanceMajorVersionRequest::setUpgradeMode(const std::string &upgradeMode) {
  upgradeMode_ = upgradeMode;
  setParameter(std::string("UpgradeMode"), upgradeMode);
}

long UpgradeDBInstanceMajorVersionRequest::getOwnerId() const {
  return ownerId_;
}

void UpgradeDBInstanceMajorVersionRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

std::string UpgradeDBInstanceMajorVersionRequest::getDBInstanceClass() const {
  return dBInstanceClass_;
}

void UpgradeDBInstanceMajorVersionRequest::setDBInstanceClass(const std::string &dBInstanceClass) {
  dBInstanceClass_ = dBInstanceClass;
  setParameter(std::string("DBInstanceClass"), dBInstanceClass);
}

std::string UpgradeDBInstanceMajorVersionRequest::getVSwitchId() const {
  return vSwitchId_;
}

void UpgradeDBInstanceMajorVersionRequest::setVSwitchId(const std::string &vSwitchId) {
  vSwitchId_ = vSwitchId;
  setParameter(std::string("VSwitchId"), vSwitchId);
}

std::string UpgradeDBInstanceMajorVersionRequest::getPrivateIpAddress() const {
  return privateIpAddress_;
}

void UpgradeDBInstanceMajorVersionRequest::setPrivateIpAddress(const std::string &privateIpAddress) {
  privateIpAddress_ = privateIpAddress;
  setParameter(std::string("PrivateIpAddress"), privateIpAddress);
}

std::string UpgradeDBInstanceMajorVersionRequest::getZoneId() const {
  return zoneId_;
}

void UpgradeDBInstanceMajorVersionRequest::setZoneId(const std::string &zoneId) {
  zoneId_ = zoneId;
  setParameter(std::string("ZoneId"), zoneId);
}

std::string UpgradeDBInstanceMajorVersionRequest::getInstanceNetworkType() const {
  return instanceNetworkType_;
}

void UpgradeDBInstanceMajorVersionRequest::setInstanceNetworkType(const std::string &instanceNetworkType) {
  instanceNetworkType_ = instanceNetworkType;
  setParameter(std::string("InstanceNetworkType"), instanceNetworkType);
}

std::string UpgradeDBInstanceMajorVersionRequest::getTargetMajorVersion() const {
  return targetMajorVersion_;
}

void UpgradeDBInstanceMajorVersionRequest::setTargetMajorVersion(const std::string &targetMajorVersion) {
  targetMajorVersion_ = targetMajorVersion;
  setParameter(std::string("TargetMajorVersion"), targetMajorVersion);
}

std::string UpgradeDBInstanceMajorVersionRequest::getClientToken() const {
  return clientToken_;
}

void UpgradeDBInstanceMajorVersionRequest::setClientToken(const std::string &clientToken) {
  clientToken_ = clientToken;
  setParameter(std::string("ClientToken"), clientToken);
}

std::string UpgradeDBInstanceMajorVersionRequest::getZoneIdSlave1() const {
  return zoneIdSlave1_;
}

void UpgradeDBInstanceMajorVersionRequest::setZoneIdSlave1(const std::string &zoneIdSlave1) {
  zoneIdSlave1_ = zoneIdSlave1;
  setParameter(std::string("ZoneIdSlave1"), zoneIdSlave1);
}

std::string UpgradeDBInstanceMajorVersionRequest::getZoneIdSlave2() const {
  return zoneIdSlave2_;
}

void UpgradeDBInstanceMajorVersionRequest::setZoneIdSlave2(const std::string &zoneIdSlave2) {
  zoneIdSlave2_ = zoneIdSlave2;
  setParameter(std::string("ZoneIdSlave2"), zoneIdSlave2);
}

std::string UpgradeDBInstanceMajorVersionRequest::getAccessKeyId() const {
  return accessKeyId_;
}

void UpgradeDBInstanceMajorVersionRequest::setAccessKeyId(const std::string &accessKeyId) {
  accessKeyId_ = accessKeyId;
  setParameter(std::string("AccessKeyId"), accessKeyId);
}

std::string UpgradeDBInstanceMajorVersionRequest::getSwitchTimeMode() const {
  return switchTimeMode_;
}

void UpgradeDBInstanceMajorVersionRequest::setSwitchTimeMode(const std::string &switchTimeMode) {
  switchTimeMode_ = switchTimeMode;
  setParameter(std::string("SwitchTimeMode"), switchTimeMode);
}

std::string UpgradeDBInstanceMajorVersionRequest::getSwitchOver() const {
  return switchOver_;
}

void UpgradeDBInstanceMajorVersionRequest::setSwitchOver(const std::string &switchOver) {
  switchOver_ = switchOver;
  setParameter(std::string("SwitchOver"), switchOver);
}

std::string UpgradeDBInstanceMajorVersionRequest::getRegionId() const {
  return regionId_;
}

void UpgradeDBInstanceMajorVersionRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string UpgradeDBInstanceMajorVersionRequest::getCollectStatMode() const {
  return collectStatMode_;
}

void UpgradeDBInstanceMajorVersionRequest::setCollectStatMode(const std::string &collectStatMode) {
  collectStatMode_ = collectStatMode;
  setParameter(std::string("CollectStatMode"), collectStatMode);
}

std::string UpgradeDBInstanceMajorVersionRequest::getSwitchTime() const {
  return switchTime_;
}

void UpgradeDBInstanceMajorVersionRequest::setSwitchTime(const std::string &switchTime) {
  switchTime_ = switchTime;
  setParameter(std::string("SwitchTime"), switchTime);
}

std::string UpgradeDBInstanceMajorVersionRequest::getDBInstanceId() const {
  return dBInstanceId_;
}

void UpgradeDBInstanceMajorVersionRequest::setDBInstanceId(const std::string &dBInstanceId) {
  dBInstanceId_ = dBInstanceId;
  setParameter(std::string("DBInstanceId"), dBInstanceId);
}

std::string UpgradeDBInstanceMajorVersionRequest::getDBInstanceStorageType() const {
  return dBInstanceStorageType_;
}

void UpgradeDBInstanceMajorVersionRequest::setDBInstanceStorageType(const std::string &dBInstanceStorageType) {
  dBInstanceStorageType_ = dBInstanceStorageType;
  setParameter(std::string("DBInstanceStorageType"), dBInstanceStorageType);
}

std::string UpgradeDBInstanceMajorVersionRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void UpgradeDBInstanceMajorVersionRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string UpgradeDBInstanceMajorVersionRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void UpgradeDBInstanceMajorVersionRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

std::string UpgradeDBInstanceMajorVersionRequest::getUsedTime() const {
  return usedTime_;
}

void UpgradeDBInstanceMajorVersionRequest::setUsedTime(const std::string &usedTime) {
  usedTime_ = usedTime;
  setParameter(std::string("UsedTime"), usedTime);
}

std::string UpgradeDBInstanceMajorVersionRequest::getVPCId() const {
  return vPCId_;
}

void UpgradeDBInstanceMajorVersionRequest::setVPCId(const std::string &vPCId) {
  vPCId_ = vPCId;
  setParameter(std::string("VPCId"), vPCId);
}

std::string UpgradeDBInstanceMajorVersionRequest::getPayType() const {
  return payType_;
}

void UpgradeDBInstanceMajorVersionRequest::setPayType(const std::string &payType) {
  payType_ = payType;
  setParameter(std::string("PayType"), payType);
}

