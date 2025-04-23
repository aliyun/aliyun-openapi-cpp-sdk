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

#include <alibabacloud/eds-user/model/CreateUsersRequest.h>

using AlibabaCloud::Eds_user::Model::CreateUsersRequest;

CreateUsersRequest::CreateUsersRequest()
    : RpcServiceRequest("eds-user", "2021-03-08", "CreateUsers") {
  setMethod(HttpRequest::Method::Post);
}

CreateUsersRequest::~CreateUsersRequest() {}

std::string CreateUsersRequest::getAutoLockTime() const {
  return autoLockTime_;
}

void CreateUsersRequest::setAutoLockTime(const std::string &autoLockTime) {
  autoLockTime_ = autoLockTime;
  setParameter(std::string("AutoLockTime"), autoLockTime);
}

bool CreateUsersRequest::getIsLocalAdmin() const {
  return isLocalAdmin_;
}

void CreateUsersRequest::setIsLocalAdmin(bool isLocalAdmin) {
  isLocalAdmin_ = isLocalAdmin;
  setParameter(std::string("IsLocalAdmin"), isLocalAdmin ? "true" : "false");
}

std::vector<CreateUsersRequest::Users> CreateUsersRequest::getUsers() const {
  return users_;
}

void CreateUsersRequest::setUsers(const std::vector<CreateUsersRequest::Users> &users) {
  users_ = users;
  for(int dep1 = 0; dep1 != users.size(); dep1++) {
  auto usersObj = users.at(dep1);
  std::string usersObjStr = std::string("Users") + "." + std::to_string(dep1 + 1);
    setBodyParameter(usersObjStr + ".Password", usersObj.password);
    setBodyParameter(usersObjStr + ".RealNickName", usersObj.realNickName);
    setBodyParameter(usersObjStr + ".Phone", usersObj.phone);
    setBodyParameter(usersObjStr + ".OwnerType", usersObj.ownerType);
    setBodyParameter(usersObjStr + ".EndUserId", usersObj.endUserId);
    setBodyParameter(usersObjStr + ".Remark", usersObj.remark);
    setBodyParameter(usersObjStr + ".Email", usersObj.email);
    setBodyParameter(usersObjStr + ".OrgId", usersObj.orgId);
  }
}

std::string CreateUsersRequest::getPassword() const {
  return password_;
}

void CreateUsersRequest::setPassword(const std::string &password) {
  password_ = password;
  setBodyParameter(std::string("Password"), password);
}

std::string CreateUsersRequest::getPasswordExpireDays() const {
  return passwordExpireDays_;
}

void CreateUsersRequest::setPasswordExpireDays(const std::string &passwordExpireDays) {
  passwordExpireDays_ = passwordExpireDays;
  setParameter(std::string("PasswordExpireDays"), passwordExpireDays);
}

