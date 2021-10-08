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

#include <alibabacloud/ecs/model/CreateStorageSetRequest.h>

using AlibabaCloud::Ecs::Model::CreateStorageSetRequest;

CreateStorageSetRequest::CreateStorageSetRequest()
    : RpcServiceRequest("ecs", "2014-05-26", "CreateStorageSet") {
  setMethod(HttpRequest::Method::Post);
}

CreateStorageSetRequest::~CreateStorageSetRequest() {}

long CreateStorageSetRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void CreateStorageSetRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string CreateStorageSetRequest::getClientToken() const {
  return clientToken_;
}

void CreateStorageSetRequest::setClientToken(const std::string &clientToken) {
  clientToken_ = clientToken;
  setParameter(std::string("ClientToken"), clientToken);
}

int CreateStorageSetRequest::getMaxPartitionNumber() const {
  return maxPartitionNumber_;
}

void CreateStorageSetRequest::setMaxPartitionNumber(int maxPartitionNumber) {
  maxPartitionNumber_ = maxPartitionNumber;
  setParameter(std::string("MaxPartitionNumber"), std::to_string(maxPartitionNumber));
}

std::string CreateStorageSetRequest::getDescription() const {
  return description_;
}

void CreateStorageSetRequest::setDescription(const std::string &description) {
  description_ = description;
  setParameter(std::string("Description"), description);
}

std::string CreateStorageSetRequest::getRegionId() const {
  return regionId_;
}

void CreateStorageSetRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string CreateStorageSetRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void CreateStorageSetRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string CreateStorageSetRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void CreateStorageSetRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

long CreateStorageSetRequest::getOwnerId() const {
  return ownerId_;
}

void CreateStorageSetRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

std::string CreateStorageSetRequest::getZoneId() const {
  return zoneId_;
}

void CreateStorageSetRequest::setZoneId(const std::string &zoneId) {
  zoneId_ = zoneId;
  setParameter(std::string("ZoneId"), zoneId);
}

std::string CreateStorageSetRequest::getStorageSetName() const {
  return storageSetName_;
}

void CreateStorageSetRequest::setStorageSetName(const std::string &storageSetName) {
  storageSetName_ = storageSetName;
  setParameter(std::string("StorageSetName"), storageSetName);
}

