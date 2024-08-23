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

#include <alibabacloud/governance/model/BatchEnrollAccountsRequest.h>

using AlibabaCloud::Governance::Model::BatchEnrollAccountsRequest;

BatchEnrollAccountsRequest::BatchEnrollAccountsRequest()
    : RpcServiceRequest("governance", "2021-01-20", "BatchEnrollAccounts") {
  setMethod(HttpRequest::Method::Post);
}

BatchEnrollAccountsRequest::~BatchEnrollAccountsRequest() {}

std::string BatchEnrollAccountsRequest::getRegionId() const {
  return regionId_;
}

void BatchEnrollAccountsRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string BatchEnrollAccountsRequest::getBaselineId() const {
  return baselineId_;
}

void BatchEnrollAccountsRequest::setBaselineId(const std::string &baselineId) {
  baselineId_ = baselineId;
  setParameter(std::string("BaselineId"), baselineId);
}

std::vector<BatchEnrollAccountsRequest::BaselineItems> BatchEnrollAccountsRequest::getBaselineItems() const {
  return baselineItems_;
}

void BatchEnrollAccountsRequest::setBaselineItems(const std::vector<BatchEnrollAccountsRequest::BaselineItems> &baselineItems) {
  baselineItems_ = baselineItems;
  for(int dep1 = 0; dep1 != baselineItems.size(); dep1++) {
    setParameter(std::string("BaselineItems") + "." + std::to_string(dep1 + 1) + ".Name", baselineItems[dep1].name);
    setParameter(std::string("BaselineItems") + "." + std::to_string(dep1 + 1) + ".Skip", baselineItems[dep1].skip ? "true" : "false");
    setParameter(std::string("BaselineItems") + "." + std::to_string(dep1 + 1) + ".Config", baselineItems[dep1].config);
    setParameter(std::string("BaselineItems") + "." + std::to_string(dep1 + 1) + ".Version", baselineItems[dep1].version);
  }
}

std::vector<BatchEnrollAccountsRequest::Accounts> BatchEnrollAccountsRequest::getAccounts() const {
  return accounts_;
}

void BatchEnrollAccountsRequest::setAccounts(const std::vector<BatchEnrollAccountsRequest::Accounts> &accounts) {
  accounts_ = accounts;
  for(int dep1 = 0; dep1 != accounts.size(); dep1++) {
    setParameter(std::string("Accounts") + "." + std::to_string(dep1 + 1) + ".AccountUid", std::to_string(accounts[dep1].accountUid));
  }
}

