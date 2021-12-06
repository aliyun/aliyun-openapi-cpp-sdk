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

#include <alibabacloud/ecs/model/ModifyImageSharePermissionRequest.h>

using AlibabaCloud::Ecs::Model::ModifyImageSharePermissionRequest;

ModifyImageSharePermissionRequest::ModifyImageSharePermissionRequest()
    : RpcServiceRequest("ecs", "2014-05-26", "ModifyImageSharePermission") {
  setMethod(HttpRequest::Method::Post);
}

ModifyImageSharePermissionRequest::~ModifyImageSharePermissionRequest() {}

long ModifyImageSharePermissionRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void ModifyImageSharePermissionRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string ModifyImageSharePermissionRequest::getImageId() const {
  return imageId_;
}

void ModifyImageSharePermissionRequest::setImageId(const std::string &imageId) {
  imageId_ = imageId;
  setParameter(std::string("ImageId"), imageId);
}

std::string ModifyImageSharePermissionRequest::getRegionId() const {
  return regionId_;
}

void ModifyImageSharePermissionRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

bool ModifyImageSharePermissionRequest::getIsPublic() const {
  return isPublic_;
}

void ModifyImageSharePermissionRequest::setIsPublic(bool isPublic) {
  isPublic_ = isPublic;
  setParameter(std::string("IsPublic"), isPublic ? "true" : "false");
}

std::string ModifyImageSharePermissionRequest::getLaunchPermission() const {
  return launchPermission_;
}

void ModifyImageSharePermissionRequest::setLaunchPermission(const std::string &launchPermission) {
  launchPermission_ = launchPermission;
  setParameter(std::string("LaunchPermission"), launchPermission);
}

std::string ModifyImageSharePermissionRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void ModifyImageSharePermissionRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string ModifyImageSharePermissionRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void ModifyImageSharePermissionRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

long ModifyImageSharePermissionRequest::getOwnerId() const {
  return ownerId_;
}

void ModifyImageSharePermissionRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

std::vector<std::string> ModifyImageSharePermissionRequest::getAddAccount() const {
  return addAccount_;
}

void ModifyImageSharePermissionRequest::setAddAccount(const std::vector<std::string> &addAccount) {
  addAccount_ = addAccount;
}

std::vector<std::string> ModifyImageSharePermissionRequest::getRemoveAccount() const {
  return removeAccount_;
}

void ModifyImageSharePermissionRequest::setRemoveAccount(const std::vector<std::string> &removeAccount) {
  removeAccount_ = removeAccount;
}

