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

#include <alibabacloud/alidns/model/DescribeGtmLogsRequest.h>

using AlibabaCloud::Alidns::Model::DescribeGtmLogsRequest;

DescribeGtmLogsRequest::DescribeGtmLogsRequest()
    : RpcServiceRequest("alidns", "2015-01-09", "DescribeGtmLogs") {
  setMethod(HttpRequest::Method::Post);
}

DescribeGtmLogsRequest::~DescribeGtmLogsRequest() {}

long DescribeGtmLogsRequest::getStartTimestamp() const {
  return startTimestamp_;
}

void DescribeGtmLogsRequest::setStartTimestamp(long startTimestamp) {
  startTimestamp_ = startTimestamp;
  setParameter(std::string("StartTimestamp"), std::to_string(startTimestamp));
}

int DescribeGtmLogsRequest::getPageNumber() const {
  return pageNumber_;
}

void DescribeGtmLogsRequest::setPageNumber(int pageNumber) {
  pageNumber_ = pageNumber;
  setParameter(std::string("PageNumber"), std::to_string(pageNumber));
}

long DescribeGtmLogsRequest::getEndTimestamp() const {
  return endTimestamp_;
}

void DescribeGtmLogsRequest::setEndTimestamp(long endTimestamp) {
  endTimestamp_ = endTimestamp;
  setParameter(std::string("EndTimestamp"), std::to_string(endTimestamp));
}

std::string DescribeGtmLogsRequest::getInstanceId() const {
  return instanceId_;
}

void DescribeGtmLogsRequest::setInstanceId(const std::string &instanceId) {
  instanceId_ = instanceId;
  setParameter(std::string("InstanceId"), instanceId);
}

std::string DescribeGtmLogsRequest::getUserClientIp() const {
  return userClientIp_;
}

void DescribeGtmLogsRequest::setUserClientIp(const std::string &userClientIp) {
  userClientIp_ = userClientIp;
  setParameter(std::string("UserClientIp"), userClientIp);
}

int DescribeGtmLogsRequest::getPageSize() const {
  return pageSize_;
}

void DescribeGtmLogsRequest::setPageSize(int pageSize) {
  pageSize_ = pageSize;
  setParameter(std::string("PageSize"), std::to_string(pageSize));
}

std::string DescribeGtmLogsRequest::getLang() const {
  return lang_;
}

void DescribeGtmLogsRequest::setLang(const std::string &lang) {
  lang_ = lang;
  setParameter(std::string("Lang"), lang);
}

std::string DescribeGtmLogsRequest::getKeyword() const {
  return keyword_;
}

void DescribeGtmLogsRequest::setKeyword(const std::string &keyword) {
  keyword_ = keyword;
  setParameter(std::string("Keyword"), keyword);
}

