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

#include <alibabacloud/alidns/model/DescribeRecordStatisticsRequest.h>

using AlibabaCloud::Alidns::Model::DescribeRecordStatisticsRequest;

DescribeRecordStatisticsRequest::DescribeRecordStatisticsRequest()
    : RpcServiceRequest("alidns", "2015-01-09", "DescribeRecordStatistics") {
  setMethod(HttpRequest::Method::Post);
}

DescribeRecordStatisticsRequest::~DescribeRecordStatisticsRequest() {}

std::string DescribeRecordStatisticsRequest::getRr() const {
  return rr_;
}

void DescribeRecordStatisticsRequest::setRr(const std::string &rr) {
  rr_ = rr;
  setParameter(std::string("Rr"), rr);
}

std::string DescribeRecordStatisticsRequest::getDomainName() const {
  return domainName_;
}

void DescribeRecordStatisticsRequest::setDomainName(const std::string &domainName) {
  domainName_ = domainName;
  setParameter(std::string("DomainName"), domainName);
}

std::string DescribeRecordStatisticsRequest::getStartDate() const {
  return startDate_;
}

void DescribeRecordStatisticsRequest::setStartDate(const std::string &startDate) {
  startDate_ = startDate;
  setParameter(std::string("StartDate"), startDate);
}

std::string DescribeRecordStatisticsRequest::getEndDate() const {
  return endDate_;
}

void DescribeRecordStatisticsRequest::setEndDate(const std::string &endDate) {
  endDate_ = endDate;
  setParameter(std::string("EndDate"), endDate);
}

std::string DescribeRecordStatisticsRequest::getDomainType() const {
  return domainType_;
}

void DescribeRecordStatisticsRequest::setDomainType(const std::string &domainType) {
  domainType_ = domainType;
  setParameter(std::string("DomainType"), domainType);
}

std::string DescribeRecordStatisticsRequest::getUserClientIp() const {
  return userClientIp_;
}

void DescribeRecordStatisticsRequest::setUserClientIp(const std::string &userClientIp) {
  userClientIp_ = userClientIp;
  setParameter(std::string("UserClientIp"), userClientIp);
}

std::string DescribeRecordStatisticsRequest::getLang() const {
  return lang_;
}

void DescribeRecordStatisticsRequest::setLang(const std::string &lang) {
  lang_ = lang;
  setParameter(std::string("Lang"), lang);
}

