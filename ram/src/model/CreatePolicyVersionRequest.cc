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

#include <alibabacloud/ram/model/CreatePolicyVersionRequest.h>

using AlibabaCloud::Ram::Model::CreatePolicyVersionRequest;

CreatePolicyVersionRequest::CreatePolicyVersionRequest()
    : RpcServiceRequest("ram", "2015-05-01", "CreatePolicyVersion") {
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

std::string CreatePolicyVersionRequest::getRotateStrategy() const {
  return rotateStrategy_;
}

void CreatePolicyVersionRequest::setRotateStrategy(const std::string &rotateStrategy) {
  rotateStrategy_ = rotateStrategy;
  setParameter(std::string("RotateStrategy"), rotateStrategy);
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

