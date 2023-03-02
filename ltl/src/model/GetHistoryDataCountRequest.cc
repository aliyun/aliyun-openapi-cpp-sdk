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

#include <alibabacloud/ltl/model/GetHistoryDataCountRequest.h>

using AlibabaCloud::Ltl::Model::GetHistoryDataCountRequest;

GetHistoryDataCountRequest::GetHistoryDataCountRequest()
    : RpcServiceRequest("ltl", "2019-05-10", "GetHistoryDataCount") {
  setMethod(HttpRequest::Method::Post);
}

GetHistoryDataCountRequest::~GetHistoryDataCountRequest() {}

long GetHistoryDataCountRequest::getEndTime() const {
  return endTime_;
}

void GetHistoryDataCountRequest::setEndTime(long endTime) {
  endTime_ = endTime;
  setParameter(std::string("EndTime"), std::to_string(endTime));
}

std::string GetHistoryDataCountRequest::getApiVersion() const {
  return apiVersion_;
}

void GetHistoryDataCountRequest::setApiVersion(const std::string &apiVersion) {
  apiVersion_ = apiVersion;
  setParameter(std::string("ApiVersion"), apiVersion);
}

long GetHistoryDataCountRequest::getStartTime() const {
  return startTime_;
}

void GetHistoryDataCountRequest::setStartTime(long startTime) {
  startTime_ = startTime;
  setParameter(std::string("StartTime"), std::to_string(startTime));
}

std::string GetHistoryDataCountRequest::getProductKey() const {
  return productKey_;
}

void GetHistoryDataCountRequest::setProductKey(const std::string &productKey) {
  productKey_ = productKey;
  setParameter(std::string("ProductKey"), productKey);
}

std::string GetHistoryDataCountRequest::getKey() const {
  return key_;
}

void GetHistoryDataCountRequest::setKey(const std::string &key) {
  key_ = key;
  setParameter(std::string("Key"), key);
}

