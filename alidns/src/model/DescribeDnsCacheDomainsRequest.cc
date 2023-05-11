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

#include <alibabacloud/alidns/model/DescribeDnsCacheDomainsRequest.h>

using AlibabaCloud::Alidns::Model::DescribeDnsCacheDomainsRequest;

DescribeDnsCacheDomainsRequest::DescribeDnsCacheDomainsRequest()
    : RpcServiceRequest("alidns", "2015-01-09", "DescribeDnsCacheDomains") {
  setMethod(HttpRequest::Method::Post);
}

DescribeDnsCacheDomainsRequest::~DescribeDnsCacheDomainsRequest() {}

long DescribeDnsCacheDomainsRequest::getPageNumber() const {
  return pageNumber_;
}

void DescribeDnsCacheDomainsRequest::setPageNumber(long pageNumber) {
  pageNumber_ = pageNumber;
  setParameter(std::string("PageNumber"), std::to_string(pageNumber));
}

std::string DescribeDnsCacheDomainsRequest::getUserClientIp() const {
  return userClientIp_;
}

void DescribeDnsCacheDomainsRequest::setUserClientIp(const std::string &userClientIp) {
  userClientIp_ = userClientIp;
  setParameter(std::string("UserClientIp"), userClientIp);
}

long DescribeDnsCacheDomainsRequest::getPageSize() const {
  return pageSize_;
}

void DescribeDnsCacheDomainsRequest::setPageSize(long pageSize) {
  pageSize_ = pageSize;
  setParameter(std::string("PageSize"), std::to_string(pageSize));
}

std::string DescribeDnsCacheDomainsRequest::getLang() const {
  return lang_;
}

void DescribeDnsCacheDomainsRequest::setLang(const std::string &lang) {
  lang_ = lang;
  setParameter(std::string("Lang"), lang);
}

std::string DescribeDnsCacheDomainsRequest::getKeyword() const {
  return keyword_;
}

void DescribeDnsCacheDomainsRequest::setKeyword(const std::string &keyword) {
  keyword_ = keyword;
  setParameter(std::string("Keyword"), keyword);
}

