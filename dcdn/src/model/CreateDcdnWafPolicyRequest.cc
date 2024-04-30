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

#include <alibabacloud/dcdn/model/CreateDcdnWafPolicyRequest.h>

using AlibabaCloud::Dcdn::Model::CreateDcdnWafPolicyRequest;

CreateDcdnWafPolicyRequest::CreateDcdnWafPolicyRequest()
    : RpcServiceRequest("dcdn", "2018-01-15", "CreateDcdnWafPolicy") {
  setMethod(HttpRequest::Method::Post);
}

CreateDcdnWafPolicyRequest::~CreateDcdnWafPolicyRequest() {}

std::string CreateDcdnWafPolicyRequest::getDefenseScene() const {
  return defenseScene_;
}

void CreateDcdnWafPolicyRequest::setDefenseScene(const std::string &defenseScene) {
  defenseScene_ = defenseScene;
  setBodyParameter(std::string("DefenseScene"), defenseScene);
}

std::string CreateDcdnWafPolicyRequest::getPolicyType() const {
  return policyType_;
}

void CreateDcdnWafPolicyRequest::setPolicyType(const std::string &policyType) {
  policyType_ = policyType;
  setBodyParameter(std::string("PolicyType"), policyType);
}

std::string CreateDcdnWafPolicyRequest::getPolicyStatus() const {
  return policyStatus_;
}

void CreateDcdnWafPolicyRequest::setPolicyStatus(const std::string &policyStatus) {
  policyStatus_ = policyStatus;
  setBodyParameter(std::string("PolicyStatus"), policyStatus);
}

std::string CreateDcdnWafPolicyRequest::getPolicyName() const {
  return policyName_;
}

void CreateDcdnWafPolicyRequest::setPolicyName(const std::string &policyName) {
  policyName_ = policyName;
  setBodyParameter(std::string("PolicyName"), policyName);
}

