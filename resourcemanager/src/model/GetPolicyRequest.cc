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

#include <alibabacloud/resourcemanager/model/GetPolicyRequest.h>

using AlibabaCloud::ResourceManager::Model::GetPolicyRequest;

GetPolicyRequest::GetPolicyRequest()
    : RpcServiceRequest("resourcemanager", "2020-03-31", "GetPolicy") {
  setMethod(HttpRequest::Method::Post);
}

GetPolicyRequest::~GetPolicyRequest() {}

std::string GetPolicyRequest::getPolicyType() const {
  return policyType_;
}

void GetPolicyRequest::setPolicyType(const std::string &policyType) {
  policyType_ = policyType;
  setParameter(std::string("PolicyType"), policyType);
}

std::string GetPolicyRequest::getLanguage() const {
  return language_;
}

void GetPolicyRequest::setLanguage(const std::string &language) {
  language_ = language;
  setParameter(std::string("Language"), language);
}

std::string GetPolicyRequest::getPolicyName() const {
  return policyName_;
}

void GetPolicyRequest::setPolicyName(const std::string &policyName) {
  policyName_ = policyName;
  setParameter(std::string("PolicyName"), policyName);
}

