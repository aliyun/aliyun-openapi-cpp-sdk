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

#include <alibabacloud/quickbi-public/model/ListFavoriteReportsRequest.h>

using AlibabaCloud::Quickbi_public::Model::ListFavoriteReportsRequest;

ListFavoriteReportsRequest::ListFavoriteReportsRequest()
    : RpcServiceRequest("quickbi-public", "2022-01-01", "ListFavoriteReports") {
  setMethod(HttpRequest::Method::Post);
}

ListFavoriteReportsRequest::~ListFavoriteReportsRequest() {}

std::string ListFavoriteReportsRequest::getAccessPoint() const {
  return accessPoint_;
}

void ListFavoriteReportsRequest::setAccessPoint(const std::string &accessPoint) {
  accessPoint_ = accessPoint;
  setParameter(std::string("AccessPoint"), accessPoint);
}

std::string ListFavoriteReportsRequest::getUserId() const {
  return userId_;
}

void ListFavoriteReportsRequest::setUserId(const std::string &userId) {
  userId_ = userId;
  setParameter(std::string("UserId"), userId);
}

int ListFavoriteReportsRequest::getPageSize() const {
  return pageSize_;
}

void ListFavoriteReportsRequest::setPageSize(int pageSize) {
  pageSize_ = pageSize;
  setParameter(std::string("PageSize"), std::to_string(pageSize));
}

std::string ListFavoriteReportsRequest::getKeyword() const {
  return keyword_;
}

void ListFavoriteReportsRequest::setKeyword(const std::string &keyword) {
  keyword_ = keyword;
  setParameter(std::string("Keyword"), keyword);
}

std::string ListFavoriteReportsRequest::getSignType() const {
  return signType_;
}

void ListFavoriteReportsRequest::setSignType(const std::string &signType) {
  signType_ = signType;
  setParameter(std::string("SignType"), signType);
}

std::string ListFavoriteReportsRequest::getTreeType() const {
  return treeType_;
}

void ListFavoriteReportsRequest::setTreeType(const std::string &treeType) {
  treeType_ = treeType;
  setParameter(std::string("TreeType"), treeType);
}

