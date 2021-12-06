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

#include <alibabacloud/ecs/model/CreateNetworkInterfacePermissionRequest.h>

using AlibabaCloud::Ecs::Model::CreateNetworkInterfacePermissionRequest;

CreateNetworkInterfacePermissionRequest::CreateNetworkInterfacePermissionRequest()
    : RpcServiceRequest("ecs", "2014-05-26", "CreateNetworkInterfacePermission") {
  setMethod(HttpRequest::Method::Post);
}

CreateNetworkInterfacePermissionRequest::~CreateNetworkInterfacePermissionRequest() {}

long CreateNetworkInterfacePermissionRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void CreateNetworkInterfacePermissionRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

long CreateNetworkInterfacePermissionRequest::getAccountId() const {
  return accountId_;
}

void CreateNetworkInterfacePermissionRequest::setAccountId(long accountId) {
  accountId_ = accountId;
  setParameter(std::string("AccountId"), std::to_string(accountId));
}

std::string CreateNetworkInterfacePermissionRequest::getRegionId() const {
  return regionId_;
}

void CreateNetworkInterfacePermissionRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string CreateNetworkInterfacePermissionRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void CreateNetworkInterfacePermissionRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string CreateNetworkInterfacePermissionRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void CreateNetworkInterfacePermissionRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

std::string CreateNetworkInterfacePermissionRequest::getPermission() const {
  return permission_;
}

void CreateNetworkInterfacePermissionRequest::setPermission(const std::string &permission) {
  permission_ = permission;
  setParameter(std::string("Permission"), permission);
}

long CreateNetworkInterfacePermissionRequest::getOwnerId() const {
  return ownerId_;
}

void CreateNetworkInterfacePermissionRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

std::string CreateNetworkInterfacePermissionRequest::getNetworkInterfaceId() const {
  return networkInterfaceId_;
}

void CreateNetworkInterfacePermissionRequest::setNetworkInterfaceId(const std::string &networkInterfaceId) {
  networkInterfaceId_ = networkInterfaceId;
  setParameter(std::string("NetworkInterfaceId"), networkInterfaceId);
}

