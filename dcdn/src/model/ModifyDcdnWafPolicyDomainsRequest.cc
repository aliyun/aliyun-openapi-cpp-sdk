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

#include <alibabacloud/dcdn/model/ModifyDcdnWafPolicyDomainsRequest.h>

using AlibabaCloud::Dcdn::Model::ModifyDcdnWafPolicyDomainsRequest;

ModifyDcdnWafPolicyDomainsRequest::ModifyDcdnWafPolicyDomainsRequest()
    : RpcServiceRequest("dcdn", "2018-01-15", "ModifyDcdnWafPolicyDomains") {
  setMethod(HttpRequest::Method::Post);
}

ModifyDcdnWafPolicyDomainsRequest::~ModifyDcdnWafPolicyDomainsRequest() {}

long ModifyDcdnWafPolicyDomainsRequest::getPolicyId() const {
  return policyId_;
}

void ModifyDcdnWafPolicyDomainsRequest::setPolicyId(long policyId) {
  policyId_ = policyId;
  setBodyParameter(std::string("PolicyId"), std::to_string(policyId));
}

int ModifyDcdnWafPolicyDomainsRequest::getMethod() const {
  return method_;
}

void ModifyDcdnWafPolicyDomainsRequest::setMethod(int method) {
  method_ = method;
  setBodyParameter(std::string("Method"), std::to_string(method));
}

std::string ModifyDcdnWafPolicyDomainsRequest::getBindDomains() const {
  return bindDomains_;
}

void ModifyDcdnWafPolicyDomainsRequest::setBindDomains(const std::string &bindDomains) {
  bindDomains_ = bindDomains;
  setBodyParameter(std::string("BindDomains"), bindDomains);
}

std::string ModifyDcdnWafPolicyDomainsRequest::getUnbindDomains() const {
  return unbindDomains_;
}

void ModifyDcdnWafPolicyDomainsRequest::setUnbindDomains(const std::string &unbindDomains) {
  unbindDomains_ = unbindDomains;
  setBodyParameter(std::string("UnbindDomains"), unbindDomains);
}

