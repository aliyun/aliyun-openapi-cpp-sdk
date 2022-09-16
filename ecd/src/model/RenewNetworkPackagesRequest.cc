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

#include <alibabacloud/ecd/model/RenewNetworkPackagesRequest.h>

using AlibabaCloud::Ecd::Model::RenewNetworkPackagesRequest;

RenewNetworkPackagesRequest::RenewNetworkPackagesRequest()
    : RpcServiceRequest("ecd", "2020-09-30", "RenewNetworkPackages") {
  setMethod(HttpRequest::Method::Post);
}

RenewNetworkPackagesRequest::~RenewNetworkPackagesRequest() {}

int RenewNetworkPackagesRequest::getPeriod() const {
  return period_;
}

void RenewNetworkPackagesRequest::setPeriod(int period) {
  period_ = period;
  setParameter(std::string("Period"), std::to_string(period));
}

bool RenewNetworkPackagesRequest::getAutoPay() const {
  return autoPay_;
}

void RenewNetworkPackagesRequest::setAutoPay(bool autoPay) {
  autoPay_ = autoPay;
  setParameter(std::string("AutoPay"), autoPay ? "true" : "false");
}

std::vector<std::string> RenewNetworkPackagesRequest::getNetworkPackageId() const {
  return networkPackageId_;
}

void RenewNetworkPackagesRequest::setNetworkPackageId(const std::vector<std::string> &networkPackageId) {
  networkPackageId_ = networkPackageId;
}

std::string RenewNetworkPackagesRequest::getPromotionId() const {
  return promotionId_;
}

void RenewNetworkPackagesRequest::setPromotionId(const std::string &promotionId) {
  promotionId_ = promotionId;
  setParameter(std::string("PromotionId"), promotionId);
}

std::string RenewNetworkPackagesRequest::getPeriodUnit() const {
  return periodUnit_;
}

void RenewNetworkPackagesRequest::setPeriodUnit(const std::string &periodUnit) {
  periodUnit_ = periodUnit;
  setParameter(std::string("PeriodUnit"), periodUnit);
}

std::string RenewNetworkPackagesRequest::getRegionId() const {
  return regionId_;
}

void RenewNetworkPackagesRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

