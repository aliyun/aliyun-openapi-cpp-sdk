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

#include <alibabacloud/devops/model/CreateVariableGroupRequest.h>

using AlibabaCloud::Devops::Model::CreateVariableGroupRequest;

CreateVariableGroupRequest::CreateVariableGroupRequest()
    : RoaServiceRequest("devops", "2021-06-25") {
  setResourcePath("/organization/[organizationId]/variableGroups"};
  setMethod(HttpRequest::Method::Post);
}

CreateVariableGroupRequest::~CreateVariableGroupRequest() {}

std::string CreateVariableGroupRequest::getVariables() const {
  return variables_;
}

void CreateVariableGroupRequest::setVariables(const std::string &variables) {
  variables_ = variables;
  setBodyParameter(std::string("variables"), variables);
}

std::string CreateVariableGroupRequest::getDescription() const {
  return description_;
}

void CreateVariableGroupRequest::setDescription(const std::string &description) {
  description_ = description;
  setBodyParameter(std::string("description"), description);
}

std::string CreateVariableGroupRequest::getOrganizationId() const {
  return organizationId_;
}

void CreateVariableGroupRequest::setOrganizationId(const std::string &organizationId) {
  organizationId_ = organizationId;
  setParameter(std::string("organizationId"), organizationId);
}

std::string CreateVariableGroupRequest::getName() const {
  return name_;
}

void CreateVariableGroupRequest::setName(const std::string &name) {
  name_ = name;
  setBodyParameter(std::string("name"), name);
}

