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

#include <alibabacloud/rds/model/RecoveryDBInstanceRequest.h>

using AlibabaCloud::Rds::Model::RecoveryDBInstanceRequest;

RecoveryDBInstanceRequest::RecoveryDBInstanceRequest()
    : RpcServiceRequest("rds", "2014-08-15", "RecoveryDBInstance") {
  setMethod(HttpRequest::Method::Post);
}

RecoveryDBInstanceRequest::~RecoveryDBInstanceRequest() {}

long RecoveryDBInstanceRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void RecoveryDBInstanceRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

int RecoveryDBInstanceRequest::getDBInstanceStorage() const {
  return dBInstanceStorage_;
}

void RecoveryDBInstanceRequest::setDBInstanceStorage(int dBInstanceStorage) {
  dBInstanceStorage_ = dBInstanceStorage;
  setParameter(std::string("DBInstanceStorage"), std::to_string(dBInstanceStorage));
}

std::string RecoveryDBInstanceRequest::getClientToken() const {
  return clientToken_;
}

void RecoveryDBInstanceRequest::setClientToken(const std::string &clientToken) {
  clientToken_ = clientToken;
  setParameter(std::string("ClientToken"), clientToken);
}

std::string RecoveryDBInstanceRequest::getAccessKeyId() const {
  return accessKeyId_;
}

void RecoveryDBInstanceRequest::setAccessKeyId(const std::string &accessKeyId) {
  accessKeyId_ = accessKeyId;
  setParameter(std::string("AccessKeyId"), accessKeyId);
}

std::string RecoveryDBInstanceRequest::getResourceGroupId() const {
  return resourceGroupId_;
}

void RecoveryDBInstanceRequest::setResourceGroupId(const std::string &resourceGroupId) {
  resourceGroupId_ = resourceGroupId;
  setParameter(std::string("ResourceGroupId"), resourceGroupId);
}

std::string RecoveryDBInstanceRequest::getRegionId() const {
  return regionId_;
}

void RecoveryDBInstanceRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string RecoveryDBInstanceRequest::getDBInstanceDescription() const {
  return dBInstanceDescription_;
}

void RecoveryDBInstanceRequest::setDBInstanceDescription(const std::string &dBInstanceDescription) {
  dBInstanceDescription_ = dBInstanceDescription;
  setParameter(std::string("DBInstanceDescription"), dBInstanceDescription);
}

std::string RecoveryDBInstanceRequest::getDBInstanceId() const {
  return dBInstanceId_;
}

void RecoveryDBInstanceRequest::setDBInstanceId(const std::string &dBInstanceId) {
  dBInstanceId_ = dBInstanceId;
  setParameter(std::string("DBInstanceId"), dBInstanceId);
}

std::string RecoveryDBInstanceRequest::getDBInstanceStorageType() const {
  return dBInstanceStorageType_;
}

void RecoveryDBInstanceRequest::setDBInstanceStorageType(const std::string &dBInstanceStorageType) {
  dBInstanceStorageType_ = dBInstanceStorageType;
  setParameter(std::string("DBInstanceStorageType"), dBInstanceStorageType);
}

std::string RecoveryDBInstanceRequest::getRestoreTime() const {
  return restoreTime_;
}

void RecoveryDBInstanceRequest::setRestoreTime(const std::string &restoreTime) {
  restoreTime_ = restoreTime;
  setParameter(std::string("RestoreTime"), restoreTime);
}

std::string RecoveryDBInstanceRequest::getPeriod() const {
  return period_;
}

void RecoveryDBInstanceRequest::setPeriod(const std::string &period) {
  period_ = period;
  setParameter(std::string("Period"), period);
}

std::string RecoveryDBInstanceRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void RecoveryDBInstanceRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string RecoveryDBInstanceRequest::getBackupId() const {
  return backupId_;
}

void RecoveryDBInstanceRequest::setBackupId(const std::string &backupId) {
  backupId_ = backupId;
  setParameter(std::string("BackupId"), backupId);
}

std::string RecoveryDBInstanceRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void RecoveryDBInstanceRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

long RecoveryDBInstanceRequest::getOwnerId() const {
  return ownerId_;
}

void RecoveryDBInstanceRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

std::string RecoveryDBInstanceRequest::getUsedTime() const {
  return usedTime_;
}

void RecoveryDBInstanceRequest::setUsedTime(const std::string &usedTime) {
  usedTime_ = usedTime;
  setParameter(std::string("UsedTime"), usedTime);
}

std::string RecoveryDBInstanceRequest::getDBInstanceClass() const {
  return dBInstanceClass_;
}

void RecoveryDBInstanceRequest::setDBInstanceClass(const std::string &dBInstanceClass) {
  dBInstanceClass_ = dBInstanceClass;
  setParameter(std::string("DBInstanceClass"), dBInstanceClass);
}

std::string RecoveryDBInstanceRequest::getDbNames() const {
  return dbNames_;
}

void RecoveryDBInstanceRequest::setDbNames(const std::string &dbNames) {
  dbNames_ = dbNames;
  setParameter(std::string("DbNames"), dbNames);
}

std::string RecoveryDBInstanceRequest::getVSwitchId() const {
  return vSwitchId_;
}

void RecoveryDBInstanceRequest::setVSwitchId(const std::string &vSwitchId) {
  vSwitchId_ = vSwitchId;
  setParameter(std::string("VSwitchId"), vSwitchId);
}

std::string RecoveryDBInstanceRequest::getPrivateIpAddress() const {
  return privateIpAddress_;
}

void RecoveryDBInstanceRequest::setPrivateIpAddress(const std::string &privateIpAddress) {
  privateIpAddress_ = privateIpAddress;
  setParameter(std::string("PrivateIpAddress"), privateIpAddress);
}

std::string RecoveryDBInstanceRequest::getTargetDBInstanceId() const {
  return targetDBInstanceId_;
}

void RecoveryDBInstanceRequest::setTargetDBInstanceId(const std::string &targetDBInstanceId) {
  targetDBInstanceId_ = targetDBInstanceId;
  setParameter(std::string("TargetDBInstanceId"), targetDBInstanceId);
}

std::string RecoveryDBInstanceRequest::getVPCId() const {
  return vPCId_;
}

void RecoveryDBInstanceRequest::setVPCId(const std::string &vPCId) {
  vPCId_ = vPCId;
  setParameter(std::string("VPCId"), vPCId);
}

std::string RecoveryDBInstanceRequest::getPayType() const {
  return payType_;
}

void RecoveryDBInstanceRequest::setPayType(const std::string &payType) {
  payType_ = payType;
  setParameter(std::string("PayType"), payType);
}

std::string RecoveryDBInstanceRequest::getInstanceNetworkType() const {
  return instanceNetworkType_;
}

void RecoveryDBInstanceRequest::setInstanceNetworkType(const std::string &instanceNetworkType) {
  instanceNetworkType_ = instanceNetworkType;
  setParameter(std::string("InstanceNetworkType"), instanceNetworkType);
}

