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

#include <alibabacloud/quickbi-public/model/ListApiDatasourceRequest.h>

using AlibabaCloud::Quickbi_public::Model::ListApiDatasourceRequest;

ListApiDatasourceRequest::ListApiDatasourceRequest()
    : RpcServiceRequest("quickbi-public", "2022-01-01", "ListApiDatasource") {
  setMethod(HttpRequest::Method::Post);
}

ListApiDatasourceRequest::~ListApiDatasourceRequest() {}

std::string ListApiDatasourceRequest::getAccessPoint() const {
  return accessPoint_;
}

void ListApiDatasourceRequest::setAccessPoint(const std::string &accessPoint) {
  accessPoint_ = accessPoint;
  setParameter(std::string("AccessPoint"), accessPoint);
}

int ListApiDatasourceRequest::getPageNum() const {
  return pageNum_;
}

void ListApiDatasourceRequest::setPageNum(int pageNum) {
  pageNum_ = pageNum;
  setParameter(std::string("PageNum"), std::to_string(pageNum));
}

int ListApiDatasourceRequest::getPageSize() const {
  return pageSize_;
}

void ListApiDatasourceRequest::setPageSize(int pageSize) {
  pageSize_ = pageSize;
  setParameter(std::string("PageSize"), std::to_string(pageSize));
}

std::string ListApiDatasourceRequest::getKeyWord() const {
  return keyWord_;
}

void ListApiDatasourceRequest::setKeyWord(const std::string &keyWord) {
  keyWord_ = keyWord;
  setParameter(std::string("KeyWord"), keyWord);
}

std::string ListApiDatasourceRequest::getSignType() const {
  return signType_;
}

void ListApiDatasourceRequest::setSignType(const std::string &signType) {
  signType_ = signType;
  setParameter(std::string("SignType"), signType);
}

std::string ListApiDatasourceRequest::getWorkspaceId() const {
  return workspaceId_;
}

void ListApiDatasourceRequest::setWorkspaceId(const std::string &workspaceId) {
  workspaceId_ = workspaceId;
  setParameter(std::string("WorkspaceId"), workspaceId);
}

