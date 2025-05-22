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

#include <alibabacloud/rds/model/RenewRCInstanceRequest.h>

using AlibabaCloud::Rds::Model::RenewRCInstanceRequest;

RenewRCInstanceRequest::RenewRCInstanceRequest()
    : RpcServiceRequest("rds", "2014-08-15", "RenewRCInstance") {
  setMethod(HttpRequest::Method::Post);
}

RenewRCInstanceRequest::~RenewRCInstanceRequest() {}

std::string RenewRCInstanceRequest::getClientToken() const {
  return clientToken_;
}

void RenewRCInstanceRequest::setClientToken(const std::string &clientToken) {
  clientToken_ = clientToken;
  setParameter(std::string("ClientToken"), clientToken);
}

bool RenewRCInstanceRequest::getAutoUseCoupon() const {
  return autoUseCoupon_;
}

void RenewRCInstanceRequest::setAutoUseCoupon(bool autoUseCoupon) {
  autoUseCoupon_ = autoUseCoupon;
  setParameter(std::string("AutoUseCoupon"), autoUseCoupon ? "true" : "false");
}

std::string RenewRCInstanceRequest::getRegionId() const {
  return regionId_;
}

void RenewRCInstanceRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string RenewRCInstanceRequest::getBusinessInfo() const {
  return businessInfo_;
}

void RenewRCInstanceRequest::setBusinessInfo(const std::string &businessInfo) {
  businessInfo_ = businessInfo;
  setParameter(std::string("BusinessInfo"), businessInfo);
}

bool RenewRCInstanceRequest::getAutoPay() const {
  return autoPay_;
}

void RenewRCInstanceRequest::setAutoPay(bool autoPay) {
  autoPay_ = autoPay;
  setParameter(std::string("AutoPay"), autoPay ? "true" : "false");
}

std::string RenewRCInstanceRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void RenewRCInstanceRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string RenewRCInstanceRequest::getResource() const {
  return resource_;
}

void RenewRCInstanceRequest::setResource(const std::string &resource) {
  resource_ = resource;
  setParameter(std::string("Resource"), resource);
}

std::string RenewRCInstanceRequest::getCommodityCode() const {
  return commodityCode_;
}

void RenewRCInstanceRequest::setCommodityCode(const std::string &commodityCode) {
  commodityCode_ = commodityCode;
  setParameter(std::string("CommodityCode"), commodityCode);
}

long RenewRCInstanceRequest::getOwnerId() const {
  return ownerId_;
}

void RenewRCInstanceRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

std::string RenewRCInstanceRequest::getUsedTime() const {
  return usedTime_;
}

void RenewRCInstanceRequest::setUsedTime(const std::string &usedTime) {
  usedTime_ = usedTime;
  setParameter(std::string("UsedTime"), usedTime);
}

std::string RenewRCInstanceRequest::getInstanceId() const {
  return instanceId_;
}

void RenewRCInstanceRequest::setInstanceId(const std::string &instanceId) {
  instanceId_ = instanceId;
  setParameter(std::string("InstanceId"), instanceId);
}

std::string RenewRCInstanceRequest::getAutoRenew() const {
  return autoRenew_;
}

void RenewRCInstanceRequest::setAutoRenew(const std::string &autoRenew) {
  autoRenew_ = autoRenew;
  setParameter(std::string("AutoRenew"), autoRenew);
}

std::string RenewRCInstanceRequest::getPromotionCode() const {
  return promotionCode_;
}

void RenewRCInstanceRequest::setPromotionCode(const std::string &promotionCode) {
  promotionCode_ = promotionCode;
  setParameter(std::string("PromotionCode"), promotionCode);
}

bool RenewRCInstanceRequest::getPeriodAlign() const {
  return periodAlign_;
}

void RenewRCInstanceRequest::setPeriodAlign(bool periodAlign) {
  periodAlign_ = periodAlign;
  setParameter(std::string("PeriodAlign"), periodAlign ? "true" : "false");
}

std::string RenewRCInstanceRequest::getTimeType() const {
  return timeType_;
}

void RenewRCInstanceRequest::setTimeType(const std::string &timeType) {
  timeType_ = timeType;
  setParameter(std::string("TimeType"), timeType);
}

std::string RenewRCInstanceRequest::getPayType() const {
  return payType_;
}

void RenewRCInstanceRequest::setPayType(const std::string &payType) {
  payType_ = payType;
  setParameter(std::string("PayType"), payType);
}

