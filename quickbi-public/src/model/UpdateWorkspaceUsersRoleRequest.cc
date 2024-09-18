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

#include <alibabacloud/quickbi-public/model/UpdateWorkspaceUsersRoleRequest.h>

using AlibabaCloud::Quickbi_public::Model::UpdateWorkspaceUsersRoleRequest;

UpdateWorkspaceUsersRoleRequest::UpdateWorkspaceUsersRoleRequest()
    : RpcServiceRequest("quickbi-public", "2022-01-01", "UpdateWorkspaceUsersRole") {
  setMethod(HttpRequest::Method::Post);
}

UpdateWorkspaceUsersRoleRequest::~UpdateWorkspaceUsersRoleRequest() {}

long UpdateWorkspaceUsersRoleRequest::getRoleId() const {
  return roleId_;
}

void UpdateWorkspaceUsersRoleRequest::setRoleId(long roleId) {
  roleId_ = roleId;
  setParameter(std::string("RoleId"), std::to_string(roleId));
}

std::string UpdateWorkspaceUsersRoleRequest::getAccessPoint() const {
  return accessPoint_;
}

void UpdateWorkspaceUsersRoleRequest::setAccessPoint(const std::string &accessPoint) {
  accessPoint_ = accessPoint;
  setParameter(std::string("AccessPoint"), accessPoint);
}

std::string UpdateWorkspaceUsersRoleRequest::getSignType() const {
  return signType_;
}

void UpdateWorkspaceUsersRoleRequest::setSignType(const std::string &signType) {
  signType_ = signType;
  setParameter(std::string("SignType"), signType);
}

std::string UpdateWorkspaceUsersRoleRequest::getUserIds() const {
  return userIds_;
}

void UpdateWorkspaceUsersRoleRequest::setUserIds(const std::string &userIds) {
  userIds_ = userIds;
  setParameter(std::string("UserIds"), userIds);
}

std::string UpdateWorkspaceUsersRoleRequest::getWorkspaceId() const {
  return workspaceId_;
}

void UpdateWorkspaceUsersRoleRequest::setWorkspaceId(const std::string &workspaceId) {
  workspaceId_ = workspaceId;
  setParameter(std::string("WorkspaceId"), workspaceId);
}

