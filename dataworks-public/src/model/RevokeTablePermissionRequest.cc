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

#include <alibabacloud/dataworks-public/model/RevokeTablePermissionRequest.h>

using AlibabaCloud::Dataworks_public::Model::RevokeTablePermissionRequest;

RevokeTablePermissionRequest::RevokeTablePermissionRequest()
    : RpcServiceRequest("dataworks-public", "2020-05-18", "RevokeTablePermission") {
  setMethod(HttpRequest::Method::Post);
}

RevokeTablePermissionRequest::~RevokeTablePermissionRequest() {}

std::string RevokeTablePermissionRequest::getRevokeUserName() const {
  return revokeUserName_;
}

void RevokeTablePermissionRequest::setRevokeUserName(const std::string &revokeUserName) {
  revokeUserName_ = revokeUserName;
  setParameter(std::string("RevokeUserName"), revokeUserName);
}

std::string RevokeTablePermissionRequest::getMaxComputeProjectName() const {
  return maxComputeProjectName_;
}

void RevokeTablePermissionRequest::setMaxComputeProjectName(const std::string &maxComputeProjectName) {
  maxComputeProjectName_ = maxComputeProjectName;
  setParameter(std::string("MaxComputeProjectName"), maxComputeProjectName);
}

std::string RevokeTablePermissionRequest::getRevokeUserId() const {
  return revokeUserId_;
}

void RevokeTablePermissionRequest::setRevokeUserId(const std::string &revokeUserId) {
  revokeUserId_ = revokeUserId;
  setParameter(std::string("RevokeUserId"), revokeUserId);
}

std::string RevokeTablePermissionRequest::getTableName() const {
  return tableName_;
}

void RevokeTablePermissionRequest::setTableName(const std::string &tableName) {
  tableName_ = tableName;
  setParameter(std::string("TableName"), tableName);
}

std::string RevokeTablePermissionRequest::getActions() const {
  return actions_;
}

void RevokeTablePermissionRequest::setActions(const std::string &actions) {
  actions_ = actions;
  setParameter(std::string("Actions"), actions);
}

long RevokeTablePermissionRequest::getWorkspaceId() const {
  return workspaceId_;
}

void RevokeTablePermissionRequest::setWorkspaceId(long workspaceId) {
  workspaceId_ = workspaceId;
  setParameter(std::string("WorkspaceId"), std::to_string(workspaceId));
}

