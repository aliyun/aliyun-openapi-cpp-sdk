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

#include <alibabacloud/vpc/model/CreateRouterInterfaceRequest.h>

using AlibabaCloud::Vpc::Model::CreateRouterInterfaceRequest;

CreateRouterInterfaceRequest::CreateRouterInterfaceRequest()
    : RpcServiceRequest("vpc", "2016-04-28", "CreateRouterInterface") {
  setMethod(HttpRequest::Method::Post);
}

CreateRouterInterfaceRequest::~CreateRouterInterfaceRequest() {}

std::string CreateRouterInterfaceRequest::getAccessPointId() const {
  return accessPointId_;
}

void CreateRouterInterfaceRequest::setAccessPointId(const std::string &accessPointId) {
  accessPointId_ = accessPointId;
  setParameter(std::string("AccessPointId"), accessPointId);
}

std::string CreateRouterInterfaceRequest::getOppositeAccessPointId() const {
  return oppositeAccessPointId_;
}

void CreateRouterInterfaceRequest::setOppositeAccessPointId(const std::string &oppositeAccessPointId) {
  oppositeAccessPointId_ = oppositeAccessPointId;
  setParameter(std::string("OppositeAccessPointId"), oppositeAccessPointId);
}

long CreateRouterInterfaceRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void CreateRouterInterfaceRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string CreateRouterInterfaceRequest::getSpec() const {
  return spec_;
}

void CreateRouterInterfaceRequest::setSpec(const std::string &spec) {
  spec_ = spec;
  setParameter(std::string("Spec"), spec);
}

std::string CreateRouterInterfaceRequest::getResourceGroupId() const {
  return resourceGroupId_;
}

void CreateRouterInterfaceRequest::setResourceGroupId(const std::string &resourceGroupId) {
  resourceGroupId_ = resourceGroupId;
  setParameter(std::string("ResourceGroupId"), resourceGroupId);
}

int CreateRouterInterfaceRequest::getPeriod() const {
  return period_;
}

void CreateRouterInterfaceRequest::setPeriod(int period) {
  period_ = period;
  setParameter(std::string("Period"), std::to_string(period));
}

std::string CreateRouterInterfaceRequest::getOppositeRegionId() const {
  return oppositeRegionId_;
}

void CreateRouterInterfaceRequest::setOppositeRegionId(const std::string &oppositeRegionId) {
  oppositeRegionId_ = oppositeRegionId;
  setParameter(std::string("OppositeRegionId"), oppositeRegionId);
}

long CreateRouterInterfaceRequest::getOwnerId() const {
  return ownerId_;
}

void CreateRouterInterfaceRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

std::string CreateRouterInterfaceRequest::getOppositeInterfaceOwnerId() const {
  return oppositeInterfaceOwnerId_;
}

void CreateRouterInterfaceRequest::setOppositeInterfaceOwnerId(const std::string &oppositeInterfaceOwnerId) {
  oppositeInterfaceOwnerId_ = oppositeInterfaceOwnerId;
  setParameter(std::string("OppositeInterfaceOwnerId"), oppositeInterfaceOwnerId);
}

std::vector<CreateRouterInterfaceRequest::Tags> CreateRouterInterfaceRequest::getTags() const {
  return tags_;
}

void CreateRouterInterfaceRequest::setTags(const std::vector<CreateRouterInterfaceRequest::Tags> &tags) {
  tags_ = tags;
  for(int dep1 = 0; dep1 != tags.size(); dep1++) {
  auto tagsObj = tags.at(dep1);
  std::string tagsObjStr = std::string("Tags") + "." + std::to_string(dep1 + 1);
    setParameter(tagsObjStr + ".Value", tagsObj.value);
    setParameter(tagsObjStr + ".Key", tagsObj.key);
  }
}

bool CreateRouterInterfaceRequest::getAutoRenew() const {
  return autoRenew_;
}

void CreateRouterInterfaceRequest::setAutoRenew(bool autoRenew) {
  autoRenew_ = autoRenew;
  setParameter(std::string("AutoRenew"), autoRenew ? "true" : "false");
}

std::string CreateRouterInterfaceRequest::getOppositeRouterType() const {
  return oppositeRouterType_;
}

void CreateRouterInterfaceRequest::setOppositeRouterType(const std::string &oppositeRouterType) {
  oppositeRouterType_ = oppositeRouterType;
  setParameter(std::string("OppositeRouterType"), oppositeRouterType);
}

std::string CreateRouterInterfaceRequest::getName() const {
  return name_;
}

void CreateRouterInterfaceRequest::setName(const std::string &name) {
  name_ = name;
  setParameter(std::string("Name"), name);
}

std::string CreateRouterInterfaceRequest::getPricingCycle() const {
  return pricingCycle_;
}

void CreateRouterInterfaceRequest::setPricingCycle(const std::string &pricingCycle) {
  pricingCycle_ = pricingCycle;
  setParameter(std::string("PricingCycle"), pricingCycle);
}

