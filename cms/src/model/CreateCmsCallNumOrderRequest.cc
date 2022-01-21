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

#include <alibabacloud/cms/model/CreateCmsCallNumOrderRequest.h>

using AlibabaCloud::Cms::Model::CreateCmsCallNumOrderRequest;

CreateCmsCallNumOrderRequest::CreateCmsCallNumOrderRequest()
    : RpcServiceRequest("cms", "2019-01-01", "CreateCmsCallNumOrder") {
  setMethod(HttpRequest::Method::Post);
}

CreateCmsCallNumOrderRequest::~CreateCmsCallNumOrderRequest() {}

int CreateCmsCallNumOrderRequest::getAutoRenewPeriod() const {
  return autoRenewPeriod_;
}

void CreateCmsCallNumOrderRequest::setAutoRenewPeriod(int autoRenewPeriod) {
  autoRenewPeriod_ = autoRenewPeriod;
  setParameter(std::string("AutoRenewPeriod"), std::to_string(autoRenewPeriod));
}

int CreateCmsCallNumOrderRequest::getPeriod() const {
  return period_;
}

void CreateCmsCallNumOrderRequest::setPeriod(int period) {
  period_ = period;
  setParameter(std::string("Period"), std::to_string(period));
}

bool CreateCmsCallNumOrderRequest::getAutoPay() const {
  return autoPay_;
}

void CreateCmsCallNumOrderRequest::setAutoPay(bool autoPay) {
  autoPay_ = autoPay;
  setParameter(std::string("AutoPay"), autoPay ? "true" : "false");
}

bool CreateCmsCallNumOrderRequest::getAutoUseCoupon() const {
  return autoUseCoupon_;
}

void CreateCmsCallNumOrderRequest::setAutoUseCoupon(bool autoUseCoupon) {
  autoUseCoupon_ = autoUseCoupon;
  setParameter(std::string("AutoUseCoupon"), autoUseCoupon ? "true" : "false");
}

std::string CreateCmsCallNumOrderRequest::getPeriodUnit() const {
  return periodUnit_;
}

void CreateCmsCallNumOrderRequest::setPeriodUnit(const std::string &periodUnit) {
  periodUnit_ = periodUnit;
  setParameter(std::string("PeriodUnit"), periodUnit);
}

std::string CreateCmsCallNumOrderRequest::getPhoneCount() const {
  return phoneCount_;
}

void CreateCmsCallNumOrderRequest::setPhoneCount(const std::string &phoneCount) {
  phoneCount_ = phoneCount;
  setParameter(std::string("PhoneCount"), phoneCount);
}

