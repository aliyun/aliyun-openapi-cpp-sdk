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

#include <alibabacloud/nlb/model/UpdateSecurityPolicyAttributeRequest.h>

using AlibabaCloud::Nlb::Model::UpdateSecurityPolicyAttributeRequest;

UpdateSecurityPolicyAttributeRequest::UpdateSecurityPolicyAttributeRequest()
    : RpcServiceRequest("nlb", "2022-04-30", "UpdateSecurityPolicyAttribute") {
  setMethod(HttpRequest::Method::Post);
}

UpdateSecurityPolicyAttributeRequest::~UpdateSecurityPolicyAttributeRequest() {}

std::string UpdateSecurityPolicyAttributeRequest::getClientToken() const {
  return clientToken_;
}

void UpdateSecurityPolicyAttributeRequest::setClientToken(const std::string &clientToken) {
  clientToken_ = clientToken;
  setBodyParameter(std::string("ClientToken"), clientToken);
}

std::string UpdateSecurityPolicyAttributeRequest::getRegionId() const {
  return regionId_;
}

void UpdateSecurityPolicyAttributeRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setBodyParameter(std::string("RegionId"), regionId);
}

std::vector<std::string> UpdateSecurityPolicyAttributeRequest::getCiphers() const {
  return ciphers_;
}

void UpdateSecurityPolicyAttributeRequest::setCiphers(const std::vector<std::string> &ciphers) {
  ciphers_ = ciphers;
}

std::vector<std::string> UpdateSecurityPolicyAttributeRequest::getTlsVersions() const {
  return tlsVersions_;
}

void UpdateSecurityPolicyAttributeRequest::setTlsVersions(const std::vector<std::string> &tlsVersions) {
  tlsVersions_ = tlsVersions;
}

std::string UpdateSecurityPolicyAttributeRequest::getSecurityPolicyName() const {
  return securityPolicyName_;
}

void UpdateSecurityPolicyAttributeRequest::setSecurityPolicyName(const std::string &securityPolicyName) {
  securityPolicyName_ = securityPolicyName;
  setBodyParameter(std::string("SecurityPolicyName"), securityPolicyName);
}

bool UpdateSecurityPolicyAttributeRequest::getDryRun() const {
  return dryRun_;
}

void UpdateSecurityPolicyAttributeRequest::setDryRun(bool dryRun) {
  dryRun_ = dryRun;
  setBodyParameter(std::string("DryRun"), dryRun ? "true" : "false");
}

std::string UpdateSecurityPolicyAttributeRequest::getSecurityPolicyId() const {
  return securityPolicyId_;
}

void UpdateSecurityPolicyAttributeRequest::setSecurityPolicyId(const std::string &securityPolicyId) {
  securityPolicyId_ = securityPolicyId;
  setBodyParameter(std::string("SecurityPolicyId"), securityPolicyId);
}

