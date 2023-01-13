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

#include <alibabacloud/cbn/model/CreateCenBandwidthPackageRequest.h>

using AlibabaCloud::Cbn::Model::CreateCenBandwidthPackageRequest;

CreateCenBandwidthPackageRequest::CreateCenBandwidthPackageRequest()
    : RpcServiceRequest("cbn", "2017-09-12", "CreateCenBandwidthPackage") {
  setMethod(HttpRequest::Method::Post);
}

CreateCenBandwidthPackageRequest::~CreateCenBandwidthPackageRequest() {}

long CreateCenBandwidthPackageRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void CreateCenBandwidthPackageRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string CreateCenBandwidthPackageRequest::getClientToken() const {
  return clientToken_;
}

void CreateCenBandwidthPackageRequest::setClientToken(const std::string &clientToken) {
  clientToken_ = clientToken;
  setParameter(std::string("ClientToken"), clientToken);
}

std::string CreateCenBandwidthPackageRequest::getDescription() const {
  return description_;
}

void CreateCenBandwidthPackageRequest::setDescription(const std::string &description) {
  description_ = description;
  setParameter(std::string("Description"), description);
}

int CreateCenBandwidthPackageRequest::getAutoRenewDuration() const {
  return autoRenewDuration_;
}

void CreateCenBandwidthPackageRequest::setAutoRenewDuration(int autoRenewDuration) {
  autoRenewDuration_ = autoRenewDuration;
  setParameter(std::string("AutoRenewDuration"), std::to_string(autoRenewDuration));
}

std::string CreateCenBandwidthPackageRequest::getBandwidthPackageChargeType() const {
  return bandwidthPackageChargeType_;
}

void CreateCenBandwidthPackageRequest::setBandwidthPackageChargeType(const std::string &bandwidthPackageChargeType) {
  bandwidthPackageChargeType_ = bandwidthPackageChargeType;
  setParameter(std::string("BandwidthPackageChargeType"), bandwidthPackageChargeType);
}

std::string CreateCenBandwidthPackageRequest::getResourceGroupId() const {
  return resourceGroupId_;
}

void CreateCenBandwidthPackageRequest::setResourceGroupId(const std::string &resourceGroupId) {
  resourceGroupId_ = resourceGroupId;
  setParameter(std::string("ResourceGroupId"), resourceGroupId);
}

std::vector<CreateCenBandwidthPackageRequest::Tag> CreateCenBandwidthPackageRequest::getTag() const {
  return tag_;
}

void CreateCenBandwidthPackageRequest::setTag(const std::vector<CreateCenBandwidthPackageRequest::Tag> &tag) {
  tag_ = tag;
  for(int dep1 = 0; dep1 != tag.size(); dep1++) {
  auto tagObj = tag.at(dep1);
  std::string tagObjStr = std::string("Tag") + "." + std::to_string(dep1 + 1);
    setParameter(tagObjStr + ".Value", tagObj.value);
    setParameter(tagObjStr + ".Key", tagObj.key);
  }
}

std::string CreateCenBandwidthPackageRequest::getGeographicRegionBId() const {
  return geographicRegionBId_;
}

void CreateCenBandwidthPackageRequest::setGeographicRegionBId(const std::string &geographicRegionBId) {
  geographicRegionBId_ = geographicRegionBId;
  setParameter(std::string("GeographicRegionBId"), geographicRegionBId);
}

int CreateCenBandwidthPackageRequest::getPeriod() const {
  return period_;
}

void CreateCenBandwidthPackageRequest::setPeriod(int period) {
  period_ = period;
  setParameter(std::string("Period"), std::to_string(period));
}

std::string CreateCenBandwidthPackageRequest::getGeographicRegionAId() const {
  return geographicRegionAId_;
}

void CreateCenBandwidthPackageRequest::setGeographicRegionAId(const std::string &geographicRegionAId) {
  geographicRegionAId_ = geographicRegionAId;
  setParameter(std::string("GeographicRegionAId"), geographicRegionAId);
}

bool CreateCenBandwidthPackageRequest::getAutoPay() const {
  return autoPay_;
}

void CreateCenBandwidthPackageRequest::setAutoPay(bool autoPay) {
  autoPay_ = autoPay;
  setParameter(std::string("AutoPay"), autoPay ? "true" : "false");
}

std::string CreateCenBandwidthPackageRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void CreateCenBandwidthPackageRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

int CreateCenBandwidthPackageRequest::getBandwidth() const {
  return bandwidth_;
}

void CreateCenBandwidthPackageRequest::setBandwidth(int bandwidth) {
  bandwidth_ = bandwidth;
  setParameter(std::string("Bandwidth"), std::to_string(bandwidth));
}

std::string CreateCenBandwidthPackageRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void CreateCenBandwidthPackageRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

long CreateCenBandwidthPackageRequest::getOwnerId() const {
  return ownerId_;
}

void CreateCenBandwidthPackageRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

std::string CreateCenBandwidthPackageRequest::getVersion() const {
  return version_;
}

void CreateCenBandwidthPackageRequest::setVersion(const std::string &version) {
  version_ = version;
  setParameter(std::string("Version"), version);
}

std::string CreateCenBandwidthPackageRequest::getServiceType() const {
  return serviceType_;
}

void CreateCenBandwidthPackageRequest::setServiceType(const std::string &serviceType) {
  serviceType_ = serviceType;
  setParameter(std::string("ServiceType"), serviceType);
}

bool CreateCenBandwidthPackageRequest::getAutoRenew() const {
  return autoRenew_;
}

void CreateCenBandwidthPackageRequest::setAutoRenew(bool autoRenew) {
  autoRenew_ = autoRenew;
  setParameter(std::string("AutoRenew"), autoRenew ? "true" : "false");
}

std::string CreateCenBandwidthPackageRequest::getName() const {
  return name_;
}

void CreateCenBandwidthPackageRequest::setName(const std::string &name) {
  name_ = name;
  setParameter(std::string("Name"), name);
}

std::string CreateCenBandwidthPackageRequest::getPricingCycle() const {
  return pricingCycle_;
}

void CreateCenBandwidthPackageRequest::setPricingCycle(const std::string &pricingCycle) {
  pricingCycle_ = pricingCycle;
  setParameter(std::string("PricingCycle"), pricingCycle);
}

