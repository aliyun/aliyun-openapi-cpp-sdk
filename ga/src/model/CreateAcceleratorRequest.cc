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

#include <alibabacloud/ga/model/CreateAcceleratorRequest.h>

using AlibabaCloud::Ga::Model::CreateAcceleratorRequest;

CreateAcceleratorRequest::CreateAcceleratorRequest()
    : RpcServiceRequest("ga", "2019-11-20", "CreateAccelerator") {
  setMethod(HttpRequest::Method::Post);
}

CreateAcceleratorRequest::~CreateAcceleratorRequest() {}

std::string CreateAcceleratorRequest::getClientToken() const {
  return clientToken_;
}

void CreateAcceleratorRequest::setClientToken(const std::string &clientToken) {
  clientToken_ = clientToken;
  setParameter(std::string("ClientToken"), clientToken);
}

std::vector<CreateAcceleratorRequest::SystemTag> CreateAcceleratorRequest::getSystemTag() const {
  return systemTag_;
}

void CreateAcceleratorRequest::setSystemTag(const std::vector<CreateAcceleratorRequest::SystemTag> &systemTag) {
  systemTag_ = systemTag;
  for(int dep1 = 0; dep1 != systemTag.size(); dep1++) {
  auto systemTagObj = systemTag.at(dep1);
  std::string systemTagObjStr = std::string("SystemTag") + "." + std::to_string(dep1 + 1);
    setParameter(systemTagObjStr + ".Key", systemTagObj.key);
    setParameter(systemTagObjStr + ".Value", systemTagObj.value);
    setParameter(systemTagObjStr + ".Scope", systemTagObj.scope);
  }
}

CreateAcceleratorRequest::IpSetConfig CreateAcceleratorRequest::getIpSetConfig() const {
  return ipSetConfig_;
}

void CreateAcceleratorRequest::setIpSetConfig(const CreateAcceleratorRequest::IpSetConfig &ipSetConfig) {
  ipSetConfig_ = ipSetConfig;
  setParameter(std::string("IpSetConfig") + ".AccessMode", ipSetConfig.accessMode);
}

std::string CreateAcceleratorRequest::getAutoUseCoupon() const {
  return autoUseCoupon_;
}

void CreateAcceleratorRequest::setAutoUseCoupon(const std::string &autoUseCoupon) {
  autoUseCoupon_ = autoUseCoupon;
  setParameter(std::string("AutoUseCoupon"), autoUseCoupon);
}

int CreateAcceleratorRequest::getAutoRenewDuration() const {
  return autoRenewDuration_;
}

void CreateAcceleratorRequest::setAutoRenewDuration(int autoRenewDuration) {
  autoRenewDuration_ = autoRenewDuration;
  setParameter(std::string("AutoRenewDuration"), std::to_string(autoRenewDuration));
}

std::string CreateAcceleratorRequest::getSpec() const {
  return spec_;
}

void CreateAcceleratorRequest::setSpec(const std::string &spec) {
  spec_ = spec;
  setParameter(std::string("Spec"), spec);
}

int CreateAcceleratorRequest::getDuration() const {
  return duration_;
}

void CreateAcceleratorRequest::setDuration(int duration) {
  duration_ = duration;
  setParameter(std::string("Duration"), std::to_string(duration));
}

std::string CreateAcceleratorRequest::getResourceGroupId() const {
  return resourceGroupId_;
}

void CreateAcceleratorRequest::setResourceGroupId(const std::string &resourceGroupId) {
  resourceGroupId_ = resourceGroupId;
  setParameter(std::string("ResourceGroupId"), resourceGroupId);
}

std::string CreateAcceleratorRequest::getRegionId() const {
  return regionId_;
}

void CreateAcceleratorRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::vector<CreateAcceleratorRequest::Tag> CreateAcceleratorRequest::getTag() const {
  return tag_;
}

void CreateAcceleratorRequest::setTag(const std::vector<CreateAcceleratorRequest::Tag> &tag) {
  tag_ = tag;
  for(int dep1 = 0; dep1 != tag.size(); dep1++) {
  auto tagObj = tag.at(dep1);
  std::string tagObjStr = std::string("Tag") + "." + std::to_string(dep1 + 1);
    setParameter(tagObjStr + ".Key", tagObj.key);
    setParameter(tagObjStr + ".Value", tagObj.value);
  }
}

std::string CreateAcceleratorRequest::getInstanceChargeType() const {
  return instanceChargeType_;
}

void CreateAcceleratorRequest::setInstanceChargeType(const std::string &instanceChargeType) {
  instanceChargeType_ = instanceChargeType;
  setParameter(std::string("InstanceChargeType"), instanceChargeType);
}

bool CreateAcceleratorRequest::getAutoPay() const {
  return autoPay_;
}

void CreateAcceleratorRequest::setAutoPay(bool autoPay) {
  autoPay_ = autoPay;
  setParameter(std::string("AutoPay"), autoPay ? "true" : "false");
}

bool CreateAcceleratorRequest::getDryRun() const {
  return dryRun_;
}

void CreateAcceleratorRequest::setDryRun(bool dryRun) {
  dryRun_ = dryRun;
  setParameter(std::string("DryRun"), dryRun ? "true" : "false");
}

std::string CreateAcceleratorRequest::getPromotionOptionNo() const {
  return promotionOptionNo_;
}

void CreateAcceleratorRequest::setPromotionOptionNo(const std::string &promotionOptionNo) {
  promotionOptionNo_ = promotionOptionNo;
  setParameter(std::string("PromotionOptionNo"), promotionOptionNo);
}

std::string CreateAcceleratorRequest::getBandwidthBillingType() const {
  return bandwidthBillingType_;
}

void CreateAcceleratorRequest::setBandwidthBillingType(const std::string &bandwidthBillingType) {
  bandwidthBillingType_ = bandwidthBillingType;
  setParameter(std::string("BandwidthBillingType"), bandwidthBillingType);
}

bool CreateAcceleratorRequest::getAutoRenew() const {
  return autoRenew_;
}

void CreateAcceleratorRequest::setAutoRenew(bool autoRenew) {
  autoRenew_ = autoRenew;
  setParameter(std::string("AutoRenew"), autoRenew ? "true" : "false");
}

std::string CreateAcceleratorRequest::getName() const {
  return name_;
}

void CreateAcceleratorRequest::setName(const std::string &name) {
  name_ = name;
  setParameter(std::string("Name"), name);
}

std::string CreateAcceleratorRequest::getPricingCycle() const {
  return pricingCycle_;
}

void CreateAcceleratorRequest::setPricingCycle(const std::string &pricingCycle) {
  pricingCycle_ = pricingCycle;
  setParameter(std::string("PricingCycle"), pricingCycle);
}

