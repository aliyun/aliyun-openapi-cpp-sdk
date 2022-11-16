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

#include <alibabacloud/dataworks-public/model/CreateDataServiceGroupRequest.h>

using AlibabaCloud::Dataworks_public::Model::CreateDataServiceGroupRequest;

CreateDataServiceGroupRequest::CreateDataServiceGroupRequest()
    : RpcServiceRequest("dataworks-public", "2020-05-18", "CreateDataServiceGroup") {
  setMethod(HttpRequest::Method::Post);
}

CreateDataServiceGroupRequest::~CreateDataServiceGroupRequest() {}

std::string CreateDataServiceGroupRequest::getDescription() const {
  return description_;
}

void CreateDataServiceGroupRequest::setDescription(const std::string &description) {
  description_ = description;
  setBodyParameter(std::string("Description"), description);
}

std::string CreateDataServiceGroupRequest::getGroupName() const {
  return groupName_;
}

void CreateDataServiceGroupRequest::setGroupName(const std::string &groupName) {
  groupName_ = groupName;
  setBodyParameter(std::string("GroupName"), groupName);
}

std::string CreateDataServiceGroupRequest::getApiGatewayGroupId() const {
  return apiGatewayGroupId_;
}

void CreateDataServiceGroupRequest::setApiGatewayGroupId(const std::string &apiGatewayGroupId) {
  apiGatewayGroupId_ = apiGatewayGroupId;
  setBodyParameter(std::string("ApiGatewayGroupId"), apiGatewayGroupId);
}

long CreateDataServiceGroupRequest::getTenantId() const {
  return tenantId_;
}

void CreateDataServiceGroupRequest::setTenantId(long tenantId) {
  tenantId_ = tenantId;
  setBodyParameter(std::string("TenantId"), std::to_string(tenantId));
}

long CreateDataServiceGroupRequest::getProjectId() const {
  return projectId_;
}

void CreateDataServiceGroupRequest::setProjectId(long projectId) {
  projectId_ = projectId;
  setBodyParameter(std::string("ProjectId"), std::to_string(projectId));
}

