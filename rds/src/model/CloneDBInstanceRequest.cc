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

#include <alibabacloud/rds/model/CloneDBInstanceRequest.h>

using AlibabaCloud::Rds::Model::CloneDBInstanceRequest;

CloneDBInstanceRequest::CloneDBInstanceRequest()
    : RpcServiceRequest("rds", "2014-08-15", "CloneDBInstance") {
  setMethod(HttpRequest::Method::Post);
}

CloneDBInstanceRequest::~CloneDBInstanceRequest() {}

long CloneDBInstanceRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void CloneDBInstanceRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

int CloneDBInstanceRequest::getDBInstanceStorage() const {
  return dBInstanceStorage_;
}

void CloneDBInstanceRequest::setDBInstanceStorage(int dBInstanceStorage) {
  dBInstanceStorage_ = dBInstanceStorage;
  setParameter(std::string("DBInstanceStorage"), std::to_string(dBInstanceStorage));
}

bool CloneDBInstanceRequest::getDeletionProtection() const {
  return deletionProtection_;
}

void CloneDBInstanceRequest::setDeletionProtection(bool deletionProtection) {
  deletionProtection_ = deletionProtection;
  setParameter(std::string("DeletionProtection"), deletionProtection ? "true" : "false");
}

std::string CloneDBInstanceRequest::getResourceGroupId() const {
  return resourceGroupId_;
}

void CloneDBInstanceRequest::setResourceGroupId(const std::string &resourceGroupId) {
  resourceGroupId_ = resourceGroupId;
  setParameter(std::string("ResourceGroupId"), resourceGroupId);
}

std::string CloneDBInstanceRequest::getDBInstanceDescription() const {
  return dBInstanceDescription_;
}

void CloneDBInstanceRequest::setDBInstanceDescription(const std::string &dBInstanceDescription) {
  dBInstanceDescription_ = dBInstanceDescription;
  setParameter(std::string("DBInstanceDescription"), dBInstanceDescription);
}

std::string CloneDBInstanceRequest::getBackupType() const {
  return backupType_;
}

void CloneDBInstanceRequest::setBackupType(const std::string &backupType) {
  backupType_ = backupType;
  setParameter(std::string("BackupType"), backupType);
}

std::string CloneDBInstanceRequest::getPeriod() const {
  return period_;
}

void CloneDBInstanceRequest::setPeriod(const std::string &period) {
  period_ = period;
  setParameter(std::string("Period"), period);
}

std::string CloneDBInstanceRequest::getBackupId() const {
  return backupId_;
}

void CloneDBInstanceRequest::setBackupId(const std::string &backupId) {
  backupId_ = backupId;
  setParameter(std::string("BackupId"), backupId);
}

long CloneDBInstanceRequest::getOwnerId() const {
  return ownerId_;
}

void CloneDBInstanceRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

std::string CloneDBInstanceRequest::getDBInstanceClass() const {
  return dBInstanceClass_;
}

void CloneDBInstanceRequest::setDBInstanceClass(const std::string &dBInstanceClass) {
  dBInstanceClass_ = dBInstanceClass;
  setParameter(std::string("DBInstanceClass"), dBInstanceClass);
}

std::string CloneDBInstanceRequest::getVSwitchId() const {
  return vSwitchId_;
}

void CloneDBInstanceRequest::setVSwitchId(const std::string &vSwitchId) {
  vSwitchId_ = vSwitchId;
  setParameter(std::string("VSwitchId"), vSwitchId);
}

std::string CloneDBInstanceRequest::getPrivateIpAddress() const {
  return privateIpAddress_;
}

void CloneDBInstanceRequest::setPrivateIpAddress(const std::string &privateIpAddress) {
  privateIpAddress_ = privateIpAddress;
  setParameter(std::string("PrivateIpAddress"), privateIpAddress);
}

std::string CloneDBInstanceRequest::getZoneId() const {
  return zoneId_;
}

void CloneDBInstanceRequest::setZoneId(const std::string &zoneId) {
  zoneId_ = zoneId;
  setParameter(std::string("ZoneId"), zoneId);
}

std::string CloneDBInstanceRequest::getInstanceNetworkType() const {
  return instanceNetworkType_;
}

void CloneDBInstanceRequest::setInstanceNetworkType(const std::string &instanceNetworkType) {
  instanceNetworkType_ = instanceNetworkType;
  setParameter(std::string("InstanceNetworkType"), instanceNetworkType);
}

std::string CloneDBInstanceRequest::getClientToken() const {
  return clientToken_;
}

void CloneDBInstanceRequest::setClientToken(const std::string &clientToken) {
  clientToken_ = clientToken;
  setParameter(std::string("ClientToken"), clientToken);
}

std::string CloneDBInstanceRequest::getZoneIdSlave1() const {
  return zoneIdSlave1_;
}

void CloneDBInstanceRequest::setZoneIdSlave1(const std::string &zoneIdSlave1) {
  zoneIdSlave1_ = zoneIdSlave1;
  setParameter(std::string("ZoneIdSlave1"), zoneIdSlave1);
}

std::string CloneDBInstanceRequest::getZoneIdSlave2() const {
  return zoneIdSlave2_;
}

void CloneDBInstanceRequest::setZoneIdSlave2(const std::string &zoneIdSlave2) {
  zoneIdSlave2_ = zoneIdSlave2;
  setParameter(std::string("ZoneIdSlave2"), zoneIdSlave2);
}

std::string CloneDBInstanceRequest::getIoAccelerationEnabled() const {
  return ioAccelerationEnabled_;
}

void CloneDBInstanceRequest::setIoAccelerationEnabled(const std::string &ioAccelerationEnabled) {
  ioAccelerationEnabled_ = ioAccelerationEnabled;
  setParameter(std::string("IoAccelerationEnabled"), ioAccelerationEnabled);
}

