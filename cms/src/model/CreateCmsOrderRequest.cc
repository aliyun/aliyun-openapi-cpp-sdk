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

#include <alibabacloud/cms/model/CreateCmsOrderRequest.h>

using AlibabaCloud::Cms::Model::CreateCmsOrderRequest;

CreateCmsOrderRequest::CreateCmsOrderRequest()
    : RpcServiceRequest("cms", "2019-01-01", "CreateCmsOrder") {
  setMethod(HttpRequest::Method::Post);
}

CreateCmsOrderRequest::~CreateCmsOrderRequest() {}

std::string CreateCmsOrderRequest::getSmsCount() const {
  return smsCount_;
}

void CreateCmsOrderRequest::setSmsCount(const std::string &smsCount) {
  smsCount_ = smsCount;
  setParameter(std::string("SmsCount"), smsCount);
}

bool CreateCmsOrderRequest::getAutoUseCoupon() const {
  return autoUseCoupon_;
}

void CreateCmsOrderRequest::setAutoUseCoupon(bool autoUseCoupon) {
  autoUseCoupon_ = autoUseCoupon;
  setParameter(std::string("AutoUseCoupon"), autoUseCoupon ? "true" : "false");
}

std::string CreateCmsOrderRequest::getLogMonitorStream() const {
  return logMonitorStream_;
}

void CreateCmsOrderRequest::setLogMonitorStream(const std::string &logMonitorStream) {
  logMonitorStream_ = logMonitorStream;
  setParameter(std::string("LogMonitorStream"), logMonitorStream);
}

std::string CreateCmsOrderRequest::getCustomTimeSeries() const {
  return customTimeSeries_;
}

void CreateCmsOrderRequest::setCustomTimeSeries(const std::string &customTimeSeries) {
  customTimeSeries_ = customTimeSeries;
  setParameter(std::string("CustomTimeSeries"), customTimeSeries);
}

std::string CreateCmsOrderRequest::getApiCount() const {
  return apiCount_;
}

void CreateCmsOrderRequest::setApiCount(const std::string &apiCount) {
  apiCount_ = apiCount;
  setParameter(std::string("ApiCount"), apiCount);
}

std::string CreateCmsOrderRequest::getPhoneCount() const {
  return phoneCount_;
}

void CreateCmsOrderRequest::setPhoneCount(const std::string &phoneCount) {
  phoneCount_ = phoneCount;
  setParameter(std::string("PhoneCount"), phoneCount);
}

int CreateCmsOrderRequest::getAutoRenewPeriod() const {
  return autoRenewPeriod_;
}

void CreateCmsOrderRequest::setAutoRenewPeriod(int autoRenewPeriod) {
  autoRenewPeriod_ = autoRenewPeriod;
  setParameter(std::string("AutoRenewPeriod"), std::to_string(autoRenewPeriod));
}

int CreateCmsOrderRequest::getPeriod() const {
  return period_;
}

void CreateCmsOrderRequest::setPeriod(int period) {
  period_ = period;
  setParameter(std::string("Period"), std::to_string(period));
}

bool CreateCmsOrderRequest::getAutoPay() const {
  return autoPay_;
}

void CreateCmsOrderRequest::setAutoPay(bool autoPay) {
  autoPay_ = autoPay;
  setParameter(std::string("AutoPay"), autoPay ? "true" : "false");
}

std::string CreateCmsOrderRequest::getSuggestType() const {
  return suggestType_;
}

void CreateCmsOrderRequest::setSuggestType(const std::string &suggestType) {
  suggestType_ = suggestType;
  setParameter(std::string("SuggestType"), suggestType);
}

std::string CreateCmsOrderRequest::getEventStoreNum() const {
  return eventStoreNum_;
}

void CreateCmsOrderRequest::setEventStoreNum(const std::string &eventStoreNum) {
  eventStoreNum_ = eventStoreNum;
  setParameter(std::string("EventStoreNum"), eventStoreNum);
}

std::string CreateCmsOrderRequest::getSiteTaskNum() const {
  return siteTaskNum_;
}

void CreateCmsOrderRequest::setSiteTaskNum(const std::string &siteTaskNum) {
  siteTaskNum_ = siteTaskNum;
  setParameter(std::string("SiteTaskNum"), siteTaskNum);
}

std::string CreateCmsOrderRequest::getPeriodUnit() const {
  return periodUnit_;
}

void CreateCmsOrderRequest::setPeriodUnit(const std::string &periodUnit) {
  periodUnit_ = periodUnit;
  setParameter(std::string("PeriodUnit"), periodUnit);
}

std::string CreateCmsOrderRequest::getSiteOperatorNum() const {
  return siteOperatorNum_;
}

void CreateCmsOrderRequest::setSiteOperatorNum(const std::string &siteOperatorNum) {
  siteOperatorNum_ = siteOperatorNum;
  setParameter(std::string("SiteOperatorNum"), siteOperatorNum);
}

std::string CreateCmsOrderRequest::getSiteEcsNum() const {
  return siteEcsNum_;
}

void CreateCmsOrderRequest::setSiteEcsNum(const std::string &siteEcsNum) {
  siteEcsNum_ = siteEcsNum;
  setParameter(std::string("SiteEcsNum"), siteEcsNum);
}

std::string CreateCmsOrderRequest::getEventStoreTime() const {
  return eventStoreTime_;
}

void CreateCmsOrderRequest::setEventStoreTime(const std::string &eventStoreTime) {
  eventStoreTime_ = eventStoreTime;
  setParameter(std::string("EventStoreTime"), eventStoreTime);
}

std::string CreateCmsOrderRequest::getPayType() const {
  return payType_;
}

void CreateCmsOrderRequest::setPayType(const std::string &payType) {
  payType_ = payType;
  setParameter(std::string("PayType"), payType);
}

