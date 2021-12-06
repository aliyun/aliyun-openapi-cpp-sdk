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

#include <alibabacloud/ecs/model/ModifyReservedInstancesRequest.h>

using AlibabaCloud::Ecs::Model::ModifyReservedInstancesRequest;

ModifyReservedInstancesRequest::ModifyReservedInstancesRequest()
    : RpcServiceRequest("ecs", "2014-05-26", "ModifyReservedInstances") {
  setMethod(HttpRequest::Method::Post);
}

ModifyReservedInstancesRequest::~ModifyReservedInstancesRequest() {}

long ModifyReservedInstancesRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void ModifyReservedInstancesRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::vector<ModifyReservedInstancesRequest::Configuration> ModifyReservedInstancesRequest::getConfiguration() const {
  return configuration_;
}

void ModifyReservedInstancesRequest::setConfiguration(const std::vector<ModifyReservedInstancesRequest::Configuration> &configuration) {
  configuration_ = configuration;
  for(int dep1 = 0; dep1 != configuration.size(); dep1++) {
  auto configurationObj = configuration.at(dep1);
  std::string configurationObjStr = std::string("Configuration") + "." + std::to_string(dep1 + 1);
    setParameter(configurationObjStr + ".ReservedInstanceName", configurationObj.reservedInstanceName);
    setParameter(configurationObjStr + ".ZoneId", configurationObj.zoneId);
    setParameter(configurationObjStr + ".Scope", configurationObj.scope);
    setParameter(configurationObjStr + ".InstanceType", configurationObj.instanceType);
    setParameter(configurationObjStr + ".InstanceAmount", std::to_string(configurationObj.instanceAmount));
  }
}

std::string ModifyReservedInstancesRequest::getRegionId() const {
  return regionId_;
}

void ModifyReservedInstancesRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string ModifyReservedInstancesRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void ModifyReservedInstancesRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string ModifyReservedInstancesRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void ModifyReservedInstancesRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

long ModifyReservedInstancesRequest::getOwnerId() const {
  return ownerId_;
}

void ModifyReservedInstancesRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

std::vector<std::string> ModifyReservedInstancesRequest::getReservedInstanceId() const {
  return reservedInstanceId_;
}

void ModifyReservedInstancesRequest::setReservedInstanceId(const std::vector<std::string> &reservedInstanceId) {
  reservedInstanceId_ = reservedInstanceId;
}

