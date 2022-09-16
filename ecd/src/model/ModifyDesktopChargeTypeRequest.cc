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

#include <alibabacloud/ecd/model/ModifyDesktopChargeTypeRequest.h>

using AlibabaCloud::Ecd::Model::ModifyDesktopChargeTypeRequest;

ModifyDesktopChargeTypeRequest::ModifyDesktopChargeTypeRequest()
    : RpcServiceRequest("ecd", "2020-09-30", "ModifyDesktopChargeType") {
  setMethod(HttpRequest::Method::Post);
}

ModifyDesktopChargeTypeRequest::~ModifyDesktopChargeTypeRequest() {}

int ModifyDesktopChargeTypeRequest::getPeriod() const {
  return period_;
}

void ModifyDesktopChargeTypeRequest::setPeriod(int period) {
  period_ = period;
  setParameter(std::string("Period"), std::to_string(period));
}

bool ModifyDesktopChargeTypeRequest::getAutoPay() const {
  return autoPay_;
}

void ModifyDesktopChargeTypeRequest::setAutoPay(bool autoPay) {
  autoPay_ = autoPay;
  setParameter(std::string("AutoPay"), autoPay ? "true" : "false");
}

std::string ModifyDesktopChargeTypeRequest::getPromotionId() const {
  return promotionId_;
}

void ModifyDesktopChargeTypeRequest::setPromotionId(const std::string &promotionId) {
  promotionId_ = promotionId;
  setParameter(std::string("PromotionId"), promotionId);
}

std::string ModifyDesktopChargeTypeRequest::getPeriodUnit() const {
  return periodUnit_;
}

void ModifyDesktopChargeTypeRequest::setPeriodUnit(const std::string &periodUnit) {
  periodUnit_ = periodUnit;
  setParameter(std::string("PeriodUnit"), periodUnit);
}

std::string ModifyDesktopChargeTypeRequest::getRegionId() const {
  return regionId_;
}

void ModifyDesktopChargeTypeRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string ModifyDesktopChargeTypeRequest::getChargeType() const {
  return chargeType_;
}

void ModifyDesktopChargeTypeRequest::setChargeType(const std::string &chargeType) {
  chargeType_ = chargeType;
  setParameter(std::string("ChargeType"), chargeType);
}

std::vector<std::string> ModifyDesktopChargeTypeRequest::getDesktopId() const {
  return desktopId_;
}

void ModifyDesktopChargeTypeRequest::setDesktopId(const std::vector<std::string> &desktopId) {
  desktopId_ = desktopId;
}

