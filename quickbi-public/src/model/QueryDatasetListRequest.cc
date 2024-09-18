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

#include <alibabacloud/quickbi-public/model/QueryDatasetListRequest.h>

using AlibabaCloud::Quickbi_public::Model::QueryDatasetListRequest;

QueryDatasetListRequest::QueryDatasetListRequest()
    : RpcServiceRequest("quickbi-public", "2022-01-01", "QueryDatasetList") {
  setMethod(HttpRequest::Method::Post);
}

QueryDatasetListRequest::~QueryDatasetListRequest() {}

std::string QueryDatasetListRequest::getAccessPoint() const {
  return accessPoint_;
}

void QueryDatasetListRequest::setAccessPoint(const std::string &accessPoint) {
  accessPoint_ = accessPoint;
  setParameter(std::string("AccessPoint"), accessPoint);
}

int QueryDatasetListRequest::getPageNum() const {
  return pageNum_;
}

void QueryDatasetListRequest::setPageNum(int pageNum) {
  pageNum_ = pageNum;
  setParameter(std::string("PageNum"), std::to_string(pageNum));
}

int QueryDatasetListRequest::getPageSize() const {
  return pageSize_;
}

void QueryDatasetListRequest::setPageSize(int pageSize) {
  pageSize_ = pageSize;
  setParameter(std::string("PageSize"), std::to_string(pageSize));
}

std::string QueryDatasetListRequest::getDirectoryId() const {
  return directoryId_;
}

void QueryDatasetListRequest::setDirectoryId(const std::string &directoryId) {
  directoryId_ = directoryId;
  setParameter(std::string("DirectoryId"), directoryId);
}

bool QueryDatasetListRequest::getWithChildren() const {
  return withChildren_;
}

void QueryDatasetListRequest::setWithChildren(bool withChildren) {
  withChildren_ = withChildren;
  setParameter(std::string("WithChildren"), withChildren ? "true" : "false");
}

std::string QueryDatasetListRequest::getKeyword() const {
  return keyword_;
}

void QueryDatasetListRequest::setKeyword(const std::string &keyword) {
  keyword_ = keyword;
  setParameter(std::string("Keyword"), keyword);
}

std::string QueryDatasetListRequest::getSignType() const {
  return signType_;
}

void QueryDatasetListRequest::setSignType(const std::string &signType) {
  signType_ = signType;
  setParameter(std::string("SignType"), signType);
}

std::string QueryDatasetListRequest::getWorkspaceId() const {
  return workspaceId_;
}

void QueryDatasetListRequest::setWorkspaceId(const std::string &workspaceId) {
  workspaceId_ = workspaceId;
  setParameter(std::string("WorkspaceId"), workspaceId);
}

