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

#include <alibabacloud/alidns/model/DescribeDomainStatisticsSummaryRequest.h>

using AlibabaCloud::Alidns::Model::DescribeDomainStatisticsSummaryRequest;

DescribeDomainStatisticsSummaryRequest::DescribeDomainStatisticsSummaryRequest()
    : RpcServiceRequest("alidns", "2015-01-09", "DescribeDomainStatisticsSummary") {
  setMethod(HttpRequest::Method::Post);
}

DescribeDomainStatisticsSummaryRequest::~DescribeDomainStatisticsSummaryRequest() {}

long DescribeDomainStatisticsSummaryRequest::getThreshold() const {
  return threshold_;
}

void DescribeDomainStatisticsSummaryRequest::setThreshold(long threshold) {
  threshold_ = threshold;
  setParameter(std::string("Threshold"), std::to_string(threshold));
}

std::string DescribeDomainStatisticsSummaryRequest::getStartDate() const {
  return startDate_;
}

void DescribeDomainStatisticsSummaryRequest::setStartDate(const std::string &startDate) {
  startDate_ = startDate;
  setParameter(std::string("StartDate"), startDate);
}

long DescribeDomainStatisticsSummaryRequest::getPageNumber() const {
  return pageNumber_;
}

void DescribeDomainStatisticsSummaryRequest::setPageNumber(long pageNumber) {
  pageNumber_ = pageNumber;
  setParameter(std::string("PageNumber"), std::to_string(pageNumber));
}

long DescribeDomainStatisticsSummaryRequest::getPageSize() const {
  return pageSize_;
}

void DescribeDomainStatisticsSummaryRequest::setPageSize(long pageSize) {
  pageSize_ = pageSize;
  setParameter(std::string("PageSize"), std::to_string(pageSize));
}

std::string DescribeDomainStatisticsSummaryRequest::getLang() const {
  return lang_;
}

void DescribeDomainStatisticsSummaryRequest::setLang(const std::string &lang) {
  lang_ = lang;
  setParameter(std::string("Lang"), lang);
}

std::string DescribeDomainStatisticsSummaryRequest::getKeyword() const {
  return keyword_;
}

void DescribeDomainStatisticsSummaryRequest::setKeyword(const std::string &keyword) {
  keyword_ = keyword;
  setParameter(std::string("Keyword"), keyword);
}

std::string DescribeDomainStatisticsSummaryRequest::getDirection() const {
  return direction_;
}

void DescribeDomainStatisticsSummaryRequest::setDirection(const std::string &direction) {
  direction_ = direction;
  setParameter(std::string("Direction"), direction);
}

std::string DescribeDomainStatisticsSummaryRequest::getOrderBy() const {
  return orderBy_;
}

void DescribeDomainStatisticsSummaryRequest::setOrderBy(const std::string &orderBy) {
  orderBy_ = orderBy;
  setParameter(std::string("OrderBy"), orderBy);
}

std::string DescribeDomainStatisticsSummaryRequest::getEndDate() const {
  return endDate_;
}

void DescribeDomainStatisticsSummaryRequest::setEndDate(const std::string &endDate) {
  endDate_ = endDate;
  setParameter(std::string("EndDate"), endDate);
}

std::string DescribeDomainStatisticsSummaryRequest::getUserClientIp() const {
  return userClientIp_;
}

void DescribeDomainStatisticsSummaryRequest::setUserClientIp(const std::string &userClientIp) {
  userClientIp_ = userClientIp;
  setParameter(std::string("UserClientIp"), userClientIp);
}

std::string DescribeDomainStatisticsSummaryRequest::getSearchMode() const {
  return searchMode_;
}

void DescribeDomainStatisticsSummaryRequest::setSearchMode(const std::string &searchMode) {
  searchMode_ = searchMode;
  setParameter(std::string("SearchMode"), searchMode);
}

