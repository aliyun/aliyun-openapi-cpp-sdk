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

#include <alibabacloud/resourcemanager/model/GetControlPolicyRequest.h>

using AlibabaCloud::ResourceManager::Model::GetControlPolicyRequest;

GetControlPolicyRequest::GetControlPolicyRequest()
    : RpcServiceRequest("resourcemanager", "2020-03-31", "GetControlPolicy") {
  setMethod(HttpRequest::Method::Post);
}

GetControlPolicyRequest::~GetControlPolicyRequest() {}

std::string GetControlPolicyRequest::getLanguage() const {
  return language_;
}

void GetControlPolicyRequest::setLanguage(const std::string &language) {
  language_ = language;
  setParameter(std::string("Language"), language);
}

std::string GetControlPolicyRequest::getPolicyId() const {
  return policyId_;
}

void GetControlPolicyRequest::setPolicyId(const std::string &policyId) {
  policyId_ = policyId;
  setParameter(std::string("PolicyId"), policyId);
}

