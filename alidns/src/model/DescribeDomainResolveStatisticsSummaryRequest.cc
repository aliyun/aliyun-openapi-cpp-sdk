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

#include <alibabacloud/alidns/model/DescribeDomainResolveStatisticsSummaryRequest.h>

using AlibabaCloud::Alidns::Model::DescribeDomainResolveStatisticsSummaryRequest;

DescribeDomainResolveStatisticsSummaryRequest::DescribeDomainResolveStatisticsSummaryRequest()
    : RpcServiceRequest("alidns", "2015-01-09", "DescribeDomainResolveStatisticsSummary") {
  setMethod(HttpRequest::Method::Post);
}

DescribeDomainResolveStatisticsSummaryRequest::~DescribeDomainResolveStatisticsSummaryRequest() {}

long DescribeDomainResolveStatisticsSummaryRequest::getThreshold() const {
  return threshold_;
}

void DescribeDomainResolveStatisticsSummaryRequest::setThreshold(long threshold) {
  threshold_ = threshold;
  setParameter(std::string("Threshold"), std::to_string(threshold));
}

std::string DescribeDomainResolveStatisticsSummaryRequest::getStartDate() const {
  return startDate_;
}

void DescribeDomainResolveStatisticsSummaryRequest::setStartDate(const std::string &startDate) {
  startDate_ = startDate;
  setParameter(std::string("StartDate"), startDate);
}

int DescribeDomainResolveStatisticsSummaryRequest::getPageNumber() const {
  return pageNumber_;
}

void DescribeDomainResolveStatisticsSummaryRequest::setPageNumber(int pageNumber) {
  pageNumber_ = pageNumber;
  setParameter(std::string("PageNumber"), std::to_string(pageNumber));
}

std::string DescribeDomainResolveStatisticsSummaryRequest::getEndDate() const {
  return endDate_;
}

void DescribeDomainResolveStatisticsSummaryRequest::setEndDate(const std::string &endDate) {
  endDate_ = endDate;
  setParameter(std::string("EndDate"), endDate);
}

int DescribeDomainResolveStatisticsSummaryRequest::getPageSize() const {
  return pageSize_;
}

void DescribeDomainResolveStatisticsSummaryRequest::setPageSize(int pageSize) {
  pageSize_ = pageSize;
  setParameter(std::string("PageSize"), std::to_string(pageSize));
}

std::string DescribeDomainResolveStatisticsSummaryRequest::getUserClientIp() const {
  return userClientIp_;
}

void DescribeDomainResolveStatisticsSummaryRequest::setUserClientIp(const std::string &userClientIp) {
  userClientIp_ = userClientIp;
  setParameter(std::string("UserClientIp"), userClientIp);
}

std::string DescribeDomainResolveStatisticsSummaryRequest::getSearchMode() const {
  return searchMode_;
}

void DescribeDomainResolveStatisticsSummaryRequest::setSearchMode(const std::string &searchMode) {
  searchMode_ = searchMode;
  setParameter(std::string("SearchMode"), searchMode);
}

std::string DescribeDomainResolveStatisticsSummaryRequest::getKeyword() const {
  return keyword_;
}

void DescribeDomainResolveStatisticsSummaryRequest::setKeyword(const std::string &keyword) {
  keyword_ = keyword;
  setParameter(std::string("Keyword"), keyword);
}

std::string DescribeDomainResolveStatisticsSummaryRequest::getLang() const {
  return lang_;
}

void DescribeDomainResolveStatisticsSummaryRequest::setLang(const std::string &lang) {
  lang_ = lang;
  setParameter(std::string("Lang"), lang);
}

std::string DescribeDomainResolveStatisticsSummaryRequest::getDirection() const {
  return direction_;
}

void DescribeDomainResolveStatisticsSummaryRequest::setDirection(const std::string &direction) {
  direction_ = direction;
  setParameter(std::string("Direction"), direction);
}

