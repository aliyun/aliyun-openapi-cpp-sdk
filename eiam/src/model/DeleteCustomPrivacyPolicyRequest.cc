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

#include <alibabacloud/eiam/model/DeleteCustomPrivacyPolicyRequest.h>

using AlibabaCloud::Eiam::Model::DeleteCustomPrivacyPolicyRequest;

DeleteCustomPrivacyPolicyRequest::DeleteCustomPrivacyPolicyRequest()
    : RpcServiceRequest("eiam", "2021-12-01", "DeleteCustomPrivacyPolicy") {
  setMethod(HttpRequest::Method::Post);
}

DeleteCustomPrivacyPolicyRequest::~DeleteCustomPrivacyPolicyRequest() {}

std::string DeleteCustomPrivacyPolicyRequest::getCustomPrivacyPolicyId() const {
  return customPrivacyPolicyId_;
}

void DeleteCustomPrivacyPolicyRequest::setCustomPrivacyPolicyId(const std::string &customPrivacyPolicyId) {
  customPrivacyPolicyId_ = customPrivacyPolicyId;
  setParameter(std::string("CustomPrivacyPolicyId"), customPrivacyPolicyId);
}

std::string DeleteCustomPrivacyPolicyRequest::getInstanceId() const {
  return instanceId_;
}

void DeleteCustomPrivacyPolicyRequest::setInstanceId(const std::string &instanceId) {
  instanceId_ = instanceId;
  setParameter(std::string("InstanceId"), instanceId);
}

