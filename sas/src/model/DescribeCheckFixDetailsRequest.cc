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

#include <alibabacloud/sas/model/DescribeCheckFixDetailsRequest.h>

using AlibabaCloud::Sas::Model::DescribeCheckFixDetailsRequest;

DescribeCheckFixDetailsRequest::DescribeCheckFixDetailsRequest()
    : RpcServiceRequest("sas", "2018-12-03", "DescribeCheckFixDetails") {
  setMethod(HttpRequest::Method::Post);
}

DescribeCheckFixDetailsRequest::~DescribeCheckFixDetailsRequest() {}

std::string DescribeCheckFixDetailsRequest::getLang() const {
  return lang_;
}

void DescribeCheckFixDetailsRequest::setLang(const std::string &lang) {
  lang_ = lang;
  setParameter(std::string("Lang"), lang);
}

std::string DescribeCheckFixDetailsRequest::getCheckIds() const {
  return checkIds_;
}

void DescribeCheckFixDetailsRequest::setCheckIds(const std::string &checkIds) {
  checkIds_ = checkIds;
  setParameter(std::string("CheckIds"), checkIds);
}

long DescribeCheckFixDetailsRequest::getRiskId() const {
  return riskId_;
}

void DescribeCheckFixDetailsRequest::setRiskId(long riskId) {
  riskId_ = riskId;
  setParameter(std::string("RiskId"), std::to_string(riskId));
}

