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

#include <alibabacloud/cms/model/CreateCmsSmspackageOrderRequest.h>

using AlibabaCloud::Cms::Model::CreateCmsSmspackageOrderRequest;

CreateCmsSmspackageOrderRequest::CreateCmsSmspackageOrderRequest()
    : RpcServiceRequest("cms", "2019-01-01", "CreateCmsSmspackageOrder") {
  setMethod(HttpRequest::Method::Post);
}

CreateCmsSmspackageOrderRequest::~CreateCmsSmspackageOrderRequest() {}

int CreateCmsSmspackageOrderRequest::getAutoRenewPeriod() const {
  return autoRenewPeriod_;
}

void CreateCmsSmspackageOrderRequest::setAutoRenewPeriod(int autoRenewPeriod) {
  autoRenewPeriod_ = autoRenewPeriod;
  setParameter(std::string("AutoRenewPeriod"), std::to_string(autoRenewPeriod));
}

int CreateCmsSmspackageOrderRequest::getPeriod() const {
  return period_;
}

void CreateCmsSmspackageOrderRequest::setPeriod(int period) {
  period_ = period;
  setParameter(std::string("Period"), std::to_string(period));
}

bool CreateCmsSmspackageOrderRequest::getAutoPay() const {
  return autoPay_;
}

void CreateCmsSmspackageOrderRequest::setAutoPay(bool autoPay) {
  autoPay_ = autoPay;
  setParameter(std::string("AutoPay"), autoPay ? "true" : "false");
}

std::string CreateCmsSmspackageOrderRequest::getSmsCount() const {
  return smsCount_;
}

void CreateCmsSmspackageOrderRequest::setSmsCount(const std::string &smsCount) {
  smsCount_ = smsCount;
  setParameter(std::string("SmsCount"), smsCount);
}

bool CreateCmsSmspackageOrderRequest::getAutoUseCoupon() const {
  return autoUseCoupon_;
}

void CreateCmsSmspackageOrderRequest::setAutoUseCoupon(bool autoUseCoupon) {
  autoUseCoupon_ = autoUseCoupon;
  setParameter(std::string("AutoUseCoupon"), autoUseCoupon ? "true" : "false");
}

std::string CreateCmsSmspackageOrderRequest::getPeriodUnit() const {
  return periodUnit_;
}

void CreateCmsSmspackageOrderRequest::setPeriodUnit(const std::string &periodUnit) {
  periodUnit_ = periodUnit;
  setParameter(std::string("PeriodUnit"), periodUnit);
}

