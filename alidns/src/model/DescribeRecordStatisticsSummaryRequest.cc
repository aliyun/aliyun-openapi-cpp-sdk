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

#include <alibabacloud/alidns/model/DescribeRecordStatisticsSummaryRequest.h>

using AlibabaCloud::Alidns::Model::DescribeRecordStatisticsSummaryRequest;

DescribeRecordStatisticsSummaryRequest::DescribeRecordStatisticsSummaryRequest()
    : RpcServiceRequest("alidns", "2015-01-09", "DescribeRecordStatisticsSummary") {
  setMethod(HttpRequest::Method::Post);
}

DescribeRecordStatisticsSummaryRequest::~DescribeRecordStatisticsSummaryRequest() {}

long DescribeRecordStatisticsSummaryRequest::getThreshold() const {
  return threshold_;
}

void DescribeRecordStatisticsSummaryRequest::setThreshold(long threshold) {
  threshold_ = threshold;
  setParameter(std::string("Threshold"), std::to_string(threshold));
}

std::string DescribeRecordStatisticsSummaryRequest::getStartDate() const {
  return startDate_;
}

void DescribeRecordStatisticsSummaryRequest::setStartDate(const std::string &startDate) {
  startDate_ = startDate;
  setParameter(std::string("StartDate"), startDate);
}

long DescribeRecordStatisticsSummaryRequest::getPageNumber() const {
  return pageNumber_;
}

void DescribeRecordStatisticsSummaryRequest::setPageNumber(long pageNumber) {
  pageNumber_ = pageNumber;
  setParameter(std::string("PageNumber"), std::to_string(pageNumber));
}

std::string DescribeRecordStatisticsSummaryRequest::getDomainType() const {
  return domainType_;
}

void DescribeRecordStatisticsSummaryRequest::setDomainType(const std::string &domainType) {
  domainType_ = domainType;
  setParameter(std::string("DomainType"), domainType);
}

long DescribeRecordStatisticsSummaryRequest::getPageSize() const {
  return pageSize_;
}

void DescribeRecordStatisticsSummaryRequest::setPageSize(long pageSize) {
  pageSize_ = pageSize;
  setParameter(std::string("PageSize"), std::to_string(pageSize));
}

std::string DescribeRecordStatisticsSummaryRequest::getLang() const {
  return lang_;
}

void DescribeRecordStatisticsSummaryRequest::setLang(const std::string &lang) {
  lang_ = lang;
  setParameter(std::string("Lang"), lang);
}

std::string DescribeRecordStatisticsSummaryRequest::getKeyword() const {
  return keyword_;
}

void DescribeRecordStatisticsSummaryRequest::setKeyword(const std::string &keyword) {
  keyword_ = keyword;
  setParameter(std::string("Keyword"), keyword);
}

std::string DescribeRecordStatisticsSummaryRequest::getDirection() const {
  return direction_;
}

void DescribeRecordStatisticsSummaryRequest::setDirection(const std::string &direction) {
  direction_ = direction;
  setParameter(std::string("Direction"), direction);
}

std::string DescribeRecordStatisticsSummaryRequest::getDomainName() const {
  return domainName_;
}

void DescribeRecordStatisticsSummaryRequest::setDomainName(const std::string &domainName) {
  domainName_ = domainName;
  setParameter(std::string("DomainName"), domainName);
}

std::string DescribeRecordStatisticsSummaryRequest::getOrderBy() const {
  return orderBy_;
}

void DescribeRecordStatisticsSummaryRequest::setOrderBy(const std::string &orderBy) {
  orderBy_ = orderBy;
  setParameter(std::string("OrderBy"), orderBy);
}

std::string DescribeRecordStatisticsSummaryRequest::getEndDate() const {
  return endDate_;
}

void DescribeRecordStatisticsSummaryRequest::setEndDate(const std::string &endDate) {
  endDate_ = endDate;
  setParameter(std::string("EndDate"), endDate);
}

std::string DescribeRecordStatisticsSummaryRequest::getUserClientIp() const {
  return userClientIp_;
}

void DescribeRecordStatisticsSummaryRequest::setUserClientIp(const std::string &userClientIp) {
  userClientIp_ = userClientIp;
  setParameter(std::string("UserClientIp"), userClientIp);
}

std::string DescribeRecordStatisticsSummaryRequest::getSearchMode() const {
  return searchMode_;
}

void DescribeRecordStatisticsSummaryRequest::setSearchMode(const std::string &searchMode) {
  searchMode_ = searchMode;
  setParameter(std::string("SearchMode"), searchMode);
}

