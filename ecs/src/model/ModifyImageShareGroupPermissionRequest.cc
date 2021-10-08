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

#include <alibabacloud/ecs/model/ModifyImageShareGroupPermissionRequest.h>

using AlibabaCloud::Ecs::Model::ModifyImageShareGroupPermissionRequest;

ModifyImageShareGroupPermissionRequest::ModifyImageShareGroupPermissionRequest()
    : RpcServiceRequest("ecs", "2014-05-26", "ModifyImageShareGroupPermission") {
  setMethod(HttpRequest::Method::Post);
}

ModifyImageShareGroupPermissionRequest::~ModifyImageShareGroupPermissionRequest() {}

long ModifyImageShareGroupPermissionRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void ModifyImageShareGroupPermissionRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string ModifyImageShareGroupPermissionRequest::getImageId() const {
  return imageId_;
}

void ModifyImageShareGroupPermissionRequest::setImageId(const std::string &imageId) {
  imageId_ = imageId;
  setParameter(std::string("ImageId"), imageId);
}

std::string ModifyImageShareGroupPermissionRequest::getAddGroup1() const {
  return addGroup1_;
}

void ModifyImageShareGroupPermissionRequest::setAddGroup1(const std::string &addGroup1) {
  addGroup1_ = addGroup1;
  setParameter(std::string("AddGroup.1"), addGroup1);
}

std::string ModifyImageShareGroupPermissionRequest::getRegionId() const {
  return regionId_;
}

void ModifyImageShareGroupPermissionRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string ModifyImageShareGroupPermissionRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void ModifyImageShareGroupPermissionRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string ModifyImageShareGroupPermissionRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void ModifyImageShareGroupPermissionRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

long ModifyImageShareGroupPermissionRequest::getOwnerId() const {
  return ownerId_;
}

void ModifyImageShareGroupPermissionRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

std::string ModifyImageShareGroupPermissionRequest::getRemoveGroup1() const {
  return removeGroup1_;
}

void ModifyImageShareGroupPermissionRequest::setRemoveGroup1(const std::string &removeGroup1) {
  removeGroup1_ = removeGroup1;
  setParameter(std::string("RemoveGroup.1"), removeGroup1);
}

