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

#include <alibabacloud/vpc/model/AddGlobalAccelerationInstanceIpRequest.h>

using AlibabaCloud::Vpc::Model::AddGlobalAccelerationInstanceIpRequest;

AddGlobalAccelerationInstanceIpRequest::AddGlobalAccelerationInstanceIpRequest()
    : RpcServiceRequest("vpc", "2016-04-28", "AddGlobalAccelerationInstanceIp") {
  setMethod(HttpRequest::Method::Post);
}

AddGlobalAccelerationInstanceIpRequest::~AddGlobalAccelerationInstanceIpRequest() {}

long AddGlobalAccelerationInstanceIpRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void AddGlobalAccelerationInstanceIpRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string AddGlobalAccelerationInstanceIpRequest::getGlobalAccelerationInstanceId() const {
  return globalAccelerationInstanceId_;
}

void AddGlobalAccelerationInstanceIpRequest::setGlobalAccelerationInstanceId(const std::string &globalAccelerationInstanceId) {
  globalAccelerationInstanceId_ = globalAccelerationInstanceId;
  setParameter(std::string("GlobalAccelerationInstanceId"), globalAccelerationInstanceId);
}

std::string AddGlobalAccelerationInstanceIpRequest::getRegionId() const {
  return regionId_;
}

void AddGlobalAccelerationInstanceIpRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string AddGlobalAccelerationInstanceIpRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void AddGlobalAccelerationInstanceIpRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string AddGlobalAccelerationInstanceIpRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void AddGlobalAccelerationInstanceIpRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

long AddGlobalAccelerationInstanceIpRequest::getOwnerId() const {
  return ownerId_;
}

void AddGlobalAccelerationInstanceIpRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

std::string AddGlobalAccelerationInstanceIpRequest::getIpInstanceId() const {
  return ipInstanceId_;
}

void AddGlobalAccelerationInstanceIpRequest::setIpInstanceId(const std::string &ipInstanceId) {
  ipInstanceId_ = ipInstanceId;
  setParameter(std::string("IpInstanceId"), ipInstanceId);
}

