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

#include <alibabacloud/alidns/model/DescribeDnsGtmLogsRequest.h>

using AlibabaCloud::Alidns::Model::DescribeDnsGtmLogsRequest;

DescribeDnsGtmLogsRequest::DescribeDnsGtmLogsRequest()
    : RpcServiceRequest("alidns", "2015-01-09", "DescribeDnsGtmLogs") {
  setMethod(HttpRequest::Method::Post);
}

DescribeDnsGtmLogsRequest::~DescribeDnsGtmLogsRequest() {}

long DescribeDnsGtmLogsRequest::getStartTimestamp() const {
  return startTimestamp_;
}

void DescribeDnsGtmLogsRequest::setStartTimestamp(long startTimestamp) {
  startTimestamp_ = startTimestamp;
  setParameter(std::string("StartTimestamp"), std::to_string(startTimestamp));
}

int DescribeDnsGtmLogsRequest::getPageNumber() const {
  return pageNumber_;
}

void DescribeDnsGtmLogsRequest::setPageNumber(int pageNumber) {
  pageNumber_ = pageNumber;
  setParameter(std::string("PageNumber"), std::to_string(pageNumber));
}

long DescribeDnsGtmLogsRequest::getEndTimestamp() const {
  return endTimestamp_;
}

void DescribeDnsGtmLogsRequest::setEndTimestamp(long endTimestamp) {
  endTimestamp_ = endTimestamp;
  setParameter(std::string("EndTimestamp"), std::to_string(endTimestamp));
}

std::string DescribeDnsGtmLogsRequest::getInstanceId() const {
  return instanceId_;
}

void DescribeDnsGtmLogsRequest::setInstanceId(const std::string &instanceId) {
  instanceId_ = instanceId;
  setParameter(std::string("InstanceId"), instanceId);
}

std::string DescribeDnsGtmLogsRequest::getUserClientIp() const {
  return userClientIp_;
}

void DescribeDnsGtmLogsRequest::setUserClientIp(const std::string &userClientIp) {
  userClientIp_ = userClientIp;
  setParameter(std::string("UserClientIp"), userClientIp);
}

int DescribeDnsGtmLogsRequest::getPageSize() const {
  return pageSize_;
}

void DescribeDnsGtmLogsRequest::setPageSize(int pageSize) {
  pageSize_ = pageSize;
  setParameter(std::string("PageSize"), std::to_string(pageSize));
}

std::string DescribeDnsGtmLogsRequest::getLang() const {
  return lang_;
}

void DescribeDnsGtmLogsRequest::setLang(const std::string &lang) {
  lang_ = lang;
  setParameter(std::string("Lang"), lang);
}

std::string DescribeDnsGtmLogsRequest::getKeyword() const {
  return keyword_;
}

void DescribeDnsGtmLogsRequest::setKeyword(const std::string &keyword) {
  keyword_ = keyword;
  setParameter(std::string("Keyword"), keyword);
}

