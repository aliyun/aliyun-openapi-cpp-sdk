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

#include <alibabacloud/dataworks-public/model/SetDataSourceShareRequest.h>

using AlibabaCloud::Dataworks_public::Model::SetDataSourceShareRequest;

SetDataSourceShareRequest::SetDataSourceShareRequest()
    : RpcServiceRequest("dataworks-public", "2020-05-18", "SetDataSourceShare") {
  setMethod(HttpRequest::Method::Post);
}

SetDataSourceShareRequest::~SetDataSourceShareRequest() {}

std::string SetDataSourceShareRequest::getProjectPermissions() const {
  return projectPermissions_;
}

void SetDataSourceShareRequest::setProjectPermissions(const std::string &projectPermissions) {
  projectPermissions_ = projectPermissions;
  setParameter(std::string("ProjectPermissions"), projectPermissions);
}

std::string SetDataSourceShareRequest::getDatasourceName() const {
  return datasourceName_;
}

void SetDataSourceShareRequest::setDatasourceName(const std::string &datasourceName) {
  datasourceName_ = datasourceName;
  setParameter(std::string("DatasourceName"), datasourceName);
}

std::string SetDataSourceShareRequest::getUserPermissions() const {
  return userPermissions_;
}

void SetDataSourceShareRequest::setUserPermissions(const std::string &userPermissions) {
  userPermissions_ = userPermissions;
  setParameter(std::string("UserPermissions"), userPermissions);
}

std::string SetDataSourceShareRequest::getEnvType() const {
  return envType_;
}

void SetDataSourceShareRequest::setEnvType(const std::string &envType) {
  envType_ = envType;
  setParameter(std::string("EnvType"), envType);
}

long SetDataSourceShareRequest::getProjectId() const {
  return projectId_;
}

void SetDataSourceShareRequest::setProjectId(long projectId) {
  projectId_ = projectId;
  setParameter(std::string("ProjectId"), std::to_string(projectId));
}

