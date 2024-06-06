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

#include <alibabacloud/csas/model/UpdateClientUserRequest.h>

using AlibabaCloud::Csas::Model::UpdateClientUserRequest;

UpdateClientUserRequest::UpdateClientUserRequest()
    : RpcServiceRequest("csas", "2023-01-20", "UpdateClientUser") {
  setMethod(HttpRequest::Method::Post);
}

UpdateClientUserRequest::~UpdateClientUserRequest() {}

std::string UpdateClientUserRequest::getMobileNumber() const {
  return mobileNumber_;
}

void UpdateClientUserRequest::setMobileNumber(const std::string &mobileNumber) {
  mobileNumber_ = mobileNumber;
  setParameter(std::string("MobileNumber"), mobileNumber);
}

std::string UpdateClientUserRequest::getDepartmentId() const {
  return departmentId_;
}

void UpdateClientUserRequest::setDepartmentId(const std::string &departmentId) {
  departmentId_ = departmentId;
  setParameter(std::string("DepartmentId"), departmentId);
}

std::string UpdateClientUserRequest::getDescription() const {
  return description_;
}

void UpdateClientUserRequest::setDescription(const std::string &description) {
  description_ = description;
  setParameter(std::string("Description"), description);
}

std::string UpdateClientUserRequest::getId() const {
  return id_;
}

void UpdateClientUserRequest::setId(const std::string &id) {
  id_ = id;
  setParameter(std::string("Id"), id);
}

std::string UpdateClientUserRequest::getEmail() const {
  return email_;
}

void UpdateClientUserRequest::setEmail(const std::string &email) {
  email_ = email;
  setParameter(std::string("Email"), email);
}

