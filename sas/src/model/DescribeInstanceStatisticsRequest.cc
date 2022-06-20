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

#include <alibabacloud/sas/model/DescribeInstanceStatisticsRequest.h>

using AlibabaCloud::Sas::Model::DescribeInstanceStatisticsRequest;

DescribeInstanceStatisticsRequest::DescribeInstanceStatisticsRequest()
    : RpcServiceRequest("sas", "2018-12-03", "DescribeInstanceStatistics") {
  setMethod(HttpRequest::Method::Post);
}

DescribeInstanceStatisticsRequest::~DescribeInstanceStatisticsRequest() {}

std::string DescribeInstanceStatisticsRequest::getUuid() const {
  return uuid_;
}

void DescribeInstanceStatisticsRequest::setUuid(const std::string &uuid) {
  uuid_ = uuid;
  setParameter(std::string("Uuid"), uuid);
}

std::string DescribeInstanceStatisticsRequest::getSourceIp() const {
  return sourceIp_;
}

void DescribeInstanceStatisticsRequest::setSourceIp(const std::string &sourceIp) {
  sourceIp_ = sourceIp;
  setParameter(std::string("SourceIp"), sourceIp);
}

std::string DescribeInstanceStatisticsRequest::getFrom() const {
  return from_;
}

void DescribeInstanceStatisticsRequest::setFrom(const std::string &from) {
  from_ = from;
  setParameter(std::string("From"), from);
}

std::string DescribeInstanceStatisticsRequest::getLang() const {
  return lang_;
}

void DescribeInstanceStatisticsRequest::setLang(const std::string &lang) {
  lang_ = lang;
  setParameter(std::string("Lang"), lang);
}

