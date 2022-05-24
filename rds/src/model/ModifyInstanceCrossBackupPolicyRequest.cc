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

#include <alibabacloud/rds/model/ModifyInstanceCrossBackupPolicyRequest.h>

using AlibabaCloud::Rds::Model::ModifyInstanceCrossBackupPolicyRequest;

ModifyInstanceCrossBackupPolicyRequest::ModifyInstanceCrossBackupPolicyRequest()
    : RpcServiceRequest("rds", "2014-08-15", "ModifyInstanceCrossBackupPolicy") {
  setMethod(HttpRequest::Method::Post);
}

ModifyInstanceCrossBackupPolicyRequest::~ModifyInstanceCrossBackupPolicyRequest() {}

long ModifyInstanceCrossBackupPolicyRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void ModifyInstanceCrossBackupPolicyRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

int ModifyInstanceCrossBackupPolicyRequest::getRetentType() const {
  return retentType_;
}

void ModifyInstanceCrossBackupPolicyRequest::setRetentType(int retentType) {
  retentType_ = retentType;
  setParameter(std::string("RetentType"), std::to_string(retentType));
}

std::string ModifyInstanceCrossBackupPolicyRequest::getBackupEnabled() const {
  return backupEnabled_;
}

void ModifyInstanceCrossBackupPolicyRequest::setBackupEnabled(const std::string &backupEnabled) {
  backupEnabled_ = backupEnabled;
  setParameter(std::string("BackupEnabled"), backupEnabled);
}

std::string ModifyInstanceCrossBackupPolicyRequest::getRelService() const {
  return relService_;
}

void ModifyInstanceCrossBackupPolicyRequest::setRelService(const std::string &relService) {
  relService_ = relService;
  setParameter(std::string("RelService"), relService);
}

std::string ModifyInstanceCrossBackupPolicyRequest::getStorageType() const {
  return storageType_;
}

void ModifyInstanceCrossBackupPolicyRequest::setStorageType(const std::string &storageType) {
  storageType_ = storageType;
  setParameter(std::string("StorageType"), storageType);
}

std::string ModifyInstanceCrossBackupPolicyRequest::getAccessKeyId() const {
  return accessKeyId_;
}

void ModifyInstanceCrossBackupPolicyRequest::setAccessKeyId(const std::string &accessKeyId) {
  accessKeyId_ = accessKeyId;
  setParameter(std::string("AccessKeyId"), accessKeyId);
}

std::string ModifyInstanceCrossBackupPolicyRequest::getEndpoint() const {
  return endpoint_;
}

void ModifyInstanceCrossBackupPolicyRequest::setEndpoint(const std::string &endpoint) {
  endpoint_ = endpoint;
  setParameter(std::string("Endpoint"), endpoint);
}

std::string ModifyInstanceCrossBackupPolicyRequest::getRegionId() const {
  return regionId_;
}

void ModifyInstanceCrossBackupPolicyRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string ModifyInstanceCrossBackupPolicyRequest::getDBInstanceId() const {
  return dBInstanceId_;
}

void ModifyInstanceCrossBackupPolicyRequest::setDBInstanceId(const std::string &dBInstanceId) {
  dBInstanceId_ = dBInstanceId;
  setParameter(std::string("DBInstanceId"), dBInstanceId);
}

int ModifyInstanceCrossBackupPolicyRequest::getRetention() const {
  return retention_;
}

void ModifyInstanceCrossBackupPolicyRequest::setRetention(int retention) {
  retention_ = retention;
  setParameter(std::string("Retention"), std::to_string(retention));
}

std::string ModifyInstanceCrossBackupPolicyRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void ModifyInstanceCrossBackupPolicyRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string ModifyInstanceCrossBackupPolicyRequest::getCrossBackupType() const {
  return crossBackupType_;
}

void ModifyInstanceCrossBackupPolicyRequest::setCrossBackupType(const std::string &crossBackupType) {
  crossBackupType_ = crossBackupType;
  setParameter(std::string("CrossBackupType"), crossBackupType);
}

std::string ModifyInstanceCrossBackupPolicyRequest::getLogBackupEnabled() const {
  return logBackupEnabled_;
}

void ModifyInstanceCrossBackupPolicyRequest::setLogBackupEnabled(const std::string &logBackupEnabled) {
  logBackupEnabled_ = logBackupEnabled;
  setParameter(std::string("LogBackupEnabled"), logBackupEnabled);
}

long ModifyInstanceCrossBackupPolicyRequest::getOwnerId() const {
  return ownerId_;
}

void ModifyInstanceCrossBackupPolicyRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

std::string ModifyInstanceCrossBackupPolicyRequest::getCrossBackupRegion() const {
  return crossBackupRegion_;
}

void ModifyInstanceCrossBackupPolicyRequest::setCrossBackupRegion(const std::string &crossBackupRegion) {
  crossBackupRegion_ = crossBackupRegion;
  setParameter(std::string("CrossBackupRegion"), crossBackupRegion);
}

std::string ModifyInstanceCrossBackupPolicyRequest::getStorageOwner() const {
  return storageOwner_;
}

void ModifyInstanceCrossBackupPolicyRequest::setStorageOwner(const std::string &storageOwner) {
  storageOwner_ = storageOwner;
  setParameter(std::string("StorageOwner"), storageOwner);
}

