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

#include <alibabacloud/dataworks-public/model/CreateQualityEntityRequest.h>

using AlibabaCloud::Dataworks_public::Model::CreateQualityEntityRequest;

CreateQualityEntityRequest::CreateQualityEntityRequest()
    : RpcServiceRequest("dataworks-public", "2020-05-18", "CreateQualityEntity") {
  setMethod(HttpRequest::Method::Post);
}

CreateQualityEntityRequest::~CreateQualityEntityRequest() {}

std::string CreateQualityEntityRequest::getProjectName() const {
  return projectName_;
}

void CreateQualityEntityRequest::setProjectName(const std::string &projectName) {
  projectName_ = projectName;
  setBodyParameter(std::string("ProjectName"), projectName);
}

int CreateQualityEntityRequest::getEntityLevel() const {
  return entityLevel_;
}

void CreateQualityEntityRequest::setEntityLevel(int entityLevel) {
  entityLevel_ = entityLevel;
  setBodyParameter(std::string("EntityLevel"), std::to_string(entityLevel));
}

std::string CreateQualityEntityRequest::getMatchExpression() const {
  return matchExpression_;
}

void CreateQualityEntityRequest::setMatchExpression(const std::string &matchExpression) {
  matchExpression_ = matchExpression;
  setBodyParameter(std::string("MatchExpression"), matchExpression);
}

std::string CreateQualityEntityRequest::getEnvType() const {
  return envType_;
}

void CreateQualityEntityRequest::setEnvType(const std::string &envType) {
  envType_ = envType;
  setBodyParameter(std::string("EnvType"), envType);
}

std::string CreateQualityEntityRequest::getTableName() const {
  return tableName_;
}

void CreateQualityEntityRequest::setTableName(const std::string &tableName) {
  tableName_ = tableName;
  setBodyParameter(std::string("TableName"), tableName);
}

long CreateQualityEntityRequest::getProjectId() const {
  return projectId_;
}

void CreateQualityEntityRequest::setProjectId(long projectId) {
  projectId_ = projectId;
  setBodyParameter(std::string("ProjectId"), std::to_string(projectId));
}

