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

#include <alibabacloud/cams/model/GetChatappPhoneNumberMetricRequest.h>

using AlibabaCloud::Cams::Model::GetChatappPhoneNumberMetricRequest;

GetChatappPhoneNumberMetricRequest::GetChatappPhoneNumberMetricRequest()
    : RpcServiceRequest("cams", "2020-06-06", "GetChatappPhoneNumberMetric") {
  setMethod(HttpRequest::Method::Post);
}

GetChatappPhoneNumberMetricRequest::~GetChatappPhoneNumberMetricRequest() {}

std::string GetChatappPhoneNumberMetricRequest::getPhoneNumber() const {
  return phoneNumber_;
}

void GetChatappPhoneNumberMetricRequest::setPhoneNumber(const std::string &phoneNumber) {
  phoneNumber_ = phoneNumber;
  setParameter(std::string("PhoneNumber"), phoneNumber);
}

std::string GetChatappPhoneNumberMetricRequest::getApiCode() const {
  return apiCode_;
}

void GetChatappPhoneNumberMetricRequest::setApiCode(const std::string &apiCode) {
  apiCode_ = apiCode;
  setParameter(std::string("ApiCode"), apiCode);
}

long GetChatappPhoneNumberMetricRequest::getEnd() const {
  return end_;
}

void GetChatappPhoneNumberMetricRequest::setEnd(long end) {
  end_ = end;
  setParameter(std::string("End"), std::to_string(end));
}

std::string GetChatappPhoneNumberMetricRequest::getIsvCode() const {
  return isvCode_;
}

void GetChatappPhoneNumberMetricRequest::setIsvCode(const std::string &isvCode) {
  isvCode_ = isvCode;
  setParameter(std::string("IsvCode"), isvCode);
}

std::string GetChatappPhoneNumberMetricRequest::getProdCode() const {
  return prodCode_;
}

void GetChatappPhoneNumberMetricRequest::setProdCode(const std::string &prodCode) {
  prodCode_ = prodCode;
  setParameter(std::string("ProdCode"), prodCode);
}

long GetChatappPhoneNumberMetricRequest::getStart() const {
  return start_;
}

void GetChatappPhoneNumberMetricRequest::setStart(long start) {
  start_ = start;
  setParameter(std::string("Start"), std::to_string(start));
}

std::string GetChatappPhoneNumberMetricRequest::getCustSpaceId() const {
  return custSpaceId_;
}

void GetChatappPhoneNumberMetricRequest::setCustSpaceId(const std::string &custSpaceId) {
  custSpaceId_ = custSpaceId;
  setParameter(std::string("CustSpaceId"), custSpaceId);
}

std::string GetChatappPhoneNumberMetricRequest::getGranularity() const {
  return granularity_;
}

void GetChatappPhoneNumberMetricRequest::setGranularity(const std::string &granularity) {
  granularity_ = granularity;
  setParameter(std::string("Granularity"), granularity);
}

