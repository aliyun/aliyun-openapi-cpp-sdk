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

#include <alibabacloud/dataworks-public/model/RevokeColumnPermissionRequest.h>

using AlibabaCloud::Dataworks_public::Model::RevokeColumnPermissionRequest;

RevokeColumnPermissionRequest::RevokeColumnPermissionRequest()
    : RpcServiceRequest("dataworks-public", "2020-05-18", "RevokeColumnPermission") {
  setMethod(HttpRequest::Method::Post);
}

RevokeColumnPermissionRequest::~RevokeColumnPermissionRequest() {}

std::string RevokeColumnPermissionRequest::getRevokeUserName() const {
  return revokeUserName_;
}

void RevokeColumnPermissionRequest::setRevokeUserName(const std::string &revokeUserName) {
  revokeUserName_ = revokeUserName;
  setParameter(std::string("RevokeUserName"), revokeUserName);
}

std::string RevokeColumnPermissionRequest::getMaxComputeProjectName() const {
  return maxComputeProjectName_;
}

void RevokeColumnPermissionRequest::setMaxComputeProjectName(const std::string &maxComputeProjectName) {
  maxComputeProjectName_ = maxComputeProjectName;
  setParameter(std::string("MaxComputeProjectName"), maxComputeProjectName);
}

std::string RevokeColumnPermissionRequest::getColumns() const {
  return columns_;
}

void RevokeColumnPermissionRequest::setColumns(const std::string &columns) {
  columns_ = columns;
  setParameter(std::string("Columns"), columns);
}

std::string RevokeColumnPermissionRequest::getRevokeUserId() const {
  return revokeUserId_;
}

void RevokeColumnPermissionRequest::setRevokeUserId(const std::string &revokeUserId) {
  revokeUserId_ = revokeUserId;
  setParameter(std::string("RevokeUserId"), revokeUserId);
}

std::string RevokeColumnPermissionRequest::getTableName() const {
  return tableName_;
}

void RevokeColumnPermissionRequest::setTableName(const std::string &tableName) {
  tableName_ = tableName;
  setParameter(std::string("TableName"), tableName);
}

long RevokeColumnPermissionRequest::getWorkspaceId() const {
  return workspaceId_;
}

void RevokeColumnPermissionRequest::setWorkspaceId(long workspaceId) {
  workspaceId_ = workspaceId;
  setParameter(std::string("WorkspaceId"), std::to_string(workspaceId));
}

