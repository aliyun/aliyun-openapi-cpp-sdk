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

#include <alibabacloud/quickbi-public/model/QueryReadableResourcesListByUserIdV2Request.h>

using AlibabaCloud::Quickbi_public::Model::QueryReadableResourcesListByUserIdV2Request;

QueryReadableResourcesListByUserIdV2Request::QueryReadableResourcesListByUserIdV2Request()
    : RpcServiceRequest("quickbi-public", "2022-01-01", "QueryReadableResourcesListByUserIdV2") {
  setMethod(HttpRequest::Method::Post);
}

QueryReadableResourcesListByUserIdV2Request::~QueryReadableResourcesListByUserIdV2Request() {}

std::string QueryReadableResourcesListByUserIdV2Request::getAccessPoint() const {
  return accessPoint_;
}

void QueryReadableResourcesListByUserIdV2Request::setAccessPoint(const std::string &accessPoint) {
  accessPoint_ = accessPoint;
  setParameter(std::string("AccessPoint"), accessPoint);
}

std::string QueryReadableResourcesListByUserIdV2Request::getUserId() const {
  return userId_;
}

void QueryReadableResourcesListByUserIdV2Request::setUserId(const std::string &userId) {
  userId_ = userId;
  setParameter(std::string("UserId"), userId);
}

std::string QueryReadableResourcesListByUserIdV2Request::getWorkType() const {
  return workType_;
}

void QueryReadableResourcesListByUserIdV2Request::setWorkType(const std::string &workType) {
  workType_ = workType;
  setParameter(std::string("WorkType"), workType);
}

std::string QueryReadableResourcesListByUserIdV2Request::getSignType() const {
  return signType_;
}

void QueryReadableResourcesListByUserIdV2Request::setSignType(const std::string &signType) {
  signType_ = signType;
  setParameter(std::string("SignType"), signType);
}

std::string QueryReadableResourcesListByUserIdV2Request::getWorkspaceId() const {
  return workspaceId_;
}

void QueryReadableResourcesListByUserIdV2Request::setWorkspaceId(const std::string &workspaceId) {
  workspaceId_ = workspaceId;
  setParameter(std::string("WorkspaceId"), workspaceId);
}

