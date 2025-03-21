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

#include <alibabacloud/eiam/model/SetPasswordInitializationConfigurationRequest.h>

using AlibabaCloud::Eiam::Model::SetPasswordInitializationConfigurationRequest;

SetPasswordInitializationConfigurationRequest::SetPasswordInitializationConfigurationRequest()
    : RpcServiceRequest("eiam", "2021-12-01", "SetPasswordInitializationConfiguration") {
  setMethod(HttpRequest::Method::Post);
}

SetPasswordInitializationConfigurationRequest::~SetPasswordInitializationConfigurationRequest() {}

std::string SetPasswordInitializationConfigurationRequest::getPasswordInitializationType() const {
  return passwordInitializationType_;
}

void SetPasswordInitializationConfigurationRequest::setPasswordInitializationType(const std::string &passwordInitializationType) {
  passwordInitializationType_ = passwordInitializationType;
  setParameter(std::string("PasswordInitializationType"), passwordInitializationType);
}

std::vector<SetPasswordInitializationConfigurationRequest::std::string> SetPasswordInitializationConfigurationRequest::getPasswordInitializationNotificationChannels() const {
  return passwordInitializationNotificationChannels_;
}

void SetPasswordInitializationConfigurationRequest::setPasswordInitializationNotificationChannels(const std::vector<SetPasswordInitializationConfigurationRequest::std::string> &passwordInitializationNotificationChannels) {
  passwordInitializationNotificationChannels_ = passwordInitializationNotificationChannels;
  for(int dep1 = 0; dep1 != passwordInitializationNotificationChannels.size(); dep1++) {
    setParameter(std::string("PasswordInitializationNotificationChannels") + "." + std::to_string(dep1 + 1), passwordInitializationNotificationChannels[dep1]);
  }
}

std::string SetPasswordInitializationConfigurationRequest::getPasswordInitializationStatus() const {
  return passwordInitializationStatus_;
}

void SetPasswordInitializationConfigurationRequest::setPasswordInitializationStatus(const std::string &passwordInitializationStatus) {
  passwordInitializationStatus_ = passwordInitializationStatus;
  setParameter(std::string("PasswordInitializationStatus"), passwordInitializationStatus);
}

std::string SetPasswordInitializationConfigurationRequest::getPasswordForcedUpdateStatus() const {
  return passwordForcedUpdateStatus_;
}

void SetPasswordInitializationConfigurationRequest::setPasswordForcedUpdateStatus(const std::string &passwordForcedUpdateStatus) {
  passwordForcedUpdateStatus_ = passwordForcedUpdateStatus;
  setParameter(std::string("PasswordForcedUpdateStatus"), passwordForcedUpdateStatus);
}

std::string SetPasswordInitializationConfigurationRequest::getInstanceId() const {
  return instanceId_;
}

void SetPasswordInitializationConfigurationRequest::setInstanceId(const std::string &instanceId) {
  instanceId_ = instanceId;
  setParameter(std::string("InstanceId"), instanceId);
}

