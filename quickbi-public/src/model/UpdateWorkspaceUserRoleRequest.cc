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

#include <alibabacloud/quickbi-public/model/UpdateWorkspaceUserRoleRequest.h>

using AlibabaCloud::Quickbi_public::Model::UpdateWorkspaceUserRoleRequest;

UpdateWorkspaceUserRoleRequest::UpdateWorkspaceUserRoleRequest()
    : RpcServiceRequest("quickbi-public", "2022-01-01", "UpdateWorkspaceUserRole") {
  setMethod(HttpRequest::Method::Post);
}

UpdateWorkspaceUserRoleRequest::~UpdateWorkspaceUserRoleRequest() {}

long UpdateWorkspaceUserRoleRequest::getRoleId() const {
  return roleId_;
}

void UpdateWorkspaceUserRoleRequest::setRoleId(long roleId) {
  roleId_ = roleId;
  setParameter(std::string("RoleId"), std::to_string(roleId));
}

std::string UpdateWorkspaceUserRoleRequest::getAccessPoint() const {
  return accessPoint_;
}

void UpdateWorkspaceUserRoleRequest::setAccessPoint(const std::string &accessPoint) {
  accessPoint_ = accessPoint;
  setParameter(std::string("AccessPoint"), accessPoint);
}

std::string UpdateWorkspaceUserRoleRequest::getUserId() const {
  return userId_;
}

void UpdateWorkspaceUserRoleRequest::setUserId(const std::string &userId) {
  userId_ = userId;
  setParameter(std::string("UserId"), userId);
}

std::string UpdateWorkspaceUserRoleRequest::getRoleIds() const {
  return roleIds_;
}

void UpdateWorkspaceUserRoleRequest::setRoleIds(const std::string &roleIds) {
  roleIds_ = roleIds;
  setParameter(std::string("RoleIds"), roleIds);
}

std::string UpdateWorkspaceUserRoleRequest::getSignType() const {
  return signType_;
}

void UpdateWorkspaceUserRoleRequest::setSignType(const std::string &signType) {
  signType_ = signType;
  setParameter(std::string("SignType"), signType);
}

std::string UpdateWorkspaceUserRoleRequest::getWorkspaceId() const {
  return workspaceId_;
}

void UpdateWorkspaceUserRoleRequest::setWorkspaceId(const std::string &workspaceId) {
  workspaceId_ = workspaceId;
  setParameter(std::string("WorkspaceId"), workspaceId);
}

