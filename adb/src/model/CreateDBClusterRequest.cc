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

#include <alibabacloud/adb/model/CreateDBClusterRequest.h>

using AlibabaCloud::Adb::Model::CreateDBClusterRequest;

CreateDBClusterRequest::CreateDBClusterRequest()
    : RpcServiceRequest("adb", "2019-03-15", "CreateDBCluster") {
  setMethod(HttpRequest::Method::Post);
}

CreateDBClusterRequest::~CreateDBClusterRequest() {}

long CreateDBClusterRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void CreateDBClusterRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string CreateDBClusterRequest::getDBClusterDescription() const {
  return dBClusterDescription_;
}

void CreateDBClusterRequest::setDBClusterDescription(const std::string &dBClusterDescription) {
  dBClusterDescription_ = dBClusterDescription;
  setParameter(std::string("DBClusterDescription"), dBClusterDescription);
}

std::string CreateDBClusterRequest::getStorageType() const {
  return storageType_;
}

void CreateDBClusterRequest::setStorageType(const std::string &storageType) {
  storageType_ = storageType;
  setParameter(std::string("StorageType"), storageType);
}

std::string CreateDBClusterRequest::getMode() const {
  return mode_;
}

void CreateDBClusterRequest::setMode(const std::string &mode) {
  mode_ = mode;
  setParameter(std::string("Mode"), mode);
}

std::string CreateDBClusterRequest::getResourceGroupId() const {
  return resourceGroupId_;
}

void CreateDBClusterRequest::setResourceGroupId(const std::string &resourceGroupId) {
  resourceGroupId_ = resourceGroupId;
  setParameter(std::string("ResourceGroupId"), resourceGroupId);
}

std::vector<CreateDBClusterRequest::Tag> CreateDBClusterRequest::getTag() const {
  return tag_;
}

void CreateDBClusterRequest::setTag(const std::vector<CreateDBClusterRequest::Tag> &tag) {
  tag_ = tag;
  for(int dep1 = 0; dep1 != tag.size(); dep1++) {
  auto tagObj = tag.at(dep1);
  std::string tagObjStr = std::string("Tag") + "." + std::to_string(dep1 + 1);
    setParameter(tagObjStr + ".Value", tagObj.value);
    setParameter(tagObjStr + ".Key", tagObj.key);
  }
}

std::string CreateDBClusterRequest::getPeriod() const {
  return period_;
}

void CreateDBClusterRequest::setPeriod(const std::string &period) {
  period_ = period;
  setParameter(std::string("Period"), period);
}

std::string CreateDBClusterRequest::getBackupSetID() const {
  return backupSetID_;
}

void CreateDBClusterRequest::setBackupSetID(const std::string &backupSetID) {
  backupSetID_ = backupSetID;
  setParameter(std::string("BackupSetID"), backupSetID);
}

long CreateDBClusterRequest::getOwnerId() const {
  return ownerId_;
}

void CreateDBClusterRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

std::string CreateDBClusterRequest::getDBNodeGroupCount() const {
  return dBNodeGroupCount_;
}

void CreateDBClusterRequest::setDBNodeGroupCount(const std::string &dBNodeGroupCount) {
  dBNodeGroupCount_ = dBNodeGroupCount;
  setParameter(std::string("DBNodeGroupCount"), dBNodeGroupCount);
}

std::string CreateDBClusterRequest::getVSwitchId() const {
  return vSwitchId_;
}

void CreateDBClusterRequest::setVSwitchId(const std::string &vSwitchId) {
  vSwitchId_ = vSwitchId;
  setParameter(std::string("VSwitchId"), vSwitchId);
}

std::string CreateDBClusterRequest::getZoneId() const {
  return zoneId_;
}

void CreateDBClusterRequest::setZoneId(const std::string &zoneId) {
  zoneId_ = zoneId;
  setParameter(std::string("ZoneId"), zoneId);
}

std::string CreateDBClusterRequest::getComputeResource() const {
  return computeResource_;
}

void CreateDBClusterRequest::setComputeResource(const std::string &computeResource) {
  computeResource_ = computeResource;
  setParameter(std::string("ComputeResource"), computeResource);
}

std::string CreateDBClusterRequest::getElasticIOResource() const {
  return elasticIOResource_;
}

void CreateDBClusterRequest::setElasticIOResource(const std::string &elasticIOResource) {
  elasticIOResource_ = elasticIOResource;
  setParameter(std::string("ElasticIOResource"), elasticIOResource);
}

std::string CreateDBClusterRequest::getSourceDBInstanceName() const {
  return sourceDBInstanceName_;
}

