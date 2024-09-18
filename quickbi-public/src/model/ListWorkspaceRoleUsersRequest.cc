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

#include <alibabacloud/quickbi-public/model/ListWorkspaceRoleUsersRequest.h>

using AlibabaCloud::Quickbi_public::Model::ListWorkspaceRoleUsersRequest;

ListWorkspaceRoleUsersRequest::ListWorkspaceRoleUsersRequest()
    : RpcServiceRequest("quickbi-public", "2022-01-01", "ListWorkspaceRoleUsers") {
  setMethod(HttpRequest::Method::Post);
}

ListWorkspaceRoleUsersRequest::~ListWorkspaceRoleUsersRequest() {}

long ListWorkspaceRoleUsersRequest::getRoleId() const {
  return roleId_;
}

void ListWorkspaceRoleUsersRequest::setRoleId(long roleId) {
  roleId_ = roleId;
  setParameter(std::string("RoleId"), std::to_string(roleId));
}

std::string ListWorkspaceRoleUsersRequest::getAccessPoint() const {
  return accessPoint_;
}

void ListWorkspaceRoleUsersRequest::setAccessPoint(const std::string &accessPoint) {
  accessPoint_ = accessPoint;
  setParameter(std::string("AccessPoint"), accessPoint);
}

int ListWorkspaceRoleUsersRequest::getPageNum() const {
  return pageNum_;
}

void ListWorkspaceRoleUsersRequest::setPageNum(int pageNum) {
  pageNum_ = pageNum;
  setParameter(std::string("PageNum"), std::to_string(pageNum));
}

int ListWorkspaceRoleUsersRequest::getPageSize() const {
  return pageSize_;
}

void ListWorkspaceRoleUsersRequest::setPageSize(int pageSize) {
  pageSize_ = pageSize;
  setParameter(std::string("PageSize"), std::to_string(pageSize));
}

std::string ListWorkspaceRoleUsersRequest::getKeyword() const {
  return keyword_;
}

void ListWorkspaceRoleUsersRequest::setKeyword(const std::string &keyword) {
  keyword_ = keyword;
  setParameter(std::string("Keyword"), keyword);
}

std::string ListWorkspaceRoleUsersRequest::getSignType() const {
  return signType_;
}

void ListWorkspaceRoleUsersRequest::setSignType(const std::string &signType) {
  signType_ = signType;
  setParameter(std::string("SignType"), signType);
}

std::string ListWorkspaceRoleUsersRequest::getWorkspaceId() const {
  return workspaceId_;
}

void ListWorkspaceRoleUsersRequest::setWorkspaceId(const std::string &workspaceId) {
  workspaceId_ = workspaceId;
  setParameter(std::string("WorkspaceId"), workspaceId);
}

