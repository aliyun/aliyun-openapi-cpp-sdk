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

#include <alibabacloud/ecs/model/ModifyStorageSetAttributeRequest.h>

using AlibabaCloud::Ecs::Model::ModifyStorageSetAttributeRequest;

ModifyStorageSetAttributeRequest::ModifyStorageSetAttributeRequest()
    : RpcServiceRequest("ecs", "2014-05-26", "ModifyStorageSetAttribute") {
  setMethod(HttpRequest::Method::Post);
}

ModifyStorageSetAttributeRequest::~ModifyStorageSetAttributeRequest() {}

long ModifyStorageSetAttributeRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void ModifyStorageSetAttributeRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string ModifyStorageSetAttributeRequest::getClientToken() const {
  return clientToken_;
}

void ModifyStorageSetAttributeRequest::setClientToken(const std::string &clientToken) {
  clientToken_ = clientToken;
  setParameter(std::string("ClientToken"), clientToken);
}

std::string ModifyStorageSetAttributeRequest::getDescription() const {
  return description_;
}

void ModifyStorageSetAttributeRequest::setDescription(const std::string &description) {
  description_ = description;
  setParameter(std::string("Description"), description);
}

std::string ModifyStorageSetAttributeRequest::getRegionId() const {
  return regionId_;
}

void ModifyStorageSetAttributeRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string ModifyStorageSetAttributeRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void ModifyStorageSetAttributeRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string ModifyStorageSetAttributeRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void ModifyStorageSetAttributeRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

long ModifyStorageSetAttributeRequest::getOwnerId() const {
  return ownerId_;
}

void ModifyStorageSetAttributeRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

std::string ModifyStorageSetAttributeRequest::getStorageSetId() const {
  return storageSetId_;
}

void ModifyStorageSetAttributeRequest::setStorageSetId(const std::string &storageSetId) {
  storageSetId_ = storageSetId;
  setParameter(std::string("StorageSetId"), storageSetId);
}

std::string ModifyStorageSetAttributeRequest::getStorageSetName() const {
  return storageSetName_;
}

void ModifyStorageSetAttributeRequest::setStorageSetName(const std::string &storageSetName) {
  storageSetName_ = storageSetName;
  setParameter(std::string("StorageSetName"), storageSetName);
}

