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

#include <alibabacloud/eiam/model/ListApplicationsForOrganizationalUnitRequest.h>

using AlibabaCloud::Eiam::Model::ListApplicationsForOrganizationalUnitRequest;

ListApplicationsForOrganizationalUnitRequest::ListApplicationsForOrganizationalUnitRequest()
    : RpcServiceRequest("eiam", "2021-12-01", "ListApplicationsForOrganizationalUnit") {
  setMethod(HttpRequest::Method::Post);
}

ListApplicationsForOrganizationalUnitRequest::~ListApplicationsForOrganizationalUnitRequest() {}

long ListApplicationsForOrganizationalUnitRequest::getPageNumber() const {
  return pageNumber_;
}

void ListApplicationsForOrganizationalUnitRequest::setPageNumber(long pageNumber) {
  pageNumber_ = pageNumber;
  setParameter(std::string("PageNumber"), std::to_string(pageNumber));
}

long ListApplicationsForOrganizationalUnitRequest::getPageSize() const {
  return pageSize_;
}

void ListApplicationsForOrganizationalUnitRequest::setPageSize(long pageSize) {
  pageSize_ = pageSize;
  setParameter(std::string("PageSize"), std::to_string(pageSize));
}

std::vector<ListApplicationsForOrganizationalUnitRequest::std::string> ListApplicationsForOrganizationalUnitRequest::getApplicationIds() const {
  return applicationIds_;
}

void ListApplicationsForOrganizationalUnitRequest::setApplicationIds(const std::vector<ListApplicationsForOrganizationalUnitRequest::std::string> &applicationIds) {
  applicationIds_ = applicationIds;
  for(int dep1 = 0; dep1 != applicationIds.size(); dep1++) {
    setParameter(std::string("ApplicationIds") + "." + std::to_string(dep1 + 1), applicationIds[dep1]);
  }
}

std::string ListApplicationsForOrganizationalUnitRequest::getInstanceId() const {
  return instanceId_;
}

void ListApplicationsForOrganizationalUnitRequest::setInstanceId(const std::string &instanceId) {
  instanceId_ = instanceId;
  setParameter(std::string("InstanceId"), instanceId);
}

std::string ListApplicationsForOrganizationalUnitRequest::getOrganizationalUnitId() const {
  return organizationalUnitId_;
}

void ListApplicationsForOrganizationalUnitRequest::setOrganizationalUnitId(const std::string &organizationalUnitId) {
  organizationalUnitId_ = organizationalUnitId;
  setParameter(std::string("OrganizationalUnitId"), organizationalUnitId);
}

