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

#include <alibabacloud/vpc/model/ModifyRouterInterfaceAttributeRequest.h>

using AlibabaCloud::Vpc::Model::ModifyRouterInterfaceAttributeRequest;

ModifyRouterInterfaceAttributeRequest::ModifyRouterInterfaceAttributeRequest()
    : RpcServiceRequest("vpc", "2016-04-28", "ModifyRouterInterfaceAttribute") {
  setMethod(HttpRequest::Method::Post);
}

ModifyRouterInterfaceAttributeRequest::~ModifyRouterInterfaceAttributeRequest() {}

std::string ModifyRouterInterfaceAttributeRequest::getOppositeRouterId() const {
  return oppositeRouterId_;
}

void ModifyRouterInterfaceAttributeRequest::setOppositeRouterId(const std::string &oppositeRouterId) {
  oppositeRouterId_ = oppositeRouterId;
  setParameter(std::string("OppositeRouterId"), oppositeRouterId);
}

long ModifyRouterInterfaceAttributeRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void ModifyRouterInterfaceAttributeRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string ModifyRouterInterfaceAttributeRequest::getDescription() const {
  return description_;
}

void ModifyRouterInterfaceAttributeRequest::setDescription(const std::string &description) {
  description_ = description;
  setParameter(std::string("Description"), description);
}

std::string ModifyRouterInterfaceAttributeRequest::getHealthCheckTargetIp() const {
  return healthCheckTargetIp_;
}

void ModifyRouterInterfaceAttributeRequest::setHealthCheckTargetIp(const std::string &healthCheckTargetIp) {
  healthCheckTargetIp_ = healthCheckTargetIp;
  setParameter(std::string("HealthCheckTargetIp"), healthCheckTargetIp);
}

std::string ModifyRouterInterfaceAttributeRequest::getRegionId() const {
  return regionId_;
}

void ModifyRouterInterfaceAttributeRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string ModifyRouterInterfaceAttributeRequest::getOppositeInterfaceId() const {
  return oppositeInterfaceId_;
}

void ModifyRouterInterfaceAttributeRequest::setOppositeInterfaceId(const std::string &oppositeInterfaceId) {
  oppositeInterfaceId_ = oppositeInterfaceId;
  setParameter(std::string("OppositeInterfaceId"), oppositeInterfaceId);
}

int ModifyRouterInterfaceAttributeRequest::getHcThreshold() const {
  return hcThreshold_;
}

void ModifyRouterInterfaceAttributeRequest::setHcThreshold(int hcThreshold) {
  hcThreshold_ = hcThreshold;
  setParameter(std::string("HcThreshold"), std::to_string(hcThreshold));
}

std::string ModifyRouterInterfaceAttributeRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void ModifyRouterInterfaceAttributeRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

bool ModifyRouterInterfaceAttributeRequest::getDeleteHealthCheckIp() const {
  return deleteHealthCheckIp_;
}

void ModifyRouterInterfaceAttributeRequest::setDeleteHealthCheckIp(bool deleteHealthCheckIp) {
  deleteHealthCheckIp_ = deleteHealthCheckIp;
  setParameter(std::string("DeleteHealthCheckIp"), deleteHealthCheckIp ? "true" : "false");
}

long ModifyRouterInterfaceAttributeRequest::getOwnerId() const {
  return ownerId_;
}

void ModifyRouterInterfaceAttributeRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

std::string ModifyRouterInterfaceAttributeRequest::getRouterInterfaceId() const {
  return routerInterfaceId_;
}

void ModifyRouterInterfaceAttributeRequest::setRouterInterfaceId(const std::string &routerInterfaceId) {
  routerInterfaceId_ = routerInterfaceId;
  setParameter(std::string("RouterInterfaceId"), routerInterfaceId);
}

long ModifyRouterInterfaceAttributeRequest::getOppositeInterfaceOwnerId() const {
  return oppositeInterfaceOwnerId_;
}

void ModifyRouterInterfaceAttributeRequest::setOppositeInterfaceOwnerId(long oppositeInterfaceOwnerId) {
  oppositeInterfaceOwnerId_ = oppositeInterfaceOwnerId;
  setParameter(std::string("OppositeInterfaceOwnerId"), std::to_string(oppositeInterfaceOwnerId));
}

std::string ModifyRouterInterfaceAttributeRequest::getHealthCheckSourceIp() const {
  return healthCheckSourceIp_;
}

void ModifyRouterInterfaceAttributeRequest::setHealthCheckSourceIp(const std::string &healthCheckSourceIp) {
  healthCheckSourceIp_ = healthCheckSourceIp;
  setParameter(std::string("HealthCheckSourceIp"), healthCheckSourceIp);
}

std::string ModifyRouterInterfaceAttributeRequest::getName() const {
  return name_;
}

void ModifyRouterInterfaceAttributeRequest::setName(const std::string &name) {
  name_ = name;
  setParameter(std::string("Name"), name);
}

std::string ModifyRouterInterfaceAttributeRequest::getOppositeRouterType() const {
  return oppositeRouterType_;
}

void ModifyRouterInterfaceAttributeRequest::setOppositeRouterType(const std::string &oppositeRouterType) {
  oppositeRouterType_ = oppositeRouterType;
  setParameter(std::string("OppositeRouterType"), oppositeRouterType);
}

int ModifyRouterInterfaceAttributeRequest::getHcRate() const {
  return hcRate_;
}

void ModifyRouterInterfaceAttributeRequest::setHcRate(int hcRate) {
  hcRate_ = hcRate;
  setParameter(std::string("HcRate"), std::to_string(hcRate));
}

