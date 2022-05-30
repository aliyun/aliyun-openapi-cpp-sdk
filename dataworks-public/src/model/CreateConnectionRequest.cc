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

#include <alibabacloud/dataworks-public/model/CreateConnectionRequest.h>

using AlibabaCloud::Dataworks_public::Model::CreateConnectionRequest;

CreateConnectionRequest::CreateConnectionRequest()
    : RpcServiceRequest("dataworks-public", "2020-05-18", "CreateConnection") {
  setMethod(HttpRequest::Method::Post);
}

CreateConnectionRequest::~CreateConnectionRequest() {}

std::string CreateConnectionRequest::getDescription() const {
  return description_;
}

void CreateConnectionRequest::setDescription(const std::string &description) {
  description_ = description;
  setParameter(std::string("Description"), description);
}

std::string CreateConnectionRequest::getContent() const {
  return content_;
}

void CreateConnectionRequest::setContent(const std::string &content) {
  content_ = content;
  setParameter(std::string("Content"), content);
}

std::string CreateConnectionRequest::getSubType() const {
  return subType_;
}

void CreateConnectionRequest::setSubType(const std::string &subType) {
  subType_ = subType;
  setParameter(std::string("SubType"), subType);
}

std::string CreateConnectionRequest::getName() const {
  return name_;
}

void CreateConnectionRequest::setName(const std::string &name) {
  name_ = name;
  setParameter(std::string("Name"), name);
}

int CreateConnectionRequest::getEnvType() const {
  return envType_;
}

void CreateConnectionRequest::setEnvType(int envType) {
  envType_ = envType;
  setParameter(std::string("EnvType"), std::to_string(envType));
}

std::string CreateConnectionRequest::getConnectionType() const {
  return connectionType_;
}

void CreateConnectionRequest::setConnectionType(const std::string &connectionType) {
  connectionType_ = connectionType;
  setParameter(std::string("ConnectionType"), connectionType);
}

long CreateConnectionRequest::getProjectId() const {
  return projectId_;
}

void CreateConnectionRequest::setProjectId(long projectId) {
  projectId_ = projectId;
  setParameter(std::string("ProjectId"), std::to_string(projectId));
}

