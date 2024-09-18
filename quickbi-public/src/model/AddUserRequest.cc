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

#include <alibabacloud/quickbi-public/model/AddUserRequest.h>

using AlibabaCloud::Quickbi_public::Model::AddUserRequest;

AddUserRequest::AddUserRequest()
    : RpcServiceRequest("quickbi-public", "2022-01-01", "AddUser") {
  setMethod(HttpRequest::Method::Post);
}

AddUserRequest::~AddUserRequest() {}

std::string AddUserRequest::getClientToken() const {
  return clientToken_;
}

void AddUserRequest::setClientToken(const std::string &clientToken) {
  clientToken_ = clientToken;
  setParameter(std::string("ClientToken"), clientToken);
}

bool AddUserRequest::getAdminUser() const {
  return adminUser_;
}

void AddUserRequest::setAdminUser(bool adminUser) {
  adminUser_ = adminUser;
  setParameter(std::string("AdminUser"), adminUser ? "true" : "false");
}

std::string AddUserRequest::getAccessPoint() const {
  return accessPoint_;
}

void AddUserRequest::setAccessPoint(const std::string &accessPoint) {
  accessPoint_ = accessPoint;
  setParameter(std::string("AccessPoint"), accessPoint);
}

int AddUserRequest::getAccountType() const {
  return accountType_;
}

void AddUserRequest::setAccountType(int accountType) {
  accountType_ = accountType;
  setParameter(std::string("AccountType"), std::to_string(accountType));
}

std::string AddUserRequest::getAccountId() const {
  return accountId_;
}

void AddUserRequest::setAccountId(const std::string &accountId) {
  accountId_ = accountId;
  setParameter(std::string("AccountId"), accountId);
}

std::string AddUserRequest::getRoleIds() const {
  return roleIds_;
}

void AddUserRequest::setRoleIds(const std::string &roleIds) {
  roleIds_ = roleIds;
  setBodyParameter(std::string("RoleIds"), roleIds);
}

std::string AddUserRequest::getAccountName() const {
  return accountName_;
}

void AddUserRequest::setAccountName(const std::string &accountName) {
  accountName_ = accountName;
  setParameter(std::string("AccountName"), accountName);
}

std::string AddUserRequest::getNickName() const {
  return nickName_;
}

void AddUserRequest::setNickName(const std::string &nickName) {
  nickName_ = nickName;
  setParameter(std::string("NickName"), nickName);
}

bool AddUserRequest::getAuthAdminUser() const {
  return authAdminUser_;
}

void AddUserRequest::setAuthAdminUser(bool authAdminUser) {
  authAdminUser_ = authAdminUser;
  setParameter(std::string("AuthAdminUser"), authAdminUser ? "true" : "false");
}

std::string AddUserRequest::getEmail() const {
  return email_;
}

void AddUserRequest::setEmail(const std::string &email) {
  email_ = email;
  setParameter(std::string("Email"), email);
}

int AddUserRequest::getUserType() const {
  return userType_;
}

void AddUserRequest::setUserType(int userType) {
  userType_ = userType;
  setParameter(std::string("UserType"), std::to_string(userType));
}

std::string AddUserRequest::getSignType() const {
  return signType_;
}

void AddUserRequest::setSignType(const std::string &signType) {
  signType_ = signType;
  setParameter(std::string("SignType"), signType);
}

std::string AddUserRequest::getPhone() const {
  return phone_;
}

void AddUserRequest::setPhone(const std::string &phone) {
  phone_ = phone;
  setParameter(std::string("Phone"), phone);
}

