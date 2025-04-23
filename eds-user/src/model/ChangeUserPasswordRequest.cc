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

#include <alibabacloud/eds-user/model/ChangeUserPasswordRequest.h>

using AlibabaCloud::Eds_user::Model::ChangeUserPasswordRequest;

ChangeUserPasswordRequest::ChangeUserPasswordRequest()
    : RpcServiceRequest("eds-user", "2021-03-08", "ChangeUserPassword") {
  setMethod(HttpRequest::Method::Post);
}

ChangeUserPasswordRequest::~ChangeUserPasswordRequest() {}

std::string ChangeUserPasswordRequest::getNewPassword() const {
  return newPassword_;
}

void ChangeUserPasswordRequest::setNewPassword(const std::string &newPassword) {
  newPassword_ = newPassword;
  setBodyParameter(std::string("NewPassword"), newPassword);
}

std::string ChangeUserPasswordRequest::getEndUserId() const {
  return endUserId_;
}

void ChangeUserPasswordRequest::setEndUserId(const std::string &endUserId) {
  endUserId_ = endUserId;
  setBodyParameter(std::string("EndUserId"), endUserId);
}

std::string ChangeUserPasswordRequest::getNotifyType() const {
  return notifyType_;
}

void ChangeUserPasswordRequest::setNotifyType(const std::string &notifyType) {
  notifyType_ = notifyType;
  setBodyParameter(std::string("NotifyType"), notifyType);
}

