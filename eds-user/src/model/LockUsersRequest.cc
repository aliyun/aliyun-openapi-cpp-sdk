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

#include <alibabacloud/eds-user/model/LockUsersRequest.h>

using AlibabaCloud::Eds_user::Model::LockUsersRequest;

LockUsersRequest::LockUsersRequest()
    : RpcServiceRequest("eds-user", "2021-03-08", "LockUsers") {
  setMethod(HttpRequest::Method::Post);
}

LockUsersRequest::~LockUsersRequest() {}

bool LockUsersRequest::getLogoutSession() const {
  return logoutSession_;
}

void LockUsersRequest::setLogoutSession(bool logoutSession) {
  logoutSession_ = logoutSession;
  setParameter(std::string("LogoutSession"), logoutSession ? "true" : "false");
}

std::vector<std::string> LockUsersRequest::getUsers() const {
  return users_;
}

void LockUsersRequest::setUsers(const std::vector<std::string> &users) {
  users_ = users;
}

