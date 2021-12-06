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

#include <alibabacloud/ecs/model/DetachNetworkInterfaceRequest.h>

using AlibabaCloud::Ecs::Model::DetachNetworkInterfaceRequest;

DetachNetworkInterfaceRequest::DetachNetworkInterfaceRequest()
    : RpcServiceRequest("ecs", "2014-05-26", "DetachNetworkInterface") {
  setMethod(HttpRequest::Method::Post);
}

DetachNetworkInterfaceRequest::~DetachNetworkInterfaceRequest() {}

long DetachNetworkInterfaceRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void DetachNetworkInterfaceRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string DetachNetworkInterfaceRequest::getRegionId() const {
  return regionId_;
}

void DetachNetworkInterfaceRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string DetachNetworkInterfaceRequest::getTrunkNetworkInstanceId() const {
  return trunkNetworkInstanceId_;
}

void DetachNetworkInterfaceRequest::setTrunkNetworkInstanceId(const std::string &trunkNetworkInstanceId) {
  trunkNetworkInstanceId_ = trunkNetworkInstanceId;
  setParameter(std::string("TrunkNetworkInstanceId"), trunkNetworkInstanceId);
}

std::string DetachNetworkInterfaceRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void DetachNetworkInterfaceRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string DetachNetworkInterfaceRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void DetachNetworkInterfaceRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

long DetachNetworkInterfaceRequest::getOwnerId() const {
  return ownerId_;
}

void DetachNetworkInterfaceRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

std::string DetachNetworkInterfaceRequest::getInstanceId() const {
  return instanceId_;
}

void DetachNetworkInterfaceRequest::setInstanceId(const std::string &instanceId) {
  instanceId_ = instanceId;
  setParameter(std::string("InstanceId"), instanceId);
}

std::string DetachNetworkInterfaceRequest::getNetworkInterfaceId() const {
  return networkInterfaceId_;
}

void DetachNetworkInterfaceRequest::setNetworkInterfaceId(const std::string &networkInterfaceId) {
  networkInterfaceId_ = networkInterfaceId;
  setParameter(std::string("NetworkInterfaceId"), networkInterfaceId);
}

