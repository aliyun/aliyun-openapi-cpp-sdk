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

#include <alibabacloud/sas/model/FixCheckWarningsRequest.h>

using AlibabaCloud::Sas::Model::FixCheckWarningsRequest;

FixCheckWarningsRequest::FixCheckWarningsRequest()
    : RpcServiceRequest("sas", "2018-12-03", "FixCheckWarnings") {
  setMethod(HttpRequest::Method::Post);
}

FixCheckWarningsRequest::~FixCheckWarningsRequest() {}

std::string FixCheckWarningsRequest::getCheckParams() const {
  return checkParams_;
}

void FixCheckWarningsRequest::setCheckParams(const std::string &checkParams) {
  checkParams_ = checkParams;
  setParameter(std::string("CheckParams"), checkParams);
}

std::string FixCheckWarningsRequest::getSourceIp() const {
  return sourceIp_;
}

void FixCheckWarningsRequest::setSourceIp(const std::string &sourceIp) {
  sourceIp_ = sourceIp;
  setParameter(std::string("SourceIp"), sourceIp);
}

std::string FixCheckWarningsRequest::getLang() const {
  return lang_;
}

void FixCheckWarningsRequest::setLang(const std::string &lang) {
  lang_ = lang;
  setParameter(std::string("Lang"), lang);
}

long FixCheckWarningsRequest::getRiskId() const {
  return riskId_;
}

void FixCheckWarningsRequest::setRiskId(long riskId) {
  riskId_ = riskId;
  setParameter(std::string("RiskId"), std::to_string(riskId));
}

std::string FixCheckWarningsRequest::getUuids() const {
  return uuids_;
}

void FixCheckWarningsRequest::setUuids(const std::string &uuids) {
  uuids_ = uuids;
  setParameter(std::string("Uuids"), uuids);
}

