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

#include <alibabacloud/quickbi-public/model/AddWorkspaceUsersRequest.h>

using AlibabaCloud::Quickbi_public::Model::AddWorkspaceUsersRequest;

AddWorkspaceUsersRequest::AddWorkspaceUsersRequest()
    : RpcServiceRequest("quickbi-public", "2022-01-01", "AddWorkspaceUsers") {
  setMethod(HttpRequest::Method::Post);
}

AddWorkspaceUsersRequest::~AddWorkspaceUsersRequest() {}

long AddWorkspaceUsersRequest::getRoleId() const {
  return roleId_;
}

void AddWorkspaceUsersRequest::setRoleId(long roleId) {
  roleId_ = roleId;
  setParameter(std::string("RoleId"), std::to_string(roleId));
}

std::string AddWorkspaceUsersRequest::getAccessPoint() const {
  return accessPoint_;
}

void AddWorkspaceUsersRequest::setAccessPoint(const std::string &accessPoint) {
  accessPoint_ = accessPoint;
  setParameter(std::string("AccessPoint"), accessPoint);
}

std::string AddWorkspaceUsersRequest::getSignType() const {
  return signType_;
}

void AddWorkspaceUsersRequest::setSignType(const std::string &signType) {
  signType_ = signType;
  setParameter(std::string("SignType"), signType);
}

std::string AddWorkspaceUsersRequest::getUserIds() const {
  return userIds_;
}

void AddWorkspaceUsersRequest::setUserIds(const std::string &userIds) {
  userIds_ = userIds;
  setParameter(std::string("UserIds"), userIds);
}

std::string AddWorkspaceUsersRequest::getWorkspaceId() const {
  return workspaceId_;
}

void AddWorkspaceUsersRequest::setWorkspaceId(const std::string &workspaceId) {
  workspaceId_ = workspaceId;
  setParameter(std::string("WorkspaceId"), workspaceId);
}

