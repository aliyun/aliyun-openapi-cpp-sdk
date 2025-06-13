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

#include <alibabacloud/ram/model/CreateUserRequest.h>

using AlibabaCloud::Ram::Model::CreateUserRequest;

CreateUserRequest::CreateUserRequest()
    : RpcServiceRequest("ram", "2015-05-01", "CreateUser") {
  setMethod(HttpRequest::Method::Post);
}

CreateUserRequest::~CreateUserRequest() {}

std::string CreateUserRequest::getMobilePhone() const {
  return mobilePhone_;
}

void CreateUserRequest::setMobilePhone(const std::string &mobilePhone) {
  mobilePhone_ = mobilePhone;
  setParameter(std::string("MobilePhone"), mobilePhone);
}

std::string CreateUserRequest::getEmail() const {
  return email_;
}

void CreateUserRequest::setEmail(const std::string &email) {
  email_ = email;
  setParameter(std::string("Email"), email);
}

std::string CreateUserRequest::getComments() const {
  return comments_;
}

void CreateUserRequest::setComments(const std::string &comments) {
  comments_ = comments;
  setParameter(std::string("Comments"), comments);
}

std::string CreateUserRequest::getDisplayName() const {
  return displayName_;
}

void CreateUserRequest::setDisplayName(const std::string &displayName) {
  displayName_ = displayName;
  setParameter(std::string("DisplayName"), displayName);
}

std::string CreateUserRequest::getUserName() const {
  return userName_;
}

void CreateUserRequest::setUserName(const std::string &userName) {
  userName_ = userName;
  setParameter(std::string("UserName"), userName);
}

