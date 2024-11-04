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

#include <alibabacloud/alb/model/CreateSecurityPolicyRequest.h>

using AlibabaCloud::Alb::Model::CreateSecurityPolicyRequest;

CreateSecurityPolicyRequest::CreateSecurityPolicyRequest()
    : RpcServiceRequest("alb", "2020-06-16", "CreateSecurityPolicy") {
  setMethod(HttpRequest::Method::Post);
}

CreateSecurityPolicyRequest::~CreateSecurityPolicyRequest() {}

std::string CreateSecurityPolicyRequest::getClientToken() const {
  return clientToken_;
}

void CreateSecurityPolicyRequest::setClientToken(const std::string &clientToken) {
  clientToken_ = clientToken;
  setParameter(std::string("ClientToken"), clientToken);
}

std::string CreateSecurityPolicyRequest::getResourceGroupId() const {
  return resourceGroupId_;
}

void CreateSecurityPolicyRequest::setResourceGroupId(const std::string &resourceGroupId) {
  resourceGroupId_ = resourceGroupId;
  setParameter(std::string("ResourceGroupId"), resourceGroupId);
}

std::vector<CreateSecurityPolicyRequest::std::string> CreateSecurityPolicyRequest::getCiphers() const {
  return ciphers_;
}

void CreateSecurityPolicyRequest::setCiphers(const std::vector<CreateSecurityPolicyRequest::std::string> &ciphers) {
  ciphers_ = ciphers;
  for(int dep1 = 0; dep1 != ciphers.size(); dep1++) {
    setParameter(std::string("Ciphers") + "." + std::to_string(dep1 + 1), ciphers[dep1]);
  }
}

std::vector<CreateSecurityPolicyRequest::Tag> CreateSecurityPolicyRequest::getTag() const {
  return tag_;
}

void CreateSecurityPolicyRequest::setTag(const std::vector<CreateSecurityPolicyRequest::Tag> &tag) {
  tag_ = tag;
  for(int dep1 = 0; dep1 != tag.size(); dep1++) {
    setParameter(std::string("Tag") + "." + std::to_string(dep1 + 1) + ".Value", tag[dep1].value);
    setParameter(std::string("Tag") + "." + std::to_string(dep1 + 1) + ".Key", tag[dep1].key);
  }
}

std::vector<CreateSecurityPolicyRequest::std::string> CreateSecurityPolicyRequest::getTLSVersions() const {
  return tLSVersions_;
}

void CreateSecurityPolicyRequest::setTLSVersions(const std::vector<CreateSecurityPolicyRequest::std::string> &tLSVersions) {
  tLSVersions_ = tLSVersions;
  for(int dep1 = 0; dep1 != tLSVersions.size(); dep1++) {
    setParameter(std::string("TLSVersions") + "." + std::to_string(dep1 + 1), tLSVersions[dep1]);
  }
}

std::string CreateSecurityPolicyRequest::getSecurityPolicyName() const {
  return securityPolicyName_;
}

void CreateSecurityPolicyRequest::setSecurityPolicyName(const std::string &securityPolicyName) {
  securityPolicyName_ = securityPolicyName;
  setParameter(std::string("SecurityPolicyName"), securityPolicyName);
}

bool CreateSecurityPolicyRequest::getDryRun() const {
  return dryRun_;
}

void CreateSecurityPolicyRequest::setDryRun(bool dryRun) {
  dryRun_ = dryRun;
  setParameter(std::string("DryRun"), dryRun ? "true" : "false");
}

