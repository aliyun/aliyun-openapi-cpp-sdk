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

#include <alibabacloud/ecs/model/AttachNetworkInterfaceRequest.h>

using AlibabaCloud::Ecs::Model::AttachNetworkInterfaceRequest;

AttachNetworkInterfaceRequest::AttachNetworkInterfaceRequest()
    : RpcServiceRequest("ecs", "2014-05-26", "AttachNetworkInterface") {
  setMethod(HttpRequest::Method::Post);
}

AttachNetworkInterfaceRequest::~AttachNetworkInterfaceRequest() {}

long AttachNetworkInterfaceRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void AttachNetworkInterfaceRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string AttachNetworkInterfaceRequest::getRegionId() const {
  return regionId_;
}

void AttachNetworkInterfaceRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string AttachNetworkInterfaceRequest::getTrunkNetworkInstanceId() const {
  return trunkNetworkInstanceId_;
}

void AttachNetworkInterfaceRequest::setTrunkNetworkInstanceId(const std::string &trunkNetworkInstanceId) {
  trunkNetworkInstanceId_ = trunkNetworkInstanceId;
  setParameter(std::string("TrunkNetworkInstanceId"), trunkNetworkInstanceId);
}

std::string AttachNetworkInterfaceRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void AttachNetworkInterfaceRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string AttachNetworkInterfaceRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void AttachNetworkInterfaceRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

bool AttachNetworkInterfaceRequest::getWaitForNetworkConfigurationReady() const {
  return waitForNetworkConfigurationReady_;
}

void AttachNetworkInterfaceRequest::setWaitForNetworkConfigurationReady(bool waitForNetworkConfigurationReady) {
  waitForNetworkConfigurationReady_ = waitForNetworkConfigurationReady;
  setParameter(std::string("WaitForNetworkConfigurationReady"), waitForNetworkConfigurationReady ? "true" : "false");
}

long AttachNetworkInterfaceRequest::getOwnerId() const {
  return ownerId_;
}

void AttachNetworkInterfaceRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

int AttachNetworkInterfaceRequest::getNetworkCardIndex() const {
  return networkCardIndex_;
}

void AttachNetworkInterfaceRequest::setNetworkCardIndex(int networkCardIndex) {
  networkCardIndex_ = networkCardIndex;
  setParameter(std::string("NetworkCardIndex"), std::to_string(networkCardIndex));
}

std::string AttachNetworkInterfaceRequest::getInstanceId() const {
  return instanceId_;
}

void AttachNetworkInterfaceRequest::setInstanceId(const std::string &instanceId) {
  instanceId_ = instanceId;
  setParameter(std::string("InstanceId"), instanceId);
}

std::string AttachNetworkInterfaceRequest::getNetworkInterfaceId() const {
  return networkInterfaceId_;
}

void AttachNetworkInterfaceRequest::setNetworkInterfaceId(const std::string &networkInterfaceId) {
  networkInterfaceId_ = networkInterfaceId;
  setParameter(std::string("NetworkInterfaceId"), networkInterfaceId);
}

