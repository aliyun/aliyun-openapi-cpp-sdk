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

#include <alibabacloud/resourcemanager/model/AttachPolicyRequest.h>

using AlibabaCloud::ResourceManager::Model::AttachPolicyRequest;

AttachPolicyRequest::AttachPolicyRequest()
    : RpcServiceRequest("resourcemanager", "2020-03-31", "AttachPolicy") {
  setMethod(HttpRequest::Method::Post);
}

AttachPolicyRequest::~AttachPolicyRequest() {}

std::string AttachPolicyRequest::getResourceGroupId() const {
  return resourceGroupId_;
}

void AttachPolicyRequest::setResourceGroupId(const std::string &resourceGroupId) {
  resourceGroupId_ = resourceGroupId;
  setParameter(std::string("ResourceGroupId"), resourceGroupId);
}

std::string AttachPolicyRequest::getPolicyType() const {
  return policyType_;
}

void AttachPolicyRequest::setPolicyType(const std::string &policyType) {
  policyType_ = policyType;
  setParameter(std::string("PolicyType"), policyType);
}

std::string AttachPolicyRequest::getPrincipalType() const {
  return principalType_;
}

void AttachPolicyRequest::setPrincipalType(const std::string &principalType) {
  principalType_ = principalType;
  setParameter(std::string("PrincipalType"), principalType);
}

std::string AttachPolicyRequest::getPolicyName() const {
  return policyName_;
}

void AttachPolicyRequest::setPolicyName(const std::string &policyName) {
  policyName_ = policyName;
  setParameter(std::string("PolicyName"), policyName);
}

std::string AttachPolicyRequest::getPrincipalName() const {
  return principalName_;
}

void AttachPolicyRequest::setPrincipalName(const std::string &principalName) {
  principalName_ = principalName;
  setParameter(std::string("PrincipalName"), principalName);
}

