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

#include <alibabacloud/csas/model/ListUninstallApplicationsRequest.h>

using AlibabaCloud::Csas::Model::ListUninstallApplicationsRequest;

ListUninstallApplicationsRequest::ListUninstallApplicationsRequest()
    : RpcServiceRequest("csas", "2023-01-20", "ListUninstallApplications") {
  setMethod(HttpRequest::Method::Get);
}

ListUninstallApplicationsRequest::~ListUninstallApplicationsRequest() {}

std::string ListUninstallApplicationsRequest::getMac() const {
  return mac_;
}

void ListUninstallApplicationsRequest::setMac(const std::string &mac) {
  mac_ = mac;
  setParameter(std::string("Mac"), mac);
}

std::string ListUninstallApplicationsRequest::getHostname() const {
  return hostname_;
}

void ListUninstallApplicationsRequest::setHostname(const std::string &hostname) {
  hostname_ = hostname;
  setParameter(std::string("Hostname"), hostname);
}

std::string ListUninstallApplicationsRequest::getSourceIp() const {
  return sourceIp_;
}

void ListUninstallApplicationsRequest::setSourceIp(const std::string &sourceIp) {
  sourceIp_ = sourceIp;
  setParameter(std::string("SourceIp"), sourceIp);
}

long ListUninstallApplicationsRequest::getPageSize() const {
  return pageSize_;
}

void ListUninstallApplicationsRequest::setPageSize(long pageSize) {
  pageSize_ = pageSize;
  setParameter(std::string("PageSize"), std::to_string(pageSize));
}

std::string ListUninstallApplicationsRequest::getDepartment() const {
  return department_;
}

void ListUninstallApplicationsRequest::setDepartment(const std::string &department) {
  department_ = department;
  setParameter(std::string("Department"), department);
}

long ListUninstallApplicationsRequest::getCurrentPage() const {
  return currentPage_;
}

void ListUninstallApplicationsRequest::setCurrentPage(long currentPage) {
  currentPage_ = currentPage;
  setParameter(std::string("CurrentPage"), std::to_string(currentPage));
}

std::vector<ListUninstallApplicationsRequest::std::string> ListUninstallApplicationsRequest::getApplicationIds() const {
  return applicationIds_;
}

void ListUninstallApplicationsRequest::setApplicationIds(const std::vector<ListUninstallApplicationsRequest::std::string> &applicationIds) {
  applicationIds_ = applicationIds;
  for(int dep1 = 0; dep1 != applicationIds.size(); dep1++) {
    setParameter(std::string("ApplicationIds") + "." + std::to_string(dep1 + 1), applicationIds[dep1]);
  }
}

std::vector<ListUninstallApplicationsRequest::std::string> ListUninstallApplicationsRequest::getStatuses() const {
  return statuses_;
}

void ListUninstallApplicationsRequest::setStatuses(const std::vector<ListUninstallApplicationsRequest::std::string> &statuses) {
  statuses_ = statuses;
  for(int dep1 = 0; dep1 != statuses.size(); dep1++) {
    setParameter(std::string("Statuses") + "." + std::to_string(dep1 + 1), statuses[dep1]);
  }
}

std::string ListUninstallApplicationsRequest::getUsername() const {
  return username_;
}

void ListUninstallApplicationsRequest::setUsername(const std::string &username) {
  username_ = username;
  setParameter(std::string("Username"), username);
}

