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

#include <alibabacloud/nlb/model/DeleteSecurityPolicyRequest.h>

using AlibabaCloud::Nlb::Model::DeleteSecurityPolicyRequest;

DeleteSecurityPolicyRequest::DeleteSecurityPolicyRequest()
    : RpcServiceRequest("nlb", "2022-04-30", "DeleteSecurityPolicy") {
  setMethod(HttpRequest::Method::Post);
}

DeleteSecurityPolicyRequest::~DeleteSecurityPolicyRequest() {}

std::string DeleteSecurityPolicyRequest::getClientToken() const {
  return clientToken_;
}

void DeleteSecurityPolicyRequest::setClientToken(const std::string &clientToken) {
  clientToken_ = clientToken;
  setBodyParameter(std::string("ClientToken"), clientToken);
}

std::string DeleteSecurityPolicyRequest::getRegionId() const {
  return regionId_;
}

void DeleteSecurityPolicyRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setBodyParameter(std::string("RegionId"), regionId);
}

bool DeleteSecurityPolicyRequest::getDryRun() const {
  return dryRun_;
}

void DeleteSecurityPolicyRequest::setDryRun(bool dryRun) {
  dryRun_ = dryRun;
  setBodyParameter(std::string("DryRun"), dryRun ? "true" : "false");
}

std::string DeleteSecurityPolicyRequest::getSecurityPolicyId() const {
  return securityPolicyId_;
}

void DeleteSecurityPolicyRequest::setSecurityPolicyId(const std::string &securityPolicyId) {
  securityPolicyId_ = securityPolicyId;
  setBodyParameter(std::string("SecurityPolicyId"), securityPolicyId);
}

