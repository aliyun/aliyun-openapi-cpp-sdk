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

#include <alibabacloud/governance/model/RunEvaluationRequest.h>

using AlibabaCloud::Governance::Model::RunEvaluationRequest;

RunEvaluationRequest::RunEvaluationRequest()
    : RpcServiceRequest("governance", "2021-01-20", "RunEvaluation") {
  setMethod(HttpRequest::Method::Post);
}

RunEvaluationRequest::~RunEvaluationRequest() {}

long RunEvaluationRequest::getAccountId() const {
  return accountId_;
}

void RunEvaluationRequest::setAccountId(long accountId) {
  accountId_ = accountId;
  setParameter(std::string("AccountId"), std::to_string(accountId));
}

std::string RunEvaluationRequest::getRegionId() const {
  return regionId_;
}

void RunEvaluationRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string RunEvaluationRequest::getScope() const {
  return scope_;
}

void RunEvaluationRequest::setScope(const std::string &scope) {
  scope_ = scope;
  setParameter(std::string("Scope"), scope);
}

std::string RunEvaluationRequest::getPartnerCode() const {
  return partnerCode_;
}

void RunEvaluationRequest::setPartnerCode(const std::string &partnerCode) {
  partnerCode_ = partnerCode;
  setParameter(std::string("PartnerCode"), partnerCode);
}

