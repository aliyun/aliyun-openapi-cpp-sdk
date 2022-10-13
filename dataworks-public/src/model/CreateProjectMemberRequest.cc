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

#include <alibabacloud/dataworks-public/model/CreateProjectMemberRequest.h>

using AlibabaCloud::Dataworks_public::Model::CreateProjectMemberRequest;

CreateProjectMemberRequest::CreateProjectMemberRequest()
    : RpcServiceRequest("dataworks-public", "2020-05-18", "CreateProjectMember") {
  setMethod(HttpRequest::Method::Post);
}

CreateProjectMemberRequest::~CreateProjectMemberRequest() {}

std::string CreateProjectMemberRequest::getRoleCode() const {
  return roleCode_;
}

void CreateProjectMemberRequest::setRoleCode(const std::string &roleCode) {
  roleCode_ = roleCode;
  setParameter(std::string("RoleCode"), roleCode);
}

std::string CreateProjectMemberRequest::getClientToken() const {
  return clientToken_;
}

void CreateProjectMemberRequest::setClientToken(const std::string &clientToken) {
  clientToken_ = clientToken;
  setParameter(std::string("ClientToken"), clientToken);
}

std::string CreateProjectMemberRequest::getUserId() const {
  return userId_;
}

void CreateProjectMemberRequest::setUserId(const std::string &userId) {
  userId_ = userId;
  setParameter(std::string("UserId"), userId);
}

long CreateProjectMemberRequest::getProjectId() const {
  return projectId_;
}

void CreateProjectMemberRequest::setProjectId(long projectId) {
  projectId_ = projectId;
  setParameter(std::string("ProjectId"), std::to_string(projectId));
}

