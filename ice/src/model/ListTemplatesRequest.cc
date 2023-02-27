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

#include <alibabacloud/ice/model/ListTemplatesRequest.h>

using AlibabaCloud::ICE::Model::ListTemplatesRequest;

ListTemplatesRequest::ListTemplatesRequest()
    : RpcServiceRequest("ice", "2020-11-09", "ListTemplates") {
  setMethod(HttpRequest::Method::Post);
}

ListTemplatesRequest::~ListTemplatesRequest() {}

std::string ListTemplatesRequest::getSortType() const {
  return sortType_;
}

void ListTemplatesRequest::setSortType(const std::string &sortType) {
  sortType_ = sortType;
  setParameter(std::string("SortType"), sortType);
}

std::string ListTemplatesRequest::getType() const {
  return type_;
}

void ListTemplatesRequest::setType(const std::string &type) {
  type_ = type;
  setParameter(std::string("Type"), type);
}

std::string ListTemplatesRequest::getNextToken() const {
  return nextToken_;
}

void ListTemplatesRequest::setNextToken(const std::string &nextToken) {
  nextToken_ = nextToken;
  setParameter(std::string("NextToken"), nextToken);
}

long ListTemplatesRequest::getPageSize() const {
  return pageSize_;
}

void ListTemplatesRequest::setPageSize(long pageSize) {
  pageSize_ = pageSize;
  setParameter(std::string("PageSize"), std::to_string(pageSize));
}

std::string ListTemplatesRequest::getKeyword() const {
  return keyword_;
}

void ListTemplatesRequest::setKeyword(const std::string &keyword) {
  keyword_ = keyword;
  setParameter(std::string("Keyword"), keyword);
}

long ListTemplatesRequest::getPageNo() const {
  return pageNo_;
}

void ListTemplatesRequest::setPageNo(long pageNo) {
  pageNo_ = pageNo;
  setParameter(std::string("PageNo"), std::to_string(pageNo));
}

std::string ListTemplatesRequest::getCreateSource() const {
  return createSource_;
}

void ListTemplatesRequest::setCreateSource(const std::string &createSource) {
  createSource_ = createSource;
  setParameter(std::string("CreateSource"), createSource);
}

std::string ListTemplatesRequest::getStatus() const {
  return status_;
}

void ListTemplatesRequest::setStatus(const std::string &status) {
  status_ = status;
  setParameter(std::string("Status"), status);
}

