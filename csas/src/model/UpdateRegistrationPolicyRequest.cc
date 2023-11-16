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

#include <alibabacloud/csas/model/UpdateRegistrationPolicyRequest.h>

using AlibabaCloud::Csas::Model::UpdateRegistrationPolicyRequest;

UpdateRegistrationPolicyRequest::UpdateRegistrationPolicyRequest()
    : RpcServiceRequest("csas", "2023-01-20", "UpdateRegistrationPolicy") {
  setMethod(HttpRequest::Method::Post);
}

UpdateRegistrationPolicyRequest::~UpdateRegistrationPolicyRequest() {}

std::string UpdateRegistrationPolicyRequest::getDescription() const {
  return description_;
}

void UpdateRegistrationPolicyRequest::setDescription(const std::string &description) {
  description_ = description;
  setBodyParameter(std::string("Description"), description);
}

std::string UpdateRegistrationPolicyRequest::getMatchMode() const {
  return matchMode_;
}

void UpdateRegistrationPolicyRequest::setMatchMode(const std::string &matchMode) {
  matchMode_ = matchMode;
  setBodyParameter(std::string("MatchMode"), matchMode);
}

std::string UpdateRegistrationPolicyRequest::getSourceIp() const {
  return sourceIp_;
}

void UpdateRegistrationPolicyRequest::setSourceIp(const std::string &sourceIp) {
  sourceIp_ = sourceIp;
  setParameter(std::string("SourceIp"), sourceIp);
}

std::string UpdateRegistrationPolicyRequest::getPolicyId() const {
  return policyId_;
}

void UpdateRegistrationPolicyRequest::setPolicyId(const std::string &policyId) {
  policyId_ = policyId;
  setBodyParameter(std::string("PolicyId"), policyId);
}

UpdateRegistrationPolicyRequest::CompanyLimitCount UpdateRegistrationPolicyRequest::getCompanyLimitCount() const {
  return companyLimitCount_;
}

void UpdateRegistrationPolicyRequest::setCompanyLimitCount(const UpdateRegistrationPolicyRequest::CompanyLimitCount &companyLimitCount) {
  companyLimitCount_ = companyLimitCount;
  setBodyParameter(std::string("CompanyLimitCount") + ".All", std::to_string(companyLimitCount.all));
  setBodyParameter(std::string("CompanyLimitCount") + ".PC", std::to_string(companyLimitCount.pC));
  setBodyParameter(std::string("CompanyLimitCount") + ".Mobile", std::to_string(companyLimitCount.mobile));
}

UpdateRegistrationPolicyRequest::PersonalLimitCount UpdateRegistrationPolicyRequest::getPersonalLimitCount() const {
  return personalLimitCount_;
}

void UpdateRegistrationPolicyRequest::setPersonalLimitCount(const UpdateRegistrationPolicyRequest::PersonalLimitCount &personalLimitCount) {
  personalLimitCount_ = personalLimitCount;
  setBodyParameter(std::string("PersonalLimitCount") + ".All", std::to_string(personalLimitCount.all));
  setBodyParameter(std::string("PersonalLimitCount") + ".PC", std::to_string(personalLimitCount.pC));
  setBodyParameter(std::string("PersonalLimitCount") + ".Mobile", std::to_string(personalLimitCount.mobile));
}

std::vector<UpdateRegistrationPolicyRequest::std::string> UpdateRegistrationPolicyRequest::getUserGroupIds() const {
  return userGroupIds_;
}

void UpdateRegistrationPolicyRequest::setUserGroupIds(const std::vector<UpdateRegistrationPolicyRequest::std::string> &userGroupIds) {
  userGroupIds_ = userGroupIds;
  for(int dep1 = 0; dep1 != userGroupIds.size(); dep1++) {
    setBodyParameter(std::string("UserGroupIds") + "." + std::to_string(dep1 + 1), userGroupIds[dep1]);
  }
}

std::vector<UpdateRegistrationPolicyRequest::std::string> UpdateRegistrationPolicyRequest::getWhitelist() const {
  return whitelist_;
}

void UpdateRegistrationPolicyRequest::setWhitelist(const std::vector<UpdateRegistrationPolicyRequest::std::string> &whitelist) {
  whitelist_ = whitelist;
  for(int dep1 = 0; dep1 != whitelist.size(); dep1++) {
    setBodyParameter(std::string("Whitelist") + "." + std::to_string(dep1 + 1), whitelist[dep1]);
  }
}

long UpdateRegistrationPolicyRequest::getPriority() const {
  return priority_;
}

void UpdateRegistrationPolicyRequest::setPriority(long priority) {
  priority_ = priority;
  setBodyParameter(std::string("Priority"), std::to_string(priority));
}

std::string UpdateRegistrationPolicyRequest::getPersonalLimitType() const {
  return personalLimitType_;
}

void UpdateRegistrationPolicyRequest::setPersonalLimitType(const std::string &personalLimitType) {
  personalLimitType_ = personalLimitType;
  setBodyParameter(std::string("PersonalLimitType"), personalLimitType);
}

std::string UpdateRegistrationPolicyRequest::getName() const {
  return name_;
}

void UpdateRegistrationPolicyRequest::setName(const std::string &name) {
  name_ = name;
  setBodyParameter(std::string("Name"), name);
}

std::string UpdateRegistrationPolicyRequest::getCompanyLimitType() const {
  return companyLimitType_;
}

void UpdateRegistrationPolicyRequest::setCompanyLimitType(const std::string &companyLimitType) {
  companyLimitType_ = companyLimitType;
  setBodyParameter(std::string("CompanyLimitType"), companyLimitType);
}

std::string UpdateRegistrationPolicyRequest::getStatus() const {
  return status_;
}

void UpdateRegistrationPolicyRequest::setStatus(const std::string &status) {
  status_ = status;
  setBodyParameter(std::string("Status"), status);
}

