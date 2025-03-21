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

#include <alibabacloud/eiam/model/UpdateUserPasswordRequest.h>

using AlibabaCloud::Eiam::Model::UpdateUserPasswordRequest;

UpdateUserPasswordRequest::UpdateUserPasswordRequest()
    : RpcServiceRequest("eiam", "2021-12-01", "UpdateUserPassword") {
  setMethod(HttpRequest::Method::Post);
}

UpdateUserPasswordRequest::~UpdateUserPasswordRequest() {}

std::vector<UpdateUserPasswordRequest::std::string> UpdateUserPasswordRequest::getUserNotificationChannels() const {
  return userNotificationChannels_;
}

void UpdateUserPasswordRequest::setUserNotificationChannels(const std::vector<UpdateUserPasswordRequest::std::string> &userNotificationChannels) {
  userNotificationChannels_ = userNotificationChannels;
  for(int dep1 = 0; dep1 != userNotificationChannels.size(); dep1++) {
    setParameter(std::string("UserNotificationChannels") + "." + std::to_string(dep1 + 1), userNotificationChannels[dep1]);
  }
}

std::string UpdateUserPasswordRequest::getUserId() const {
  return userId_;
}

void UpdateUserPasswordRequest::setUserId(const std::string &userId) {
  userId_ = userId;
  setParameter(std::string("UserId"), userId);
}

std::string UpdateUserPasswordRequest::getPassword() const {
  return password_;
}

void UpdateUserPasswordRequest::setPassword(const std::string &password) {
  password_ = password;
  setParameter(std::string("Password"), password);
}

std::string UpdateUserPasswordRequest::getPasswordForcedUpdateStatus() const {
  return passwordForcedUpdateStatus_;
}

void UpdateUserPasswordRequest::setPasswordForcedUpdateStatus(const std::string &passwordForcedUpdateStatus) {
  passwordForcedUpdateStatus_ = passwordForcedUpdateStatus;
  setParameter(std::string("PasswordForcedUpdateStatus"), passwordForcedUpdateStatus);
}

std::string UpdateUserPasswordRequest::getInstanceId() const {
  return instanceId_;
}

void UpdateUserPasswordRequest::setInstanceId(const std::string &instanceId) {
  instanceId_ = instanceId;
  setParameter(std::string("InstanceId"), instanceId);
}

