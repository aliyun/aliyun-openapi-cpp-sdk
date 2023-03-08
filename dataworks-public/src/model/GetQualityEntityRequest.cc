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

#include <alibabacloud/dataworks-public/model/GetQualityEntityRequest.h>

using AlibabaCloud::Dataworks_public::Model::GetQualityEntityRequest;

GetQualityEntityRequest::GetQualityEntityRequest()
    : RpcServiceRequest("dataworks-public", "2020-05-18", "GetQualityEntity") {
  setMethod(HttpRequest::Method::Post);
}

GetQualityEntityRequest::~GetQualityEntityRequest() {}

std::string GetQualityEntityRequest::getProjectName() const {
  return projectName_;
}

void GetQualityEntityRequest::setProjectName(const std::string &projectName) {
  projectName_ = projectName;
  setBodyParameter(std::string("ProjectName"), projectName);
}

std::string GetQualityEntityRequest::getMatchExpression() const {
  return matchExpression_;
}

void GetQualityEntityRequest::setMatchExpression(const std::string &matchExpression) {
  matchExpression_ = matchExpression;
  setBodyParameter(std::string("MatchExpression"), matchExpression);
}

std::string GetQualityEntityRequest::getEnvType() const {
  return envType_;
}

void GetQualityEntityRequest::setEnvType(const std::string &envType) {
  envType_ = envType;
  setBodyParameter(std::string("EnvType"), envType);
}

std::string GetQualityEntityRequest::getTableName() const {
  return tableName_;
}

void GetQualityEntityRequest::setTableName(const std::string &tableName) {
  tableName_ = tableName;
  setBodyParameter(std::string("TableName"), tableName);
}

long GetQualityEntityRequest::getProjectId() const {
  return projectId_;
}

void GetQualityEntityRequest::setProjectId(long projectId) {
  projectId_ = projectId;
  setBodyParameter(std::string("ProjectId"), std::to_string(projectId));
}

