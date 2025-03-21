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

#include <alibabacloud/eiam/model/ListOrganizationalUnitsForApplicationRequest.h>

using AlibabaCloud::Eiam::Model::ListOrganizationalUnitsForApplicationRequest;

ListOrganizationalUnitsForApplicationRequest::ListOrganizationalUnitsForApplicationRequest()
    : RpcServiceRequest("eiam", "2021-12-01", "ListOrganizationalUnitsForApplication") {
  setMethod(HttpRequest::Method::Post);
}

ListOrganizationalUnitsForApplicationRequest::~ListOrganizationalUnitsForApplicationRequest() {}

long ListOrganizationalUnitsForApplicationRequest::getPageNumber() const {
  return pageNumber_;
}

void ListOrganizationalUnitsForApplicationRequest::setPageNumber(long pageNumber) {
  pageNumber_ = pageNumber;
  setParameter(std::string("PageNumber"), std::to_string(pageNumber));
}

long ListOrganizationalUnitsForApplicationRequest::getPageSize() const {
  return pageSize_;
}

void ListOrganizationalUnitsForApplicationRequest::setPageSize(long pageSize) {
  pageSize_ = pageSize;
  setParameter(std::string("PageSize"), std::to_string(pageSize));
}

std::string ListOrganizationalUnitsForApplicationRequest::getApplicationId() const {
  return applicationId_;
}

void ListOrganizationalUnitsForApplicationRequest::setApplicationId(const std::string &applicationId) {
  applicationId_ = applicationId;
  setParameter(std::string("ApplicationId"), applicationId);
}

std::vector<ListOrganizationalUnitsForApplicationRequest::std::string> ListOrganizationalUnitsForApplicationRequest::getOrganizationalUnitIds() const {
  return organizationalUnitIds_;
}

void ListOrganizationalUnitsForApplicationRequest::setOrganizationalUnitIds(const std::vector<ListOrganizationalUnitsForApplicationRequest::std::string> &organizationalUnitIds) {
  organizationalUnitIds_ = organizationalUnitIds;
  for(int dep1 = 0; dep1 != organizationalUnitIds.size(); dep1++) {
    setParameter(std::string("OrganizationalUnitIds") + "." + std::to_string(dep1 + 1), organizationalUnitIds[dep1]);
  }
}

std::string ListOrganizationalUnitsForApplicationRequest::getInstanceId() const {
  return instanceId_;
}

void ListOrganizationalUnitsForApplicationRequest::setInstanceId(const std::string &instanceId) {
  instanceId_ = instanceId;
  setParameter(std::string("InstanceId"), instanceId);
}