void CreateDBClusterRequest::setSourceDBInstanceName(const std::string &sourceDBInstanceName) {
  sourceDBInstanceName_ = sourceDBInstanceName;
  setParameter(std::string("SourceDBInstanceName"), sourceDBInstanceName);
}

std::string CreateDBClusterRequest::getClientToken() const {
  return clientToken_;
}

void CreateDBClusterRequest::setClientToken(const std::string &clientToken) {
  clientToken_ = clientToken;
  setParameter(std::string("ClientToken"), clientToken);
}

std::string CreateDBClusterRequest::getAccessKeyId() const {
  return accessKeyId_;
}

void CreateDBClusterRequest::setAccessKeyId(const std::string &accessKeyId) {
  accessKeyId_ = accessKeyId;
  setParameter(std::string("AccessKeyId"), accessKeyId);
}

std::string CreateDBClusterRequest::getStorageResource() const {
  return storageResource_;
}

void CreateDBClusterRequest::setStorageResource(const std::string &storageResource) {
  storageResource_ = storageResource;
  setParameter(std::string("StorageResource"), storageResource);
}

std::string CreateDBClusterRequest::getRegionId() const {
  return regionId_;
}

void CreateDBClusterRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string CreateDBClusterRequest::getDBClusterCategory() const {
  return dBClusterCategory_;
}

void CreateDBClusterRequest::setDBClusterCategory(const std::string &dBClusterCategory) {
  dBClusterCategory_ = dBClusterCategory;
  setParameter(std::string("DBClusterCategory"), dBClusterCategory);
}

std::string CreateDBClusterRequest::getDBClusterNetworkType() const {
  return dBClusterNetworkType_;
}

void CreateDBClusterRequest::setDBClusterNetworkType(const std::string &dBClusterNetworkType) {
  dBClusterNetworkType_ = dBClusterNetworkType;
  setParameter(std::string("DBClusterNetworkType"), dBClusterNetworkType);
}

std::string CreateDBClusterRequest::getRestoreTime() const {
  return restoreTime_;
}

void CreateDBClusterRequest::setRestoreTime(const std::string &restoreTime) {
  restoreTime_ = restoreTime;
  setParameter(std::string("RestoreTime"), restoreTime);
}

std::string CreateDBClusterRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void CreateDBClusterRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string CreateDBClusterRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void CreateDBClusterRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

std::string CreateDBClusterRequest::getDBClusterVersion() const {
  return dBClusterVersion_;
}

void CreateDBClusterRequest::setDBClusterVersion(const std::string &dBClusterVersion) {
  dBClusterVersion_ = dBClusterVersion;
  setParameter(std::string("DBClusterVersion"), dBClusterVersion);
}

std::string CreateDBClusterRequest::getDBClusterClass() const {
  return dBClusterClass_;
}

void CreateDBClusterRequest::setDBClusterClass(const std::string &dBClusterClass) {
  dBClusterClass_ = dBClusterClass;
  setParameter(std::string("DBClusterClass"), dBClusterClass);
}

std::string CreateDBClusterRequest::getUsedTime() const {
  return usedTime_;
}

void CreateDBClusterRequest::setUsedTime(const std::string &usedTime) {
  usedTime_ = usedTime;
  setParameter(std::string("UsedTime"), usedTime);
}

std::string CreateDBClusterRequest::getRestoreType() const {
  return restoreType_;
}

void CreateDBClusterRequest::setRestoreType(const std::string &restoreType) {
  restoreType_ = restoreType;
  setParameter(std::string("RestoreType"), restoreType);
}

std::string CreateDBClusterRequest::getDBNodeStorage() const {
  return dBNodeStorage_;
}

void CreateDBClusterRequest::setDBNodeStorage(const std::string &dBNodeStorage) {
  dBNodeStorage_ = dBNodeStorage;
  setParameter(std::string("DBNodeStorage"), dBNodeStorage);
}

std::string CreateDBClusterRequest::getExecutorCount() const {
  return executorCount_;
}

void CreateDBClusterRequest::setExecutorCount(const std::string &executorCount) {
  executorCount_ = executorCount;
  setParameter(std::string("ExecutorCount"), executorCount);
}

std::string CreateDBClusterRequest::getVPCId() const {
  return vPCId_;
}

void CreateDBClusterRequest::setVPCId(const std::string &vPCId) {
  vPCId_ = vPCId;
  setParameter(std::string("VPCId"), vPCId);
}

std::string CreateDBClusterRequest::getPayType() const {
  return payType_;
}

void CreateDBClusterRequest::setPayType(const std::string &payType) {
  payType_ = payType;
  setParameter(std::string("PayType"), payType);
}

