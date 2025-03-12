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

#include <alibabacloud/ecs/model/RenewReservedInstancesRequest.h>

using AlibabaCloud::Ecs::Model::RenewReservedInstancesRequest;

RenewReservedInstancesRequest::RenewReservedInstancesRequest()
    : RpcServiceRequest("ecs", "2014-05-26", "RenewReservedInstances") {
  setMethod(HttpRequest::Method::Post);
}

RenewReservedInstancesRequest::~RenewReservedInstancesRequest() {}

long RenewReservedInstancesRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void RenewReservedInstancesRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string RenewReservedInstancesRequest::getClientToken() const {
  return clientToken_;
}

void RenewReservedInstancesRequest::setClientToken(const std::string &clientToken) {
  clientToken_ = clientToken;
  setParameter(std::string("ClientToken"), clientToken);
}

std::string RenewReservedInstancesRequest::getRegionId() const {
  return regionId_;
}

void RenewReservedInstancesRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

int RenewReservedInstancesRequest::getAutoRenewPeriod() const {
  return autoRenewPeriod_;
}

void RenewReservedInstancesRequest::setAutoRenewPeriod(int autoRenewPeriod) {
  autoRenewPeriod_ = autoRenewPeriod;
  setParameter(std::string("AutoRenewPeriod"), std::to_string(autoRenewPeriod));
}

int RenewReservedInstancesRequest::getPeriod() const {
  return period_;
}

void RenewReservedInstancesRequest::setPeriod(int period) {
  period_ = period;
  setParameter(std::string("Period"), std::to_string(period));
}

bool RenewReservedInstancesRequest::getAutoPay() const {
  return autoPay_;
}

void RenewReservedInstancesRequest::setAutoPay(bool autoPay) {
  autoPay_ = autoPay;
  setParameter(std::string("AutoPay"), autoPay ? "true" : "false");
}

std::string RenewReservedInstancesRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void RenewReservedInstancesRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string RenewReservedInstancesRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void RenewReservedInstancesRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

long RenewReservedInstancesRequest::getOwnerId() const {
  return ownerId_;
}

void RenewReservedInstancesRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

RenewReservedInstancesRequest::PromotionOptions RenewReservedInstancesRequest::getPromotionOptions() const {
  return promotionOptions_;
}

void RenewReservedInstancesRequest::setPromotionOptions(const RenewReservedInstancesRequest::PromotionOptions &promotionOptions) {
  promotionOptions_ = promotionOptions;
  setParameter(std::string("PromotionOptions") + ".CouponNo", promotionOptions.couponNo);
}

std::string RenewReservedInstancesRequest::getPeriodUnit() const {
  return periodUnit_;
}

void RenewReservedInstancesRequest::setPeriodUnit(const std::string &periodUnit) {
  periodUnit_ = periodUnit;
  setParameter(std::string("PeriodUnit"), periodUnit);
}

std::vector<std::string> RenewReservedInstancesRequest::getReservedInstanceId() const {
  return reservedInstanceId_;
}

void RenewReservedInstancesRequest::setReservedInstanceId(const std::vector<std::string> &reservedInstanceId) {
  reservedInstanceId_ = reservedInstanceId;
}

bool RenewReservedInstancesRequest::getAutoRenew() const {
  return autoRenew_;
}

void RenewReservedInstancesRequest::setAutoRenew(bool autoRenew) {
  autoRenew_ = autoRenew;
  setParameter(std::string("AutoRenew"), autoRenew ? "true" : "false");
}

