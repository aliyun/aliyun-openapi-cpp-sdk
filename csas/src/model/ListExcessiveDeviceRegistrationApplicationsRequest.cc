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

#include <alibabacloud/csas/model/ListExcessiveDeviceRegistrationApplicationsRequest.h>

using AlibabaCloud::Csas::Model::ListExcessiveDeviceRegistrationApplicationsRequest;

ListExcessiveDeviceRegistrationApplicationsRequest::ListExcessiveDeviceRegistrationApplicationsRequest()
    : RpcServiceRequest("csas", "2023-01-20", "ListExcessiveDeviceRegistrationApplications") {
  setMethod(HttpRequest::Method::Get);
}

ListExcessiveDeviceRegistrationApplicationsRequest::~ListExcessiveDeviceRegistrationApplicationsRequest() {}

std::string ListExcessiveDeviceRegistrationApplicationsRequest::getDeviceTag() const {
  return deviceTag_;
}

void ListExcessiveDeviceRegistrationApplicationsRequest::setDeviceTag(const std::string &deviceTag) {
  deviceTag_ = deviceTag;
  setParameter(std::string("DeviceTag"), deviceTag);
}

std::string ListExcessiveDeviceRegistrationApplicationsRequest::getMac() const {
  return mac_;
}

void ListExcessiveDeviceRegistrationApplicationsRequest::setMac(const std::string &mac) {
  mac_ = mac;
  setParameter(std::string("Mac"), mac);
}

std::string ListExcessiveDeviceRegistrationApplicationsRequest::getHostname() const {
  return hostname_;
}

void ListExcessiveDeviceRegistrationApplicationsRequest::setHostname(const std::string &hostname) {
  hostname_ = hostname;
  setParameter(std::string("Hostname"), hostname);
}

std::string ListExcessiveDeviceRegistrationApplicationsRequest::getSourceIp() const {
  return sourceIp_;
}

void ListExcessiveDeviceRegistrationApplicationsRequest::setSourceIp(const std::string &sourceIp) {
  sourceIp_ = sourceIp;
  setParameter(std::string("SourceIp"), sourceIp);
}

std::string ListExcessiveDeviceRegistrationApplicationsRequest::getSaseUserId() const {
  return saseUserId_;
}

void ListExcessiveDeviceRegistrationApplicationsRequest::setSaseUserId(const std::string &saseUserId) {
  saseUserId_ = saseUserId;
  setParameter(std::string("SaseUserId"), saseUserId);
}

long ListExcessiveDeviceRegistrationApplicationsRequest::getPageSize() const {
  return pageSize_;
}

void ListExcessiveDeviceRegistrationApplicationsRequest::setPageSize(long pageSize) {
  pageSize_ = pageSize;
  setParameter(std::string("PageSize"), std::to_string(pageSize));
}

std::string ListExcessiveDeviceRegistrationApplicationsRequest::getDepartment() const {
  return department_;
}

void ListExcessiveDeviceRegistrationApplicationsRequest::setDepartment(const std::string &department) {
  department_ = department;
  setParameter(std::string("Department"), department);
}

long ListExcessiveDeviceRegistrationApplicationsRequest::getCurrentPage() const {
  return currentPage_;
}

void ListExcessiveDeviceRegistrationApplicationsRequest::setCurrentPage(long currentPage) {
  currentPage_ = currentPage;
  setParameter(std::string("CurrentPage"), std::to_string(currentPage));
}

std::vector<ListExcessiveDeviceRegistrationApplicationsRequest::std::string> ListExcessiveDeviceRegistrationApplicationsRequest::getApplicationIds() const {
  return applicationIds_;
}

void ListExcessiveDeviceRegistrationApplicationsRequest::setApplicationIds(const std::vector<ListExcessiveDeviceRegistrationApplicationsRequest::std::string> &applicationIds) {
  applicationIds_ = applicationIds;
  for(int dep1 = 0; dep1 != applicationIds.size(); dep1++) {
    setParameter(std::string("ApplicationIds") + "." + std::to_string(dep1 + 1), applicationIds[dep1]);
  }
}

std::vector<ListExcessiveDeviceRegistrationApplicationsRequest::std::string> ListExcessiveDeviceRegistrationApplicationsRequest::getStatuses() const {
  return statuses_;
}

void ListExcessiveDeviceRegistrationApplicationsRequest::setStatuses(const std::vector<ListExcessiveDeviceRegistrationApplicationsRequest::std::string> &statuses) {
  statuses_ = statuses;
  for(int dep1 = 0; dep1 != statuses.size(); dep1++) {
    setParameter(std::string("Statuses") + "." + std::to_string(dep1 + 1), statuses[dep1]);
  }
}

std::string ListExcessiveDeviceRegistrationApplicationsRequest::getUsername() const {
  return username_;
}

void ListExcessiveDeviceRegistrationApplicationsRequest::setUsername(const std::string &username) {
  username_ = username;
  setParameter(std::string("Username"), username);
}

