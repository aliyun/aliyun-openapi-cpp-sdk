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

#include <alibabacloud/alidns/model/DescribePdnsThreatStatisticsRequest.h>

using AlibabaCloud::Alidns::Model::DescribePdnsThreatStatisticsRequest;

DescribePdnsThreatStatisticsRequest::DescribePdnsThreatStatisticsRequest()
    : RpcServiceRequest("alidns", "2015-01-09", "DescribePdnsThreatStatistics") {
  setMethod(HttpRequest::Method::Post);
}

DescribePdnsThreatStatisticsRequest::~DescribePdnsThreatStatisticsRequest() {}

std::string DescribePdnsThreatStatisticsRequest::getType() const {
  return type_;
}

void DescribePdnsThreatStatisticsRequest::setType(const std::string &type) {
  type_ = type;
  setParameter(std::string("Type"), type);
}

std::string DescribePdnsThreatStatisticsRequest::getStartDate() const {
  return startDate_;
}

void DescribePdnsThreatStatisticsRequest::setStartDate(const std::string &startDate) {
  startDate_ = startDate;
  setParameter(std::string("StartDate"), startDate);
}

long DescribePdnsThreatStatisticsRequest::getPageNumber() const {
  return pageNumber_;
}

void DescribePdnsThreatStatisticsRequest::setPageNumber(long pageNumber) {
  pageNumber_ = pageNumber;
  setParameter(std::string("PageNumber"), std::to_string(pageNumber));
}

long DescribePdnsThreatStatisticsRequest::getPageSize() const {
  return pageSize_;
}

void DescribePdnsThreatStatisticsRequest::setPageSize(long pageSize) {
  pageSize_ = pageSize;
  setParameter(std::string("PageSize"), std::to_string(pageSize));
}

std::string DescribePdnsThreatStatisticsRequest::getThreatType() const {
  return threatType_;
}

void DescribePdnsThreatStatisticsRequest::setThreatType(const std::string &threatType) {
  threatType_ = threatType;
  setParameter(std::string("ThreatType"), threatType);
}

std::string DescribePdnsThreatStatisticsRequest::getLang() const {
  return lang_;
}

void DescribePdnsThreatStatisticsRequest::setLang(const std::string &lang) {
  lang_ = lang;
  setParameter(std::string("Lang"), lang);
}

std::string DescribePdnsThreatStatisticsRequest::getDirection() const {
  return direction_;
}

void DescribePdnsThreatStatisticsRequest::setDirection(const std::string &direction) {
  direction_ = direction;
  setParameter(std::string("Direction"), direction);
}

std::string DescribePdnsThreatStatisticsRequest::getThreatSourceIp() const {
  return threatSourceIp_;
}

void DescribePdnsThreatStatisticsRequest::setThreatSourceIp(const std::string &threatSourceIp) {
  threatSourceIp_ = threatSourceIp;
  setParameter(std::string("ThreatSourceIp"), threatSourceIp);
}

std::string DescribePdnsThreatStatisticsRequest::getDomainName() const {
  return domainName_;
}

void DescribePdnsThreatStatisticsRequest::setDomainName(const std::string &domainName) {
  domainName_ = domainName;
  setParameter(std::string("DomainName"), domainName);
}

std::string DescribePdnsThreatStatisticsRequest::getOrderBy() const {
  return orderBy_;
}

void DescribePdnsThreatStatisticsRequest::setOrderBy(const std::string &orderBy) {
  orderBy_ = orderBy;
  setParameter(std::string("OrderBy"), orderBy);
}

std::string DescribePdnsThreatStatisticsRequest::getEndDate() const {
  return endDate_;
}

void DescribePdnsThreatStatisticsRequest::setEndDate(const std::string &endDate) {
  endDate_ = endDate;
  setParameter(std::string("EndDate"), endDate);
}

std::string DescribePdnsThreatStatisticsRequest::getSubDomain() const {
  return subDomain_;
}

void DescribePdnsThreatStatisticsRequest::setSubDomain(const std::string &subDomain) {
  subDomain_ = subDomain;
  setParameter(std::string("SubDomain"), subDomain);
}

std::string DescribePdnsThreatStatisticsRequest::getThreatLevel() const {
  return threatLevel_;
}

void DescribePdnsThreatStatisticsRequest::setThreatLevel(const std::string &threatLevel) {
  threatLevel_ = threatLevel;
  setParameter(std::string("ThreatLevel"), threatLevel);
}

