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

#include <alibabacloud/alidns/model/DescribePdnsRequestStatisticsRequest.h>

using AlibabaCloud::Alidns::Model::DescribePdnsRequestStatisticsRequest;

DescribePdnsRequestStatisticsRequest::DescribePdnsRequestStatisticsRequest()
    : RpcServiceRequest("alidns", "2015-01-09", "DescribePdnsRequestStatistics") {
  setMethod(HttpRequest::Method::Post);
}

DescribePdnsRequestStatisticsRequest::~DescribePdnsRequestStatisticsRequest() {}

std::string DescribePdnsRequestStatisticsRequest::getDomainName() const {
  return domainName_;
}

void DescribePdnsRequestStatisticsRequest::setDomainName(const std::string &domainName) {
  domainName_ = domainName;
  setParameter(std::string("DomainName"), domainName);
}

bool DescribePdnsRequestStatisticsRequest::getNeedThreatInfo() const {
  return needThreatInfo_;
}

void DescribePdnsRequestStatisticsRequest::setNeedThreatInfo(bool needThreatInfo) {
  needThreatInfo_ = needThreatInfo;
  setParameter(std::string("NeedThreatInfo"), needThreatInfo ? "true" : "false");
}

std::string DescribePdnsRequestStatisticsRequest::getType() const {
  return type_;
}

void DescribePdnsRequestStatisticsRequest::setType(const std::string &type) {
  type_ = type;
  setParameter(std::string("Type"), type);
}

std::string DescribePdnsRequestStatisticsRequest::getStartDate() const {
  return startDate_;
}

void DescribePdnsRequestStatisticsRequest::setStartDate(const std::string &startDate) {
  startDate_ = startDate;
  setParameter(std::string("StartDate"), startDate);
}

long DescribePdnsRequestStatisticsRequest::getPageNumber() const {
  return pageNumber_;
}

void DescribePdnsRequestStatisticsRequest::setPageNumber(long pageNumber) {
  pageNumber_ = pageNumber;
  setParameter(std::string("PageNumber"), std::to_string(pageNumber));
}

std::string DescribePdnsRequestStatisticsRequest::getEndDate() const {
  return endDate_;
}

void DescribePdnsRequestStatisticsRequest::setEndDate(const std::string &endDate) {
  endDate_ = endDate;
  setParameter(std::string("EndDate"), endDate);
}

long DescribePdnsRequestStatisticsRequest::getPageSize() const {
  return pageSize_;
}

void DescribePdnsRequestStatisticsRequest::setPageSize(long pageSize) {
  pageSize_ = pageSize;
  setParameter(std::string("PageSize"), std::to_string(pageSize));
}

std::string DescribePdnsRequestStatisticsRequest::getSubDomain() const {
  return subDomain_;
}

void DescribePdnsRequestStatisticsRequest::setSubDomain(const std::string &subDomain) {
  subDomain_ = subDomain;
  setParameter(std::string("SubDomain"), subDomain);
}

std::string DescribePdnsRequestStatisticsRequest::getLang() const {
  return lang_;
}

void DescribePdnsRequestStatisticsRequest::setLang(const std::string &lang) {
  lang_ = lang;
  setParameter(std::string("Lang"), lang);
}

