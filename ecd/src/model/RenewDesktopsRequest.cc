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

#include <alibabacloud/ecd/model/RenewDesktopsRequest.h>

using AlibabaCloud::Ecd::Model::RenewDesktopsRequest;

RenewDesktopsRequest::RenewDesktopsRequest()
    : RpcServiceRequest("ecd", "2020-09-30", "RenewDesktops") {
  setMethod(HttpRequest::Method::Post);
}

RenewDesktopsRequest::~RenewDesktopsRequest() {}

int RenewDesktopsRequest::getPeriod() const {
  return period_;
}

void RenewDesktopsRequest::setPeriod(int period) {
  period_ = period;
  setParameter(std::string("Period"), std::to_string(period));
}

bool RenewDesktopsRequest::getAutoPay() const {
  return autoPay_;
}

void RenewDesktopsRequest::setAutoPay(bool autoPay) {
  autoPay_ = autoPay;
  setParameter(std::string("AutoPay"), autoPay ? "true" : "false");
}

std::string RenewDesktopsRequest::getPromotionId() const {
  return promotionId_;
}

void RenewDesktopsRequest::setPromotionId(const std::string &promotionId) {
  promotionId_ = promotionId;
  setParameter(std::string("PromotionId"), promotionId);
}

std::string RenewDesktopsRequest::getPeriodUnit() const {
  return periodUnit_;
}

void RenewDesktopsRequest::setPeriodUnit(const std::string &periodUnit) {
  periodUnit_ = periodUnit;
  setParameter(std::string("PeriodUnit"), periodUnit);
}

std::string RenewDesktopsRequest::getRegionId() const {
  return regionId_;
}

void RenewDesktopsRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::vector<std::string> RenewDesktopsRequest::getDesktopId() const {
  return desktopId_;
}

void RenewDesktopsRequest::setDesktopId(const std::vector<std::string> &desktopId) {
  desktopId_ = desktopId;
}

