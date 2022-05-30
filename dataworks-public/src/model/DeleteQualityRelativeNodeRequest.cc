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

#include <alibabacloud/dataworks-public/model/DeleteQualityRelativeNodeRequest.h>

using AlibabaCloud::Dataworks_public::Model::DeleteQualityRelativeNodeRequest;

DeleteQualityRelativeNodeRequest::DeleteQualityRelativeNodeRequest()
    : RpcServiceRequest("dataworks-public", "2020-05-18", "DeleteQualityRelativeNode") {
  setMethod(HttpRequest::Method::Post);
}

DeleteQualityRelativeNodeRequest::~DeleteQualityRelativeNodeRequest() {}

std::string DeleteQualityRelativeNodeRequest::getProjectName() const {
  return projectName_;
}

void DeleteQualityRelativeNodeRequest::setProjectName(const std::string &projectName) {
  projectName_ = projectName;
  setBodyParameter(std::string("ProjectName"), projectName);
}

long DeleteQualityRelativeNodeRequest::getTargetNodeProjectId() const {
  return targetNodeProjectId_;
}

void DeleteQualityRelativeNodeRequest::setTargetNodeProjectId(long targetNodeProjectId) {
  targetNodeProjectId_ = targetNodeProjectId;
  setBodyParameter(std::string("TargetNodeProjectId"), std::to_string(targetNodeProjectId));
}

std::string DeleteQualityRelativeNodeRequest::getMatchExpression() const {
  return matchExpression_;
}

void DeleteQualityRelativeNodeRequest::setMatchExpression(const std::string &matchExpression) {
  matchExpression_ = matchExpression;
  setBodyParameter(std::string("MatchExpression"), matchExpression);
}

std::string DeleteQualityRelativeNodeRequest::getEnvType() const {
  return envType_;
}

void DeleteQualityRelativeNodeRequest::setEnvType(const std::string &envType) {
  envType_ = envType;
  setBodyParameter(std::string("EnvType"), envType);
}

std::string DeleteQualityRelativeNodeRequest::getTargetNodeProjectName() const {
  return targetNodeProjectName_;
}

void DeleteQualityRelativeNodeRequest::setTargetNodeProjectName(const std::string &targetNodeProjectName) {
  targetNodeProjectName_ = targetNodeProjectName;
  setBodyParameter(std::string("TargetNodeProjectName"), targetNodeProjectName);
}

std::string DeleteQualityRelativeNodeRequest::getTableName() const {
  return tableName_;
}

void DeleteQualityRelativeNodeRequest::setTableName(const std::string &tableName) {
  tableName_ = tableName;
  setBodyParameter(std::string("TableName"), tableName);
}

long DeleteQualityRelativeNodeRequest::getNodeId() const {
  return nodeId_;
}

void DeleteQualityRelativeNodeRequest::setNodeId(long nodeId) {
  nodeId_ = nodeId;
  setBodyParameter(std::string("NodeId"), std::to_string(nodeId));
}

long DeleteQualityRelativeNodeRequest::getProjectId() const {
  return projectId_;
}

void DeleteQualityRelativeNodeRequest::setProjectId(long projectId) {
  projectId_ = projectId;
  setBodyParameter(std::string("ProjectId"), std::to_string(projectId));
}

