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

#include <alibabacloud/alidns/model/DescribeDohDomainStatisticsSummaryRequest.h>

using AlibabaCloud::Alidns::Model::DescribeDohDomainStatisticsSummaryRequest;

DescribeDohDomainStatisticsSummaryRequest::DescribeDohDomainStatisticsSummaryRequest()
    : RpcServiceRequest("alidns", "2015-01-09", "DescribeDohDomainStatisticsSummary") {
  setMethod(HttpRequest::Method::Post);
}

DescribeDohDomainStatisticsSummaryRequest::~DescribeDohDomainStatisticsSummaryRequest() {}

std::string DescribeDohDomainStatisticsSummaryRequest::getDomainName() const {
  return domainName_;
}

void DescribeDohDomainStatisticsSummaryRequest::setDomainName(const std::string &domainName) {
  domainName_ = domainName;
  setParameter(std::string("DomainName"), domainName);
}

std::string DescribeDohDomainStatisticsSummaryRequest::getOrderBy() const {
  return orderBy_;
}

void DescribeDohDomainStatisticsSummaryRequest::setOrderBy(const std::string &orderBy) {
  orderBy_ = orderBy;
  setParameter(std::string("OrderBy"), orderBy);
}

std::string DescribeDohDomainStatisticsSummaryRequest::getStartDate() const {
  return startDate_;
}

void DescribeDohDomainStatisticsSummaryRequest::setStartDate(const std::string &startDate) {
  startDate_ = startDate;
  setParameter(std::string("StartDate"), startDate);
}

int DescribeDohDomainStatisticsSummaryRequest::getPageNumber() const {
  return pageNumber_;
}

void DescribeDohDomainStatisticsSummaryRequest::setPageNumber(int pageNumber) {
  pageNumber_ = pageNumber;
  setParameter(std::string("PageNumber"), std::to_string(pageNumber));
}

std::string DescribeDohDomainStatisticsSummaryRequest::getEndDate() const {
  return endDate_;
}

void DescribeDohDomainStatisticsSummaryRequest::setEndDate(const std::string &endDate) {
  endDate_ = endDate;
  setParameter(std::string("EndDate"), endDate);
}

int DescribeDohDomainStatisticsSummaryRequest::getPageSize() const {
  return pageSize_;
}

void DescribeDohDomainStatisticsSummaryRequest::setPageSize(int pageSize) {
  pageSize_ = pageSize;
  setParameter(std::string("PageSize"), std::to_string(pageSize));
}

std::string DescribeDohDomainStatisticsSummaryRequest::getLang() const {
  return lang_;
}

void DescribeDohDomainStatisticsSummaryRequest::setLang(const std::string &lang) {
  lang_ = lang;
  setParameter(std::string("Lang"), lang);
}

std::string DescribeDohDomainStatisticsSummaryRequest::getDirection() const {
  return direction_;
}

void DescribeDohDomainStatisticsSummaryRequest::setDirection(const std::string &direction) {
  direction_ = direction;
  setParameter(std::string("Direction"), direction);
}

