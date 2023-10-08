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

#include <alibabacloud/nlb/model/CreateSecurityPolicyRequest.h>

using AlibabaCloud::Nlb::Model::CreateSecurityPolicyRequest;

CreateSecurityPolicyRequest::CreateSecurityPolicyRequest()
    : RpcServiceRequest("nlb", "2022-04-30", "CreateSecurityPolicy") {
  setMethod(HttpRequest::Method::Post);
}

CreateSecurityPolicyRequest::~CreateSecurityPolicyRequest() {}

std::string CreateSecurityPolicyRequest::getClientToken() const {
  return clientToken_;
}

void CreateSecurityPolicyRequest::setClientToken(const std::string &clientToken) {
  clientToken_ = clientToken;
  setBodyParameter(std::string("ClientToken"), clientToken);
}

std::string CreateSecurityPolicyRequest::getResourceGroupId() const {
  return resourceGroupId_;
}

void CreateSecurityPolicyRequest::setResourceGroupId(const std::string &resourceGroupId) {
  resourceGroupId_ = resourceGroupId;
  setBodyParameter(std::string("ResourceGroupId"), resourceGroupId);
}

std::string CreateSecurityPolicyRequest::getRegionId() const {
  return regionId_;
}

void CreateSecurityPolicyRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setBodyParameter(std::string("RegionId"), regionId);
}

std::vector<std::string> CreateSecurityPolicyRequest::getCiphers() const {
  return ciphers_;
}

void CreateSecurityPolicyRequest::setCiphers(const std::vector<std::string> &ciphers) {
  ciphers_ = ciphers;
}

std::vector<CreateSecurityPolicyRequest::Tag> CreateSecurityPolicyRequest::getTag() const {
  return tag_;
}

void CreateSecurityPolicyRequest::setTag(const std::vector<CreateSecurityPolicyRequest::Tag> &tag) {
  tag_ = tag;
  for(int dep1 = 0; dep1 != tag.size(); dep1++) {
  auto tagObj = tag.at(dep1);
  std::string tagObjStr = std::string("Tag") + "." + std::to_string(dep1 + 1);
    setBodyParameter(tagObjStr + ".Key", tagObj.key);
    setBodyParameter(tagObjStr + ".Value", tagObj.value);
  }
}

std::vector<std::string> CreateSecurityPolicyRequest::getTlsVersions() const {
  return tlsVersions_;
}

void CreateSecurityPolicyRequest::setTlsVersions(const std::vector<std::string> &tlsVersions) {
  tlsVersions_ = tlsVersions;
}

std::string CreateSecurityPolicyRequest::getSecurityPolicyName() const {
  return securityPolicyName_;
}

void CreateSecurityPolicyRequest::setSecurityPolicyName(const std::string &securityPolicyName) {
  securityPolicyName_ = securityPolicyName;
  setBodyParameter(std::string("SecurityPolicyName"), securityPolicyName);
}

bool CreateSecurityPolicyRequest::getDryRun() const {
  return dryRun_;
}

void CreateSecurityPolicyRequest::setDryRun(bool dryRun) {
  dryRun_ = dryRun;
  setBodyParameter(std::string("DryRun"), dryRun ? "true" : "false");
}

