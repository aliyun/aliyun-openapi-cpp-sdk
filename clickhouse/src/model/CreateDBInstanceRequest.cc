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

#include <alibabacloud/clickhouse/model/CreateDBInstanceRequest.h>

using AlibabaCloud::Clickhouse::Model::CreateDBInstanceRequest;

CreateDBInstanceRequest::CreateDBInstanceRequest()
    : RpcServiceRequest("clickhouse", "2019-11-11", "CreateDBInstance") {
  setMethod(HttpRequest::Method::Post);
}

CreateDBInstanceRequest::~CreateDBInstanceRequest() {}

long CreateDBInstanceRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void CreateDBInstanceRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string CreateDBInstanceRequest::getDBClusterDescription() const {
  return dBClusterDescription_;
}

void CreateDBInstanceRequest::setDBClusterDescription(const std::string &dBClusterDescription) {
  dBClusterDescription_ = dBClusterDescription;
  setParameter(std::string("DBClusterDescription"), dBClusterDescription);
}

std::string CreateDBInstanceRequest::getSourceDBClusterId() const {
  return sourceDBClusterId_;
}

void CreateDBInstanceRequest::setSourceDBClusterId(const std::string &sourceDBClusterId) {
  sourceDBClusterId_ = sourceDBClusterId;
  setParameter(std::string("SourceDBClusterId"), sourceDBClusterId);
}

std::string CreateDBInstanceRequest::getResourceGroupId() const {
  return resourceGroupId_;
}

void CreateDBInstanceRequest::setResourceGroupId(const std::string &resourceGroupId) {
  resourceGroupId_ = resourceGroupId;
  setParameter(std::string("ResourceGroupId"), resourceGroupId);
}

std::string CreateDBInstanceRequest::getZondIdBak2() const {
  return zondIdBak2_;
}

void CreateDBInstanceRequest::setZondIdBak2(const std::string &zondIdBak2) {
  zondIdBak2_ = zondIdBak2;
  setParameter(std::string("ZondIdBak2"), zondIdBak2);
}

std::string CreateDBInstanceRequest::getDbNodeStorageType() const {
  return dbNodeStorageType_;
}

void CreateDBInstanceRequest::setDbNodeStorageType(const std::string &dbNodeStorageType) {
  dbNodeStorageType_ = dbNodeStorageType;
  setParameter(std::string("DbNodeStorageType"), dbNodeStorageType);
}

std::string CreateDBInstanceRequest::getEncryptionType() const {
  return encryptionType_;
}

void CreateDBInstanceRequest::setEncryptionType(const std::string &encryptionType) {
  encryptionType_ = encryptionType;
  setParameter(std::string("EncryptionType"), encryptionType);
}

std::string CreateDBInstanceRequest::getZoneIdBak() const {
  return zoneIdBak_;
}

void CreateDBInstanceRequest::setZoneIdBak(const std::string &zoneIdBak) {
  zoneIdBak_ = zoneIdBak;
  setParameter(std::string("ZoneIdBak"), zoneIdBak);
}

std::string CreateDBInstanceRequest::getPeriod() const {
  return period_;
}

void CreateDBInstanceRequest::setPeriod(const std::string &period) {
  period_ = period;
  setParameter(std::string("Period"), period);
}

std::string CreateDBInstanceRequest::getBackupSetID() const {
  return backupSetID_;
}

void CreateDBInstanceRequest::setBackupSetID(const std::string &backupSetID) {
  backupSetID_ = backupSetID;
  setParameter(std::string("BackupSetID"), backupSetID);
}

std::string CreateDBInstanceRequest::getEncryptionKey() const {
  return encryptionKey_;
}

void CreateDBInstanceRequest::setEncryptionKey(const std::string &encryptionKey) {
  encryptionKey_ = encryptionKey;
  setParameter(std::string("EncryptionKey"), encryptionKey);
}

long CreateDBInstanceRequest::getOwnerId() const {
  return ownerId_;
}

void CreateDBInstanceRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

std::string CreateDBInstanceRequest::getDBNodeGroupCount() const {
  return dBNodeGroupCount_;
}

void CreateDBInstanceRequest::setDBNodeGroupCount(const std::string &dBNodeGroupCount) {
  dBNodeGroupCount_ = dBNodeGroupCount;
  setParameter(std::string("DBNodeGroupCount"), dBNodeGroupCount);
}

std::string CreateDBInstanceRequest::getVSwitchId() const {
  return vSwitchId_;
}

void CreateDBInstanceRequest::setVSwitchId(const std::string &vSwitchId) {
  vSwitchId_ = vSwitchId;
  setParameter(std::string("VSwitchId"), vSwitchId);
}

