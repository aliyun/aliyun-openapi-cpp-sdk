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

#include <alibabacloud/ecs/model/DetachDiskRequest.h>

using AlibabaCloud::Ecs::Model::DetachDiskRequest;

DetachDiskRequest::DetachDiskRequest()
    : RpcServiceRequest("ecs", "2014-05-26", "DetachDisk") {
  setMethod(HttpRequest::Method::Post);
}

DetachDiskRequest::~DetachDiskRequest() {}

long DetachDiskRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void DetachDiskRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string DetachDiskRequest::getDiskId() const {
  return diskId_;
}

void DetachDiskRequest::setDiskId(const std::string &diskId) {
  diskId_ = diskId;
  setParameter(std::string("DiskId"), diskId);
}

bool DetachDiskRequest::getDeleteWithInstance() const {
  return deleteWithInstance_;
}

void DetachDiskRequest::setDeleteWithInstance(bool deleteWithInstance) {
  deleteWithInstance_ = deleteWithInstance;
  setParameter(std::string("DeleteWithInstance"), deleteWithInstance ? "true" : "false");
}

std::string DetachDiskRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void DetachDiskRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string DetachDiskRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void DetachDiskRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

long DetachDiskRequest::getOwnerId() const {
  return ownerId_;
}

void DetachDiskRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

std::string DetachDiskRequest::getInstanceId() const {
  return instanceId_;
}

void DetachDiskRequest::setInstanceId(const std::string &instanceId) {
  instanceId_ = instanceId;
  setParameter(std::string("InstanceId"), instanceId);
}

