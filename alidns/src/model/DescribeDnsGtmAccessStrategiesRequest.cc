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

#include <alibabacloud/alidns/model/DescribeDnsGtmAccessStrategiesRequest.h>

using AlibabaCloud::Alidns::Model::DescribeDnsGtmAccessStrategiesRequest;

DescribeDnsGtmAccessStrategiesRequest::DescribeDnsGtmAccessStrategiesRequest()
    : RpcServiceRequest("alidns", "2015-01-09", "DescribeDnsGtmAccessStrategies") {
  setMethod(HttpRequest::Method::Post);
}

DescribeDnsGtmAccessStrategiesRequest::~DescribeDnsGtmAccessStrategiesRequest() {}

int DescribeDnsGtmAccessStrategiesRequest::getPageNumber() const {
  return pageNumber_;
}

void DescribeDnsGtmAccessStrategiesRequest::setPageNumber(int pageNumber) {
  pageNumber_ = pageNumber;
  setParameter(std::string("PageNumber"), std::to_string(pageNumber));
}

std::string DescribeDnsGtmAccessStrategiesRequest::getInstanceId() const {
  return instanceId_;
}

void DescribeDnsGtmAccessStrategiesRequest::setInstanceId(const std::string &instanceId) {
  instanceId_ = instanceId;
  setParameter(std::string("InstanceId"), instanceId);
}

std::string DescribeDnsGtmAccessStrategiesRequest::getUserClientIp() const {
  return userClientIp_;
}

void DescribeDnsGtmAccessStrategiesRequest::setUserClientIp(const std::string &userClientIp) {
  userClientIp_ = userClientIp;
  setParameter(std::string("UserClientIp"), userClientIp);
}

int DescribeDnsGtmAccessStrategiesRequest::getPageSize() const {
  return pageSize_;
}

void DescribeDnsGtmAccessStrategiesRequest::setPageSize(int pageSize) {
  pageSize_ = pageSize;
  setParameter(std::string("PageSize"), std::to_string(pageSize));
}

std::string DescribeDnsGtmAccessStrategiesRequest::getStrategyMode() const {
  return strategyMode_;
}

void DescribeDnsGtmAccessStrategiesRequest::setStrategyMode(const std::string &strategyMode) {
  strategyMode_ = strategyMode;
  setParameter(std::string("StrategyMode"), strategyMode);
}

std::string DescribeDnsGtmAccessStrategiesRequest::getLang() const {
  return lang_;
}

void DescribeDnsGtmAccessStrategiesRequest::setLang(const std::string &lang) {
  lang_ = lang;
  setParameter(std::string("Lang"), lang);
}

