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

#include <alibabacloud/ecs/model/PurchaseReservedInstancesOfferingRequest.h>

using AlibabaCloud::Ecs::Model::PurchaseReservedInstancesOfferingRequest;

PurchaseReservedInstancesOfferingRequest::PurchaseReservedInstancesOfferingRequest()
    : RpcServiceRequest("ecs", "2014-05-26", "PurchaseReservedInstancesOffering") {
  setMethod(HttpRequest::Method::Post);
}

PurchaseReservedInstancesOfferingRequest::~PurchaseReservedInstancesOfferingRequest() {}

long PurchaseReservedInstancesOfferingRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void PurchaseReservedInstancesOfferingRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string PurchaseReservedInstancesOfferingRequest::getClientToken() const {
  return clientToken_;
}

void PurchaseReservedInstancesOfferingRequest::setClientToken(const std::string &clientToken) {
  clientToken_ = clientToken;
  setParameter(std::string("ClientToken"), clientToken);
}

std::string PurchaseReservedInstancesOfferingRequest::getDescription() const {
  return description_;
}

void PurchaseReservedInstancesOfferingRequest::setDescription(const std::string &description) {
  description_ = description;
  setParameter(std::string("Description"), description);
}

std::string PurchaseReservedInstancesOfferingRequest::getStartTime() const {
  return startTime_;
}

void PurchaseReservedInstancesOfferingRequest::setStartTime(const std::string &startTime) {
  startTime_ = startTime;
  setParameter(std::string("StartTime"), startTime);
}

std::string PurchaseReservedInstancesOfferingRequest::getPlatform() const {
  return platform_;
}

void PurchaseReservedInstancesOfferingRequest::setPlatform(const std::string &platform) {
  platform_ = platform;
  setParameter(std::string("Platform"), platform);
}

std::string PurchaseReservedInstancesOfferingRequest::getResourceGroupId() const {
  return resourceGroupId_;
}

void PurchaseReservedInstancesOfferingRequest::setResourceGroupId(const std::string &resourceGroupId) {
  resourceGroupId_ = resourceGroupId;
  setParameter(std::string("ResourceGroupId"), resourceGroupId);
}

std::string PurchaseReservedInstancesOfferingRequest::getRegionId() const {
  return regionId_;
}

void PurchaseReservedInstancesOfferingRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string PurchaseReservedInstancesOfferingRequest::getScope() const {
  return scope_;
}

void PurchaseReservedInstancesOfferingRequest::setScope(const std::string &scope) {
  scope_ = scope;
  setParameter(std::string("Scope"), scope);
}

std::string PurchaseReservedInstancesOfferingRequest::getInstanceType() const {
  return instanceType_;
}

void PurchaseReservedInstancesOfferingRequest::setInstanceType(const std::string &instanceType) {
  instanceType_ = instanceType;
  setParameter(std::string("InstanceType"), instanceType);
}

std::vector<PurchaseReservedInstancesOfferingRequest::Tag> PurchaseReservedInstancesOfferingRequest::getTag() const {
  return tag_;
}

void PurchaseReservedInstancesOfferingRequest::setTag(const std::vector<PurchaseReservedInstancesOfferingRequest::Tag> &tag) {
  tag_ = tag;
  for(int dep1 = 0; dep1 != tag.size(); dep1++) {
  auto tagObj = tag.at(dep1);
  std::string tagObjStr = std::string("Tag") + "." + std::to_string(dep1 + 1);
    setParameter(tagObjStr + ".Key", tagObj.key);
    setParameter(tagObjStr + ".Value", tagObj.value);
  }
}

int PurchaseReservedInstancesOfferingRequest::getAutoRenewPeriod() const {
  return autoRenewPeriod_;
}

void PurchaseReservedInstancesOfferingRequest::setAutoRenewPeriod(int autoRenewPeriod) {
  autoRenewPeriod_ = autoRenewPeriod;
  setParameter(std::string("AutoRenewPeriod"), std::to_string(autoRenewPeriod));
}

int PurchaseReservedInstancesOfferingRequest::getPeriod() const {
  return period_;
}

void PurchaseReservedInstancesOfferingRequest::setPeriod(int period) {
  period_ = period;
  setParameter(std::string("Period"), std::to_string(period));
}

bool PurchaseReservedInstancesOfferingRequest::getAutoPay() const {
  return autoPay_;
}

void PurchaseReservedInstancesOfferingRequest::setAutoPay(bool autoPay) {
  autoPay_ = autoPay;
  setParameter(std::string("AutoPay"), autoPay ? "true" : "false");
}

std::string PurchaseReservedInstancesOfferingRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void PurchaseReservedInstancesOfferingRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string PurchaseReservedInstancesOfferingRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void PurchaseReservedInstancesOfferingRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

long PurchaseReservedInstancesOfferingRequest::getOwnerId() const {
  return ownerId_;
}

void PurchaseReservedInstancesOfferingRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

PurchaseReservedInstancesOfferingRequest::PromotionOptions PurchaseReservedInstancesOfferingRequest::getPromotionOptions() const {
  return promotionOptions_;
}

void PurchaseReservedInstancesOfferingRequest::setPromotionOptions(const PurchaseReservedInstancesOfferingRequest::PromotionOptions &promotionOptions) {
  promotionOptions_ = promotionOptions;
  setParameter(std::string("PromotionOptions") + ".CouponNo", promotionOptions.couponNo);
}

std::string PurchaseReservedInstancesOfferingRequest::getPeriodUnit() const {
  return periodUnit_;
}

void PurchaseReservedInstancesOfferingRequest::setPeriodUnit(const std::string &periodUnit) {
  periodUnit_ = periodUnit;
  setParameter(std::string("PeriodUnit"), periodUnit);
}

std::string PurchaseReservedInstancesOfferingRequest::getOfferingType() const {
  return offeringType_;
}

void PurchaseReservedInstancesOfferingRequest::setOfferingType(const std::string &offeringType) {
  offeringType_ = offeringType;
  setParameter(std::string("OfferingType"), offeringType);
}

bool PurchaseReservedInstancesOfferingRequest::getAutoRenew() const {
  return autoRenew_;
}

void PurchaseReservedInstancesOfferingRequest::setAutoRenew(bool autoRenew) {
  autoRenew_ = autoRenew;
  setParameter(std::string("AutoRenew"), autoRenew ? "true" : "false");
}

std::string PurchaseReservedInstancesOfferingRequest::getZoneId() const {
  return zoneId_;
}

void PurchaseReservedInstancesOfferingRequest::setZoneId(const std::string &zoneId) {
  zoneId_ = zoneId;
  setParameter(std::string("ZoneId"), zoneId);
}

std::string PurchaseReservedInstancesOfferingRequest::getReservedInstanceName() const {
  return reservedInstanceName_;
}

void PurchaseReservedInstancesOfferingRequest::setReservedInstanceName(const std::string &reservedInstanceName) {
  reservedInstanceName_ = reservedInstanceName;
  setParameter(std::string("ReservedInstanceName"), reservedInstanceName);
}

int PurchaseReservedInstancesOfferingRequest::getInstanceAmount() const {
  return instanceAmount_;
}

void PurchaseReservedInstancesOfferingRequest::setInstanceAmount(int instanceAmount) {
  instanceAmount_ = instanceAmount;
  setParameter(std::string("InstanceAmount"), std::to_string(instanceAmount));
}