std::string CreateRouterInterfaceRequest::getOppositeRouterId() const {
  return oppositeRouterId_;
}

void CreateRouterInterfaceRequest::setOppositeRouterId(const std::string &oppositeRouterId) {
  oppositeRouterId_ = oppositeRouterId;
  setParameter(std::string("OppositeRouterId"), oppositeRouterId);
}

std::string CreateRouterInterfaceRequest::getRole() const {
  return role_;
}

void CreateRouterInterfaceRequest::setRole(const std::string &role) {
  role_ = role;
  setParameter(std::string("Role"), role);
}

std::string CreateRouterInterfaceRequest::getClientToken() const {
  return clientToken_;
}

void CreateRouterInterfaceRequest::setClientToken(const std::string &clientToken) {
  clientToken_ = clientToken;
  setParameter(std::string("ClientToken"), clientToken);
}

std::string CreateRouterInterfaceRequest::getHealthCheckTargetIp() const {
  return healthCheckTargetIp_;
}

void CreateRouterInterfaceRequest::setHealthCheckTargetIp(const std::string &healthCheckTargetIp) {
  healthCheckTargetIp_ = healthCheckTargetIp;
  setParameter(std::string("HealthCheckTargetIp"), healthCheckTargetIp);
}

std::string CreateRouterInterfaceRequest::getDescription() const {
  return description_;
}

void CreateRouterInterfaceRequest::setDescription(const std::string &description) {
  description_ = description;
  setParameter(std::string("Description"), description);
}

bool CreateRouterInterfaceRequest::getFastLinkMode() const {
  return fastLinkMode_;
}

void CreateRouterInterfaceRequest::setFastLinkMode(bool fastLinkMode) {
  fastLinkMode_ = fastLinkMode;
  setParameter(std::string("FastLinkMode"), fastLinkMode ? "true" : "false");
}

std::string CreateRouterInterfaceRequest::getRegionId() const {
  return regionId_;
}

void CreateRouterInterfaceRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string CreateRouterInterfaceRequest::getOppositeInterfaceId() const {
  return oppositeInterfaceId_;
}

void CreateRouterInterfaceRequest::setOppositeInterfaceId(const std::string &oppositeInterfaceId) {
  oppositeInterfaceId_ = oppositeInterfaceId;
  setParameter(std::string("OppositeInterfaceId"), oppositeInterfaceId);
}

std::string CreateRouterInterfaceRequest::getInstanceChargeType() const {
  return instanceChargeType_;
}

void CreateRouterInterfaceRequest::setInstanceChargeType(const std::string &instanceChargeType) {
  instanceChargeType_ = instanceChargeType;
  setParameter(std::string("InstanceChargeType"), instanceChargeType);
}

bool CreateRouterInterfaceRequest::getAutoPay() const {
  return autoPay_;
}

void CreateRouterInterfaceRequest::setAutoPay(bool autoPay) {
  autoPay_ = autoPay;
  setParameter(std::string("AutoPay"), autoPay ? "true" : "false");
}

std::string CreateRouterInterfaceRequest::getPromotionOptionNo() const {
  return promotionOptionNo_;
}

void CreateRouterInterfaceRequest::setPromotionOptionNo(const std::string &promotionOptionNo) {
  promotionOptionNo_ = promotionOptionNo;
  setParameter(std::string("PromotionOptionNo"), promotionOptionNo);
}

std::string CreateRouterInterfaceRequest::getAvailableZoneId() const {
  return availableZoneId_;
}

void CreateRouterInterfaceRequest::setAvailableZoneId(const std::string &availableZoneId) {
  availableZoneId_ = availableZoneId;
  setParameter(std::string("AvailableZoneId"), availableZoneId);
}

std::string CreateRouterInterfaceRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void CreateRouterInterfaceRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string CreateRouterInterfaceRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void CreateRouterInterfaceRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

std::string CreateRouterInterfaceRequest::getRouterType() const {
  return routerType_;
}

void CreateRouterInterfaceRequest::setRouterType(const std::string &routerType) {
  routerType_ = routerType;
  setParameter(std::string("RouterType"), routerType);
}

std::string CreateRouterInterfaceRequest::getHealthCheckSourceIp() const {
  return healthCheckSourceIp_;
}

void CreateRouterInterfaceRequest::setHealthCheckSourceIp(const std::string &healthCheckSourceIp) {
  healthCheckSourceIp_ = healthCheckSourceIp;
  setParameter(std::string("HealthCheckSourceIp"), healthCheckSourceIp);
}

std::string CreateRouterInterfaceRequest::getRouterId() const {
  return routerId_;
}

void CreateRouterInterfaceRequest::setRouterId(const std::string &routerId) {
  routerId_ = routerId;
  setParameter(std::string("RouterId"), routerId);
}

