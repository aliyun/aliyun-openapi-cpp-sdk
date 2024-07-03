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

#include <alibabacloud/csas/model/ListNacUserCertRequest.h>

using AlibabaCloud::Csas::Model::ListNacUserCertRequest;

ListNacUserCertRequest::ListNacUserCertRequest()
    : RpcServiceRequest("csas", "2023-01-20", "ListNacUserCert") {
  setMethod(HttpRequest::Method::Post);
}

ListNacUserCertRequest::~ListNacUserCertRequest() {}

long ListNacUserCertRequest::getEndTime() const {
  return endTime_;
}

void ListNacUserCertRequest::setEndTime(long endTime) {
  endTime_ = endTime;
  setParameter(std::string("EndTime"), std::to_string(endTime));
}

std::string ListNacUserCertRequest::getCurrentPage() const {
  return currentPage_;
}

void ListNacUserCertRequest::setCurrentPage(const std::string &currentPage) {
  currentPage_ = currentPage;
  setParameter(std::string("CurrentPage"), currentPage);
}

long ListNacUserCertRequest::getStartTime() const {
  return startTime_;
}

void ListNacUserCertRequest::setStartTime(long startTime) {
  startTime_ = startTime;
  setParameter(std::string("StartTime"), std::to_string(startTime));
}

std::string ListNacUserCertRequest::getDeviceType() const {
  return deviceType_;
}

void ListNacUserCertRequest::setDeviceType(const std::string &deviceType) {
  deviceType_ = deviceType;
  setParameter(std::string("DeviceType"), deviceType);
}

std::string ListNacUserCertRequest::getPageSize() const {
  return pageSize_;
}

void ListNacUserCertRequest::setPageSize(const std::string &pageSize) {
  pageSize_ = pageSize;
  setParameter(std::string("PageSize"), pageSize);
}

std::string ListNacUserCertRequest::getDepartment() const {
  return department_;
}

void ListNacUserCertRequest::setDepartment(const std::string &department) {
  department_ = department;
  setParameter(std::string("Department"), department);
}

std::string ListNacUserCertRequest::getUsername() const {
  return username_;
}

void ListNacUserCertRequest::setUsername(const std::string &username) {
  username_ = username;
  setParameter(std::string("Username"), username);
}

std::string ListNacUserCertRequest::getStatus() const {
  return status_;
}

void ListNacUserCertRequest::setStatus(const std::string &status) {
  status_ = status;
  setParameter(std::string("Status"), status);
}

