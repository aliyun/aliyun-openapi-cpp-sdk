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

#include <alibabacloud/ecd/model/CreateNetworkPackageRequest.h>

using AlibabaCloud::Ecd::Model::CreateNetworkPackageRequest;

CreateNetworkPackageRequest::CreateNetworkPackageRequest()
    : RpcServiceRequest("ecd", "2020-09-30", "CreateNetworkPackage") {
  setMethod(HttpRequest::Method::Post);
}

CreateNetworkPackageRequest::~CreateNetworkPackageRequest() {}

std::string CreateNetworkPackageRequest::getOfficeSiteId() const {
  return officeSiteId_;
}

void CreateNetworkPackageRequest::setOfficeSiteId(const std::string &officeSiteId) {
  officeSiteId_ = officeSiteId;
  setParameter(std::string("OfficeSiteId"), officeSiteId);
}

std::string CreateNetworkPackageRequest::getRegionId() const {
  return regionId_;
}

void CreateNetworkPackageRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

int CreateNetworkPackageRequest::getPeriod() const {
  return period_;
}

void CreateNetworkPackageRequest::setPeriod(int period) {
  period_ = period;
  setParameter(std::string("Period"), std::to_string(period));
}

bool CreateNetworkPackageRequest::getAutoPay() const {
  return autoPay_;
}

void CreateNetworkPackageRequest::setAutoPay(bool autoPay) {
  autoPay_ = autoPay;
  setParameter(std::string("AutoPay"), autoPay ? "true" : "false");
}

int CreateNetworkPackageRequest::getBandwidth() const {
  return bandwidth_;
}

void CreateNetworkPackageRequest::setBandwidth(int bandwidth) {
  bandwidth_ = bandwidth;
  setParameter(std::string("Bandwidth"), std::to_string(bandwidth));
}

std::string CreateNetworkPackageRequest::getPromotionId() const {
  return promotionId_;
}

void CreateNetworkPackageRequest::setPromotionId(const std::string &promotionId) {
  promotionId_ = promotionId;
  setParameter(std::string("PromotionId"), promotionId);
}

std::string CreateNetworkPackageRequest::getPeriodUnit() const {
  return periodUnit_;
}

void CreateNetworkPackageRequest::setPeriodUnit(const std::string &periodUnit) {
  periodUnit_ = periodUnit;
  setParameter(std::string("PeriodUnit"), periodUnit);
}

bool CreateNetworkPackageRequest::getAutoRenew() const {
  return autoRenew_;
}

void CreateNetworkPackageRequest::setAutoRenew(bool autoRenew) {
  autoRenew_ = autoRenew;
  setParameter(std::string("AutoRenew"), autoRenew ? "true" : "false");
}

std::string CreateNetworkPackageRequest::getInternetChargeType() const {
  return internetChargeType_;
}

void CreateNetworkPackageRequest::setInternetChargeType(const std::string &internetChargeType) {
  internetChargeType_ = internetChargeType;
  setParameter(std::string("InternetChargeType"), internetChargeType);
}

std::string CreateNetworkPackageRequest::getPayType() const {
  return payType_;
}

void CreateNetworkPackageRequest::setPayType(const std::string &payType) {
  payType_ = payType;
  setParameter(std::string("PayType"), payType);
}

