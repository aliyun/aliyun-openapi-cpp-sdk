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

#include <alibabacloud/alb/model/UpdateSecurityPolicyAttributeRequest.h>

using AlibabaCloud::Alb::Model::UpdateSecurityPolicyAttributeRequest;

UpdateSecurityPolicyAttributeRequest::UpdateSecurityPolicyAttributeRequest()
    : RpcServiceRequest("alb", "2020-06-16", "UpdateSecurityPolicyAttribute") {
  setMethod(HttpRequest::Method::Post);
}

UpdateSecurityPolicyAttributeRequest::~UpdateSecurityPolicyAttributeRequest() {}

std::string UpdateSecurityPolicyAttributeRequest::getClientToken() const {
  return clientToken_;
}

void UpdateSecurityPolicyAttributeRequest::setClientToken(const std::string &clientToken) {
  clientToken_ = clientToken;
  setParameter(std::string("ClientToken"), clientToken);
}

std::vector<UpdateSecurityPolicyAttributeRequest::std::string> UpdateSecurityPolicyAttributeRequest::getCiphers() const {
  return ciphers_;
}

void UpdateSecurityPolicyAttributeRequest::setCiphers(const std::vector<UpdateSecurityPolicyAttributeRequest::std::string> &ciphers) {
  ciphers_ = ciphers;
  for(int dep1 = 0; dep1 != ciphers.size(); dep1++) {
    setParameter(std::string("Ciphers") + "." + std::to_string(dep1 + 1), ciphers[dep1]);
  }
}

std::vector<UpdateSecurityPolicyAttributeRequest::std::string> UpdateSecurityPolicyAttributeRequest::getTLSVersions() const {
  return tLSVersions_;
}

void UpdateSecurityPolicyAttributeRequest::setTLSVersions(const std::vector<UpdateSecurityPolicyAttributeRequest::std::string> &tLSVersions) {
  tLSVersions_ = tLSVersions;
  for(int dep1 = 0; dep1 != tLSVersions.size(); dep1++) {
    setParameter(std::string("TLSVersions") + "." + std::to_string(dep1 + 1), tLSVersions[dep1]);
  }
}

std::string UpdateSecurityPolicyAttributeRequest::getSecurityPolicyName() const {
  return securityPolicyName_;
}

void UpdateSecurityPolicyAttributeRequest::setSecurityPolicyName(const std::string &securityPolicyName) {
  securityPolicyName_ = securityPolicyName;
  setParameter(std::string("SecurityPolicyName"), securityPolicyName);
}

bool UpdateSecurityPolicyAttributeRequest::getDryRun() const {
  return dryRun_;
}

void UpdateSecurityPolicyAttributeRequest::setDryRun(bool dryRun) {
  dryRun_ = dryRun;
  setParameter(std::string("DryRun"), dryRun ? "true" : "false");
}

std::string UpdateSecurityPolicyAttributeRequest::getSecurityPolicyId() const {
  return securityPolicyId_;
}

void UpdateSecurityPolicyAttributeRequest::setSecurityPolicyId(const std::string &securityPolicyId) {
  securityPolicyId_ = securityPolicyId;
  setParameter(std::string("SecurityPolicyId"), securityPolicyId);
}

