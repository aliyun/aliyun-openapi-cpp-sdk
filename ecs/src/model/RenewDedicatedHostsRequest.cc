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

#include <alibabacloud/ecs/model/RenewDedicatedHostsRequest.h>

using AlibabaCloud::Ecs::Model::RenewDedicatedHostsRequest;

RenewDedicatedHostsRequest::RenewDedicatedHostsRequest()
    : RpcServiceRequest("ecs", "2014-05-26", "RenewDedicatedHosts") {
  setMethod(HttpRequest::Method::Post);
}

RenewDedicatedHostsRequest::~RenewDedicatedHostsRequest() {}

std::string RenewDedicatedHostsRequest::getDedicatedHostIds() const {
  return dedicatedHostIds_;
}

void RenewDedicatedHostsRequest::setDedicatedHostIds(const std::string &dedicatedHostIds) {
  dedicatedHostIds_ = dedicatedHostIds;
  setParameter(std::string("DedicatedHostIds"), dedicatedHostIds);
}

long RenewDedicatedHostsRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void RenewDedicatedHostsRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string RenewDedicatedHostsRequest::getClientToken() const {
  return clientToken_;
}

void RenewDedicatedHostsRequest::setClientToken(const std::string &clientToken) {
  clientToken_ = clientToken;
  setParameter(std::string("ClientToken"), clientToken);
}

std::string RenewDedicatedHostsRequest::getRegionId() const {
  return regionId_;
}

void RenewDedicatedHostsRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

int RenewDedicatedHostsRequest::getPeriod() const {
  return period_;
}

void RenewDedicatedHostsRequest::setPeriod(int period) {
  period_ = period;
  setParameter(std::string("Period"), std::to_string(period));
}

bool RenewDedicatedHostsRequest::getAutoPay() const {
  return autoPay_;
}

void RenewDedicatedHostsRequest::setAutoPay(bool autoPay) {
  autoPay_ = autoPay;
  setParameter(std::string("AutoPay"), autoPay ? "true" : "false");
}

std::string RenewDedicatedHostsRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void RenewDedicatedHostsRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string RenewDedicatedHostsRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void RenewDedicatedHostsRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

long RenewDedicatedHostsRequest::getOwnerId() const {
  return ownerId_;
}

void RenewDedicatedHostsRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

RenewDedicatedHostsRequest::PromotionOptions RenewDedicatedHostsRequest::getPromotionOptions() const {
  return promotionOptions_;
}

void RenewDedicatedHostsRequest::setPromotionOptions(const RenewDedicatedHostsRequest::PromotionOptions &promotionOptions) {
  promotionOptions_ = promotionOptions;
  setParameter(std::string("PromotionOptions") + ".CouponNo", promotionOptions.couponNo);
}

std::string RenewDedicatedHostsRequest::getPeriodUnit() const {
  return periodUnit_;
}

void RenewDedicatedHostsRequest::setPeriodUnit(const std::string &periodUnit) {
  periodUnit_ = periodUnit;
  setParameter(std::string("PeriodUnit"), periodUnit);
}

