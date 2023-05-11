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

#include <alibabacloud/alidns/model/DescribeGtmAccessStrategiesRequest.h>

using AlibabaCloud::Alidns::Model::DescribeGtmAccessStrategiesRequest;

DescribeGtmAccessStrategiesRequest::DescribeGtmAccessStrategiesRequest()
    : RpcServiceRequest("alidns", "2015-01-09", "DescribeGtmAccessStrategies") {
  setMethod(HttpRequest::Method::Post);
}

DescribeGtmAccessStrategiesRequest::~DescribeGtmAccessStrategiesRequest() {}

int DescribeGtmAccessStrategiesRequest::getPageNumber() const {
  return pageNumber_;
}

void DescribeGtmAccessStrategiesRequest::setPageNumber(int pageNumber) {
  pageNumber_ = pageNumber;
  setParameter(std::string("PageNumber"), std::to_string(pageNumber));
}

std::string DescribeGtmAccessStrategiesRequest::getInstanceId() const {
  return instanceId_;
}

void DescribeGtmAccessStrategiesRequest::setInstanceId(const std::string &instanceId) {
  instanceId_ = instanceId;
  setParameter(std::string("InstanceId"), instanceId);
}

std::string DescribeGtmAccessStrategiesRequest::getUserClientIp() const {
  return userClientIp_;
}

void DescribeGtmAccessStrategiesRequest::setUserClientIp(const std::string &userClientIp) {
  userClientIp_ = userClientIp;
  setParameter(std::string("UserClientIp"), userClientIp);
}

int DescribeGtmAccessStrategiesRequest::getPageSize() const {
  return pageSize_;
}

void DescribeGtmAccessStrategiesRequest::setPageSize(int pageSize) {
  pageSize_ = pageSize;
  setParameter(std::string("PageSize"), std::to_string(pageSize));
}

std::string DescribeGtmAccessStrategiesRequest::getLang() const {
  return lang_;
}

void DescribeGtmAccessStrategiesRequest::setLang(const std::string &lang) {
  lang_ = lang;
  setParameter(std::string("Lang"), lang);
}

