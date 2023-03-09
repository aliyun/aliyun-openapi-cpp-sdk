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

#include <alibabacloud/adb/model/ModifyDBClusterRequest.h>

using AlibabaCloud::Adb::Model::ModifyDBClusterRequest;

ModifyDBClusterRequest::ModifyDBClusterRequest()
    : RpcServiceRequest("adb", "2019-03-15", "ModifyDBCluster") {
  setMethod(HttpRequest::Method::Post);
}

ModifyDBClusterRequest::~ModifyDBClusterRequest() {}

std::string ModifyDBClusterRequest::getElasticIOResourceSize() const {
  return elasticIOResourceSize_;
}

void ModifyDBClusterRequest::setElasticIOResourceSize(const std::string &elasticIOResourceSize) {
  elasticIOResourceSize_ = elasticIOResourceSize;
  setParameter(std::string("ElasticIOResourceSize"), elasticIOResourceSize);
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

std::string ModifyDBClusterRequest::getMode() const {
  return mode_;
}

void ModifyDBClusterRequest::setMode(const std::string &mode) {
  mode_ = mode;
  setParameter(std::string("Mode"), mode);
}

std::string ModifyDBClusterRequest::getStorageResource() const {
  return storageResource_;
}

void ModifyDBClusterRequest::setStorageResource(const std::string &storageResource) {
  storageResource_ = storageResource;
  setParameter(std::string("StorageResource"), storageResource);
}

std::string ModifyDBClusterRequest::getDBNodeClass() const {
  return dBNodeClass_;
}

void ModifyDBClusterRequest::setDBNodeClass(const std::string &dBNodeClass) {
  dBNodeClass_ = dBNodeClass;
  setParameter(std::string("DBNodeClass"), dBNodeClass);
}

std::string ModifyDBClusterRequest::getRegionId() const {
  return regionId_;
}

void ModifyDBClusterRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string ModifyDBClusterRequest::getDBClusterCategory() const {
  return dBClusterCategory_;
}

void ModifyDBClusterRequest::setDBClusterCategory(const std::string &dBClusterCategory) {
  dBClusterCategory_ = dBClusterCategory;
  setParameter(std::string("DBClusterCategory"), dBClusterCategory);
}

std::string ModifyDBClusterRequest::getDiskPerformanceLevel() const {
  return diskPerformanceLevel_;
}

void ModifyDBClusterRequest::setDiskPerformanceLevel(const std::string &diskPerformanceLevel) {
  diskPerformanceLevel_ = diskPerformanceLevel;
  setParameter(std::string("DiskPerformanceLevel"), diskPerformanceLevel);
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

long ModifyDBClusterRequest::getOwnerId() const {
  return ownerId_;
}

void ModifyDBClusterRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

std::string ModifyDBClusterRequest::getDBNodeGroupCount() const {
  return dBNodeGroupCount_;
}

void ModifyDBClusterRequest::setDBNodeGroupCount(const std::string &dBNodeGroupCount) {
  dBNodeGroupCount_ = dBNodeGroupCount;
  setParameter(std::string("DBNodeGroupCount"), dBNodeGroupCount);
}

std::string ModifyDBClusterRequest::getDBNodeStorage() const {
  return dBNodeStorage_;
}

void ModifyDBClusterRequest::setDBNodeStorage(const std::string &dBNodeStorage) {
  dBNodeStorage_ = dBNodeStorage;
  setParameter(std::string("DBNodeStorage"), dBNodeStorage);
}

std::string ModifyDBClusterRequest::getExecutorCount() const {
  return executorCount_;
}

void ModifyDBClusterRequest::setExecutorCount(const std::string &executorCount) {
  executorCount_ = executorCount;
  setParameter(std::string("ExecutorCount"), executorCount);
}

std::string ModifyDBClusterRequest::getModifyType() const {
  return modifyType_;
}

void ModifyDBClusterRequest::setModifyType(const std::string &modifyType) {
  modifyType_ = modifyType;
  setParameter(std::string("ModifyType"), modifyType);
}

std::string ModifyDBClusterRequest::getComputeResource() const {
  return computeResource_;
}

void ModifyDBClusterRequest::setComputeResource(const std::string &computeResource) {
  computeResource_ = computeResource;
  setParameter(std::string("ComputeResource"), computeResource);
}

int ModifyDBClusterRequest::getElasticIOResource() const {
  return elasticIOResource_;
}

void ModifyDBClusterRequest::setElasticIOResource(int elasticIOResource) {
  elasticIOResource_ = elasticIOResource;
  setParameter(std::string("ElasticIOResource"), std::to_string(elasticIOResource));
}

