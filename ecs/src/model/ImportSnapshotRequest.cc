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

#include <alibabacloud/ecs/model/ImportSnapshotRequest.h>

using AlibabaCloud::Ecs::Model::ImportSnapshotRequest;

ImportSnapshotRequest::ImportSnapshotRequest()
    : RpcServiceRequest("ecs", "2014-05-26", "ImportSnapshot") {
  setMethod(HttpRequest::Method::Post);
}

ImportSnapshotRequest::~ImportSnapshotRequest() {}

long ImportSnapshotRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void ImportSnapshotRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string ImportSnapshotRequest::getSnapshotName() const {
  return snapshotName_;
}

void ImportSnapshotRequest::setSnapshotName(const std::string &snapshotName) {
  snapshotName_ = snapshotName;
  setParameter(std::string("SnapshotName"), snapshotName);
}

std::string ImportSnapshotRequest::getOssObject() const {
  return ossObject_;
}

void ImportSnapshotRequest::setOssObject(const std::string &ossObject) {
  ossObject_ = ossObject;
  setParameter(std::string("OssObject"), ossObject);
}

std::string ImportSnapshotRequest::getRegionId() const {
  return regionId_;
}

void ImportSnapshotRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string ImportSnapshotRequest::getOssBucket() const {
  return ossBucket_;
}

void ImportSnapshotRequest::setOssBucket(const std::string &ossBucket) {
  ossBucket_ = ossBucket;
  setParameter(std::string("OssBucket"), ossBucket);
}

std::string ImportSnapshotRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void ImportSnapshotRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string ImportSnapshotRequest::getRoleName() const {
  return roleName_;
}

void ImportSnapshotRequest::setRoleName(const std::string &roleName) {
  roleName_ = roleName;
  setParameter(std::string("RoleName"), roleName);
}

long ImportSnapshotRequest::getOwnerId() const {
  return ownerId_;
}

void ImportSnapshotRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

