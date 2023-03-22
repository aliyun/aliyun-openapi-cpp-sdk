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

#include <alibabacloud/appstream-center/model/RenewAppInstanceGroupRequest.h>

using AlibabaCloud::Appstream_center::Model::RenewAppInstanceGroupRequest;

RenewAppInstanceGroupRequest::RenewAppInstanceGroupRequest()
    : RpcServiceRequest("appstream-center", "2021-09-01", "RenewAppInstanceGroup") {
  setMethod(HttpRequest::Method::Post);
}

RenewAppInstanceGroupRequest::~RenewAppInstanceGroupRequest() {}

int RenewAppInstanceGroupRequest::getPeriod() const {
  return period_;
}

void RenewAppInstanceGroupRequest::setPeriod(int period) {
  period_ = period;
  setParameter(std::string("Period"), std::to_string(period));
}

bool RenewAppInstanceGroupRequest::getAutoPay() const {
  return autoPay_;
}

void RenewAppInstanceGroupRequest::setAutoPay(bool autoPay) {
  autoPay_ = autoPay;
  setParameter(std::string("AutoPay"), autoPay ? "true" : "false");
}

std::string RenewAppInstanceGroupRequest::getPromotionId() const {
  return promotionId_;
}

void RenewAppInstanceGroupRequest::setPromotionId(const std::string &promotionId) {
  promotionId_ = promotionId;
  setParameter(std::string("PromotionId"), promotionId);
}

std::string RenewAppInstanceGroupRequest::getProductType() const {
  return productType_;
}

void RenewAppInstanceGroupRequest::setProductType(const std::string &productType) {
  productType_ = productType;
  setParameter(std::string("ProductType"), productType);
}

std::string RenewAppInstanceGroupRequest::getPeriodUnit() const {
  return periodUnit_;
}

void RenewAppInstanceGroupRequest::setPeriodUnit(const std::string &periodUnit) {
  periodUnit_ = periodUnit;
  setParameter(std::string("PeriodUnit"), periodUnit);
}

std::string RenewAppInstanceGroupRequest::getAppInstanceGroupId() const {
  return appInstanceGroupId_;
}

void RenewAppInstanceGroupRequest::setAppInstanceGroupId(const std::string &appInstanceGroupId) {
  appInstanceGroupId_ = appInstanceGroupId;
  setParameter(std::string("AppInstanceGroupId"), appInstanceGroupId);
}

