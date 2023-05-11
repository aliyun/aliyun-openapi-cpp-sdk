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

#include <alibabacloud/alidns/model/DescribeCustomLinesRequest.h>

using AlibabaCloud::Alidns::Model::DescribeCustomLinesRequest;

DescribeCustomLinesRequest::DescribeCustomLinesRequest()
    : RpcServiceRequest("alidns", "2015-01-09", "DescribeCustomLines") {
  setMethod(HttpRequest::Method::Post);
}

DescribeCustomLinesRequest::~DescribeCustomLinesRequest() {}

std::string DescribeCustomLinesRequest::getDomainName() const {
  return domainName_;
}

void DescribeCustomLinesRequest::setDomainName(const std::string &domainName) {
  domainName_ = domainName;
  setParameter(std::string("DomainName"), domainName);
}

long DescribeCustomLinesRequest::getPageNumber() const {
  return pageNumber_;
}

void DescribeCustomLinesRequest::setPageNumber(long pageNumber) {
  pageNumber_ = pageNumber;
  setParameter(std::string("PageNumber"), std::to_string(pageNumber));
}

std::string DescribeCustomLinesRequest::getUserClientIp() const {
  return userClientIp_;
}

void DescribeCustomLinesRequest::setUserClientIp(const std::string &userClientIp) {
  userClientIp_ = userClientIp;
  setParameter(std::string("UserClientIp"), userClientIp);
}

long DescribeCustomLinesRequest::getPageSize() const {
  return pageSize_;
}

void DescribeCustomLinesRequest::setPageSize(long pageSize) {
  pageSize_ = pageSize;
  setParameter(std::string("PageSize"), std::to_string(pageSize));
}

std::string DescribeCustomLinesRequest::getLang() const {
  return lang_;
}

void DescribeCustomLinesRequest::setLang(const std::string &lang) {
  lang_ = lang;
  setParameter(std::string("Lang"), lang);
}

