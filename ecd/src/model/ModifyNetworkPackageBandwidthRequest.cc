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

#include <alibabacloud/ecd/model/ModifyNetworkPackageBandwidthRequest.h>

using AlibabaCloud::Ecd::Model::ModifyNetworkPackageBandwidthRequest;

ModifyNetworkPackageBandwidthRequest::ModifyNetworkPackageBandwidthRequest()
    : RpcServiceRequest("ecd", "2020-09-30", "ModifyNetworkPackageBandwidth") {
  setMethod(HttpRequest::Method::Post);
}

ModifyNetworkPackageBandwidthRequest::~ModifyNetworkPackageBandwidthRequest() {}

bool ModifyNetworkPackageBandwidthRequest::getAutoPay() const {
  return autoPay_;
}

void ModifyNetworkPackageBandwidthRequest::setAutoPay(bool autoPay) {
  autoPay_ = autoPay;
  setParameter(std::string("AutoPay"), autoPay ? "true" : "false");
}

int ModifyNetworkPackageBandwidthRequest::getBandwidth() const {
  return bandwidth_;
}

void ModifyNetworkPackageBandwidthRequest::setBandwidth(int bandwidth) {
  bandwidth_ = bandwidth;
  setParameter(std::string("Bandwidth"), std::to_string(bandwidth));
}

std::string ModifyNetworkPackageBandwidthRequest::getNetworkPackageId() const {
  return networkPackageId_;
}

void ModifyNetworkPackageBandwidthRequest::setNetworkPackageId(const std::string &networkPackageId) {
  networkPackageId_ = networkPackageId;
  setParameter(std::string("NetworkPackageId"), networkPackageId);
}

std::string ModifyNetworkPackageBandwidthRequest::getPromotionId() const {
  return promotionId_;
}

void ModifyNetworkPackageBandwidthRequest::setPromotionId(const std::string &promotionId) {
  promotionId_ = promotionId;
  setParameter(std::string("PromotionId"), promotionId);
}

std::string ModifyNetworkPackageBandwidthRequest::getRegionId() const {
  return regionId_;
}

void ModifyNetworkPackageBandwidthRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

