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

#include <alibabacloud/alidns/model/DescribeDomainStatisticsRequest.h>

using AlibabaCloud::Alidns::Model::DescribeDomainStatisticsRequest;

DescribeDomainStatisticsRequest::DescribeDomainStatisticsRequest()
    : RpcServiceRequest("alidns", "2015-01-09", "DescribeDomainStatistics") {
  setMethod(HttpRequest::Method::Post);
}

DescribeDomainStatisticsRequest::~DescribeDomainStatisticsRequest() {}

std::string DescribeDomainStatisticsRequest::getDomainName() const {
  return domainName_;
}

void DescribeDomainStatisticsRequest::setDomainName(const std::string &domainName) {
  domainName_ = domainName;
  setParameter(std::string("DomainName"), domainName);
}

std::string DescribeDomainStatisticsRequest::getStartDate() const {
  return startDate_;
}

void DescribeDomainStatisticsRequest::setStartDate(const std::string &startDate) {
  startDate_ = startDate;
  setParameter(std::string("StartDate"), startDate);
}

std::string DescribeDomainStatisticsRequest::getEndDate() const {
  return endDate_;
}

void DescribeDomainStatisticsRequest::setEndDate(const std::string &endDate) {
  endDate_ = endDate;
  setParameter(std::string("EndDate"), endDate);
}

std::string DescribeDomainStatisticsRequest::getDomainType() const {
  return domainType_;
}

void DescribeDomainStatisticsRequest::setDomainType(const std::string &domainType) {
  domainType_ = domainType;
  setParameter(std::string("DomainType"), domainType);
}

std::string DescribeDomainStatisticsRequest::getUserClientIp() const {
  return userClientIp_;
}

void DescribeDomainStatisticsRequest::setUserClientIp(const std::string &userClientIp) {
  userClientIp_ = userClientIp;
  setParameter(std::string("UserClientIp"), userClientIp);
}

std::string DescribeDomainStatisticsRequest::getLang() const {
  return lang_;
}

void DescribeDomainStatisticsRequest::setLang(const std::string &lang) {
  lang_ = lang;
  setParameter(std::string("Lang"), lang);
}

