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

#include <alibabacloud/alidns/model/DescribeDohDomainStatisticsRequest.h>

using AlibabaCloud::Alidns::Model::DescribeDohDomainStatisticsRequest;

DescribeDohDomainStatisticsRequest::DescribeDohDomainStatisticsRequest()
    : RpcServiceRequest("alidns", "2015-01-09", "DescribeDohDomainStatistics") {
  setMethod(HttpRequest::Method::Post);
}

DescribeDohDomainStatisticsRequest::~DescribeDohDomainStatisticsRequest() {}

std::string DescribeDohDomainStatisticsRequest::getDomainName() const {
  return domainName_;
}

void DescribeDohDomainStatisticsRequest::setDomainName(const std::string &domainName) {
  domainName_ = domainName;
  setParameter(std::string("DomainName"), domainName);
}

std::string DescribeDohDomainStatisticsRequest::getStartDate() const {
  return startDate_;
}

void DescribeDohDomainStatisticsRequest::setStartDate(const std::string &startDate) {
  startDate_ = startDate;
  setParameter(std::string("StartDate"), startDate);
}

std::string DescribeDohDomainStatisticsRequest::getEndDate() const {
  return endDate_;
}

void DescribeDohDomainStatisticsRequest::setEndDate(const std::string &endDate) {
  endDate_ = endDate;
  setParameter(std::string("EndDate"), endDate);
}

std::string DescribeDohDomainStatisticsRequest::getLang() const {
  return lang_;
}

void DescribeDohDomainStatisticsRequest::setLang(const std::string &lang) {
  lang_ = lang;
  setParameter(std::string("Lang"), lang);
}

