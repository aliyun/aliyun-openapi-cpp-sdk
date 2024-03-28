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

#include <alibabacloud/devops/model/UpdateProjectMemberRequest.h>

using AlibabaCloud::Devops::Model::UpdateProjectMemberRequest;

UpdateProjectMemberRequest::UpdateProjectMemberRequest()
    : RoaServiceRequest("devops", "2021-06-25") {
  setResourcePath("/organization/[organizationId]/projects/[projectId]/updateMember"};
  setMethod(HttpRequest::Method::Post);
}

UpdateProjectMemberRequest::~UpdateProjectMemberRequest() {}

UpdateProjectMemberRequest::body UpdateProjectMemberRequest::getBody() const {
  return body_;
}

void UpdateProjectMemberRequest::setBody(const UpdateProjectMemberRequest::body &body) {
  body_ = body;
  setBodyParameter(std::string("body") + ".targetType", body.targetType);
  setBodyParameter(std::string("body") + ".roleIdentifier", body.roleIdentifier);
  setBodyParameter(std::string("body") + ".userType", body.userType);
  setBodyParameter(std::string("body") + ".userIdentifier", body.userIdentifier);
  setBodyParameter(std::string("body") + ".targetIdentifier", body.targetIdentifier);
}

std::string UpdateProjectMemberRequest::getOrganizationId() const {
  return organizationId_;
}

void UpdateProjectMemberRequest::setOrganizationId(const std::string &organizationId) {
  organizationId_ = organizationId;
  setParameter(std::string("organizationId"), organizationId);
}

std::string UpdateProjectMemberRequest::getProjectId() const {
  return projectId_;
}

void UpdateProjectMemberRequest::setProjectId(const std::string &projectId) {
  projectId_ = projectId;
  setParameter(std::string("projectId"), projectId);
}

