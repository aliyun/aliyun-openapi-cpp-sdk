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

#include <alibabacloud/devops-rdc/model/InsertDevopsUserRequest.h>

using AlibabaCloud::Devops_rdc::Model::InsertDevopsUserRequest;

InsertDevopsUserRequest::InsertDevopsUserRequest()
    : RpcServiceRequest("devops-rdc", "2020-03-03", "InsertDevopsUser") {
  setMethod(HttpRequest::Method::Post);
}

InsertDevopsUserRequest::~InsertDevopsUserRequest() {}

std::string InsertDevopsUserRequest::getPhone() const {
  return phone_;
}

void InsertDevopsUserRequest::setPhone(const std::string &phone) {
  phone_ = phone;
  setBodyParameter(std::string("Phone"), phone);
}

std::string InsertDevopsUserRequest::getUserPk() const {
  return userPk_;
}

void InsertDevopsUserRequest::setUserPk(const std::string &userPk) {
  userPk_ = userPk;
  setBodyParameter(std::string("UserPk"), userPk);
}

std::string InsertDevopsUserRequest::getEmail() const {
  return email_;
}

void InsertDevopsUserRequest::setEmail(const std::string &email) {
  email_ = email;
  setBodyParameter(std::string("Email"), email);
}

std::string InsertDevopsUserRequest::getUserName() const {
  return userName_;
}

void InsertDevopsUserRequest::setUserName(const std::string &userName) {
  userName_ = userName;
  setBodyParameter(std::string("UserName"), userName);
}

