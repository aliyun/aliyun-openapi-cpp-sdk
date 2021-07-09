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

#include <alibabacloud/devops-rdc/model/DeleteDevopsProjectMembersRequest.h>

using AlibabaCloud::Devops_rdc::Model::DeleteDevopsProjectMembersRequest;

DeleteDevopsProjectMembersRequest::DeleteDevopsProjectMembersRequest()
    : RpcServiceRequest("devops-rdc", "2020-03-03", "DeleteDevopsProjectMembers") {
  setMethod(HttpRequest::Method::Post);
}

DeleteDevopsProjectMembersRequest::~DeleteDevopsProjectMembersRequest() {}

std::string DeleteDevopsProjectMembersRequest::getUserIds() const {
  return userIds_;
}

void DeleteDevopsProjectMembersRequest::setUserIds(const std::string &userIds) {
  userIds_ = userIds;
  setBodyParameter(std::string("UserIds"), userIds);
}

std::string DeleteDevopsProjectMembersRequest::getProjectId() const {
  return projectId_;
}

void DeleteDevopsProjectMembersRequest::setProjectId(const std::string &projectId) {
  projectId_ = projectId;
  setBodyParameter(std::string("ProjectId"), projectId);
}

std::string DeleteDevopsProjectMembersRequest::getOrgId() const {
  return orgId_;
}

void DeleteDevopsProjectMembersRequest::setOrgId(const std::string &orgId) {
  orgId_ = orgId;
  setBodyParameter(std::string("OrgId"), orgId);
}

