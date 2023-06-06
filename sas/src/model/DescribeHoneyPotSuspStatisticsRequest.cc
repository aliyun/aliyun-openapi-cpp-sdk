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

#include <alibabacloud/sas/model/DescribeHoneyPotSuspStatisticsRequest.h>

using AlibabaCloud::Sas::Model::DescribeHoneyPotSuspStatisticsRequest;

DescribeHoneyPotSuspStatisticsRequest::DescribeHoneyPotSuspStatisticsRequest()
    : RpcServiceRequest("sas", "2018-12-03", "DescribeHoneyPotSuspStatistics") {
  setMethod(HttpRequest::Method::Post);
}

DescribeHoneyPotSuspStatisticsRequest::~DescribeHoneyPotSuspStatisticsRequest() {}

int DescribeHoneyPotSuspStatisticsRequest::getStatisticsDays() const {
  return statisticsDays_;
}

void DescribeHoneyPotSuspStatisticsRequest::setStatisticsDays(int statisticsDays) {
  statisticsDays_ = statisticsDays;
  setParameter(std::string("StatisticsDays"), std::to_string(statisticsDays));
}

std::string DescribeHoneyPotSuspStatisticsRequest::getSourceIp() const {
  return sourceIp_;
}

void DescribeHoneyPotSuspStatisticsRequest::setSourceIp(const std::string &sourceIp) {
  sourceIp_ = sourceIp;
  setParameter(std::string("SourceIp"), sourceIp);
}

std::string DescribeHoneyPotSuspStatisticsRequest::getFrom() const {
  return from_;
}

void DescribeHoneyPotSuspStatisticsRequest::setFrom(const std::string &from) {
  from_ = from;
  setParameter(std::string("From"), from);
}

std::string DescribeHoneyPotSuspStatisticsRequest::getLang() const {
  return lang_;
}

void DescribeHoneyPotSuspStatisticsRequest::setLang(const std::string &lang) {
  lang_ = lang;
  setParameter(std::string("Lang"), lang);
}

std::string DescribeHoneyPotSuspStatisticsRequest::getStatisticsKeyType() const {
  return statisticsKeyType_;
}

void DescribeHoneyPotSuspStatisticsRequest::setStatisticsKeyType(const std::string &statisticsKeyType) {
  statisticsKeyType_ = statisticsKeyType;
  setParameter(std::string("StatisticsKeyType"), statisticsKeyType);
}

