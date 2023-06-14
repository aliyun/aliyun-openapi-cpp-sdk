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

#include <alibabacloud/ga/model/UpdateBandwidthPackageRequest.h>

using AlibabaCloud::Ga::Model::UpdateBandwidthPackageRequest;

UpdateBandwidthPackageRequest::UpdateBandwidthPackageRequest()
    : RpcServiceRequest("ga", "2019-11-20", "UpdateBandwidthPackage") {
  setMethod(HttpRequest::Method::Post);
}

UpdateBandwidthPackageRequest::~UpdateBandwidthPackageRequest() {}

std::string UpdateBandwidthPackageRequest::getBandwidthType() const {
  return bandwidthType_;
}

void UpdateBandwidthPackageRequest::setBandwidthType(const std::string &bandwidthType) {
  bandwidthType_ = bandwidthType;
  setParameter(std::string("BandwidthType"), bandwidthType);
}

std::string UpdateBandwidthPackageRequest::getBandwidthPackageId() const {
  return bandwidthPackageId_;
}

void UpdateBandwidthPackageRequest::setBandwidthPackageId(const std::string &bandwidthPackageId) {
  bandwidthPackageId_ = bandwidthPackageId;
  setParameter(std::string("BandwidthPackageId"), bandwidthPackageId);
}

bool UpdateBandwidthPackageRequest::getAutoPay() const {
  return autoPay_;
}

void UpdateBandwidthPackageRequest::setAutoPay(bool autoPay) {
  autoPay_ = autoPay;
  setParameter(std::string("AutoPay"), autoPay ? "true" : "false");
}

std::string UpdateBandwidthPackageRequest::getPromotionOptionNo() const {
  return promotionOptionNo_;
}

void UpdateBandwidthPackageRequest::setPromotionOptionNo(const std::string &promotionOptionNo) {
  promotionOptionNo_ = promotionOptionNo;
  setParameter(std::string("PromotionOptionNo"), promotionOptionNo);
}

int UpdateBandwidthPackageRequest::getBandwidth() const {
  return bandwidth_;
}

void UpdateBandwidthPackageRequest::setBandwidth(int bandwidth) {
  bandwidth_ = bandwidth;
  setParameter(std::string("Bandwidth"), std::to_string(bandwidth));
}

std::string UpdateBandwidthPackageRequest::getDescription() const {
  return description_;
}

void UpdateBandwidthPackageRequest::setDescription(const std::string &description) {
  description_ = description;
  setParameter(std::string("Description"), description);
}

bool UpdateBandwidthPackageRequest::getAutoUseCoupon() const {
  return autoUseCoupon_;
}

void UpdateBandwidthPackageRequest::setAutoUseCoupon(bool autoUseCoupon) {
  autoUseCoupon_ = autoUseCoupon;
  setParameter(std::string("AutoUseCoupon"), autoUseCoupon ? "true" : "false");
}

std::string UpdateBandwidthPackageRequest::getRegionId() const {
  return regionId_;
}

void UpdateBandwidthPackageRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string UpdateBandwidthPackageRequest::getName() const {
  return name_;
}

void UpdateBandwidthPackageRequest::setName(const std::string &name) {
  name_ = name;
  setParameter(std::string("Name"), name);
}

