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

CheckCreateDdrDBInstanceRequest::CheckCreateDdrDBInstanceRequest()
    : RpcServiceRequest("rds", "2014-08-15", "CheckCreateDdrDBInstance") {
  setMethod(HttpRequest::Method::Post);
}

CheckCreateDdrDBInstanceRequest::~CheckCreateDdrDBInstanceRequest() {}

long CheckCreateDdrDBInstanceRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void CheckCreateDdrDBInstanceRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

int CheckCreateDdrDBInstanceRequest::getDBInstanceStorage() const {
  return dBInstanceStorage_;
}

void CheckCreateDdrDBInstanceRequest::setDBInstanceStorage(int dBInstanceStorage) {
  dBInstanceStorage_ = dBInstanceStorage;
  setParameter(std::string("DBInstanceStorage"), std::to_string(dBInstanceStorage));
}

std::string CheckCreateDdrDBInstanceRequest::getSourceDBInstanceName() const {
  return sourceDBInstanceName_;
}

void CheckCreateDdrDBInstanceRequest::setSourceDBInstanceName(const std::string &sourceDBInstanceName) {
  sourceDBInstanceName_ = sourceDBInstanceName;
  setParameter(std::string("SourceDBInstanceName"), sourceDBInstanceName);
}

std::string CheckCreateDdrDBInstanceRequest::getHostType() const {
  return hostType_;
}

void CheckCreateDdrDBInstanceRequest::setHostType(const std::string &hostType) {
  hostType_ = hostType;
  setParameter(std::string("HostType"), hostType);
}

std::string CheckCreateDdrDBInstanceRequest::getBinlogRole() const {
  return binlogRole_;
}

void CheckCreateDdrDBInstanceRequest::setBinlogRole(const std::string &binlogRole) {
  binlogRole_ = binlogRole;
  setParameter(std::string("BinlogRole"), binlogRole);
}

std::string CheckCreateDdrDBInstanceRequest::getEngineVersion() const {
  return engineVersion_;
}

void CheckCreateDdrDBInstanceRequest::setEngineVersion(const std::string &engineVersion) {
  engineVersion_ = engineVersion;
  setParameter(std::string("EngineVersion"), engineVersion);
}

std::string CheckCreateDdrDBInstanceRequest::getUserBakSetURL() const {
  return userBakSetURL_;
}

void CheckCreateDdrDBInstanceRequest::setUserBakSetURL(const std::string &userBakSetURL) {
  userBakSetURL_ = userBakSetURL;
  setParameter(std::string("UserBakSetURL"), userBakSetURL);
}

std::string CheckCreateDdrDBInstanceRequest::getAccessKeyId() const {
  return accessKeyId_;
}

void CheckCreateDdrDBInstanceRequest::setAccessKeyId(const std::string &accessKeyId) {
  accessKeyId_ = accessKeyId;
  setParameter(std::string("AccessKeyId"), accessKeyId);
}

std::string CheckCreateDdrDBInstanceRequest::getResourceGroupId() const {
  return resourceGroupId_;
}

void CheckCreateDdrDBInstanceRequest::setResourceGroupId(const std::string &resourceGroupId) {
  resourceGroupId_ = resourceGroupId;
  setParameter(std::string("ResourceGroupId"), resourceGroupId);
}

std::string CheckCreateDdrDBInstanceRequest::getRegionId() const {
  return regionId_;
}

void CheckCreateDdrDBInstanceRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string CheckCreateDdrDBInstanceRequest::getEngine() const {
  return engine_;
}

void CheckCreateDdrDBInstanceRequest::setEngine(const std::string &engine) {
  engine_ = engine;
  setParameter(std::string("Engine"), engine);
}

std::string CheckCreateDdrDBInstanceRequest::getBackupSetRegion() const {
  return backupSetRegion_;
}

void CheckCreateDdrDBInstanceRequest::setBackupSetRegion(const std::string &backupSetRegion) {
  backupSetRegion_ = backupSetRegion;
  setParameter(std::string("BackupSetRegion"), backupSetRegion);
}

std::string CheckCreateDdrDBInstanceRequest::getBackupSetType() const {
  return backupSetType_;
}

void CheckCreateDdrDBInstanceRequest::setBackupSetType(const std::string &backupSetType) {
  backupSetType_ = backupSetType;
  setParameter(std::string("BackupSetType"), backupSetType);
}

std::string CheckCreateDdrDBInstanceRequest::getRestoreTime() const {
  return restoreTime_;
}

void CheckCreateDdrDBInstanceRequest::setRestoreTime(const std::string &restoreTime) {
  restoreTime_ = restoreTime;
  setParameter(std::string("RestoreTime"), restoreTime);
}

std::string CheckCreateDdrDBInstanceRequest::getBakSetName() const {
  return bakSetName_;
}

void CheckCreateDdrDBInstanceRequest::setBakSetName(const std::string &bakSetName) {
  bakSetName_ = bakSetName;
  setParameter(std::string("BakSetName"), bakSetName);
}

std::string CheckCreateDdrDBInstanceRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void CheckCreateDdrDBInstanceRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string CheckCreateDdrDBInstanceRequest::getBackupSetId() const {
  return backupSetId_;
}

void CheckCreateDdrDBInstanceRequest::setBackupSetId(const std::string &backupSetId) {
  backupSetId_ = backupSetId;
  setParameter(std::string("BackupSetId"), backupSetId);
}

long CheckCreateDdrDBInstanceRequest::getOwnerId() const {
  return ownerId_;
}

void CheckCreateDdrDBInstanceRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

std::string CheckCreateDdrDBInstanceRequest::getBinlogPosition() const {
  return binlogPosition_;
}

void CheckCreateDdrDBInstanceRequest::setBinlogPosition(const std::string &binlogPosition) {
  binlogPosition_ = binlogPosition;
  setParameter(std::string("BinlogPosition"), binlogPosition);
}

std::string CheckCreateDdrDBInstanceRequest::getDBInstanceClass() const {
  return dBInstanceClass_;
}

void CheckCreateDdrDBInstanceRequest::setDBInstanceClass(const std::string &dBInstanceClass) {
  dBInstanceClass_ = dBInstanceClass;
  setParameter(std::string("DBInstanceClass"), dBInstanceClass);
}

std::string CheckCreateDdrDBInstanceRequest::getRestoreType() const {
  return restoreType_;
}

void CheckCreateDdrDBInstanceRequest::setRestoreType(const std::string &restoreType) {
  restoreType_ = restoreType;
  setParameter(std::string("RestoreType"), restoreType);
}

std::string CheckCreateDdrDBInstanceRequest::getBinlogName() const {
  return binlogName_;
}

void CheckCreateDdrDBInstanceRequest::setBinlogName(const std::string &binlogName) {
  binlogName_ = binlogName;
  setParameter(std::string("BinlogName"), binlogName);
}

std::string CheckCreateDdrDBInstanceRequest::getSourceRegion() const {
  return sourceRegion_;
}

void CheckCreateDdrDBInstanceRequest::setSourceRegion(const std::string &sourceRegion) {
  sourceRegion_ = sourceRegion;
  setParameter(std::string("SourceRegion"), sourceRegion);
}

