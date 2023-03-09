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

#include <alibabacloud/polardb/model/ModifyDBClusterStorageSpaceRequest.h>

using AlibabaCloud::Polardb::Model::ModifyDBClusterStorageSpaceRequest;

ModifyDBClusterStorageSpaceRequest::ModifyDBClusterStorageSpaceRequest()
    : RpcServiceRequest("polardb", "2017-08-01", "ModifyDBClusterStorageSpace") {
  setMethod(HttpRequest::Method::Post);
}

ModifyDBClusterStorageSpaceRequest::~ModifyDBClusterStorageSpaceRequest() {}

long ModifyDBClusterStorageSpaceRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void ModifyDBClusterStorageSpaceRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string ModifyDBClusterStorageSpaceRequest::getClientToken() const {
  return clientToken_;
}

void ModifyDBClusterStorageSpaceRequest::setClientToken(const std::string &clientToken) {
  clientToken_ = clientToken;
  setParameter(std::string("ClientToken"), clientToken);
}

std::string ModifyDBClusterStorageSpaceRequest::getPlannedEndTime() const {
  return plannedEndTime_;
}

void ModifyDBClusterStorageSpaceRequest::setPlannedEndTime(const std::string &plannedEndTime) {
  plannedEndTime_ = plannedEndTime;
  setParameter(std::string("PlannedEndTime"), plannedEndTime);
}

std::string ModifyDBClusterStorageSpaceRequest::getAccessKeyId() const {
  return accessKeyId_;
}

void ModifyDBClusterStorageSpaceRequest::setAccessKeyId(const std::string &accessKeyId) {
  accessKeyId_ = accessKeyId;
  setParameter(std::string("AccessKeyId"), accessKeyId);
}

std::string ModifyDBClusterStorageSpaceRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void ModifyDBClusterStorageSpaceRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string ModifyDBClusterStorageSpaceRequest::getDBClusterId() const {
  return dBClusterId_;
}

void ModifyDBClusterStorageSpaceRequest::setDBClusterId(const std::string &dBClusterId) {
  dBClusterId_ = dBClusterId;
  setParameter(std::string("DBClusterId"), dBClusterId);
}

std::string ModifyDBClusterStorageSpaceRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void ModifyDBClusterStorageSpaceRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

long ModifyDBClusterStorageSpaceRequest::getOwnerId() const {
  return ownerId_;
}

void ModifyDBClusterStorageSpaceRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

std::string ModifyDBClusterStorageSpaceRequest::getPlannedStartTime() const {
  return plannedStartTime_;
}

void ModifyDBClusterStorageSpaceRequest::setPlannedStartTime(const std::string &plannedStartTime) {
  plannedStartTime_ = plannedStartTime;
  setParameter(std::string("PlannedStartTime"), plannedStartTime);
}

std::string ModifyDBClusterStorageSpaceRequest::getSubCategory() const {
  return subCategory_;
}

void ModifyDBClusterStorageSpaceRequest::setSubCategory(const std::string &subCategory) {
  subCategory_ = subCategory;
  setParameter(std::string("SubCategory"), subCategory);
}

long ModifyDBClusterStorageSpaceRequest::getStorageSpace() const {
  return storageSpace_;
}

void ModifyDBClusterStorageSpaceRequest::setStorageSpace(long storageSpace) {
  storageSpace_ = storageSpace;
  setParameter(std::string("StorageSpace"), std::to_string(storageSpace));
}

