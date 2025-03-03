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

#include <alibabacloud/resourcemanager/model/DetachPolicyRequest.h>

using AlibabaCloud::ResourceManager::Model::DetachPolicyRequest;

DetachPolicyRequest::DetachPolicyRequest()
    : RpcServiceRequest("resourcemanager", "2020-03-31", "DetachPolicy") {
  setMethod(HttpRequest::Method::Post);
}

DetachPolicyRequest::~DetachPolicyRequest() {}

std::string DetachPolicyRequest::getResourceGroupId() const {
  return resourceGroupId_;
}

void DetachPolicyRequest::setResourceGroupId(const std::string &resourceGroupId) {
  resourceGroupId_ = resourceGroupId;
  setParameter(std::string("ResourceGroupId"), resourceGroupId);
}

std::string DetachPolicyRequest::getPolicyType() const {
  return policyType_;
}

void DetachPolicyRequest::setPolicyType(const std::string &policyType) {
  policyType_ = policyType;
  setParameter(std::string("PolicyType"), policyType);
}

std::string DetachPolicyRequest::getPrincipalType() const {
  return principalType_;
}

void DetachPolicyRequest::setPrincipalType(const std::string &principalType) {
  principalType_ = principalType;
  setParameter(std::string("PrincipalType"), principalType);
}

std::string DetachPolicyRequest::getPolicyName() const {
  return policyName_;
}

void DetachPolicyRequest::setPolicyName(const std::string &policyName) {
  policyName_ = policyName;
  setParameter(std::string("PolicyName"), policyName);
}

std::string DetachPolicyRequest::getPrincipalName() const {
  return principalName_;
}

void DetachPolicyRequest::setPrincipalName(const std::string &principalName) {
  principalName_ = principalName;
  setParameter(std::string("PrincipalName"), principalName);
}

