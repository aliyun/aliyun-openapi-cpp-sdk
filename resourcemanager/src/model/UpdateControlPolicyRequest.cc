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

#include <alibabacloud/resourcemanager/model/UpdateControlPolicyRequest.h>

using AlibabaCloud::ResourceManager::Model::UpdateControlPolicyRequest;

UpdateControlPolicyRequest::UpdateControlPolicyRequest()
    : RpcServiceRequest("resourcemanager", "2020-03-31", "UpdateControlPolicy") {
  setMethod(HttpRequest::Method::Post);
}

UpdateControlPolicyRequest::~UpdateControlPolicyRequest() {}

std::string UpdateControlPolicyRequest::getNewPolicyName() const {
  return newPolicyName_;
}

void UpdateControlPolicyRequest::setNewPolicyName(const std::string &newPolicyName) {
  newPolicyName_ = newPolicyName;
  setParameter(std::string("NewPolicyName"), newPolicyName);
}

std::string UpdateControlPolicyRequest::getPolicyId() const {
  return policyId_;
}

void UpdateControlPolicyRequest::setPolicyId(const std::string &policyId) {
  policyId_ = policyId;
  setParameter(std::string("PolicyId"), policyId);
}

std::string UpdateControlPolicyRequest::getNewPolicyDocument() const {
  return newPolicyDocument_;
}

void UpdateControlPolicyRequest::setNewPolicyDocument(const std::string &newPolicyDocument) {
  newPolicyDocument_ = newPolicyDocument;
  setParameter(std::string("NewPolicyDocument"), newPolicyDocument);
}

std::string UpdateControlPolicyRequest::getNewDescription() const {
  return newDescription_;
}

void UpdateControlPolicyRequest::setNewDescription(const std::string &newDescription) {
  newDescription_ = newDescription;
  setParameter(std::string("NewDescription"), newDescription);
}

