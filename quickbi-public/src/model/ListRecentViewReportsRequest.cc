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

#include <alibabacloud/quickbi-public/model/ListRecentViewReportsRequest.h>

using AlibabaCloud::Quickbi_public::Model::ListRecentViewReportsRequest;

ListRecentViewReportsRequest::ListRecentViewReportsRequest()
    : RpcServiceRequest("quickbi-public", "2022-01-01", "ListRecentViewReports") {
  setMethod(HttpRequest::Method::Post);
}

ListRecentViewReportsRequest::~ListRecentViewReportsRequest() {}

std::string ListRecentViewReportsRequest::getAccessPoint() const {
  return accessPoint_;
}

void ListRecentViewReportsRequest::setAccessPoint(const std::string &accessPoint) {
  accessPoint_ = accessPoint;
  setParameter(std::string("AccessPoint"), accessPoint);
}

int ListRecentViewReportsRequest::getOffsetDay() const {
  return offsetDay_;
}

void ListRecentViewReportsRequest::setOffsetDay(int offsetDay) {
  offsetDay_ = offsetDay;
  setParameter(std::string("OffsetDay"), std::to_string(offsetDay));
}

std::string ListRecentViewReportsRequest::getUserId() const {
  return userId_;
}

void ListRecentViewReportsRequest::setUserId(const std::string &userId) {
  userId_ = userId;
  setParameter(std::string("UserId"), userId);
}

int ListRecentViewReportsRequest::getPageSize() const {
  return pageSize_;
}

void ListRecentViewReportsRequest::setPageSize(int pageSize) {
  pageSize_ = pageSize;
  setParameter(std::string("PageSize"), std::to_string(pageSize));
}

std::string ListRecentViewReportsRequest::getKeyword() const {
  return keyword_;
}

void ListRecentViewReportsRequest::setKeyword(const std::string &keyword) {
  keyword_ = keyword;
  setParameter(std::string("Keyword"), keyword);
}

std::string ListRecentViewReportsRequest::getSignType() const {
  return signType_;
}

void ListRecentViewReportsRequest::setSignType(const std::string &signType) {
  signType_ = signType;
  setParameter(std::string("SignType"), signType);
}

std::string ListRecentViewReportsRequest::getQueryMode() const {
  return queryMode_;
}

void ListRecentViewReportsRequest::setQueryMode(const std::string &queryMode) {
  queryMode_ = queryMode;
  setParameter(std::string("QueryMode"), queryMode);
}

std::string ListRecentViewReportsRequest::getTreeType() const {
  return treeType_;
}

void ListRecentViewReportsRequest::setTreeType(const std::string &treeType) {
  treeType_ = treeType;
  setParameter(std::string("TreeType"), treeType);
}

