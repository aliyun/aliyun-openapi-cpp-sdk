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

#include <alibabacloud/vpc/model/CreateGlobalAccelerationInstanceRequest.h>

using AlibabaCloud::Vpc::Model::CreateGlobalAccelerationInstanceRequest;

CreateGlobalAccelerationInstanceRequest::CreateGlobalAccelerationInstanceRequest()
    : RpcServiceRequest("vpc", "2016-04-28", "CreateGlobalAccelerationInstance") {
  setMethod(HttpRequest::Method::Post);
}

CreateGlobalAccelerationInstanceRequest::~CreateGlobalAccelerationInstanceRequest() {}

long CreateGlobalAccelerationInstanceRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void CreateGlobalAccelerationInstanceRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string CreateGlobalAccelerationInstanceRequest::getBandwidthType() const {
  return bandwidthType_;
}

void CreateGlobalAccelerationInstanceRequest::setBandwidthType(const std::string &bandwidthType) {
  bandwidthType_ = bandwidthType;
  setParameter(std::string("BandwidthType"), bandwidthType);
}

std::string CreateGlobalAccelerationInstanceRequest::getClientToken() const {
  return clientToken_;
}

void CreateGlobalAccelerationInstanceRequest::setClientToken(const std::string &clientToken) {
  clientToken_ = clientToken;
  setParameter(std::string("ClientToken"), clientToken);
}

std::string CreateGlobalAccelerationInstanceRequest::getDescription() const {
  return description_;
}

void CreateGlobalAccelerationInstanceRequest::setDescription(const std::string &description) {
  description_ = description;
  setParameter(std::string("Description"), description);
}

std::string CreateGlobalAccelerationInstanceRequest::getRegionId() const {
  return regionId_;
}

void CreateGlobalAccelerationInstanceRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string CreateGlobalAccelerationInstanceRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void CreateGlobalAccelerationInstanceRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string CreateGlobalAccelerationInstanceRequest::getServiceLocation() const {
  return serviceLocation_;
}

void CreateGlobalAccelerationInstanceRequest::setServiceLocation(const std::string &serviceLocation) {
  serviceLocation_ = serviceLocation;
  setParameter(std::string("ServiceLocation"), serviceLocation);
}

std::string CreateGlobalAccelerationInstanceRequest::getBandwidth() const {
  return bandwidth_;
}

void CreateGlobalAccelerationInstanceRequest::setBandwidth(const std::string &bandwidth) {
  bandwidth_ = bandwidth;
  setParameter(std::string("Bandwidth"), bandwidth);
}

std::string CreateGlobalAccelerationInstanceRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void CreateGlobalAccelerationInstanceRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

long CreateGlobalAccelerationInstanceRequest::getOwnerId() const {
  return ownerId_;
}

void CreateGlobalAccelerationInstanceRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

std::string CreateGlobalAccelerationInstanceRequest::getName() const {
  return name_;
}

void CreateGlobalAccelerationInstanceRequest::setName(const std::string &name) {
  name_ = name;
  setParameter(std::string("Name"), name);
}

