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

#include <alibabacloud/ram/model/UpdatePolicyDescriptionRequest.h>

using AlibabaCloud::Ram::Model::UpdatePolicyDescriptionRequest;

UpdatePolicyDescriptionRequest::UpdatePolicyDescriptionRequest()
    : RpcServiceRequest("ram", "2015-05-01", "UpdatePolicyDescription") {
  setMethod(HttpRequest::Method::Post);
}

UpdatePolicyDescriptionRequest::~UpdatePolicyDescriptionRequest() {}

std::string UpdatePolicyDescriptionRequest::getPolicyName() const {
  return policyName_;
}

void UpdatePolicyDescriptionRequest::setPolicyName(const std::string &policyName) {
  policyName_ = policyName;
  setParameter(std::string("PolicyName"), policyName);
}

std::string UpdatePolicyDescriptionRequest::getNewDescription() const {
  return newDescription_;
}

void UpdatePolicyDescriptionRequest::setNewDescription(const std::string &newDescription) {
  newDescription_ = newDescription;
  setParameter(std::string("NewDescription"), newDescription);
}

