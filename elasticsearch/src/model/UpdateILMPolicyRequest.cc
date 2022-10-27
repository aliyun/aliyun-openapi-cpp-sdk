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

#include <alibabacloud/elasticsearch/model/UpdateILMPolicyRequest.h>

using AlibabaCloud::Elasticsearch::Model::UpdateILMPolicyRequest;

UpdateILMPolicyRequest::UpdateILMPolicyRequest()
    : RoaServiceRequest("elasticsearch", "2017-06-13") {
  setResourcePath("/openapi/instances/[InstanceId]/ilm-policies/[PolicyName]"};
  setMethod(HttpRequest::Method::Put);
}

UpdateILMPolicyRequest::~UpdateILMPolicyRequest() {}

string UpdateILMPolicyRequest::getInstanceId() const {
  return instanceId_;
}

void UpdateILMPolicyRequest::setInstanceId(string instanceId) {
  instanceId_ = instanceId;
  setParameter(std::string("InstanceId"), std::to_string(instanceId));
}

string UpdateILMPolicyRequest::getClientToken() const {
  return clientToken_;
}

void UpdateILMPolicyRequest::setClientToken(string clientToken) {
  clientToken_ = clientToken;
  setParameter(std::string("ClientToken"), std::to_string(clientToken));
}

string UpdateILMPolicyRequest::getPolicyName() const {
  return policyName_;
}

void UpdateILMPolicyRequest::setPolicyName(string policyName) {
  policyName_ = policyName;
  setParameter(std::string("PolicyName"), std::to_string(policyName));
}

string UpdateILMPolicyRequest::getBody() const {
  return body_;
}

void UpdateILMPolicyRequest::setBody(string body) {
  body_ = body;
  setBodyParameter(std::string("body"), std::to_string(body));
}

