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

#include <alibabacloud/dataworks-public/model/DeleteQualityEntityRequest.h>

using AlibabaCloud::Dataworks_public::Model::DeleteQualityEntityRequest;

DeleteQualityEntityRequest::DeleteQualityEntityRequest()
    : RpcServiceRequest("dataworks-public", "2020-05-18", "DeleteQualityEntity") {
  setMethod(HttpRequest::Method::Post);
}

DeleteQualityEntityRequest::~DeleteQualityEntityRequest() {}

std::string DeleteQualityEntityRequest::getProjectName() const {
  return projectName_;
}

void DeleteQualityEntityRequest::setProjectName(const std::string &projectName) {
  projectName_ = projectName;
  setBodyParameter(std::string("ProjectName"), projectName);
}

long DeleteQualityEntityRequest::getEntityId() const {
  return entityId_;
}

void DeleteQualityEntityRequest::setEntityId(long entityId) {
  entityId_ = entityId;
  setBodyParameter(std::string("EntityId"), std::to_string(entityId));
}

std::string DeleteQualityEntityRequest::getEnvType() const {
  return envType_;
}

void DeleteQualityEntityRequest::setEnvType(const std::string &envType) {
  envType_ = envType;
  setBodyParameter(std::string("EnvType"), envType);
}

long DeleteQualityEntityRequest::getProjectId() const {
  return projectId_;
}

void DeleteQualityEntityRequest::setProjectId(long projectId) {
  projectId_ = projectId;
  setBodyParameter(std::string("ProjectId"), std::to_string(projectId));
}

