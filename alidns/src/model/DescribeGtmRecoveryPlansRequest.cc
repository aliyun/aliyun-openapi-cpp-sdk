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

#include <alibabacloud/alidns/model/DescribeGtmRecoveryPlansRequest.h>

using AlibabaCloud::Alidns::Model::DescribeGtmRecoveryPlansRequest;

DescribeGtmRecoveryPlansRequest::DescribeGtmRecoveryPlansRequest()
    : RpcServiceRequest("alidns", "2015-01-09", "DescribeGtmRecoveryPlans") {
  setMethod(HttpRequest::Method::Post);
}

DescribeGtmRecoveryPlansRequest::~DescribeGtmRecoveryPlansRequest() {}

int DescribeGtmRecoveryPlansRequest::getPageNumber() const {
  return pageNumber_;
}

void DescribeGtmRecoveryPlansRequest::setPageNumber(int pageNumber) {
  pageNumber_ = pageNumber;
  setParameter(std::string("PageNumber"), std::to_string(pageNumber));
}

std::string DescribeGtmRecoveryPlansRequest::getUserClientIp() const {
  return userClientIp_;
}

void DescribeGtmRecoveryPlansRequest::setUserClientIp(const std::string &userClientIp) {
  userClientIp_ = userClientIp;
  setParameter(std::string("UserClientIp"), userClientIp);
}

int DescribeGtmRecoveryPlansRequest::getPageSize() const {
  return pageSize_;
}

void DescribeGtmRecoveryPlansRequest::setPageSize(int pageSize) {
  pageSize_ = pageSize;
  setParameter(std::string("PageSize"), std::to_string(pageSize));
}

std::string DescribeGtmRecoveryPlansRequest::getLang() const {
  return lang_;
}

void DescribeGtmRecoveryPlansRequest::setLang(const std::string &lang) {
  lang_ = lang;
  setParameter(std::string("Lang"), lang);
}

std::string DescribeGtmRecoveryPlansRequest::getKeyword() const {
  return keyword_;
}

void DescribeGtmRecoveryPlansRequest::setKeyword(const std::string &keyword) {
  keyword_ = keyword;
  setParameter(std::string("Keyword"), keyword);
}

