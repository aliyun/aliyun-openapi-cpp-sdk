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

#include <alibabacloud/quickbi-public/model/QueryUserRoleInfoInWorkspaceRequest.h>

using AlibabaCloud::Quickbi_public::Model::QueryUserRoleInfoInWorkspaceRequest;

QueryUserRoleInfoInWorkspaceRequest::QueryUserRoleInfoInWorkspaceRequest()
    : RpcServiceRequest("quickbi-public", "2022-01-01", "QueryUserRoleInfoInWorkspace") {
  setMethod(HttpRequest::Method::Post);
}

QueryUserRoleInfoInWorkspaceRequest::~QueryUserRoleInfoInWorkspaceRequest() {}

std::string QueryUserRoleInfoInWorkspaceRequest::getAccessPoint() const {
  return accessPoint_;
}

void QueryUserRoleInfoInWorkspaceRequest::setAccessPoint(const std::string &accessPoint) {
  accessPoint_ = accessPoint;
  setParameter(std::string("AccessPoint"), accessPoint);
}

std::string QueryUserRoleInfoInWorkspaceRequest::getUserId() const {
  return userId_;
}

void QueryUserRoleInfoInWorkspaceRequest::setUserId(const std::string &userId) {
  userId_ = userId;
  setParameter(std::string("UserId"), userId);
}

std::string QueryUserRoleInfoInWorkspaceRequest::getSignType() const {
  return signType_;
}

void QueryUserRoleInfoInWorkspaceRequest::setSignType(const std::string &signType) {
  signType_ = signType;
  setParameter(std::string("SignType"), signType);
}

std::string QueryUserRoleInfoInWorkspaceRequest::getWorkspaceId() const {
  return workspaceId_;
}

void QueryUserRoleInfoInWorkspaceRequest::setWorkspaceId(const std::string &workspaceId) {
  workspaceId_ = workspaceId;
  setParameter(std::string("WorkspaceId"), workspaceId);
}

