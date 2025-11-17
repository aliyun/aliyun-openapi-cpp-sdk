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

#include <alibabacloud/quickbi-public/model/ListAccelerationOfWorkspaceRequest.h>

using AlibabaCloud::Quickbi_public::Model::ListAccelerationOfWorkspaceRequest;

ListAccelerationOfWorkspaceRequest::ListAccelerationOfWorkspaceRequest()
    : RpcServiceRequest("quickbi-public", "2022-01-01", "ListAccelerationOfWorkspace") {
  setMethod(HttpRequest::Method::Post);
}

ListAccelerationOfWorkspaceRequest::~ListAccelerationOfWorkspaceRequest() {}

std::string ListAccelerationOfWorkspaceRequest::getAccessPoint() const {
  return accessPoint_;
}

void ListAccelerationOfWorkspaceRequest::setAccessPoint(const std::string &accessPoint) {
  accessPoint_ = accessPoint;
  setParameter(std::string("AccessPoint"), accessPoint);
}

std::string ListAccelerationOfWorkspaceRequest::getCubeName() const {
  return cubeName_;
}

void ListAccelerationOfWorkspaceRequest::setCubeName(const std::string &cubeName) {
  cubeName_ = cubeName;
  setParameter(std::string("CubeName"), cubeName);
}

int ListAccelerationOfWorkspaceRequest::getPageSize() const {
  return pageSize_;
}

void ListAccelerationOfWorkspaceRequest::setPageSize(int pageSize) {
  pageSize_ = pageSize;
  setParameter(std::string("PageSize"), std::to_string(pageSize));
}

std::string ListAccelerationOfWorkspaceRequest::getCreatorId() const {
  return creatorId_;
}

void ListAccelerationOfWorkspaceRequest::setCreatorId(const std::string &creatorId) {
  creatorId_ = creatorId;
  setParameter(std::string("CreatorId"), creatorId);
}

std::string ListAccelerationOfWorkspaceRequest::getSignType() const {
  return signType_;
}

void ListAccelerationOfWorkspaceRequest::setSignType(const std::string &signType) {
  signType_ = signType;
  setParameter(std::string("SignType"), signType);
}

int ListAccelerationOfWorkspaceRequest::getPageNo() const {
  return pageNo_;
}

void ListAccelerationOfWorkspaceRequest::setPageNo(int pageNo) {
  pageNo_ = pageNo;
  setParameter(std::string("PageNo"), std::to_string(pageNo));
}

std::string ListAccelerationOfWorkspaceRequest::getWorkspaceId() const {
  return workspaceId_;
}

void ListAccelerationOfWorkspaceRequest::setWorkspaceId(const std::string &workspaceId) {
  workspaceId_ = workspaceId;
  setParameter(std::string("WorkspaceId"), workspaceId);
}

