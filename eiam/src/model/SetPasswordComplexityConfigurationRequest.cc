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

#include <alibabacloud/eiam/model/SetPasswordComplexityConfigurationRequest.h>

using AlibabaCloud::Eiam::Model::SetPasswordComplexityConfigurationRequest;

SetPasswordComplexityConfigurationRequest::SetPasswordComplexityConfigurationRequest()
    : RpcServiceRequest("eiam", "2021-12-01", "SetPasswordComplexityConfiguration") {
  setMethod(HttpRequest::Method::Post);
}

SetPasswordComplexityConfigurationRequest::~SetPasswordComplexityConfigurationRequest() {}

int SetPasswordComplexityConfigurationRequest::getPasswordMinLength() const {
  return passwordMinLength_;
}

void SetPasswordComplexityConfigurationRequest::setPasswordMinLength(int passwordMinLength) {
  passwordMinLength_ = passwordMinLength;
  setParameter(std::string("PasswordMinLength"), std::to_string(passwordMinLength));
}

std::vector<SetPasswordComplexityConfigurationRequest::PasswordComplexityRules> SetPasswordComplexityConfigurationRequest::getPasswordComplexityRules() const {
  return passwordComplexityRules_;
}

void SetPasswordComplexityConfigurationRequest::setPasswordComplexityRules(const std::vector<SetPasswordComplexityConfigurationRequest::PasswordComplexityRules> &passwordComplexityRules) {
  passwordComplexityRules_ = passwordComplexityRules;
  for(int dep1 = 0; dep1 != passwordComplexityRules.size(); dep1++) {
    setParameter(std::string("PasswordComplexityRules") + "." + std::to_string(dep1 + 1) + ".PasswordCheckType", passwordComplexityRules[dep1].passwordCheckType);
  }
}

std::string SetPasswordComplexityConfigurationRequest::getInstanceId() const {
  return instanceId_;
}

void SetPasswordComplexityConfigurationRequest::setInstanceId(const std::string &instanceId) {
  instanceId_ = instanceId;
  setParameter(std::string("InstanceId"), instanceId);
}

