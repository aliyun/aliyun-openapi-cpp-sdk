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

#include <alibabacloud/ram/model/AttachPolicyToGroupRequest.h>

using AlibabaCloud::Ram::Model::AttachPolicyToGroupRequest;

AttachPolicyToGroupRequest::AttachPolicyToGroupRequest()
    : RpcServiceRequest("ram", "2015-05-01", "AttachPolicyToGroup") {
  setMethod(HttpRequest::Method::Post);
}

AttachPolicyToGroupRequest::~AttachPolicyToGroupRequest() {}

std::string AttachPolicyToGroupRequest::getPolicyType() const {
  return policyType_;
}

void AttachPolicyToGroupRequest::setPolicyType(const std::string &policyType) {
  policyType_ = policyType;
  setParameter(std::string("PolicyType"), policyType);
}

std::string AttachPolicyToGroupRequest::getGroupName() const {
  return groupName_;
}

void AttachPolicyToGroupRequest::setGroupName(const std::string &groupName) {
  groupName_ = groupName;
  setParameter(std::string("GroupName"), groupName);
}

std::string AttachPolicyToGroupRequest::getPolicyName() const {
  return policyName_;
}

void AttachPolicyToGroupRequest::setPolicyName(const std::string &policyName) {
  policyName_ = policyName;
  setParameter(std::string("PolicyName"), policyName);
}

