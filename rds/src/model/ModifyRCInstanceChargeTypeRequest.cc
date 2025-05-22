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

#include <alibabacloud/rds/model/ModifyRCInstanceChargeTypeRequest.h>

using AlibabaCloud::Rds::Model::ModifyRCInstanceChargeTypeRequest;

ModifyRCInstanceChargeTypeRequest::ModifyRCInstanceChargeTypeRequest()
    : RpcServiceRequest("rds", "2014-08-15", "ModifyRCInstanceChargeType") {
  setMethod(HttpRequest::Method::Post);
}

ModifyRCInstanceChargeTypeRequest::~ModifyRCInstanceChargeTypeRequest() {}

std::string ModifyRCInstanceChargeTypeRequest::getClientToken() const {
  return clientToken_;
}

void ModifyRCInstanceChargeTypeRequest::setClientToken(const std::string &clientToken) {
  clientToken_ = clientToken;
  setParameter(std::string("ClientToken"), clientToken);
}

bool ModifyRCInstanceChargeTypeRequest::getAutoUseCoupon() const {
  return autoUseCoupon_;
}

void ModifyRCInstanceChargeTypeRequest::setAutoUseCoupon(bool autoUseCoupon) {
  autoUseCoupon_ = autoUseCoupon;
  setParameter(std::string("AutoUseCoupon"), autoUseCoupon ? "true" : "false");
}

std::string ModifyRCInstanceChargeTypeRequest::getRegionId() const {
  return regionId_;
}

void ModifyRCInstanceChargeTypeRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string ModifyRCInstanceChargeTypeRequest::getInstanceChargeType() const {
  return instanceChargeType_;
}

void ModifyRCInstanceChargeTypeRequest::setInstanceChargeType(const std::string &instanceChargeType) {
  instanceChargeType_ = instanceChargeType;
  setParameter(std::string("InstanceChargeType"), instanceChargeType);
}

std::string ModifyRCInstanceChargeTypeRequest::getBusinessInfo() const {
  return businessInfo_;
}

void ModifyRCInstanceChargeTypeRequest::setBusinessInfo(const std::string &businessInfo) {
  businessInfo_ = businessInfo;
  setParameter(std::string("BusinessInfo"), businessInfo);
}

std::string ModifyRCInstanceChargeTypeRequest::getPeriod() const {
  return period_;
}

void ModifyRCInstanceChargeTypeRequest::setPeriod(const std::string &period) {
  period_ = period;
  setParameter(std::string("Period"), period);
}

bool ModifyRCInstanceChargeTypeRequest::getDryRun() const {
  return dryRun_;
}

void ModifyRCInstanceChargeTypeRequest::setDryRun(bool dryRun) {
  dryRun_ = dryRun;
  setParameter(std::string("DryRun"), dryRun ? "true" : "false");
}

bool ModifyRCInstanceChargeTypeRequest::getAutoPay() const {
  return autoPay_;
}

void ModifyRCInstanceChargeTypeRequest::setAutoPay(bool autoPay) {
  autoPay_ = autoPay;
  setParameter(std::string("AutoPay"), autoPay ? "true" : "false");
}

bool ModifyRCInstanceChargeTypeRequest::getIncludeDataDisks() const {
  return includeDataDisks_;
}

void ModifyRCInstanceChargeTypeRequest::setIncludeDataDisks(bool includeDataDisks) {
  includeDataDisks_ = includeDataDisks;
  setParameter(std::string("IncludeDataDisks"), includeDataDisks ? "true" : "false");
}

std::string ModifyRCInstanceChargeTypeRequest::getResource() const {
  return resource_;
}

void ModifyRCInstanceChargeTypeRequest::setResource(const std::string &resource) {
  resource_ = resource;
  setParameter(std::string("Resource"), resource);
}

int ModifyRCInstanceChargeTypeRequest::getUsedTime() const {
  return usedTime_;
}

void ModifyRCInstanceChargeTypeRequest::setUsedTime(int usedTime) {
  usedTime_ = usedTime;
  setParameter(std::string("UsedTime"), std::to_string(usedTime));
}

std::string ModifyRCInstanceChargeTypeRequest::getInstanceId() const {
  return instanceId_;
}

void ModifyRCInstanceChargeTypeRequest::setInstanceId(const std::string &instanceId) {
  instanceId_ = instanceId;
  setParameter(std::string("InstanceId"), instanceId);
}

std::string ModifyRCInstanceChargeTypeRequest::getAutoRenew() const {
  return autoRenew_;
}

void ModifyRCInstanceChargeTypeRequest::setAutoRenew(const std::string &autoRenew) {
  autoRenew_ = autoRenew;
  setParameter(std::string("AutoRenew"), autoRenew);
}

std::string ModifyRCInstanceChargeTypeRequest::getInstanceIds() const {
  return instanceIds_;
}

void ModifyRCInstanceChargeTypeRequest::setInstanceIds(const std::string &instanceIds) {
  instanceIds_ = instanceIds;
  setParameter(std::string("InstanceIds"), instanceIds);
}

std::string ModifyRCInstanceChargeTypeRequest::getPromotionCode() const {
  return promotionCode_;
}

void ModifyRCInstanceChargeTypeRequest::setPromotionCode(const std::string &promotionCode) {
  promotionCode_ = promotionCode;
  setParameter(std::string("PromotionCode"), promotionCode);
}

std::string ModifyRCInstanceChargeTypeRequest::getPayType() const {
  return payType_;
}

void ModifyRCInstanceChargeTypeRequest::setPayType(const std::string &payType) {
  payType_ = payType;
  setParameter(std::string("PayType"), payType);
}

