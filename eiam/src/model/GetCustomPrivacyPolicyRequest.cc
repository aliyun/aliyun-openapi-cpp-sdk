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

#include <alibabacloud/eiam/model/GetCustomPrivacyPolicyRequest.h>

using AlibabaCloud::Eiam::Model::GetCustomPrivacyPolicyRequest;

GetCustomPrivacyPolicyRequest::GetCustomPrivacyPolicyRequest()
    : RpcServiceRequest("eiam", "2021-12-01", "GetCustomPrivacyPolicy") {
  setMethod(HttpRequest::Method::Post);
}

GetCustomPrivacyPolicyRequest::~GetCustomPrivacyPolicyRequest() {}

std::string GetCustomPrivacyPolicyRequest::getCustomPrivacyPolicyId() const {
  return customPrivacyPolicyId_;
}

void GetCustomPrivacyPolicyRequest::setCustomPrivacyPolicyId(const std::string &customPrivacyPolicyId) {
  customPrivacyPolicyId_ = customPrivacyPolicyId;
  setParameter(std::string("CustomPrivacyPolicyId"), customPrivacyPolicyId);
}

std::string GetCustomPrivacyPolicyRequest::getInstanceId() const {
  return instanceId_;
}

void GetCustomPrivacyPolicyRequest::setInstanceId(const std::string &instanceId) {
  instanceId_ = instanceId;
  setParameter(std::string("InstanceId"), instanceId);
}

