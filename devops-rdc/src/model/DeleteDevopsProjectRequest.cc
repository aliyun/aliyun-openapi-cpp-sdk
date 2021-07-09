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

#include <alibabacloud/devops-rdc/model/DeleteDevopsProjectRequest.h>

using AlibabaCloud::Devops_rdc::Model::DeleteDevopsProjectRequest;

DeleteDevopsProjectRequest::DeleteDevopsProjectRequest()
    : RpcServiceRequest("devops-rdc", "2020-03-03", "DeleteDevopsProject") {
  setMethod(HttpRequest::Method::Post);
}

DeleteDevopsProjectRequest::~DeleteDevopsProjectRequest() {}

std::string DeleteDevopsProjectRequest::getProjectId() const {
  return projectId_;
}

void DeleteDevopsProjectRequest::setProjectId(const std::string &projectId) {
  projectId_ = projectId;
  setBodyParameter(std::string("ProjectId"), projectId);
}

std::string DeleteDevopsProjectRequest::getOrgId() const {
  return orgId_;
}

void DeleteDevopsProjectRequest::setOrgId(const std::string &orgId) {
  orgId_ = orgId;
  setBodyParameter(std::string("OrgId"), orgId);
}

