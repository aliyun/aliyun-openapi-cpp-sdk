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

#include <alibabacloud/quickbi-public/model/CreateWorkspaceRequest.h>

using AlibabaCloud::Quickbi_public::Model::CreateWorkspaceRequest;

CreateWorkspaceRequest::CreateWorkspaceRequest()
    : RpcServiceRequest("quickbi-public", "2022-01-01", "CreateWorkspace") {
  setMethod(HttpRequest::Method::Post);
}

CreateWorkspaceRequest::~CreateWorkspaceRequest() {}

bool CreateWorkspaceRequest::getAllowViewAll() const {
  return allowViewAll_;
}

void CreateWorkspaceRequest::setAllowViewAll(bool allowViewAll) {
  allowViewAll_ = allowViewAll;
  setParameter(std::string("AllowViewAll"), allowViewAll ? "true" : "false");
}

std::string CreateWorkspaceRequest::getAccessPoint() const {
  return accessPoint_;
}

void CreateWorkspaceRequest::setAccessPoint(const std::string &accessPoint) {
  accessPoint_ = accessPoint;
  setParameter(std::string("AccessPoint"), accessPoint);
}

std::string CreateWorkspaceRequest::getWorkspaceName() const {
  return workspaceName_;
}

void CreateWorkspaceRequest::setWorkspaceName(const std::string &workspaceName) {
  workspaceName_ = workspaceName;
  setParameter(std::string("WorkspaceName"), workspaceName);
}

std::string CreateWorkspaceRequest::getWorkspaceDescription() const {
  return workspaceDescription_;
}

void CreateWorkspaceRequest::setWorkspaceDescription(const std::string &workspaceDescription) {
  workspaceDescription_ = workspaceDescription;
  setParameter(std::string("WorkspaceDescription"), workspaceDescription);
}

bool CreateWorkspaceRequest::getOnlyAdminCreateDatasource() const {
  return onlyAdminCreateDatasource_;
}

void CreateWorkspaceRequest::setOnlyAdminCreateDatasource(bool onlyAdminCreateDatasource) {
  onlyAdminCreateDatasource_ = onlyAdminCreateDatasource;
  setParameter(std::string("OnlyAdminCreateDatasource"), onlyAdminCreateDatasource ? "true" : "false");
}

std::string CreateWorkspaceRequest::getSignType() const {
  return signType_;
}

void CreateWorkspaceRequest::setSignType(const std::string &signType) {
  signType_ = signType;
  setParameter(std::string("SignType"), signType);
}

bool CreateWorkspaceRequest::getAllowShare() const {
  return allowShare_;
}

void CreateWorkspaceRequest::setAllowShare(bool allowShare) {
  allowShare_ = allowShare;
  setParameter(std::string("AllowShare"), allowShare ? "true" : "false");
}

bool CreateWorkspaceRequest::getDefaultShareToAll() const {
  return defaultShareToAll_;
}

void CreateWorkspaceRequest::setDefaultShareToAll(bool defaultShareToAll) {
  defaultShareToAll_ = defaultShareToAll;
  setParameter(std::string("DefaultShareToAll"), defaultShareToAll ? "true" : "false");
}

bool CreateWorkspaceRequest::getAllowPublish() const {
  return allowPublish_;
}

void CreateWorkspaceRequest::setAllowPublish(bool allowPublish) {
  allowPublish_ = allowPublish;
  setParameter(std::string("AllowPublish"), allowPublish ? "true" : "false");
}

bool CreateWorkspaceRequest::getUseComment() const {
  return useComment_;
}

void CreateWorkspaceRequest::setUseComment(bool useComment) {
  useComment_ = useComment;
  setParameter(std::string("UseComment"), useComment ? "true" : "false");
}

