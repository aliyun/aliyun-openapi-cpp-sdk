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

#include <alibabacloud/ram/model/ChangePasswordRequest.h>

using AlibabaCloud::Ram::Model::ChangePasswordRequest;

ChangePasswordRequest::ChangePasswordRequest()
    : RpcServiceRequest("ram", "2015-05-01", "ChangePassword") {
  setMethod(HttpRequest::Method::Post);
}

ChangePasswordRequest::~ChangePasswordRequest() {}

std::string ChangePasswordRequest::getOldPassword() const {
  return oldPassword_;
}

void ChangePasswordRequest::setOldPassword(const std::string &oldPassword) {
  oldPassword_ = oldPassword;
  setParameter(std::string("OldPassword"), oldPassword);
}

std::string ChangePasswordRequest::getNewPassword() const {
  return newPassword_;
}

void ChangePasswordRequest::setNewPassword(const std::string &newPassword) {
  newPassword_ = newPassword;
  setParameter(std::string("NewPassword"), newPassword);
}

