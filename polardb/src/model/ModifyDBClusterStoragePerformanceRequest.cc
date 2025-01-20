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

#include <alibabacloud/polardb/model/ModifyDBClusterStoragePerformanceRequest.h>

using AlibabaCloud::Polardb::Model::ModifyDBClusterStoragePerformanceRequest;

ModifyDBClusterStoragePerformanceRequest::ModifyDBClusterStoragePerformanceRequest()
    : RpcServiceRequest("polardb", "2017-08-01", "ModifyDBClusterStoragePerformance") {
  setMethod(HttpRequest::Method::Post);
}

ModifyDBClusterStoragePerformanceRequest::~ModifyDBClusterStoragePerformanceRequest() {}

long ModifyDBClusterStoragePerformanceRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void ModifyDBClusterStoragePerformanceRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string ModifyDBClusterStoragePerformanceRequest::getClientToken() const {
  return clientToken_;
}

void ModifyDBClusterStoragePerformanceRequest::setClientToken(const std::string &clientToken) {
  clientToken_ = clientToken;
  setParameter(std::string("ClientToken"), clientToken);
}

std::string ModifyDBClusterStoragePerformanceRequest::getStorageType() const {
  return storageType_;
}

void ModifyDBClusterStoragePerformanceRequest::setStorageType(const std::string &storageType) {
  storageType_ = storageType;
  setParameter(std::string("StorageType"), storageType);
}

std::string ModifyDBClusterStoragePerformanceRequest::getAccessKeyId() const {
  return accessKeyId_;
}

void ModifyDBClusterStoragePerformanceRequest::setAccessKeyId(const std::string &accessKeyId) {
  accessKeyId_ = accessKeyId;
  setParameter(std::string("AccessKeyId"), accessKeyId);
}

std::string ModifyDBClusterStoragePerformanceRequest::getDBClusterId() const {
  return dBClusterId_;
}

void ModifyDBClusterStoragePerformanceRequest::setDBClusterId(const std::string &dBClusterId) {
  dBClusterId_ = dBClusterId;
  setParameter(std::string("DBClusterId"), dBClusterId);
}

std::string ModifyDBClusterStoragePerformanceRequest::getBurstingEnabled() const {
  return burstingEnabled_;
}

void ModifyDBClusterStoragePerformanceRequest::setBurstingEnabled(const std::string &burstingEnabled) {
  burstingEnabled_ = burstingEnabled;
  setParameter(std::string("BurstingEnabled"), burstingEnabled);
}

int ModifyDBClusterStoragePerformanceRequest::getProvisionedIops() const {
  return provisionedIops_;
}

void ModifyDBClusterStoragePerformanceRequest::setProvisionedIops(int provisionedIops) {
  provisionedIops_ = provisionedIops;
  setParameter(std::string("ProvisionedIops"), std::to_string(provisionedIops));
}

std::string ModifyDBClusterStoragePerformanceRequest::getModifyType() const {
  return modifyType_;
}

void ModifyDBClusterStoragePerformanceRequest::setModifyType(const std::string &modifyType) {
  modifyType_ = modifyType;
  setParameter(std::string("ModifyType"), modifyType);
}

