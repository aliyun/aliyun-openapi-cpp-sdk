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

#include <alibabacloud/governance/model/ListEvaluationResultsRequest.h>

using AlibabaCloud::Governance::Model::ListEvaluationResultsRequest;

ListEvaluationResultsRequest::ListEvaluationResultsRequest()
    : RpcServiceRequest("governance", "2021-01-20", "ListEvaluationResults") {
  setMethod(HttpRequest::Method::Post);
}

ListEvaluationResultsRequest::~ListEvaluationResultsRequest() {}

long ListEvaluationResultsRequest::getAccountId() const {
  return accountId_;
}

void ListEvaluationResultsRequest::setAccountId(long accountId) {
  accountId_ = accountId;
  setParameter(std::string("AccountId"), std::to_string(accountId));
}

std::string ListEvaluationResultsRequest::getRegionId() const {
  return regionId_;
}

void ListEvaluationResultsRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string ListEvaluationResultsRequest::getPartnerCode() const {
  return partnerCode_;
}

void ListEvaluationResultsRequest::setPartnerCode(const std::string &partnerCode) {
  partnerCode_ = partnerCode;
  setParameter(std::string("PartnerCode"), partnerCode);
}

