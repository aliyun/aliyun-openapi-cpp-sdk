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

#include <alibabacloud/polardb/model/ModifyDBClusterRequest.h>

using AlibabaCloud::Polardb::Model::ModifyDBClusterRequest;

ModifyDBClusterRequest::ModifyDBClusterRequest()
    : RpcServiceRequest("polardb", "2017-08-01", "ModifyDBCluster") {
  setMethod(HttpRequest::Method::Post);
}

ModifyDBClusterRequest::~ModifyDBClusterRequest() {}

std::string ModifyDBClusterRequest::getModifyRowCompression() const {
  return modifyRowCompression_;
}

void ModifyDBClusterRequest::setModifyRowCompression(const std::string &modifyRowCompression) {
  modifyRowCompression_ = modifyRowCompression;
  setParameter(std::string("ModifyRowCompression"), modifyRowCompression);
}

long ModifyDBClusterRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void ModifyDBClusterRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string ModifyDBClusterRequest::getAccessKeyId() const {
  return accessKeyId_;
}

void ModifyDBClusterRequest::setAccessKeyId(const std::string &accessKeyId) {
  accessKeyId_ = accessKeyId;
  setParameter(std::string("AccessKeyId"), accessKeyId);
}

std::string ModifyDBClusterRequest::getTableMeta() const {
  return tableMeta_;
}

void ModifyDBClusterRequest::setTableMeta(const std::string &tableMeta) {
  tableMeta_ = tableMeta;
  setParameter(std::string("TableMeta"), tableMeta);
}

std::string ModifyDBClusterRequest::getStandbyHAMode() const {
  return standbyHAMode_;
}

void ModifyDBClusterRequest::setStandbyHAMode(const std::string &standbyHAMode) {
  standbyHAMode_ = standbyHAMode;
  setParameter(std::string("StandbyHAMode"), standbyHAMode);
}

std::string ModifyDBClusterRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void ModifyDBClusterRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string ModifyDBClusterRequest::getDBClusterId() const {
  return dBClusterId_;
}

void ModifyDBClusterRequest::setDBClusterId(const std::string &dBClusterId) {
  dBClusterId_ = dBClusterId;
  setParameter(std::string("DBClusterId"), dBClusterId);
}

std::string ModifyDBClusterRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void ModifyDBClusterRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

std::string ModifyDBClusterRequest::getDBNodeCrashList() const {
  return dBNodeCrashList_;
}

void ModifyDBClusterRequest::setDBNodeCrashList(const std::string &dBNodeCrashList) {
  dBNodeCrashList_ = dBNodeCrashList;
  setParameter(std::string("DBNodeCrashList"), dBNodeCrashList);
}

std::string ModifyDBClusterRequest::getFaultSimulateMode() const {
  return faultSimulateMode_;
}

void ModifyDBClusterRequest::setFaultSimulateMode(const std::string &faultSimulateMode) {
  faultSimulateMode_ = faultSimulateMode;
  setParameter(std::string("FaultSimulateMode"), faultSimulateMode);
}

long ModifyDBClusterRequest::getOwnerId() const {
  return ownerId_;
}

void ModifyDBClusterRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

std::string ModifyDBClusterRequest::getCompressStorage() const {
  return compressStorage_;
}

void ModifyDBClusterRequest::setCompressStorage(const std::string &compressStorage) {
  compressStorage_ = compressStorage;
  setParameter(std::string("CompressStorage"), compressStorage);
}

long ModifyDBClusterRequest::getStorageUpperBound() const {
  return storageUpperBound_;
}

void ModifyDBClusterRequest::setStorageUpperBound(long storageUpperBound) {
  storageUpperBound_ = storageUpperBound;
  setParameter(std::string("StorageUpperBound"), std::to_string(storageUpperBound));
}

std::string ModifyDBClusterRequest::getPreferredSimulateStartTime() const {
  return preferredSimulateStartTime_;
}

void ModifyDBClusterRequest::setPreferredSimulateStartTime(const std::string &preferredSimulateStartTime) {
  preferredSimulateStartTime_ = preferredSimulateStartTime;
  setParameter(std::string("PreferredSimulateStartTime"), preferredSimulateStartTime);
}

std::string ModifyDBClusterRequest::getImciAutoIndex() const {
  return imciAutoIndex_;
}

void ModifyDBClusterRequest::setImciAutoIndex(const std::string &imciAutoIndex) {
  imciAutoIndex_ = imciAutoIndex;
  setParameter(std::string("ImciAutoIndex"), imciAutoIndex);
}

std::string ModifyDBClusterRequest::getStorageAutoScale() const {
  return storageAutoScale_;
}

void ModifyDBClusterRequest::setStorageAutoScale(const std::string &storageAutoScale) {
  storageAutoScale_ = storageAutoScale;
  setParameter(std::string("StorageAutoScale"), storageAutoScale);
}

std::string ModifyDBClusterRequest::getFaultInjectionType() const {
  return faultInjectionType_;
}

void ModifyDBClusterRequest::setFaultInjectionType(const std::string &faultInjectionType) {
  faultInjectionType_ = faultInjectionType;
  setParameter(std::string("FaultInjectionType"), faultInjectionType);
}

std::string ModifyDBClusterRequest::getDataSyncMode() const {
  return dataSyncMode_;
}

void ModifyDBClusterRequest::setDataSyncMode(const std::string &dataSyncMode) {
  dataSyncMode_ = dataSyncMode;
  setParameter(std::string("DataSyncMode"), dataSyncMode);
}

