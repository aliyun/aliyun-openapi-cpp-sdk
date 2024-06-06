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

#include <alibabacloud/csas/model/ListClientUsersRequest.h>

using AlibabaCloud::Csas::Model::ListClientUsersRequest;

ListClientUsersRequest::ListClientUsersRequest()
    : RpcServiceRequest("csas", "2023-01-20", "ListClientUsers") {
  setMethod(HttpRequest::Method::Get);
}

ListClientUsersRequest::~ListClientUsersRequest() {}

std::string ListClientUsersRequest::getMobileNumber() const {
  return mobileNumber_;
}

void ListClientUsersRequest::setMobileNumber(const std::string &mobileNumber) {
  mobileNumber_ = mobileNumber;
  setParameter(std::string("MobileNumber"), mobileNumber);
}

std::string ListClientUsersRequest::getDepartmentId() const {
  return departmentId_;
}

void ListClientUsersRequest::setDepartmentId(const std::string &departmentId) {
  departmentId_ = departmentId;
  setParameter(std::string("DepartmentId"), departmentId);
}

long ListClientUsersRequest::getCurrentPage() const {
  return currentPage_;
}

void ListClientUsersRequest::setCurrentPage(long currentPage) {
  currentPage_ = currentPage;
  setParameter(std::string("CurrentPage"), std::to_string(currentPage));
}

std::string ListClientUsersRequest::getIdpConfigId() const {
  return idpConfigId_;
}

void ListClientUsersRequest::setIdpConfigId(const std::string &idpConfigId) {
  idpConfigId_ = idpConfigId;
  setParameter(std::string("IdpConfigId"), idpConfigId);
}

long ListClientUsersRequest::getPageSize() const {
  return pageSize_;
}

void ListClientUsersRequest::setPageSize(long pageSize) {
  pageSize_ = pageSize;
  setParameter(std::string("PageSize"), std::to_string(pageSize));
}

std::string ListClientUsersRequest::getEmail() const {
  return email_;
}

void ListClientUsersRequest::setEmail(const std::string &email) {
  email_ = email;
  setParameter(std::string("Email"), email);
}

std::string ListClientUsersRequest::getUsername() const {
  return username_;
}

void ListClientUsersRequest::setUsername(const std::string &username) {
  username_ = username;
  setParameter(std::string("Username"), username);
}

std::string ListClientUsersRequest::getStatus() const {
  return status_;
}

void ListClientUsersRequest::setStatus(const std::string &status) {
  status_ = status;
  setParameter(std::string("Status"), status);
}

