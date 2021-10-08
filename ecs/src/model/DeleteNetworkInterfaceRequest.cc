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

#include <alibabacloud/ecs/model/DeleteNetworkInterfaceRequest.h>

using AlibabaCloud::Ecs::Model::DeleteNetworkInterfaceRequest;

DeleteNetworkInterfaceRequest::DeleteNetworkInterfaceRequest()
    : RpcServiceRequest("ecs", "2014-05-26", "DeleteNetworkInterface") {
  setMethod(HttpRequest::Method::Post);
}

DeleteNetworkInterfaceRequest::~DeleteNetworkInterfaceRequest() {}

long DeleteNetworkInterfaceRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void DeleteNetworkInterfaceRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string DeleteNetworkInterfaceRequest::getRegionId() const {
  return regionId_;
}

void DeleteNetworkInterfaceRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string DeleteNetworkInterfaceRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void DeleteNetworkInterfaceRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string DeleteNetworkInterfaceRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void DeleteNetworkInterfaceRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

long DeleteNetworkInterfaceRequest::getOwnerId() const {
  return ownerId_;
}

void DeleteNetworkInterfaceRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

std::string DeleteNetworkInterfaceRequest::getNetworkInterfaceId() const {
  return networkInterfaceId_;
}

void DeleteNetworkInterfaceRequest::setNetworkInterfaceId(const std::string &networkInterfaceId) {
  networkInterfaceId_ = networkInterfaceId;
  setParameter(std::string("NetworkInterfaceId"), networkInterfaceId);
}

