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

#include <alibabacloud/ecs/model/AllocateDedicatedHostsRequest.h>

using AlibabaCloud::Ecs::Model::AllocateDedicatedHostsRequest;

AllocateDedicatedHostsRequest::AllocateDedicatedHostsRequest()
    : RpcServiceRequest("ecs", "2014-05-26", "AllocateDedicatedHosts") {
  setMethod(HttpRequest::Method::Post);
}

AllocateDedicatedHostsRequest::~AllocateDedicatedHostsRequest() {}

long AllocateDedicatedHostsRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void AllocateDedicatedHostsRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

float AllocateDedicatedHostsRequest::getCpuOverCommitRatio() const {
  return cpuOverCommitRatio_;
}

void AllocateDedicatedHostsRequest::setCpuOverCommitRatio(float cpuOverCommitRatio) {
  cpuOverCommitRatio_ = cpuOverCommitRatio;
  setParameter(std::string("CpuOverCommitRatio"), std::to_string(cpuOverCommitRatio));
}

std::string AllocateDedicatedHostsRequest::getResourceGroupId() const {
  return resourceGroupId_;
}

void AllocateDedicatedHostsRequest::setResourceGroupId(const std::string &resourceGroupId) {
  resourceGroupId_ = resourceGroupId;
  setParameter(std::string("ResourceGroupId"), resourceGroupId);
}

int AllocateDedicatedHostsRequest::getMinQuantity() const {
  return minQuantity_;
}

void AllocateDedicatedHostsRequest::setMinQuantity(int minQuantity) {
  minQuantity_ = minQuantity;
  setParameter(std::string("MinQuantity"), std::to_string(minQuantity));
}

std::string AllocateDedicatedHostsRequest::getActionOnMaintenance() const {
  return actionOnMaintenance_;
}

void AllocateDedicatedHostsRequest::setActionOnMaintenance(const std::string &actionOnMaintenance) {
  actionOnMaintenance_ = actionOnMaintenance;
  setParameter(std::string("ActionOnMaintenance"), actionOnMaintenance);
}

std::vector<AllocateDedicatedHostsRequest::Tag> AllocateDedicatedHostsRequest::getTag() const {
  return tag_;
}

void AllocateDedicatedHostsRequest::setTag(const std::vector<AllocateDedicatedHostsRequest::Tag> &tag) {
  tag_ = tag;
  for(int dep1 = 0; dep1 != tag.size(); dep1++) {
  auto tagObj = tag.at(dep1);
  std::string tagObjStr = std::string("Tag") + "." + std::to_string(dep1 + 1);
    setParameter(tagObjStr + ".Key", tagObj.key);
    setParameter(tagObjStr + ".Value", tagObj.value);
  }
}

int AllocateDedicatedHostsRequest::getAutoRenewPeriod() const {
  return autoRenewPeriod_;
}

void AllocateDedicatedHostsRequest::setAutoRenewPeriod(int autoRenewPeriod) {
  autoRenewPeriod_ = autoRenewPeriod;
  setParameter(std::string("AutoRenewPeriod"), std::to_string(autoRenewPeriod));
}

int AllocateDedicatedHostsRequest::getPeriod() const {
  return period_;
}

void AllocateDedicatedHostsRequest::setPeriod(int period) {
  period_ = period;
  setParameter(std::string("Period"), std::to_string(period));
}

std::string AllocateDedicatedHostsRequest::getDedicatedHostName() const {
  return dedicatedHostName_;
}

void AllocateDedicatedHostsRequest::setDedicatedHostName(const std::string &dedicatedHostName) {
  dedicatedHostName_ = dedicatedHostName;
  setParameter(std::string("DedicatedHostName"), dedicatedHostName);
}

long AllocateDedicatedHostsRequest::getOwnerId() const {
  return ownerId_;
}

void AllocateDedicatedHostsRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

AllocateDedicatedHostsRequest::PromotionOptions AllocateDedicatedHostsRequest::getPromotionOptions() const {
  return promotionOptions_;
}

void AllocateDedicatedHostsRequest::setPromotionOptions(const AllocateDedicatedHostsRequest::PromotionOptions &promotionOptions) {
  promotionOptions_ = promotionOptions;
  setParameter(std::string("PromotionOptions") + ".CouponNo", promotionOptions.couponNo);
}

std::string AllocateDedicatedHostsRequest::getPeriodUnit() const {
  return periodUnit_;
}

void AllocateDedicatedHostsRequest::setPeriodUnit(const std::string &periodUnit) {
  periodUnit_ = periodUnit;
  setParameter(std::string("PeriodUnit"), periodUnit);
}

bool AllocateDedicatedHostsRequest::getAutoRenew() const {
  return autoRenew_;
}

void AllocateDedicatedHostsRequest::setAutoRenew(bool autoRenew) {
  autoRenew_ = autoRenew;
  setParameter(std::string("AutoRenew"), autoRenew ? "true" : "false");
}

