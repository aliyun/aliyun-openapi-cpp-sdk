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

#include <alibabacloud/ecs/model/DeleteNetworkInterfacePermissionRequest.h>

using AlibabaCloud::Ecs::Model::DeleteNetworkInterfacePermissionRequest;

DeleteNetworkInterfacePermissionRequest::DeleteNetworkInterfacePermissionRequest()
    : RpcServiceRequest("ecs", "2014-05-26", "DeleteNetworkInterfacePermission") {
  setMethod(HttpRequest::Method::Post);
}

DeleteNetworkInterfacePermissionRequest::~DeleteNetworkInterfacePermissionRequest() {}

long DeleteNetworkInterfacePermissionRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void DeleteNetworkInterfacePermissionRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string DeleteNetworkInterfacePermissionRequest::getRegionId() const {
  return regionId_;
}

void DeleteNetworkInterfacePermissionRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string DeleteNetworkInterfacePermissionRequest::getNetworkInterfacePermissionId() const {
  return networkInterfacePermissionId_;
}

void DeleteNetworkInterfacePermissionRequest::setNetworkInterfacePermissionId(const std::string &networkInterfacePermissionId) {
  networkInterfacePermissionId_ = networkInterfacePermissionId;
  setParameter(std::string("NetworkInterfacePermissionId"), networkInterfacePermissionId);
}

std::string DeleteNetworkInterfacePermissionRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void DeleteNetworkInterfacePermissionRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string DeleteNetworkInterfacePermissionRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void DeleteNetworkInterfacePermissionRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

long DeleteNetworkInterfacePermissionRequest::getOwnerId() const {
  return ownerId_;
}

void DeleteNetworkInterfacePermissionRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

bool DeleteNetworkInterfacePermissionRequest::getForce() const {
  return force_;
}

void DeleteNetworkInterfacePermissionRequest::setForce(bool force) {
  force_ = force;
  setParameter(std::string("Force"), force ? "true" : "false");
}

