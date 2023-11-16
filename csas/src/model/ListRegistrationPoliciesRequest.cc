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

#include <alibabacloud/csas/model/ListRegistrationPoliciesRequest.h>

using AlibabaCloud::Csas::Model::ListRegistrationPoliciesRequest;

ListRegistrationPoliciesRequest::ListRegistrationPoliciesRequest()
    : RpcServiceRequest("csas", "2023-01-20", "ListRegistrationPolicies") {
  setMethod(HttpRequest::Method::Get);
}

ListRegistrationPoliciesRequest::~ListRegistrationPoliciesRequest() {}

std::vector<ListRegistrationPoliciesRequest::std::string> ListRegistrationPoliciesRequest::getPolicyIds() const {
  return policyIds_;
}

void ListRegistrationPoliciesRequest::setPolicyIds(const std::vector<ListRegistrationPoliciesRequest::std::string> &policyIds) {
  policyIds_ = policyIds;
  for(int dep1 = 0; dep1 != policyIds.size(); dep1++) {
    setParameter(std::string("PolicyIds") + "." + std::to_string(dep1 + 1), policyIds[dep1]);
  }
}

std::string ListRegistrationPoliciesRequest::getMatchMode() const {
  return matchMode_;
}

void ListRegistrationPoliciesRequest::setMatchMode(const std::string &matchMode) {
  matchMode_ = matchMode;
  setParameter(std::string("MatchMode"), matchMode);
}

std::string ListRegistrationPoliciesRequest::getSourceIp() const {
  return sourceIp_;
}

void ListRegistrationPoliciesRequest::setSourceIp(const std::string &sourceIp) {
  sourceIp_ = sourceIp;
  setParameter(std::string("SourceIp"), sourceIp);
}

long ListRegistrationPoliciesRequest::getPageSize() const {
  return pageSize_;
}

void ListRegistrationPoliciesRequest::setPageSize(long pageSize) {
  pageSize_ = pageSize;
  setParameter(std::string("PageSize"), std::to_string(pageSize));
}

std::string ListRegistrationPoliciesRequest::getUserGroupId() const {
  return userGroupId_;
}

void ListRegistrationPoliciesRequest::setUserGroupId(const std::string &userGroupId) {
  userGroupId_ = userGroupId;
  setParameter(std::string("UserGroupId"), userGroupId);
}

long ListRegistrationPoliciesRequest::getCurrentPage() const {
  return currentPage_;
}

void ListRegistrationPoliciesRequest::setCurrentPage(long currentPage) {
  currentPage_ = currentPage;
  setParameter(std::string("CurrentPage"), std::to_string(currentPage));
}

std::string ListRegistrationPoliciesRequest::getPersonalLimitType() const {
  return personalLimitType_;
}

void ListRegistrationPoliciesRequest::setPersonalLimitType(const std::string &personalLimitType) {
  personalLimitType_ = personalLimitType;
  setParameter(std::string("PersonalLimitType"), personalLimitType);
}

std::string ListRegistrationPoliciesRequest::getName() const {
  return name_;
}

void ListRegistrationPoliciesRequest::setName(const std::string &name) {
  name_ = name;
  setParameter(std::string("Name"), name);
}

std::string ListRegistrationPoliciesRequest::getCompanyLimitType() const {
  return companyLimitType_;
}

void ListRegistrationPoliciesRequest::setCompanyLimitType(const std::string &companyLimitType) {
  companyLimitType_ = companyLimitType;
  setParameter(std::string("CompanyLimitType"), companyLimitType);
}

std::string ListRegistrationPoliciesRequest::getStatus() const {
  return status_;
}

void ListRegistrationPoliciesRequest::setStatus(const std::string &status) {
  status_ = status;
  setParameter(std::string("Status"), status);
}

