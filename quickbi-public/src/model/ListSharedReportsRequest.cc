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

#include <alibabacloud/quickbi-public/model/ListSharedReportsRequest.h>

using AlibabaCloud::Quickbi_public::Model::ListSharedReportsRequest;

ListSharedReportsRequest::ListSharedReportsRequest()
    : RpcServiceRequest("quickbi-public", "2022-01-01", "ListSharedReports") {
  setMethod(HttpRequest::Method::Post);
}

ListSharedReportsRequest::~ListSharedReportsRequest() {}

std::string ListSharedReportsRequest::getAccessPoint() const {
  return accessPoint_;
}

void ListSharedReportsRequest::setAccessPoint(const std::string &accessPoint) {
  accessPoint_ = accessPoint;
  setParameter(std::string("AccessPoint"), accessPoint);
}

std::string ListSharedReportsRequest::getUserId() const {
  return userId_;
}

void ListSharedReportsRequest::setUserId(const std::string &userId) {
  userId_ = userId;
  setParameter(std::string("UserId"), userId);
}

int ListSharedReportsRequest::getPageSize() const {
  return pageSize_;
}

void ListSharedReportsRequest::setPageSize(int pageSize) {
  pageSize_ = pageSize;
  setParameter(std::string("PageSize"), std::to_string(pageSize));
}

std::string ListSharedReportsRequest::getKeyword() const {
  return keyword_;
}

void ListSharedReportsRequest::setKeyword(const std::string &keyword) {
  keyword_ = keyword;
  setParameter(std::string("Keyword"), keyword);
}

std::string ListSharedReportsRequest::getSignType() const {
  return signType_;
}

void ListSharedReportsRequest::setSignType(const std::string &signType) {
  signType_ = signType;
  setParameter(std::string("SignType"), signType);
}

std::string ListSharedReportsRequest::getTreeType() const {
  return treeType_;
}

void ListSharedReportsRequest::setTreeType(const std::string &treeType) {
  treeType_ = treeType;
  setParameter(std::string("TreeType"), treeType);
}

