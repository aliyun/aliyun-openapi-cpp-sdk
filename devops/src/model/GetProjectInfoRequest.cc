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

#include <alibabacloud/devops/model/GetProjectInfoRequest.h>

using AlibabaCloud::Devops::Model::GetProjectInfoRequest;

GetProjectInfoRequest::GetProjectInfoRequest()
    : RoaServiceRequest("devops", "2021-06-25") {
  setResourcePath("/organization/[organizationId]/project/[projectId]"};
  setMethod(HttpRequest::Method::Get);
}

GetProjectInfoRequest::~GetProjectInfoRequest() {}

std::string GetProjectInfoRequest::getOrganizationId() const {
  return organizationId_;
}

void GetProjectInfoRequest::setOrganizationId(const std::string &organizationId) {
  organizationId_ = organizationId;
  setParameter(std::string("organizationId"), organizationId);
}

std::string GetProjectInfoRequest::getProjectId() const {
  return projectId_;
}

void GetProjectInfoRequest::setProjectId(const std::string &projectId) {
  projectId_ = projectId;
  setParameter(std::string("projectId"), projectId);
}

