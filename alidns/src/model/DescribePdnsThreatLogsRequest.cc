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

#include <alibabacloud/alidns/model/DescribePdnsThreatLogsRequest.h>

using AlibabaCloud::Alidns::Model::DescribePdnsThreatLogsRequest;

DescribePdnsThreatLogsRequest::DescribePdnsThreatLogsRequest()
    : RpcServiceRequest("alidns", "2015-01-09", "DescribePdnsThreatLogs") {
  setMethod(HttpRequest::Method::Post);
}

DescribePdnsThreatLogsRequest::~DescribePdnsThreatLogsRequest() {}

std::string DescribePdnsThreatLogsRequest::getThreatSourceIp() const {
  return threatSourceIp_;
}

void DescribePdnsThreatLogsRequest::setThreatSourceIp(const std::string &threatSourceIp) {
  threatSourceIp_ = threatSourceIp;
  setParameter(std::string("ThreatSourceIp"), threatSourceIp);
}

std::string DescribePdnsThreatLogsRequest::getStartDate() const {
  return startDate_;
}

void DescribePdnsThreatLogsRequest::setStartDate(const std::string &startDate) {
  startDate_ = startDate;
  setParameter(std::string("StartDate"), startDate);
}

long DescribePdnsThreatLogsRequest::getPageNumber() const {
  return pageNumber_;
}

void DescribePdnsThreatLogsRequest::setPageNumber(long pageNumber) {
  pageNumber_ = pageNumber;
  setParameter(std::string("PageNumber"), std::to_string(pageNumber));
}

std::string DescribePdnsThreatLogsRequest::getEndDate() const {
  return endDate_;
}

void DescribePdnsThreatLogsRequest::setEndDate(const std::string &endDate) {
  endDate_ = endDate;
  setParameter(std::string("EndDate"), endDate);
}

long DescribePdnsThreatLogsRequest::getPageSize() const {
  return pageSize_;
}

void DescribePdnsThreatLogsRequest::setPageSize(long pageSize) {
  pageSize_ = pageSize;
  setParameter(std::string("PageSize"), std::to_string(pageSize));
}

std::string DescribePdnsThreatLogsRequest::getThreatType() const {
  return threatType_;
}

void DescribePdnsThreatLogsRequest::setThreatType(const std::string &threatType) {
  threatType_ = threatType;
  setParameter(std::string("ThreatType"), threatType);
}

std::string DescribePdnsThreatLogsRequest::getLang() const {
  return lang_;
}

void DescribePdnsThreatLogsRequest::setLang(const std::string &lang) {
  lang_ = lang;
  setParameter(std::string("Lang"), lang);
}

std::string DescribePdnsThreatLogsRequest::getKeyword() const {
  return keyword_;
}

void DescribePdnsThreatLogsRequest::setKeyword(const std::string &keyword) {
  keyword_ = keyword;
  setParameter(std::string("Keyword"), keyword);
}

std::string DescribePdnsThreatLogsRequest::getThreatLevel() const {
  return threatLevel_;
}

void DescribePdnsThreatLogsRequest::setThreatLevel(const std::string &threatLevel) {
  threatLevel_ = threatLevel;
  setParameter(std::string("ThreatLevel"), threatLevel);
}

