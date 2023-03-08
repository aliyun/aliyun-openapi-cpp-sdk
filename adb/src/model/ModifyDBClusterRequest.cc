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
    : RpcServiceRequest("adb", "2021-12-01", "ModifyDBCluster") {
  setMethod(HttpRequest::Method::Post);
}

ModifyDBClusterRequest::~ModifyDBClusterRequest() {}

std::string ModifyDBClusterRequest::getStorageResource() const {
  return storageResource_;
}

void ModifyDBClusterRequest::setStorageResource(const std::string &storageResource) {
  storageResource_ = storageResource;
  setParameter(std::string("StorageResource"), storageResource);
}

std::string ModifyDBClusterRequest::getRegionId() const {
  return regionId_;
}

void ModifyDBClusterRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
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

std::string ModifyDBClusterRequest::getComputeResource() const {
  return computeResource_;
}

void ModifyDBClusterRequest::setComputeResource(const std::string &computeResource) {
  computeResource_ = computeResource;
  setParameter(std::string("ComputeResource"), computeResource);
}

