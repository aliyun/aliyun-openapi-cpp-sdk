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

#include <alibabacloud/eiam/model/ListOrganizationalUnitsRequest.h>

using AlibabaCloud::Eiam::Model::ListOrganizationalUnitsRequest;

ListOrganizationalUnitsRequest::ListOrganizationalUnitsRequest()
    : RpcServiceRequest("eiam", "2021-12-01", "ListOrganizationalUnits") {
  setMethod(HttpRequest::Method::Post);
}

ListOrganizationalUnitsRequest::~ListOrganizationalUnitsRequest() {}

std::string ListOrganizationalUnitsRequest::getOrganizationalUnitNameStartsWith() const {
  return organizationalUnitNameStartsWith_;
}

void ListOrganizationalUnitsRequest::setOrganizationalUnitNameStartsWith(const std::string &organizationalUnitNameStartsWith) {
  organizationalUnitNameStartsWith_ = organizationalUnitNameStartsWith;
  setParameter(std::string("OrganizationalUnitNameStartsWith"), organizationalUnitNameStartsWith);
}

long ListOrganizationalUnitsRequest::getPageNumber() const {
  return pageNumber_;
}

void ListOrganizationalUnitsRequest::setPageNumber(long pageNumber) {
  pageNumber_ = pageNumber;
  setParameter(std::string("PageNumber"), std::to_string(pageNumber));
}

std::string ListOrganizationalUnitsRequest::getParentId() const {
  return parentId_;
}

void ListOrganizationalUnitsRequest::setParentId(const std::string &parentId) {
  parentId_ = parentId;
  setParameter(std::string("ParentId"), parentId);
}

long ListOrganizationalUnitsRequest::getPageSize() const {
  return pageSize_;
}

void ListOrganizationalUnitsRequest::setPageSize(long pageSize) {
  pageSize_ = pageSize;
  setParameter(std::string("PageSize"), std::to_string(pageSize));
}

std::vector<ListOrganizationalUnitsRequest::std::string> ListOrganizationalUnitsRequest::getOrganizationalUnitIds() const {
  return organizationalUnitIds_;
}

void ListOrganizationalUnitsRequest::setOrganizationalUnitIds(const std::vector<ListOrganizationalUnitsRequest::std::string> &organizationalUnitIds) {
  organizationalUnitIds_ = organizationalUnitIds;
  for(int dep1 = 0; dep1 != organizationalUnitIds.size(); dep1++) {
    setParameter(std::string("OrganizationalUnitIds") + "." + std::to_string(dep1 + 1), organizationalUnitIds[dep1]);
  }
}

std::string ListOrganizationalUnitsRequest::getOrganizationalUnitName() const {
  return organizationalUnitName_;
}

void ListOrganizationalUnitsRequest::setOrganizationalUnitName(const std::string &organizationalUnitName) {
  organizationalUnitName_ = organizationalUnitName;
  setParameter(std::string("OrganizationalUnitName"), organizationalUnitName);
}

std::string ListOrganizationalUnitsRequest::getInstanceId() const {
  return instanceId_;
}

void ListOrganizationalUnitsRequest::setInstanceId(const std::string &instanceId) {
  instanceId_ = instanceId;
  setParameter(std::string("InstanceId"), instanceId);
}

