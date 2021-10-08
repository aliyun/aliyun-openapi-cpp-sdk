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

#include <alibabacloud/ecs/model/ModifyDedicatedHostAttributeRequest.h>

using AlibabaCloud::Ecs::Model::ModifyDedicatedHostAttributeRequest;

ModifyDedicatedHostAttributeRequest::ModifyDedicatedHostAttributeRequest()
    : RpcServiceRequest("ecs", "2014-05-26", "ModifyDedicatedHostAttribute") {
  setMethod(HttpRequest::Method::Post);
}

ModifyDedicatedHostAttributeRequest::~ModifyDedicatedHostAttributeRequest() {}

long ModifyDedicatedHostAttributeRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void ModifyDedicatedHostAttributeRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string ModifyDedicatedHostAttributeRequest::getDescription() const {
  return description_;
}

void ModifyDedicatedHostAttributeRequest::setDescription(const std::string &description) {
  description_ = description;
  setParameter(std::string("Description"), description);
}

float ModifyDedicatedHostAttributeRequest::getCpuOverCommitRatio() const {
  return cpuOverCommitRatio_;
}

void ModifyDedicatedHostAttributeRequest::setCpuOverCommitRatio(float cpuOverCommitRatio) {
  cpuOverCommitRatio_ = cpuOverCommitRatio;
  setParameter(std::string("CpuOverCommitRatio"), std::to_string(cpuOverCommitRatio));
}

std::string ModifyDedicatedHostAttributeRequest::getRegionId() const {
  return regionId_;
}

void ModifyDedicatedHostAttributeRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string ModifyDedicatedHostAttributeRequest::getActionOnMaintenance() const {
  return actionOnMaintenance_;
}

void ModifyDedicatedHostAttributeRequest::setActionOnMaintenance(const std::string &actionOnMaintenance) {
  actionOnMaintenance_ = actionOnMaintenance;
  setParameter(std::string("ActionOnMaintenance"), actionOnMaintenance);
}

std::string ModifyDedicatedHostAttributeRequest::getDedicatedHostClusterId() const {
  return dedicatedHostClusterId_;
}

void ModifyDedicatedHostAttributeRequest::setDedicatedHostClusterId(const std::string &dedicatedHostClusterId) {
  dedicatedHostClusterId_ = dedicatedHostClusterId;
  setParameter(std::string("DedicatedHostClusterId"), dedicatedHostClusterId);
}

std::string ModifyDedicatedHostAttributeRequest::getDedicatedHostName() const {
  return dedicatedHostName_;
}

void ModifyDedicatedHostAttributeRequest::setDedicatedHostName(const std::string &dedicatedHostName) {
  dedicatedHostName_ = dedicatedHostName;
  setParameter(std::string("DedicatedHostName"), dedicatedHostName);
}

std::string ModifyDedicatedHostAttributeRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void ModifyDedicatedHostAttributeRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string ModifyDedicatedHostAttributeRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void ModifyDedicatedHostAttributeRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

std::string ModifyDedicatedHostAttributeRequest::getDedicatedHostId() const {
  return dedicatedHostId_;
}

void ModifyDedicatedHostAttributeRequest::setDedicatedHostId(const std::string &dedicatedHostId) {
  dedicatedHostId_ = dedicatedHostId;
  setParameter(std::string("DedicatedHostId"), dedicatedHostId);
}

long ModifyDedicatedHostAttributeRequest::getOwnerId() const {
  return ownerId_;
}

void ModifyDedicatedHostAttributeRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

int ModifyDedicatedHostAttributeRequest::getNetworkAttributesSlbUdpTimeout() const {
  return networkAttributesSlbUdpTimeout_;
}

void ModifyDedicatedHostAttributeRequest::setNetworkAttributesSlbUdpTimeout(int networkAttributesSlbUdpTimeout) {
  networkAttributesSlbUdpTimeout_ = networkAttributesSlbUdpTimeout;
  setParameter(std::string("NetworkAttributes.SlbUdpTimeout"), std::to_string(networkAttributesSlbUdpTimeout));
}

std::string ModifyDedicatedHostAttributeRequest::getAutoPlacement() const {
  return autoPlacement_;
}

void ModifyDedicatedHostAttributeRequest::setAutoPlacement(const std::string &autoPlacement) {
  autoPlacement_ = autoPlacement;
  setParameter(std::string("AutoPlacement"), autoPlacement);
}

int ModifyDedicatedHostAttributeRequest::getNetworkAttributesUdpTimeout() const {
  return networkAttributesUdpTimeout_;
}

void ModifyDedicatedHostAttributeRequest::setNetworkAttributesUdpTimeout(int networkAttributesUdpTimeout) {
  networkAttributesUdpTimeout_ = networkAttributesUdpTimeout;
  setParameter(std::string("NetworkAttributes.UdpTimeout"), std::to_string(networkAttributesUdpTimeout));
}

