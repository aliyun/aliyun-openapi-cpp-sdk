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

#include <alibabacloud/ga/model/CreateBasicAcceleratorRequest.h>

using AlibabaCloud::Ga::Model::CreateBasicAcceleratorRequest;

CreateBasicAcceleratorRequest::CreateBasicAcceleratorRequest()
    : RpcServiceRequest("ga", "2019-11-20", "CreateBasicAccelerator") {
  setMethod(HttpRequest::Method::Post);
}

CreateBasicAcceleratorRequest::~CreateBasicAcceleratorRequest() {}

std::string CreateBasicAcceleratorRequest::getClientToken() const {
  return clientToken_;
}

void CreateBasicAcceleratorRequest::setClientToken(const std::string &clientToken) {
  clientToken_ = clientToken;
  setParameter(std::string("ClientToken"), clientToken);
}

std::vector<CreateBasicAcceleratorRequest::SystemTag> CreateBasicAcceleratorRequest::getSystemTag() const {
  return systemTag_;
}

void CreateBasicAcceleratorRequest::setSystemTag(const std::vector<CreateBasicAcceleratorRequest::SystemTag> &systemTag) {
  systemTag_ = systemTag;
  for(int dep1 = 0; dep1 != systemTag.size(); dep1++) {
  auto systemTagObj = systemTag.at(dep1);
  std::string systemTagObjStr = std::string("SystemTag") + "." + std::to_string(dep1 + 1);
    setParameter(systemTagObjStr + ".Key", systemTagObj.key);
    setParameter(systemTagObjStr + ".Value", systemTagObj.value);
    setParameter(systemTagObjStr + ".Scope", systemTagObj.scope);
  }
}

std::string CreateBasicAcceleratorRequest::getAutoUseCoupon() const {
  return autoUseCoupon_;
}

void CreateBasicAcceleratorRequest::setAutoUseCoupon(const std::string &autoUseCoupon) {
  autoUseCoupon_ = autoUseCoupon;
  setParameter(std::string("AutoUseCoupon"), autoUseCoupon);
}

int CreateBasicAcceleratorRequest::getAutoRenewDuration() const {
  return autoRenewDuration_;
}

void CreateBasicAcceleratorRequest::setAutoRenewDuration(int autoRenewDuration) {
  autoRenewDuration_ = autoRenewDuration;
  setParameter(std::string("AutoRenewDuration"), std::to_string(autoRenewDuration));
}

int CreateBasicAcceleratorRequest::getDuration() const {
  return duration_;
}

void CreateBasicAcceleratorRequest::setDuration(int duration) {
  duration_ = duration;
  setParameter(std::string("Duration"), std::to_string(duration));
}

std::string CreateBasicAcceleratorRequest::getResourceGroupId() const {
  return resourceGroupId_;
}

void CreateBasicAcceleratorRequest::setResourceGroupId(const std::string &resourceGroupId) {
  resourceGroupId_ = resourceGroupId;
  setParameter(std::string("ResourceGroupId"), resourceGroupId);
}

std::string CreateBasicAcceleratorRequest::getRegionId() const {
  return regionId_;
}

void CreateBasicAcceleratorRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::vector<CreateBasicAcceleratorRequest::Tag> CreateBasicAcceleratorRequest::getTag() const {
  return tag_;
}

void CreateBasicAcceleratorRequest::setTag(const std::vector<CreateBasicAcceleratorRequest::Tag> &tag) {
  tag_ = tag;
  for(int dep1 = 0; dep1 != tag.size(); dep1++) {
  auto tagObj = tag.at(dep1);
  std::string tagObjStr = std::string("Tag") + "." + std::to_string(dep1 + 1);
    setParameter(tagObjStr + ".Key", tagObj.key);
    setParameter(tagObjStr + ".Value", tagObj.value);
  }
}

bool CreateBasicAcceleratorRequest::getAutoPay() const {
  return autoPay_;
}

void CreateBasicAcceleratorRequest::setAutoPay(bool autoPay) {
  autoPay_ = autoPay;
  setParameter(std::string("AutoPay"), autoPay ? "true" : "false");
}

bool CreateBasicAcceleratorRequest::getDryRun() const {
  return dryRun_;
}

void CreateBasicAcceleratorRequest::setDryRun(bool dryRun) {
  dryRun_ = dryRun;
  setParameter(std::string("DryRun"), dryRun ? "true" : "false");
}

std::string CreateBasicAcceleratorRequest::getPromotionOptionNo() const {
  return promotionOptionNo_;
}

void CreateBasicAcceleratorRequest::setPromotionOptionNo(const std::string &promotionOptionNo) {
  promotionOptionNo_ = promotionOptionNo;
  setParameter(std::string("PromotionOptionNo"), promotionOptionNo);
}

std::string CreateBasicAcceleratorRequest::getBandwidthBillingType() const {
  return bandwidthBillingType_;
}

void CreateBasicAcceleratorRequest::setBandwidthBillingType(const std::string &bandwidthBillingType) {
  bandwidthBillingType_ = bandwidthBillingType;
  setParameter(std::string("BandwidthBillingType"), bandwidthBillingType);
}

bool CreateBasicAcceleratorRequest::getAutoRenew() const {
  return autoRenew_;
}

void CreateBasicAcceleratorRequest::setAutoRenew(bool autoRenew) {
  autoRenew_ = autoRenew;
  setParameter(std::string("AutoRenew"), autoRenew ? "true" : "false");
}

std::string CreateBasicAcceleratorRequest::getChargeType() const {
  return chargeType_;
}

void CreateBasicAcceleratorRequest::setChargeType(const std::string &chargeType) {
  chargeType_ = chargeType;
  setParameter(std::string("ChargeType"), chargeType);
}

std::string CreateBasicAcceleratorRequest::getPricingCycle() const {
  return pricingCycle_;
}

void CreateBasicAcceleratorRequest::setPricingCycle(const std::string &pricingCycle) {
  pricingCycle_ = pricingCycle;
  setParameter(std::string("PricingCycle"), pricingCycle);
}

