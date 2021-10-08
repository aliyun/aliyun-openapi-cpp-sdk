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

#include <alibabacloud/ecs/model/ModifyStorageCapacityUnitAttributeRequest.h>

using AlibabaCloud::Ecs::Model::ModifyStorageCapacityUnitAttributeRequest;

ModifyStorageCapacityUnitAttributeRequest::ModifyStorageCapacityUnitAttributeRequest()
    : RpcServiceRequest("ecs", "2014-05-26", "ModifyStorageCapacityUnitAttribute") {
  setMethod(HttpRequest::Method::Post);
}

ModifyStorageCapacityUnitAttributeRequest::~ModifyStorageCapacityUnitAttributeRequest() {}

long ModifyStorageCapacityUnitAttributeRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void ModifyStorageCapacityUnitAttributeRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string ModifyStorageCapacityUnitAttributeRequest::getDescription() const {
  return description_;
}

void ModifyStorageCapacityUnitAttributeRequest::setDescription(const std::string &description) {
  description_ = description;
  setParameter(std::string("Description"), description);
}

std::string ModifyStorageCapacityUnitAttributeRequest::getStorageCapacityUnitId() const {
  return storageCapacityUnitId_;
}

void ModifyStorageCapacityUnitAttributeRequest::setStorageCapacityUnitId(const std::string &storageCapacityUnitId) {
  storageCapacityUnitId_ = storageCapacityUnitId;
  setParameter(std::string("StorageCapacityUnitId"), storageCapacityUnitId);
}

std::string ModifyStorageCapacityUnitAttributeRequest::getRegionId() const {
  return regionId_;
}

void ModifyStorageCapacityUnitAttributeRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string ModifyStorageCapacityUnitAttributeRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void ModifyStorageCapacityUnitAttributeRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string ModifyStorageCapacityUnitAttributeRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void ModifyStorageCapacityUnitAttributeRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

long ModifyStorageCapacityUnitAttributeRequest::getOwnerId() const {
  return ownerId_;
}

void ModifyStorageCapacityUnitAttributeRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

std::string ModifyStorageCapacityUnitAttributeRequest::getName() const {
  return name_;
}

void ModifyStorageCapacityUnitAttributeRequest::setName(const std::string &name) {
  name_ = name;
  setParameter(std::string("Name"), name);
}

