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

#include <alibabacloud/csas/model/CreateRegistrationPolicyRequest.h>

using AlibabaCloud::Csas::Model::CreateRegistrationPolicyRequest;

CreateRegistrationPolicyRequest::CreateRegistrationPolicyRequest()
    : RpcServiceRequest("csas", "2023-01-20", "CreateRegistrationPolicy") {
  setMethod(HttpRequest::Method::Post);
}

CreateRegistrationPolicyRequest::~CreateRegistrationPolicyRequest() {}

std::string CreateRegistrationPolicyRequest::getDescription() const {
  return description_;
}

void CreateRegistrationPolicyRequest::setDescription(const std::string &description) {
  description_ = description;
  setBodyParameter(std::string("Description"), description);
}

std::string CreateRegistrationPolicyRequest::getMatchMode() const {
  return matchMode_;
}

void CreateRegistrationPolicyRequest::setMatchMode(const std::string &matchMode) {
  matchMode_ = matchMode;
  setBodyParameter(std::string("MatchMode"), matchMode);
}

std::string CreateRegistrationPolicyRequest::getSourceIp() const {
  return sourceIp_;
}

void CreateRegistrationPolicyRequest::setSourceIp(const std::string &sourceIp) {
  sourceIp_ = sourceIp;
  setParameter(std::string("SourceIp"), sourceIp);
}

CreateRegistrationPolicyRequest::CompanyLimitCount CreateRegistrationPolicyRequest::getCompanyLimitCount() const {
  return companyLimitCount_;
}

void CreateRegistrationPolicyRequest::setCompanyLimitCount(const CreateRegistrationPolicyRequest::CompanyLimitCount &companyLimitCount) {
  companyLimitCount_ = companyLimitCount;
  setBodyParameter(std::string("CompanyLimitCount") + ".All", std::to_string(companyLimitCount.all));
  setBodyParameter(std::string("CompanyLimitCount") + ".PC", std::to_string(companyLimitCount.pC));
  setBodyParameter(std::string("CompanyLimitCount") + ".Mobile", std::to_string(companyLimitCount.mobile));
}

CreateRegistrationPolicyRequest::PersonalLimitCount CreateRegistrationPolicyRequest::getPersonalLimitCount() const {
  return personalLimitCount_;
}

void CreateRegistrationPolicyRequest::setPersonalLimitCount(const CreateRegistrationPolicyRequest::PersonalLimitCount &personalLimitCount) {
  personalLimitCount_ = personalLimitCount;
  setBodyParameter(std::string("PersonalLimitCount") + ".All", std::to_string(personalLimitCount.all));
  setBodyParameter(std::string("PersonalLimitCount") + ".PC", std::to_string(personalLimitCount.pC));
  setBodyParameter(std::string("PersonalLimitCount") + ".Mobile", std::to_string(personalLimitCount.mobile));
}

std::vector<CreateRegistrationPolicyRequest::std::string> CreateRegistrationPolicyRequest::getUserGroupIds() const {
  return userGroupIds_;
}

void CreateRegistrationPolicyRequest::setUserGroupIds(const std::vector<CreateRegistrationPolicyRequest::std::string> &userGroupIds) {
  userGroupIds_ = userGroupIds;
  for(int dep1 = 0; dep1 != userGroupIds.size(); dep1++) {
    setBodyParameter(std::string("UserGroupIds") + "." + std::to_string(dep1 + 1), userGroupIds[dep1]);
  }
}

std::vector<CreateRegistrationPolicyRequest::std::string> CreateRegistrationPolicyRequest::getWhitelist() const {
  return whitelist_;
}

void CreateRegistrationPolicyRequest::setWhitelist(const std::vector<CreateRegistrationPolicyRequest::std::string> &whitelist) {
  whitelist_ = whitelist;
  for(int dep1 = 0; dep1 != whitelist.size(); dep1++) {
    setBodyParameter(std::string("Whitelist") + "." + std::to_string(dep1 + 1), whitelist[dep1]);
  }
}

long CreateRegistrationPolicyRequest::getPriority() const {
  return priority_;
}

void CreateRegistrationPolicyRequest::setPriority(long priority) {
  priority_ = priority;
  setBodyParameter(std::string("Priority"), std::to_string(priority));
}

std::string CreateRegistrationPolicyRequest::getPersonalLimitType() const {
  return personalLimitType_;
}

void CreateRegistrationPolicyRequest::setPersonalLimitType(const std::string &personalLimitType) {
  personalLimitType_ = personalLimitType;
  setBodyParameter(std::string("PersonalLimitType"), personalLimitType);
}

std::string CreateRegistrationPolicyRequest::getName() const {
  return name_;
}

void CreateRegistrationPolicyRequest::setName(const std::string &name) {
  name_ = name;
  setBodyParameter(std::string("Name"), name);
}

std::string CreateRegistrationPolicyRequest::getCompanyLimitType() const {
  return companyLimitType_;
}

void CreateRegistrationPolicyRequest::setCompanyLimitType(const std::string &companyLimitType) {
  companyLimitType_ = companyLimitType;
  setBodyParameter(std::string("CompanyLimitType"), companyLimitType);
}

std::string CreateRegistrationPolicyRequest::getStatus() const {
  return status_;
}

void CreateRegistrationPolicyRequest::setStatus(const std::string &status) {
  status_ = status;
  setBodyParameter(std::string("Status"), status);
}

