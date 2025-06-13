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

#include <alibabacloud/ram/model/CreatePolicyRequest.h>

using AlibabaCloud::Ram::Model::CreatePolicyRequest;

CreatePolicyRequest::CreatePolicyRequest()
    : RpcServiceRequest("ram", "2015-05-01", "CreatePolicy") {
  setMethod(HttpRequest::Method::Post);
}

CreatePolicyRequest::~CreatePolicyRequest() {}

std::string CreatePolicyRequest::getDescription() const {
  return description_;
}

void CreatePolicyRequest::setDescription(const std::string &description) {
  description_ = description;
  setParameter(std::string("Description"), description);
}

std::vector<CreatePolicyRequest::Tag> CreatePolicyRequest::getTag() const {
  return tag_;
}

void CreatePolicyRequest::setTag(const std::vector<CreatePolicyRequest::Tag> &tag) {
  tag_ = tag;
  for(int dep1 = 0; dep1 != tag.size(); dep1++) {
    setParameter(std::string("Tag") + "." + std::to_string(dep1 + 1) + ".Value", tag[dep1].value);
    setParameter(std::string("Tag") + "." + std::to_string(dep1 + 1) + ".Key", tag[dep1].key);
  }
}

std::string CreatePolicyRequest::getPolicyName() const {
  return policyName_;
}

void CreatePolicyRequest::setPolicyName(const std::string &policyName) {
  policyName_ = policyName;
  setParameter(std::string("PolicyName"), policyName);
}

std::string CreatePolicyRequest::getPolicyDocument() const {
  return policyDocument_;
}

void CreatePolicyRequest::setPolicyDocument(const std::string &policyDocument) {
  policyDocument_ = policyDocument;
  setParameter(std::string("PolicyDocument"), policyDocument);
}

