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

#include <alibabacloud/alidns/model/DescribeDohSubDomainStatisticsSummaryRequest.h>

using AlibabaCloud::Alidns::Model::DescribeDohSubDomainStatisticsSummaryRequest;

DescribeDohSubDomainStatisticsSummaryRequest::DescribeDohSubDomainStatisticsSummaryRequest()
    : RpcServiceRequest("alidns", "2015-01-09", "DescribeDohSubDomainStatisticsSummary") {
  setMethod(HttpRequest::Method::Post);
}

DescribeDohSubDomainStatisticsSummaryRequest::~DescribeDohSubDomainStatisticsSummaryRequest() {}

std::string DescribeDohSubDomainStatisticsSummaryRequest::getDomainName() const {
  return domainName_;
}

void DescribeDohSubDomainStatisticsSummaryRequest::setDomainName(const std::string &domainName) {
  domainName_ = domainName;
  setParameter(std::string("DomainName"), domainName);
}

std::string DescribeDohSubDomainStatisticsSummaryRequest::getOrderBy() const {
  return orderBy_;
}

void DescribeDohSubDomainStatisticsSummaryRequest::setOrderBy(const std::string &orderBy) {
  orderBy_ = orderBy;
  setParameter(std::string("OrderBy"), orderBy);
}

std::string DescribeDohSubDomainStatisticsSummaryRequest::getStartDate() const {
  return startDate_;
}

void DescribeDohSubDomainStatisticsSummaryRequest::setStartDate(const std::string &startDate) {
  startDate_ = startDate;
  setParameter(std::string("StartDate"), startDate);
}

int DescribeDohSubDomainStatisticsSummaryRequest::getPageNumber() const {
  return pageNumber_;
}

void DescribeDohSubDomainStatisticsSummaryRequest::setPageNumber(int pageNumber) {
  pageNumber_ = pageNumber;
  setParameter(std::string("PageNumber"), std::to_string(pageNumber));
}

std::string DescribeDohSubDomainStatisticsSummaryRequest::getEndDate() const {
  return endDate_;
}

void DescribeDohSubDomainStatisticsSummaryRequest::setEndDate(const std::string &endDate) {
  endDate_ = endDate;
  setParameter(std::string("EndDate"), endDate);
}

int DescribeDohSubDomainStatisticsSummaryRequest::getPageSize() const {
  return pageSize_;
}

void DescribeDohSubDomainStatisticsSummaryRequest::setPageSize(int pageSize) {
  pageSize_ = pageSize;
  setParameter(std::string("PageSize"), std::to_string(pageSize));
}

std::string DescribeDohSubDomainStatisticsSummaryRequest::getSubDomain() const {
  return subDomain_;
}

void DescribeDohSubDomainStatisticsSummaryRequest::setSubDomain(const std::string &subDomain) {
  subDomain_ = subDomain;
  setParameter(std::string("SubDomain"), subDomain);
}

std::string DescribeDohSubDomainStatisticsSummaryRequest::getLang() const {
  return lang_;
}

void DescribeDohSubDomainStatisticsSummaryRequest::setLang(const std::string &lang) {
  lang_ = lang;
  setParameter(std::string("Lang"), lang);
}

std::string DescribeDohSubDomainStatisticsSummaryRequest::getDirection() const {
  return direction_;
}

void DescribeDohSubDomainStatisticsSummaryRequest::setDirection(const std::string &direction) {
  direction_ = direction;
  setParameter(std::string("Direction"), direction);
}

