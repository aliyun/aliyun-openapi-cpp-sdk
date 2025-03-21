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

#include <alibabacloud/eiam/model/SetForgetPasswordConfigurationRequest.h>

using AlibabaCloud::Eiam::Model::SetForgetPasswordConfigurationRequest;

SetForgetPasswordConfigurationRequest::SetForgetPasswordConfigurationRequest()
    : RpcServiceRequest("eiam", "2021-12-01", "SetForgetPasswordConfiguration") {
  setMethod(HttpRequest::Method::Post);
}

SetForgetPasswordConfigurationRequest::~SetForgetPasswordConfigurationRequest() {}

std::vector<SetForgetPasswordConfigurationRequest::std::string> SetForgetPasswordConfigurationRequest::getAuthenticationChannels() const {
  return authenticationChannels_;
}

void SetForgetPasswordConfigurationRequest::setAuthenticationChannels(const std::vector<SetForgetPasswordConfigurationRequest::std::string> &authenticationChannels) {
  authenticationChannels_ = authenticationChannels;
  for(int dep1 = 0; dep1 != authenticationChannels.size(); dep1++) {
    setParameter(std::string("AuthenticationChannels") + "." + std::to_string(dep1 + 1), authenticationChannels[dep1]);
  }
}

std::string SetForgetPasswordConfigurationRequest::getForgetPasswordStatus() const {
  return forgetPasswordStatus_;
}

void SetForgetPasswordConfigurationRequest::setForgetPasswordStatus(const std::string &forgetPasswordStatus) {
  forgetPasswordStatus_ = forgetPasswordStatus;
  setParameter(std::string("ForgetPasswordStatus"), forgetPasswordStatus);
}

std::string SetForgetPasswordConfigurationRequest::getInstanceId() const {
  return instanceId_;
}

void SetForgetPasswordConfigurationRequest::setInstanceId(const std::string &instanceId) {
  instanceId_ = instanceId;
  setParameter(std::string("InstanceId"), instanceId);
}

