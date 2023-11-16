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

#include <alibabacloud/csas/model/ListUserGroupsForRegistrationPolicyRequest.h>

using AlibabaCloud::Csas::Model::ListUserGroupsForRegistrationPolicyRequest;

ListUserGroupsForRegistrationPolicyRequest::ListUserGroupsForRegistrationPolicyRequest()
    : RpcServiceRequest("csas", "2023-01-20", "ListUserGroupsForRegistrationPolicy") {
  setMethod(HttpRequest::Method::Get);
}

ListUserGroupsForRegistrationPolicyRequest::~ListUserGroupsForRegistrationPolicyRequest() {}

std::vector<ListUserGroupsForRegistrationPolicyRequest::std::string> ListUserGroupsForRegistrationPolicyRequest::getPolicyIds() const {
  return policyIds_;
}

void ListUserGroupsForRegistrationPolicyRequest::setPolicyIds(const std::vector<ListUserGroupsForRegistrationPolicyRequest::std::string> &policyIds) {
  policyIds_ = policyIds;
  for(int dep1 = 0; dep1 != policyIds.size(); dep1++) {
    setParameter(std::string("PolicyIds") + "." + std::to_string(dep1 + 1), policyIds[dep1]);
  }
}

std::string ListUserGroupsForRegistrationPolicyRequest::getSourceIp() const {
  return sourceIp_;
}

void ListUserGroupsForRegistrationPolicyRequest::setSourceIp(const std::string &sourceIp) {
  sourceIp_ = sourceIp;
  setParameter(std::string("SourceIp"), sourceIp);
}

