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

#include <alibabacloud/governance/model/EnrollAccountRequest.h>

using AlibabaCloud::Governance::Model::EnrollAccountRequest;

EnrollAccountRequest::EnrollAccountRequest()
    : RpcServiceRequest("governance", "2021-01-20", "EnrollAccount") {
  setMethod(HttpRequest::Method::Post);
}

EnrollAccountRequest::~EnrollAccountRequest() {}

std::string EnrollAccountRequest::getFolderId() const {
  return folderId_;
}

void EnrollAccountRequest::setFolderId(const std::string &folderId) {
  folderId_ = folderId;
  setParameter(std::string("FolderId"), folderId);
}

std::string EnrollAccountRequest::getRegionId() const {
  return regionId_;
}

void EnrollAccountRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

long EnrollAccountRequest::getPayerAccountUid() const {
  return payerAccountUid_;
}

void EnrollAccountRequest::setPayerAccountUid(long payerAccountUid) {
  payerAccountUid_ = payerAccountUid;
  setParameter(std::string("PayerAccountUid"), std::to_string(payerAccountUid));
}

long EnrollAccountRequest::getAccountUid() const {
  return accountUid_;
}

void EnrollAccountRequest::setAccountUid(long accountUid) {
  accountUid_ = accountUid;
  setParameter(std::string("AccountUid"), std::to_string(accountUid));
}

std::string EnrollAccountRequest::getAccountNamePrefix() const {
  return accountNamePrefix_;
}

void EnrollAccountRequest::setAccountNamePrefix(const std::string &accountNamePrefix) {
  accountNamePrefix_ = accountNamePrefix;
  setParameter(std::string("AccountNamePrefix"), accountNamePrefix);
}

std::string EnrollAccountRequest::getResellAccountType() const {
  return resellAccountType_;
}

void EnrollAccountRequest::setResellAccountType(const std::string &resellAccountType) {
  resellAccountType_ = resellAccountType;
  setParameter(std::string("ResellAccountType"), resellAccountType);
}

std::string EnrollAccountRequest::getBaselineId() const {
  return baselineId_;
}

void EnrollAccountRequest::setBaselineId(const std::string &baselineId) {
  baselineId_ = baselineId;
  setParameter(std::string("BaselineId"), baselineId);
}

std::vector<EnrollAccountRequest::BaselineItems> EnrollAccountRequest::getBaselineItems() const {
  return baselineItems_;
}

void EnrollAccountRequest::setBaselineItems(const std::vector<EnrollAccountRequest::BaselineItems> &baselineItems) {
  baselineItems_ = baselineItems;
  for(int dep1 = 0; dep1 != baselineItems.size(); dep1++) {
    setParameter(std::string("BaselineItems") + "." + std::to_string(dep1 + 1) + ".Name", baselineItems[dep1].name);
    setParameter(std::string("BaselineItems") + "." + std::to_string(dep1 + 1) + ".Skip", baselineItems[dep1].skip ? "true" : "false");
    setParameter(std::string("BaselineItems") + "." + std::to_string(dep1 + 1) + ".Config", baselineItems[dep1].config);
    setParameter(std::string("BaselineItems") + "." + std::to_string(dep1 + 1) + ".Version", baselineItems[dep1].version);
  }
}

std::string EnrollAccountRequest::getDisplayName() const {
  return displayName_;
}

void EnrollAccountRequest::setDisplayName(const std::string &displayName) {
  displayName_ = displayName;
  setParameter(std::string("DisplayName"), displayName);
}

