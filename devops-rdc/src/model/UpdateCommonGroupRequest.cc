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

#include <alibabacloud/devops-rdc/model/UpdateCommonGroupRequest.h>

using AlibabaCloud::Devops_rdc::Model::UpdateCommonGroupRequest;

UpdateCommonGroupRequest::UpdateCommonGroupRequest()
    : RpcServiceRequest("devops-rdc", "2020-03-03", "UpdateCommonGroup") {
  setMethod(HttpRequest::Method::Post);
}

UpdateCommonGroupRequest::~UpdateCommonGroupRequest() {}

std::string UpdateCommonGroupRequest::getDescription() const {
  return description_;
}

void UpdateCommonGroupRequest::setDescription(const std::string &description) {
  description_ = description;
  setBodyParameter(std::string("Description"), description);
}

std::string UpdateCommonGroupRequest::getCommonGroupId() const {
  return commonGroupId_;
}

void UpdateCommonGroupRequest::setCommonGroupId(const std::string &commonGroupId) {
  commonGroupId_ = commonGroupId;
  setBodyParameter(std::string("CommonGroupId"), commonGroupId);
}

std::string UpdateCommonGroupRequest::getOrgId() const {
  return orgId_;
}

void UpdateCommonGroupRequest::setOrgId(const std::string &orgId) {
  orgId_ = orgId;
  setBodyParameter(std::string("OrgId"), orgId);
}

std::string UpdateCommonGroupRequest::getSmartGroupId() const {
  return smartGroupId_;
}

void UpdateCommonGroupRequest::setSmartGroupId(const std::string &smartGroupId) {
  smartGroupId_ = smartGroupId;
  setBodyParameter(std::string("SmartGroupId"), smartGroupId);
}

std::string UpdateCommonGroupRequest::getName() const {
  return name_;
}

void UpdateCommonGroupRequest::setName(const std::string &name) {
  name_ = name;
  setBodyParameter(std::string("Name"), name);
}

std::string UpdateCommonGroupRequest::getProjectId() const {
  return projectId_;
}

void UpdateCommonGroupRequest::setProjectId(const std::string &projectId) {
  projectId_ = projectId;
  setBodyParameter(std::string("ProjectId"), projectId);
}

