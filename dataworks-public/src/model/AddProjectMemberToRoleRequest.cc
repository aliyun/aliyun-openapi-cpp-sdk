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

#include <alibabacloud/dataworks-public/model/AddProjectMemberToRoleRequest.h>

using AlibabaCloud::Dataworks_public::Model::AddProjectMemberToRoleRequest;

AddProjectMemberToRoleRequest::AddProjectMemberToRoleRequest()
    : RpcServiceRequest("dataworks-public", "2020-05-18", "AddProjectMemberToRole") {
  setMethod(HttpRequest::Method::Post);
}

AddProjectMemberToRoleRequest::~AddProjectMemberToRoleRequest() {}

std::string AddProjectMemberToRoleRequest::getRoleCode() const {
  return roleCode_;
}

void AddProjectMemberToRoleRequest::setRoleCode(const std::string &roleCode) {
  roleCode_ = roleCode;
  setParameter(std::string("RoleCode"), roleCode);
}

std::string AddProjectMemberToRoleRequest::getClientToken() const {
  return clientToken_;
}

void AddProjectMemberToRoleRequest::setClientToken(const std::string &clientToken) {
  clientToken_ = clientToken;
  setParameter(std::string("ClientToken"), clientToken);
}

std::string AddProjectMemberToRoleRequest::getUserId() const {
  return userId_;
}

void AddProjectMemberToRoleRequest::setUserId(const std::string &userId) {
  userId_ = userId;
  setParameter(std::string("UserId"), userId);
}

long AddProjectMemberToRoleRequest::getProjectId() const {
  return projectId_;
}

void AddProjectMemberToRoleRequest::setProjectId(long projectId) {
  projectId_ = projectId;
  setParameter(std::string("ProjectId"), std::to_string(projectId));
}