bool CreateDBInstanceRequest::getAutoRenew() const {
  return autoRenew_;
}

void CreateDBInstanceRequest::setAutoRenew(bool autoRenew) {
  autoRenew_ = autoRenew;
  setParameter(std::string("AutoRenew"), autoRenew ? "true" : "false");
}

std::string CreateDBInstanceRequest::getZoneId() const {
  return zoneId_;
}

void CreateDBInstanceRequest::setZoneId(const std::string &zoneId) {
  zoneId_ = zoneId;
  setParameter(std::string("ZoneId"), zoneId);
}

std::string CreateDBInstanceRequest::getClientToken() const {
  return clientToken_;
}

void CreateDBInstanceRequest::setClientToken(const std::string &clientToken) {
  clientToken_ = clientToken;
  setParameter(std::string("ClientToken"), clientToken);
}

std::string CreateDBInstanceRequest::getAccessKeyId() const {
  return accessKeyId_;
}

void CreateDBInstanceRequest::setAccessKeyId(const std::string &accessKeyId) {
  accessKeyId_ = accessKeyId;
  setParameter(std::string("AccessKeyId"), accessKeyId);
}

std::string CreateDBInstanceRequest::getRegionId() const {
  return regionId_;
}

void CreateDBInstanceRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string CreateDBInstanceRequest::getDBClusterCategory() const {
  return dBClusterCategory_;
}

void CreateDBInstanceRequest::setDBClusterCategory(const std::string &dBClusterCategory) {
  dBClusterCategory_ = dBClusterCategory;
  setParameter(std::string("DBClusterCategory"), dBClusterCategory);
}

std::string CreateDBInstanceRequest::getDBClusterNetworkType() const {
  return dBClusterNetworkType_;
}

void CreateDBInstanceRequest::setDBClusterNetworkType(const std::string &dBClusterNetworkType) {
  dBClusterNetworkType_ = dBClusterNetworkType;
  setParameter(std::string("DBClusterNetworkType"), dBClusterNetworkType);
}

std::string CreateDBInstanceRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void CreateDBInstanceRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string CreateDBInstanceRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void CreateDBInstanceRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

std::string CreateDBInstanceRequest::getDBClusterVersion() const {
  return dBClusterVersion_;
}

void CreateDBInstanceRequest::setDBClusterVersion(const std::string &dBClusterVersion) {
  dBClusterVersion_ = dBClusterVersion;
  setParameter(std::string("DBClusterVersion"), dBClusterVersion);
}

std::string CreateDBInstanceRequest::getDBClusterClass() const {
  return dBClusterClass_;
}

void CreateDBInstanceRequest::setDBClusterClass(const std::string &dBClusterClass) {
  dBClusterClass_ = dBClusterClass;
  setParameter(std::string("DBClusterClass"), dBClusterClass);
}

std::string CreateDBInstanceRequest::getVSwitchBak() const {
  return vSwitchBak_;
}

void CreateDBInstanceRequest::setVSwitchBak(const std::string &vSwitchBak) {
  vSwitchBak_ = vSwitchBak;
  setParameter(std::string("VSwitchBak"), vSwitchBak);
}

std::string CreateDBInstanceRequest::getUsedTime() const {
  return usedTime_;
}

void CreateDBInstanceRequest::setUsedTime(const std::string &usedTime) {
  usedTime_ = usedTime;
  setParameter(std::string("UsedTime"), usedTime);
}

std::string CreateDBInstanceRequest::getVSwitchBak2() const {
  return vSwitchBak2_;
}

void CreateDBInstanceRequest::setVSwitchBak2(const std::string &vSwitchBak2) {
  vSwitchBak2_ = vSwitchBak2;
  setParameter(std::string("VSwitchBak2"), vSwitchBak2);
}

std::string CreateDBInstanceRequest::getDBNodeStorage() const {
  return dBNodeStorage_;
}

void CreateDBInstanceRequest::setDBNodeStorage(const std::string &dBNodeStorage) {
  dBNodeStorage_ = dBNodeStorage;
  setParameter(std::string("DBNodeStorage"), dBNodeStorage);
}

std::string CreateDBInstanceRequest::getVPCId() const {
  return vPCId_;
}

void CreateDBInstanceRequest::setVPCId(const std::string &vPCId) {
  vPCId_ = vPCId;
  setParameter(std::string("VPCId"), vPCId);
}

std::string CreateDBInstanceRequest::getPayType() const {
  return payType_;
}

void CreateDBInstanceRequest::setPayType(const std::string &payType) {
  payType_ = payType;
  setParameter(std::string("PayType"), payType);
}

