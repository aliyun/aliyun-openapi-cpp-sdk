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

#include <alibabacloud/eds-user/model/UnlockUsersRequest.h>

using AlibabaCloud::Eds_user::Model::UnlockUsersRequest;

UnlockUsersRequest::UnlockUsersRequest()
    : RpcServiceRequest("eds-user", "2021-03-08", "UnlockUsers") {
  setMethod(HttpRequest::Method::Post);
}

UnlockUsersRequest::~UnlockUsersRequest() {}

std::string UnlockUsersRequest::getAutoLockTime() const {
  return autoLockTime_;
}

void UnlockUsersRequest::setAutoLockTime(const std::string &autoLockTime) {
  autoLockTime_ = autoLockTime;
  setParameter(std::string("AutoLockTime"), autoLockTime);
}

std::vector<std::string> UnlockUsersRequest::getUsers() const {
  return users_;
}

void UnlockUsersRequest::setUsers(const std::vector<std::string> &users) {
  users_ = users;
}

