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

#include <alibabacloud/dataworks-public/model/CreateDataSourceRequest.h>

using AlibabaCloud::Dataworks_public::Model::CreateDataSourceRequest;

CreateDataSourceRequest::CreateDataSourceRequest()
    : RpcServiceRequest("dataworks-public", "2020-05-18", "CreateDataSource") {
  setMethod(HttpRequest::Method::Post);
}

CreateDataSourceRequest::~CreateDataSourceRequest() {}

std::string CreateDataSourceRequest::getDataSourceType() const {
  return dataSourceType_;
}

void CreateDataSourceRequest::setDataSourceType(const std::string &dataSourceType) {
  dataSourceType_ = dataSourceType;
  setParameter(std::string("DataSourceType"), dataSourceType);
}

std::string CreateDataSourceRequest::getDescription() const {
  return description_;
}

void CreateDataSourceRequest::setDescription(const std::string &description) {
  description_ = description;
  setParameter(std::string("Description"), description);
}

std::string CreateDataSourceRequest::getContent() const {
  return content_;
}

void CreateDataSourceRequest::setContent(const std::string &content) {
  content_ = content;
  setParameter(std::string("Content"), content);
}

std::string CreateDataSourceRequest::getSubType() const {
  return subType_;
}

void CreateDataSourceRequest::setSubType(const std::string &subType) {
  subType_ = subType;
  setParameter(std::string("SubType"), subType);
}

int CreateDataSourceRequest::getEnvType() const {
  return envType_;
}

void CreateDataSourceRequest::setEnvType(int envType) {
  envType_ = envType;
  setParameter(std::string("EnvType"), std::to_string(envType));
}

long CreateDataSourceRequest::getProjectId() const {
  return projectId_;
}

void CreateDataSourceRequest::setProjectId(long projectId) {
  projectId_ = projectId;
  setParameter(std::string("ProjectId"), std::to_string(projectId));
}

std::string CreateDataSourceRequest::getName() const {
  return name_;
}

void CreateDataSourceRequest::setName(const std::string &name) {
  name_ = name;
  setParameter(std::string("Name"), name);
}

