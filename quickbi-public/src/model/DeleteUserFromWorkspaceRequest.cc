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

#include <alibabacloud/quickbi-public/model/DeleteUserFromWorkspaceRequest.h>

using AlibabaCloud::Quickbi_public::Model::DeleteUserFromWorkspaceRequest;

DeleteUserFromWorkspaceRequest::DeleteUserFromWorkspaceRequest()
    : RpcServiceRequest("quickbi-public", "2022-01-01", "DeleteUserFromWorkspace") {
  setMethod(HttpRequest::Method::Post);
}

DeleteUserFromWorkspaceRequest::~DeleteUserFromWorkspaceRequest() {}

std::string DeleteUserFromWorkspaceRequest::getAccessPoint() const {
  return accessPoint_;
}

void DeleteUserFromWorkspaceRequest::setAccessPoint(const std::string &accessPoint) {
  accessPoint_ = accessPoint;
  setParameter(std::string("AccessPoint"), accessPoint);
}

std::string DeleteUserFromWorkspaceRequest::getUserId() const {
  return userId_;
}

void DeleteUserFromWorkspaceRequest::setUserId(const std::string &userId) {
  userId_ = userId;
  setParameter(std::string("UserId"), userId);
}

std::string DeleteUserFromWorkspaceRequest::getSignType() const {
  return signType_;
}

void DeleteUserFromWorkspaceRequest::setSignType(const std::string &signType) {
  signType_ = signType;
  setParameter(std::string("SignType"), signType);
}

std::string DeleteUserFromWorkspaceRequest::getWorkspaceId() const {
  return workspaceId_;
}

void DeleteUserFromWorkspaceRequest::setWorkspaceId(const std::string &workspaceId) {
  workspaceId_ = workspaceId;
  setParameter(std::string("WorkspaceId"), workspaceId);
}

