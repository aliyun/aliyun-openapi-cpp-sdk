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

#include <alibabacloud/csas/model/CreateClientUserRequest.h>

using AlibabaCloud::Csas::Model::CreateClientUserRequest;

CreateClientUserRequest::CreateClientUserRequest()
    : RpcServiceRequest("csas", "2023-01-20", "CreateClientUser") {
  setMethod(HttpRequest::Method::Post);
}

CreateClientUserRequest::~CreateClientUserRequest() {}

std::string CreateClientUserRequest::getMobileNumber() const {
  return mobileNumber_;
}

void CreateClientUserRequest::setMobileNumber(const std::string &mobileNumber) {
  mobileNumber_ = mobileNumber;
  setParameter(std::string("MobileNumber"), mobileNumber);
}

std::string CreateClientUserRequest::getDepartmentId() const {
  return departmentId_;
}

void CreateClientUserRequest::setDepartmentId(const std::string &departmentId) {
  departmentId_ = departmentId;
  setParameter(std::string("DepartmentId"), departmentId);
}

std::string CreateClientUserRequest::getDescription() const {
  return description_;
}

void CreateClientUserRequest::setDescription(const std::string &description) {
  description_ = description;
  setParameter(std::string("Description"), description);
}

std::string CreateClientUserRequest::getIdpConfigId() const {
  return idpConfigId_;
}

void CreateClientUserRequest::setIdpConfigId(const std::string &idpConfigId) {
  idpConfigId_ = idpConfigId;
  setParameter(std::string("IdpConfigId"), idpConfigId);
}

std::string CreateClientUserRequest::getPassword() const {
  return password_;
}

void CreateClientUserRequest::setPassword(const std::string &password) {
  password_ = password;
  setParameter(std::string("Password"), password);
}

std::string CreateClientUserRequest::getEmail() const {
  return email_;
}

void CreateClientUserRequest::setEmail(const std::string &email) {
  email_ = email;
  setParameter(std::string("Email"), email);
}

std::string CreateClientUserRequest::getUsername() const {
  return username_;
}

void CreateClientUserRequest::setUsername(const std::string &username) {
  username_ = username;
  setParameter(std::string("Username"), username);
}

