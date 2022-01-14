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

#include <alibabacloud/resourcemanager/model/CreatePolicyVersionRequest.h>

using AlibabaCloud::ResourceManager::Model::CreatePolicyVersionRequest;

CreatePolicyVersionRequest::CreatePolicyVersionRequest()
    : RpcServiceRequest("resourcemanager", "2020-03-31", "CreatePolicyVersion") {
  setMethod(HttpRequest::Method::Post);
}

CreatePolicyVersionRequest::~CreatePolicyVersionRequest() {}

bool CreatePolicyVersionRequest::getSetAsDefault() const {
  return setAsDefault_;
}

void CreatePolicyVersionRequest::setSetAsDefault(bool setAsDefault) {
  setAsDefault_ = setAsDefault;
  setParameter(std::string("SetAsDefault"), setAsDefault ? "true" : "false");
}

std::string CreatePolicyVersionRequest::getPolicyName() const {
  return policyName_;
}

void CreatePolicyVersionRequest::setPolicyName(const std::string &policyName) {
  policyName_ = policyName;
  setParameter(std::string("PolicyName"), policyName);
}

std::string CreatePolicyVersionRequest::getPolicyDocument() const {
  return policyDocument_;
}

void CreatePolicyVersionRequest::setPolicyDocument(const std::string &policyDocument) {
  policyDocument_ = policyDocument;
  setParameter(std::string("PolicyDocument"), policyDocument);
}

