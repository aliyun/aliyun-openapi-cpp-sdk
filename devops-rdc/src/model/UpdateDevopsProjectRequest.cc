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

#include <alibabacloud/devops-rdc/model/UpdateDevopsProjectRequest.h>

using AlibabaCloud::Devops_rdc::Model::UpdateDevopsProjectRequest;

UpdateDevopsProjectRequest::UpdateDevopsProjectRequest()
    : RpcServiceRequest("devops-rdc", "2020-03-03", "UpdateDevopsProject") {
  setMethod(HttpRequest::Method::Post);
}

UpdateDevopsProjectRequest::~UpdateDevopsProjectRequest() {}

std::string UpdateDevopsProjectRequest::getName() const {
  return name_;
}

void UpdateDevopsProjectRequest::setName(const std::string &name) {
  name_ = name;
  setBodyParameter(std::string("Name"), name);
}

std::string UpdateDevopsProjectRequest::getDescription() const {
  return description_;
}

void UpdateDevopsProjectRequest::setDescription(const std::string &description) {
  description_ = description;
  setBodyParameter(std::string("Description"), description);
}

std::string UpdateDevopsProjectRequest::getProjectId() const {
  return projectId_;
}

void UpdateDevopsProjectRequest::setProjectId(const std::string &projectId) {
  projectId_ = projectId;
  setBodyParameter(std::string("ProjectId"), projectId);
}

std::string UpdateDevopsProjectRequest::getOrgId() const {
  return orgId_;
}

void UpdateDevopsProjectRequest::setOrgId(const std::string &orgId) {
  orgId_ = orgId;
  setBodyParameter(std::string("OrgId"), orgId);
}

