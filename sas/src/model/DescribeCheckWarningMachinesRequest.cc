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

#include <alibabacloud/sas/model/DescribeCheckWarningMachinesRequest.h>

using AlibabaCloud::Sas::Model::DescribeCheckWarningMachinesRequest;

DescribeCheckWarningMachinesRequest::DescribeCheckWarningMachinesRequest()
    : RpcServiceRequest("sas", "2018-12-03", "DescribeCheckWarningMachines") {
  setMethod(HttpRequest::Method::Post);
}

DescribeCheckWarningMachinesRequest::~DescribeCheckWarningMachinesRequest() {}

std::string DescribeCheckWarningMachinesRequest::getLang() const {
  return lang_;
}

void DescribeCheckWarningMachinesRequest::setLang(const std::string &lang) {
  lang_ = lang;
  setParameter(std::string("Lang"), lang);
}

long DescribeCheckWarningMachinesRequest::getCheckId() const {
  return checkId_;
}

void DescribeCheckWarningMachinesRequest::setCheckId(long checkId) {
  checkId_ = checkId;
  setParameter(std::string("CheckId"), std::to_string(checkId));
}

long DescribeCheckWarningMachinesRequest::getRiskId() const {
  return riskId_;
}

void DescribeCheckWarningMachinesRequest::setRiskId(long riskId) {
  riskId_ = riskId;
  setParameter(std::string("RiskId"), std::to_string(riskId));
}

int DescribeCheckWarningMachinesRequest::getStatus() const {
  return status_;
}

void DescribeCheckWarningMachinesRequest::setStatus(int status) {
  status_ = status;
  setParameter(std::string("Status"), std::to_string(status));
}