std::string CloneDBInstanceRequest::getAccessKeyId() const {
  return accessKeyId_;
}

void CloneDBInstanceRequest::setAccessKeyId(const std::string &accessKeyId) {
  accessKeyId_ = accessKeyId;
  setParameter(std::string("AccessKeyId"), accessKeyId);
}

std::string CloneDBInstanceRequest::getRegionId() const {
  return regionId_;
}

void CloneDBInstanceRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string CloneDBInstanceRequest::getTableMeta() const {
  return tableMeta_;
}

void CloneDBInstanceRequest::setTableMeta(const std::string &tableMeta) {
  tableMeta_ = tableMeta;
  setParameter(std::string("TableMeta"), tableMeta);
}

std::string CloneDBInstanceRequest::getDBInstanceId() const {
  return dBInstanceId_;
}

void CloneDBInstanceRequest::setDBInstanceId(const std::string &dBInstanceId) {
  dBInstanceId_ = dBInstanceId;
  setParameter(std::string("DBInstanceId"), dBInstanceId);
}

std::string CloneDBInstanceRequest::getDBInstanceStorageType() const {
  return dBInstanceStorageType_;
}

void CloneDBInstanceRequest::setDBInstanceStorageType(const std::string &dBInstanceStorageType) {
  dBInstanceStorageType_ = dBInstanceStorageType;
  setParameter(std::string("DBInstanceStorageType"), dBInstanceStorageType);
}

std::string CloneDBInstanceRequest::getDedicatedHostGroupId() const {
  return dedicatedHostGroupId_;
}

void CloneDBInstanceRequest::setDedicatedHostGroupId(const std::string &dedicatedHostGroupId) {
  dedicatedHostGroupId_ = dedicatedHostGroupId;
  setParameter(std::string("DedicatedHostGroupId"), dedicatedHostGroupId);
}

std::string CloneDBInstanceRequest::getRestoreTime() const {
  return restoreTime_;
}

void CloneDBInstanceRequest::setRestoreTime(const std::string &restoreTime) {
  restoreTime_ = restoreTime;
  setParameter(std::string("RestoreTime"), restoreTime);
}

bool CloneDBInstanceRequest::getAutoPay() const {
  return autoPay_;
}

void CloneDBInstanceRequest::setAutoPay(bool autoPay) {
  autoPay_ = autoPay;
  setParameter(std::string("AutoPay"), autoPay ? "true" : "false");
}

CloneDBInstanceRequest::ServerlessConfig CloneDBInstanceRequest::getServerlessConfig() const {
  return serverlessConfig_;
}

void CloneDBInstanceRequest::setServerlessConfig(const CloneDBInstanceRequest::ServerlessConfig &serverlessConfig) {
  serverlessConfig_ = serverlessConfig;
  setParameter(std::string("ServerlessConfig") + ".MinCapacity", std::to_string(serverlessConfig.minCapacity));
  setParameter(std::string("ServerlessConfig") + ".MaxCapacity", std::to_string(serverlessConfig.maxCapacity));
  setParameter(std::string("ServerlessConfig") + ".AutoPause", serverlessConfig.autoPause ? "true" : "false");
  setParameter(std::string("ServerlessConfig") + ".SwitchForce", serverlessConfig.switchForce ? "true" : "false");
}

std::string CloneDBInstanceRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void CloneDBInstanceRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string CloneDBInstanceRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void CloneDBInstanceRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

std::string CloneDBInstanceRequest::getRestoreTable() const {
  return restoreTable_;
}

void CloneDBInstanceRequest::setRestoreTable(const std::string &restoreTable) {
  restoreTable_ = restoreTable;
  setParameter(std::string("RestoreTable"), restoreTable);
}

int CloneDBInstanceRequest::getUsedTime() const {
  return usedTime_;
}

void CloneDBInstanceRequest::setUsedTime(int usedTime) {
  usedTime_ = usedTime;
  setParameter(std::string("UsedTime"), std::to_string(usedTime));
}

bool CloneDBInstanceRequest::getBurstingEnabled() const {
  return burstingEnabled_;
}

void CloneDBInstanceRequest::setBurstingEnabled(bool burstingEnabled) {
  burstingEnabled_ = burstingEnabled;
  setParameter(std::string("BurstingEnabled"), burstingEnabled ? "true" : "false");
}

std::string CloneDBInstanceRequest::getDbNames() const {
  return dbNames_;
}

void CloneDBInstanceRequest::setDbNames(const std::string &dbNames) {
  dbNames_ = dbNames;
  setParameter(std::string("DbNames"), dbNames);
}

std::string CloneDBInstanceRequest::getVPCId() const {
  return vPCId_;
}

void CloneDBInstanceRequest::setVPCId(const std::string &vPCId) {
  vPCId_ = vPCId;
  setParameter(std::string("VPCId"), vPCId);
}

std::string CloneDBInstanceRequest::getCategory() const {
  return category_;
}

void CloneDBInstanceRequest::setCategory(const std::string &category) {
  category_ = category;
  setParameter(std::string("Category"), category);
}

std::string CloneDBInstanceRequest::getPayType() const {
  return payType_;
}

void CloneDBInstanceRequest::setPayType(const std::string &payType) {
  payType_ = payType;
  setParameter(std::string("PayType"), payType);
}

std::string CloneDBInstanceRequest::getBpeEnabled() const {
  return bpeEnabled_;
}

void CloneDBInstanceRequest::setBpeEnabled(const std::string &bpeEnabled) {
  bpeEnabled_ = bpeEnabled;
  setParameter(std::string("BpeEnabled"), bpeEnabled);
}