int AllocateDedicatedHostsRequest::getNetworkAttributesSlbUdpTimeout() const {
  return networkAttributesSlbUdpTimeout_;
}

void AllocateDedicatedHostsRequest::setNetworkAttributesSlbUdpTimeout(int networkAttributesSlbUdpTimeout) {
  networkAttributesSlbUdpTimeout_ = networkAttributesSlbUdpTimeout;
  setParameter(std::string("NetworkAttributes.SlbUdpTimeout"), std::to_string(networkAttributesSlbUdpTimeout));
}

std::string AllocateDedicatedHostsRequest::getZoneId() const {
  return zoneId_;
}

void AllocateDedicatedHostsRequest::setZoneId(const std::string &zoneId) {
  zoneId_ = zoneId;
  setParameter(std::string("ZoneId"), zoneId);
}

std::string AllocateDedicatedHostsRequest::getAutoPlacement() const {
  return autoPlacement_;
}

void AllocateDedicatedHostsRequest::setAutoPlacement(const std::string &autoPlacement) {
  autoPlacement_ = autoPlacement;
  setParameter(std::string("AutoPlacement"), autoPlacement);
}

int AllocateDedicatedHostsRequest::getNetworkAttributesUdpTimeout() const {
  return networkAttributesUdpTimeout_;
}

void AllocateDedicatedHostsRequest::setNetworkAttributesUdpTimeout(int networkAttributesUdpTimeout) {
  networkAttributesUdpTimeout_ = networkAttributesUdpTimeout;
  setParameter(std::string("NetworkAttributes.UdpTimeout"), std::to_string(networkAttributesUdpTimeout));
}

std::string AllocateDedicatedHostsRequest::getClientToken() const {
  return clientToken_;
}

void AllocateDedicatedHostsRequest::setClientToken(const std::string &clientToken) {
  clientToken_ = clientToken;
  setParameter(std::string("ClientToken"), clientToken);
}

std::string AllocateDedicatedHostsRequest::getDescription() const {
  return description_;
}

void AllocateDedicatedHostsRequest::setDescription(const std::string &description) {
  description_ = description;
  setParameter(std::string("Description"), description);
}

std::string AllocateDedicatedHostsRequest::getRegionId() const {
  return regionId_;
}

void AllocateDedicatedHostsRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string AllocateDedicatedHostsRequest::getDedicatedHostClusterId() const {
  return dedicatedHostClusterId_;
}

void AllocateDedicatedHostsRequest::setDedicatedHostClusterId(const std::string &dedicatedHostClusterId) {
  dedicatedHostClusterId_ = dedicatedHostClusterId;
  setParameter(std::string("DedicatedHostClusterId"), dedicatedHostClusterId);
}

std::string AllocateDedicatedHostsRequest::getDedicatedHostType() const {
  return dedicatedHostType_;
}

void AllocateDedicatedHostsRequest::setDedicatedHostType(const std::string &dedicatedHostType) {
  dedicatedHostType_ = dedicatedHostType;
  setParameter(std::string("DedicatedHostType"), dedicatedHostType);
}

int AllocateDedicatedHostsRequest::getQuantity() const {
  return quantity_;
}

void AllocateDedicatedHostsRequest::setQuantity(int quantity) {
  quantity_ = quantity;
  setParameter(std::string("Quantity"), std::to_string(quantity));
}

bool AllocateDedicatedHostsRequest::getAutoPay() const {
  return autoPay_;
}

void AllocateDedicatedHostsRequest::setAutoPay(bool autoPay) {
  autoPay_ = autoPay;
  setParameter(std::string("AutoPay"), autoPay ? "true" : "false");
}

std::string AllocateDedicatedHostsRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void AllocateDedicatedHostsRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string AllocateDedicatedHostsRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void AllocateDedicatedHostsRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

std::string AllocateDedicatedHostsRequest::getAutoReleaseTime() const {
  return autoReleaseTime_;
}

void AllocateDedicatedHostsRequest::setAutoReleaseTime(const std::string &autoReleaseTime) {
  autoReleaseTime_ = autoReleaseTime;
  setParameter(std::string("AutoReleaseTime"), autoReleaseTime);
}

std::string AllocateDedicatedHostsRequest::getSchedulerOptionsFenceId() const {
  return schedulerOptionsFenceId_;
}

void AllocateDedicatedHostsRequest::setSchedulerOptionsFenceId(const std::string &schedulerOptionsFenceId) {
  schedulerOptionsFenceId_ = schedulerOptionsFenceId;
  setParameter(std::string("SchedulerOptions.FenceId"), schedulerOptionsFenceId);
}

std::string AllocateDedicatedHostsRequest::getChargeType() const {
  return chargeType_;
}

void AllocateDedicatedHostsRequest::setChargeType(const std::string &chargeType) {
  chargeType_ = chargeType;
  setParameter(std::string("ChargeType"), chargeType);
}

