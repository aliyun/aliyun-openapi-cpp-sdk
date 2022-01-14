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

#include <alibabacloud/resourcemanager/model/GetPolicyVersionRequest.h>

using AlibabaCloud::ResourceManager::Model::GetPolicyVersionRequest;

GetPolicyVersionRequest::GetPolicyVersionRequest()
    : RpcServiceRequest("resourcemanager", "2020-03-31", "GetPolicyVersion") {
  setMethod(HttpRequest::Method::Post);
}

GetPolicyVersionRequest::~GetPolicyVersionRequest() {}

std::string GetPolicyVersionRequest::getPolicyType() const {
  return policyType_;
}

void GetPolicyVersionRequest::setPolicyType(const std::string &policyType) {
  policyType_ = policyType;
  setParameter(std::string("PolicyType"), policyType);
}

std::string GetPolicyVersionRequest::getVersionId() const {
  return versionId_;
}

void GetPolicyVersionRequest::setVersionId(const std::string &versionId) {
  versionId_ = versionId;
  setParameter(std::string("VersionId"), versionId);
}

std::string GetPolicyVersionRequest::getPolicyName() const {
  return policyName_;
}

void GetPolicyVersionRequest::setPolicyName(const std::string &policyName) {
  policyName_ = policyName;
  setParameter(std::string("PolicyName"), policyName);
}

