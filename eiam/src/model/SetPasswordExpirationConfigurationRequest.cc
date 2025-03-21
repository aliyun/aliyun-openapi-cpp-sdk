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

#include <alibabacloud/eiam/model/SetPasswordExpirationConfigurationRequest.h>

using AlibabaCloud::Eiam::Model::SetPasswordExpirationConfigurationRequest;

SetPasswordExpirationConfigurationRequest::SetPasswordExpirationConfigurationRequest()
    : RpcServiceRequest("eiam", "2021-12-01", "SetPasswordExpirationConfiguration") {
  setMethod(HttpRequest::Method::Post);
}

SetPasswordExpirationConfigurationRequest::~SetPasswordExpirationConfigurationRequest() {}

int SetPasswordExpirationConfigurationRequest::getPasswordForcedUpdateDuration() const {
  return passwordForcedUpdateDuration_;
}

void SetPasswordExpirationConfigurationRequest::setPasswordForcedUpdateDuration(int passwordForcedUpdateDuration) {
  passwordForcedUpdateDuration_ = passwordForcedUpdateDuration;
  setParameter(std::string("PasswordForcedUpdateDuration"), std::to_string(passwordForcedUpdateDuration));
}

std::vector<SetPasswordExpirationConfigurationRequest::std::string> SetPasswordExpirationConfigurationRequest::getEffectiveAuthenticationSourceIds() const {
  return effectiveAuthenticationSourceIds_;
}

void SetPasswordExpirationConfigurationRequest::setEffectiveAuthenticationSourceIds(const std::vector<SetPasswordExpirationConfigurationRequest::std::string> &effectiveAuthenticationSourceIds) {
  effectiveAuthenticationSourceIds_ = effectiveAuthenticationSourceIds;
  for(int dep1 = 0; dep1 != effectiveAuthenticationSourceIds.size(); dep1++) {
    setParameter(std::string("EffectiveAuthenticationSourceIds") + "." + std::to_string(dep1 + 1), effectiveAuthenticationSourceIds[dep1]);
  }
}

int SetPasswordExpirationConfigurationRequest::getPasswordExpirationNotificationDuration() const {
  return passwordExpirationNotificationDuration_;
}

void SetPasswordExpirationConfigurationRequest::setPasswordExpirationNotificationDuration(int passwordExpirationNotificationDuration) {
  passwordExpirationNotificationDuration_ = passwordExpirationNotificationDuration;
  setParameter(std::string("PasswordExpirationNotificationDuration"), std::to_string(passwordExpirationNotificationDuration));
}

std::string SetPasswordExpirationConfigurationRequest::getPasswordExpirationStatus() const {
  return passwordExpirationStatus_;
}

void SetPasswordExpirationConfigurationRequest::setPasswordExpirationStatus(const std::string &passwordExpirationStatus) {
  passwordExpirationStatus_ = passwordExpirationStatus;
  setParameter(std::string("PasswordExpirationStatus"), passwordExpirationStatus);
}

std::string SetPasswordExpirationConfigurationRequest::getInstanceId() const {
  return instanceId_;
}

void SetPasswordExpirationConfigurationRequest::setInstanceId(const std::string &instanceId) {
  instanceId_ = instanceId;
  setParameter(std::string("InstanceId"), instanceId);
}

std::string SetPasswordExpirationConfigurationRequest::getPasswordExpirationAction() const {
  return passwordExpirationAction_;
}

void SetPasswordExpirationConfigurationRequest::setPasswordExpirationAction(const std::string &passwordExpirationAction) {
  passwordExpirationAction_ = passwordExpirationAction;
  setParameter(std::string("PasswordExpirationAction"), passwordExpirationAction);
}

int SetPasswordExpirationConfigurationRequest::getPasswordValidMaxDay() const {
  return passwordValidMaxDay_;
}

void SetPasswordExpirationConfigurationRequest::setPasswordValidMaxDay(int passwordValidMaxDay) {
  passwordValidMaxDay_ = passwordValidMaxDay;
  setParameter(std::string("PasswordValidMaxDay"), std::to_string(passwordValidMaxDay));
}

std::vector<SetPasswordExpirationConfigurationRequest::std::string> SetPasswordExpirationConfigurationRequest::getPasswordExpirationNotificationChannels() const {
  return passwordExpirationNotificationChannels_;
}

void SetPasswordExpirationConfigurationRequest::setPasswordExpirationNotificationChannels(const std::vector<SetPasswordExpirationConfigurationRequest::std::string> &passwordExpirationNotificationChannels) {
  passwordExpirationNotificationChannels_ = passwordExpirationNotificationChannels;
  for(int dep1 = 0; dep1 != passwordExpirationNotificationChannels.size(); dep1++) {
    setParameter(std::string("PasswordExpirationNotificationChannels") + "." + std::to_string(dep1 + 1), passwordExpirationNotificationChannels[dep1]);
  }
}

std::string SetPasswordExpirationConfigurationRequest::getPasswordExpirationNotificationStatus() const {
  return passwordExpirationNotificationStatus_;
}

void SetPasswordExpirationConfigurationRequest::setPasswordExpirationNotificationStatus(const std::string &passwordExpirationNotificationStatus) {
  passwordExpirationNotificationStatus_ = passwordExpirationNotificationStatus;
  setParameter(std::string("PasswordExpirationNotificationStatus"), passwordExpirationNotificationStatus);
}

