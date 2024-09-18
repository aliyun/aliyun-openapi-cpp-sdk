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

#include <alibabacloud/quickbi-public/model/ListOrganizationRoleUsersRequest.h>

using AlibabaCloud::Quickbi_public::Model::ListOrganizationRoleUsersRequest;

ListOrganizationRoleUsersRequest::ListOrganizationRoleUsersRequest()
    : RpcServiceRequest("quickbi-public", "2022-01-01", "ListOrganizationRoleUsers") {
  setMethod(HttpRequest::Method::Post);
}

ListOrganizationRoleUsersRequest::~ListOrganizationRoleUsersRequest() {}

long ListOrganizationRoleUsersRequest::getRoleId() const {
  return roleId_;
}

void ListOrganizationRoleUsersRequest::setRoleId(long roleId) {
  roleId_ = roleId;
  setParameter(std::string("RoleId"), std::to_string(roleId));
}

std::string ListOrganizationRoleUsersRequest::getAccessPoint() const {
  return accessPoint_;
}

void ListOrganizationRoleUsersRequest::setAccessPoint(const std::string &accessPoint) {
  accessPoint_ = accessPoint;
  setParameter(std::string("AccessPoint"), accessPoint);
}

int ListOrganizationRoleUsersRequest::getPageNum() const {
  return pageNum_;
}

void ListOrganizationRoleUsersRequest::setPageNum(int pageNum) {
  pageNum_ = pageNum;
  setParameter(std::string("PageNum"), std::to_string(pageNum));
}

int ListOrganizationRoleUsersRequest::getPageSize() const {
  return pageSize_;
}

void ListOrganizationRoleUsersRequest::setPageSize(int pageSize) {
  pageSize_ = pageSize;
  setParameter(std::string("PageSize"), std::to_string(pageSize));
}

std::string ListOrganizationRoleUsersRequest::getKeyword() const {
  return keyword_;
}

void ListOrganizationRoleUsersRequest::setKeyword(const std::string &keyword) {
  keyword_ = keyword;
  setParameter(std::string("Keyword"), keyword);
}

std::string ListOrganizationRoleUsersRequest::getSignType() const {
  return signType_;
}

void ListOrganizationRoleUsersRequest::setSignType(const std::string &signType) {
  signType_ = signType;
  setParameter(std::string("SignType"), signType);
}

