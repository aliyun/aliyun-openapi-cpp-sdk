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

#include <alibabacloud/alidns/model/DescribePdnsThreatStatisticRequest.h>

using AlibabaCloud::Alidns::Model::DescribePdnsThreatStatisticRequest;

DescribePdnsThreatStatisticRequest::DescribePdnsThreatStatisticRequest()
    : RpcServiceRequest("alidns", "2015-01-09", "DescribePdnsThreatStatistic") {
  setMethod(HttpRequest::Method::Post);
}

DescribePdnsThreatStatisticRequest::~DescribePdnsThreatStatisticRequest() {}

std::string DescribePdnsThreatStatisticRequest::getThreatSourceIp() const {
  return threatSourceIp_;
}

void DescribePdnsThreatStatisticRequest::setThreatSourceIp(const std::string &threatSourceIp) {
  threatSourceIp_ = threatSourceIp;
  setParameter(std::string("ThreatSourceIp"), threatSourceIp);
}

std::string DescribePdnsThreatStatisticRequest::getType() const {
  return type_;
}

void DescribePdnsThreatStatisticRequest::setType(const std::string &type) {
  type_ = type;
  setParameter(std::string("Type"), type);
}

std::string DescribePdnsThreatStatisticRequest::getStartDate() const {
  return startDate_;
}

void DescribePdnsThreatStatisticRequest::setStartDate(const std::string &startDate) {
  startDate_ = startDate;
  setParameter(std::string("StartDate"), startDate);
}

std::string DescribePdnsThreatStatisticRequest::getEndDate() const {
  return endDate_;
}

void DescribePdnsThreatStatisticRequest::setEndDate(const std::string &endDate) {
  endDate_ = endDate;
  setParameter(std::string("EndDate"), endDate);
}

std::string DescribePdnsThreatStatisticRequest::getLang() const {
  return lang_;
}

void DescribePdnsThreatStatisticRequest::setLang(const std::string &lang) {
  lang_ = lang;
  setParameter(std::string("Lang"), lang);
}

