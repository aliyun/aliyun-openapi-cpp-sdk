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

#include <alibabacloud/alidns/model/DescribeRecordResolveStatisticsSummaryRequest.h>

using AlibabaCloud::Alidns::Model::DescribeRecordResolveStatisticsSummaryRequest;

DescribeRecordResolveStatisticsSummaryRequest::DescribeRecordResolveStatisticsSummaryRequest()
    : RpcServiceRequest("alidns", "2015-01-09", "DescribeRecordResolveStatisticsSummary") {
  setMethod(HttpRequest::Method::Post);
}

DescribeRecordResolveStatisticsSummaryRequest::~DescribeRecordResolveStatisticsSummaryRequest() {}

long DescribeRecordResolveStatisticsSummaryRequest::getThreshold() const {
  return threshold_;
}

void DescribeRecordResolveStatisticsSummaryRequest::setThreshold(long threshold) {
  threshold_ = threshold;
  setParameter(std::string("Threshold"), std::to_string(threshold));
}

std::string DescribeRecordResolveStatisticsSummaryRequest::getStartDate() const {
  return startDate_;
}

void DescribeRecordResolveStatisticsSummaryRequest::setStartDate(const std::string &startDate) {
  startDate_ = startDate;
  setParameter(std::string("StartDate"), startDate);
}

int DescribeRecordResolveStatisticsSummaryRequest::getPageNumber() const {
  return pageNumber_;
}

void DescribeRecordResolveStatisticsSummaryRequest::setPageNumber(int pageNumber) {
  pageNumber_ = pageNumber;
  setParameter(std::string("PageNumber"), std::to_string(pageNumber));
}

std::string DescribeRecordResolveStatisticsSummaryRequest::getDomainType() const {
  return domainType_;
}

void DescribeRecordResolveStatisticsSummaryRequest::setDomainType(const std::string &domainType) {
  domainType_ = domainType;
  setParameter(std::string("DomainType"), domainType);
}

int DescribeRecordResolveStatisticsSummaryRequest::getPageSize() const {
  return pageSize_;
}

void DescribeRecordResolveStatisticsSummaryRequest::setPageSize(int pageSize) {
  pageSize_ = pageSize;
  setParameter(std::string("PageSize"), std::to_string(pageSize));
}

std::string DescribeRecordResolveStatisticsSummaryRequest::getKeyword() const {
  return keyword_;
}

void DescribeRecordResolveStatisticsSummaryRequest::setKeyword(const std::string &keyword) {
  keyword_ = keyword;
  setParameter(std::string("Keyword"), keyword);
}

std::string DescribeRecordResolveStatisticsSummaryRequest::getLang() const {
  return lang_;
}

void DescribeRecordResolveStatisticsSummaryRequest::setLang(const std::string &lang) {
  lang_ = lang;
  setParameter(std::string("Lang"), lang);
}

std::string DescribeRecordResolveStatisticsSummaryRequest::getDirection() const {
  return direction_;
}

void DescribeRecordResolveStatisticsSummaryRequest::setDirection(const std::string &direction) {
  direction_ = direction;
  setParameter(std::string("Direction"), direction);
}

std::string DescribeRecordResolveStatisticsSummaryRequest::getDomainName() const {
  return domainName_;
}

void DescribeRecordResolveStatisticsSummaryRequest::setDomainName(const std::string &domainName) {
  domainName_ = domainName;
  setParameter(std::string("DomainName"), domainName);
}

std::string DescribeRecordResolveStatisticsSummaryRequest::getEndDate() const {
  return endDate_;
}

void DescribeRecordResolveStatisticsSummaryRequest::setEndDate(const std::string &endDate) {
  endDate_ = endDate;
  setParameter(std::string("EndDate"), endDate);
}

std::string DescribeRecordResolveStatisticsSummaryRequest::getUserClientIp() const {
  return userClientIp_;
}

void DescribeRecordResolveStatisticsSummaryRequest::setUserClientIp(const std::string &userClientIp) {
  userClientIp_ = userClientIp;
  setParameter(std::string("UserClientIp"), userClientIp);
}

std::string DescribeRecordResolveStatisticsSummaryRequest::getSearchMode() const {
  return searchMode_;
}

void DescribeRecordResolveStatisticsSummaryRequest::setSearchMode(const std::string &searchMode) {
  searchMode_ = searchMode;
  setParameter(std::string("SearchMode"), searchMode);
}

