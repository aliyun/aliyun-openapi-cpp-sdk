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

#include <alibabacloud/sas/model/DescribeRisksRequest.h>

using AlibabaCloud::Sas::Model::DescribeRisksRequest;

DescribeRisksRequest::DescribeRisksRequest()
    : RpcServiceRequest("sas", "2018-12-03", "DescribeRisks") {
  setMethod(HttpRequest::Method::Post);
}

DescribeRisksRequest::~DescribeRisksRequest() {}

std::string DescribeRisksRequest::getRiskName() const {
  return riskName_;
}

void DescribeRisksRequest::setRiskName(const std::string &riskName) {
  riskName_ = riskName;
  setParameter(std::string("RiskName"), riskName);
}

int DescribeRisksRequest::getLimit() const {
  return limit_;
}

void DescribeRisksRequest::setLimit(int limit) {
  limit_ = limit;
  setParameter(std::string("Limit"), std::to_string(limit));
}

std::string DescribeRisksRequest::getLang() const {
  return lang_;
}

void DescribeRisksRequest::setLang(const std::string &lang) {
  lang_ = lang;
  setParameter(std::string("Lang"), lang);
}

long DescribeRisksRequest::getRiskId() const {
  return riskId_;
}

void DescribeRisksRequest::setRiskId(long riskId) {
  riskId_ = riskId;
  setParameter(std::string("RiskId"), std::to_string(riskId));
}

