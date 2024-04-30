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

#include <alibabacloud/dcdn/model/ModifyDcdnWafPolicyRequest.h>

using AlibabaCloud::Dcdn::Model::ModifyDcdnWafPolicyRequest;

ModifyDcdnWafPolicyRequest::ModifyDcdnWafPolicyRequest()
    : RpcServiceRequest("dcdn", "2018-01-15", "ModifyDcdnWafPolicy") {
  setMethod(HttpRequest::Method::Post);
}

ModifyDcdnWafPolicyRequest::~ModifyDcdnWafPolicyRequest() {}

long ModifyDcdnWafPolicyRequest::getPolicyId() const {
  return policyId_;
}

void ModifyDcdnWafPolicyRequest::setPolicyId(long policyId) {
  policyId_ = policyId;
  setBodyParameter(std::string("PolicyId"), std::to_string(policyId));
}

std::string ModifyDcdnWafPolicyRequest::getPolicyStatus() const {
  return policyStatus_;
}

void ModifyDcdnWafPolicyRequest::setPolicyStatus(const std::string &policyStatus) {
  policyStatus_ = policyStatus;
  setBodyParameter(std::string("PolicyStatus"), policyStatus);
}

std::string ModifyDcdnWafPolicyRequest::getPolicyName() const {
  return policyName_;
}

void ModifyDcdnWafPolicyRequest::setPolicyName(const std::string &policyName) {
  policyName_ = policyName;
  setBodyParameter(std::string("PolicyName"), policyName);
}

