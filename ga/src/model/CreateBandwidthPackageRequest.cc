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

#include <alibabacloud/ga/model/CreateBandwidthPackageRequest.h>

using AlibabaCloud::Ga::Model::CreateBandwidthPackageRequest;

CreateBandwidthPackageRequest::CreateBandwidthPackageRequest()
    : RpcServiceRequest("ga", "2019-11-20", "CreateBandwidthPackage") {
  setMethod(HttpRequest::Method::Post);
}

CreateBandwidthPackageRequest::~CreateBandwidthPackageRequest() {}

std::string CreateBandwidthPackageRequest::getBandwidthType() const {
  return bandwidthType_;
}

void CreateBandwidthPackageRequest::setBandwidthType(const std::string &bandwidthType) {
  bandwidthType_ = bandwidthType;
  setParameter(std::string("BandwidthType"), bandwidthType);
}

std::string CreateBandwidthPackageRequest::getClientToken() const {
  return clientToken_;
}

void CreateBandwidthPackageRequest::setClientToken(const std::string &clientToken) {
  clientToken_ = clientToken;
  setParameter(std::string("ClientToken"), clientToken);
}

std::vector<CreateBandwidthPackageRequest::SystemTag> CreateBandwidthPackageRequest::getSystemTag() const {
  return systemTag_;
}

void CreateBandwidthPackageRequest::setSystemTag(const std::vector<CreateBandwidthPackageRequest::SystemTag> &systemTag) {
  systemTag_ = systemTag;
  for(int dep1 = 0; dep1 != systemTag.size(); dep1++) {
  auto systemTagObj = systemTag.at(dep1);
  std::string systemTagObjStr = std::string("SystemTag") + "." + std::to_string(dep1 + 1);
    setParameter(systemTagObjStr + ".Key", systemTagObj.key);
    setParameter(systemTagObjStr + ".Value", systemTagObj.value);
    setParameter(systemTagObjStr + ".Scope", systemTagObj.scope);
  }
}

std::string CreateBandwidthPackageRequest::getAutoUseCoupon() const {
  return autoUseCoupon_;
}

void CreateBandwidthPackageRequest::setAutoUseCoupon(const std::string &autoUseCoupon) {
  autoUseCoupon_ = autoUseCoupon;
  setParameter(std::string("AutoUseCoupon"), autoUseCoupon);
}

std::string CreateBandwidthPackageRequest::getType() const {
  return type_;
}

void CreateBandwidthPackageRequest::setType(const std::string &type) {
  type_ = type;
  setParameter(std::string("Type"), type);
}

int CreateBandwidthPackageRequest::getAutoRenewDuration() const {
  return autoRenewDuration_;
}

void CreateBandwidthPackageRequest::setAutoRenewDuration(int autoRenewDuration) {
  autoRenewDuration_ = autoRenewDuration;
  setParameter(std::string("AutoRenewDuration"), std::to_string(autoRenewDuration));
}

std::string CreateBandwidthPackageRequest::getDuration() const {
  return duration_;
}

void CreateBandwidthPackageRequest::setDuration(const std::string &duration) {
  duration_ = duration;
  setParameter(std::string("Duration"), duration);
}

std::string CreateBandwidthPackageRequest::getResourceGroupId() const {
  return resourceGroupId_;
}

void CreateBandwidthPackageRequest::setResourceGroupId(const std::string &resourceGroupId) {
  resourceGroupId_ = resourceGroupId;
  setParameter(std::string("ResourceGroupId"), resourceGroupId);
}

std::string CreateBandwidthPackageRequest::getRegionId() const {
  return regionId_;
}

void CreateBandwidthPackageRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::vector<CreateBandwidthPackageRequest::Tag> CreateBandwidthPackageRequest::getTag() const {
  return tag_;
}

void CreateBandwidthPackageRequest::setTag(const std::vector<CreateBandwidthPackageRequest::Tag> &tag) {
  tag_ = tag;
  for(int dep1 = 0; dep1 != tag.size(); dep1++) {
  auto tagObj = tag.at(dep1);
  std::string tagObjStr = std::string("Tag") + "." + std::to_string(dep1 + 1);
    setParameter(tagObjStr + ".Key", tagObj.key);
    setParameter(tagObjStr + ".Value", tagObj.value);
  }
}

bool CreateBandwidthPackageRequest::getAutoPay() const {
  return autoPay_;
}

void CreateBandwidthPackageRequest::setAutoPay(bool autoPay) {
  autoPay_ = autoPay;
  setParameter(std::string("AutoPay"), autoPay ? "true" : "false");
}

std::string CreateBandwidthPackageRequest::getPromotionOptionNo() const {
  return promotionOptionNo_;
}

void CreateBandwidthPackageRequest::setPromotionOptionNo(const std::string &promotionOptionNo) {
  promotionOptionNo_ = promotionOptionNo;
  setParameter(std::string("PromotionOptionNo"), promotionOptionNo);
}

int CreateBandwidthPackageRequest::getBandwidth() const {
  return bandwidth_;
}

void CreateBandwidthPackageRequest::setBandwidth(int bandwidth) {
  bandwidth_ = bandwidth;
  setParameter(std::string("Bandwidth"), std::to_string(bandwidth));
}

std::string CreateBandwidthPackageRequest::getCbnGeographicRegionIdB() const {
  return cbnGeographicRegionIdB_;
}

void CreateBandwidthPackageRequest::setCbnGeographicRegionIdB(const std::string &cbnGeographicRegionIdB) {
  cbnGeographicRegionIdB_ = cbnGeographicRegionIdB;
  setParameter(std::string("CbnGeographicRegionIdB"), cbnGeographicRegionIdB);
}

std::string CreateBandwidthPackageRequest::getCbnGeographicRegionIdA() const {
  return cbnGeographicRegionIdA_;
}

void CreateBandwidthPackageRequest::setCbnGeographicRegionIdA(const std::string &cbnGeographicRegionIdA) {
  cbnGeographicRegionIdA_ = cbnGeographicRegionIdA;
  setParameter(std::string("CbnGeographicRegionIdA"), cbnGeographicRegionIdA);
}

bool CreateBandwidthPackageRequest::getAutoRenew() const {
  return autoRenew_;
}

void CreateBandwidthPackageRequest::setAutoRenew(bool autoRenew) {
  autoRenew_ = autoRenew;
  setParameter(std::string("AutoRenew"), autoRenew ? "true" : "false");
}

std::string CreateBandwidthPackageRequest::getBillingType() const {
  return billingType_;
}

void CreateBandwidthPackageRequest::setBillingType(const std::string &billingType) {
  billingType_ = billingType;
  setParameter(std::string("BillingType"), billingType);
}

std::string CreateBandwidthPackageRequest::getChargeType() const {
  return chargeType_;
}

void CreateBandwidthPackageRequest::setChargeType(const std::string &chargeType) {
  chargeType_ = chargeType;
  setParameter(std::string("ChargeType"), chargeType);
}

std::string CreateBandwidthPackageRequest::getPricingCycle() const {
  return pricingCycle_;
}

void CreateBandwidthPackageRequest::setPricingCycle(const std::string &pricingCycle) {
  pricingCycle_ = pricingCycle;
  setParameter(std::string("PricingCycle"), pricingCycle);
}

int CreateBandwidthPackageRequest::getRatio() const {
  return ratio_;
}

void CreateBandwidthPackageRequest::setRatio(int ratio) {
  ratio_ = ratio;
  setParameter(std::string("Ratio"), std::to_string(ratio));
}

