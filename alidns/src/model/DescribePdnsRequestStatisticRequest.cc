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

#include <alibabacloud/alidns/model/DescribePdnsRequestStatisticRequest.h>

using AlibabaCloud::Alidns::Model::DescribePdnsRequestStatisticRequest;

DescribePdnsRequestStatisticRequest::DescribePdnsRequestStatisticRequest()
    : RpcServiceRequest("alidns", "2015-01-09", "DescribePdnsRequestStatistic") {
  setMethod(HttpRequest::Method::Post);
}

DescribePdnsRequestStatisticRequest::~DescribePdnsRequestStatisticRequest() {}

std::string DescribePdnsRequestStatisticRequest::getDomainName() const {
  return domainName_;
}

void DescribePdnsRequestStatisticRequest::setDomainName(const std::string &domainName) {
  domainName_ = domainName;
  setParameter(std::string("DomainName"), domainName);
}

std::string DescribePdnsRequestStatisticRequest::getType() const {
  return type_;
}

void DescribePdnsRequestStatisticRequest::setType(const std::string &type) {
  type_ = type;
  setParameter(std::string("Type"), type);
}

std::string DescribePdnsRequestStatisticRequest::getStartDate() const {
  return startDate_;
}

void DescribePdnsRequestStatisticRequest::setStartDate(const std::string &startDate) {
  startDate_ = startDate;
  setParameter(std::string("StartDate"), startDate);
}

std::string DescribePdnsRequestStatisticRequest::getEndDate() const {
  return endDate_;
}

void DescribePdnsRequestStatisticRequest::setEndDate(const std::string &endDate) {
  endDate_ = endDate;
  setParameter(std::string("EndDate"), endDate);
}

std::string DescribePdnsRequestStatisticRequest::getSubDomain() const {
  return subDomain_;
}

void DescribePdnsRequestStatisticRequest::setSubDomain(const std::string &subDomain) {
  subDomain_ = subDomain;
  setParameter(std::string("SubDomain"), subDomain);
}

std::string DescribePdnsRequestStatisticRequest::getLang() const {
  return lang_;
}

void DescribePdnsRequestStatisticRequest::setLang(const std::string &lang) {
  lang_ = lang;
  setParameter(std::string("Lang"), lang);
}

