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

#include <alibabacloud/devops-rdc/model/InsertProjectMembersRequest.h>

using AlibabaCloud::Devops_rdc::Model::InsertProjectMembersRequest;

InsertProjectMembersRequest::InsertProjectMembersRequest()
    : RpcServiceRequest("devops-rdc", "2020-03-03", "InsertProjectMembers") {
  setMethod(HttpRequest::Method::Post);
}

InsertProjectMembersRequest::~InsertProjectMembersRequest() {}

std::string InsertProjectMembersRequest::getMembers() const {
  return members_;
}

void InsertProjectMembersRequest::setMembers(const std::string &members) {
  members_ = members;
  setBodyParameter(std::string("Members"), members);
}

std::string InsertProjectMembersRequest::getProjectId() const {
  return projectId_;
}

void InsertProjectMembersRequest::setProjectId(const std::string &projectId) {
  projectId_ = projectId;
  setBodyParameter(std::string("ProjectId"), projectId);
}

std::string InsertProjectMembersRequest::getOrgId() const {
  return orgId_;
}

void InsertProjectMembersRequest::setOrgId(const std::string &orgId) {
  orgId_ = orgId;
  setBodyParameter(std::string("OrgId"), orgId);
}

