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

#include <alibabacloud/dataworks-public/model/ListLineageRequest.h>

using AlibabaCloud::Dataworks_public::Model::ListLineageRequest;

ListLineageRequest::ListLineageRequest()
    : RpcServiceRequest("dataworks-public", "2020-05-18", "ListLineage") {
  setMethod(HttpRequest::Method::Post);
}

ListLineageRequest::~ListLineageRequest() {}

std::string ListLineageRequest::getEntityQualifiedName() const {
  return entityQualifiedName_;
}

void ListLineageRequest::setEntityQualifiedName(const std::string &entityQualifiedName) {
  entityQualifiedName_ = entityQualifiedName;
  setParameter(std::string("EntityQualifiedName"), entityQualifiedName);
}

std::string ListLineageRequest::getNextToken() const {
  return nextToken_;
}

void ListLineageRequest::setNextToken(const std::string &nextToken) {
  nextToken_ = nextToken;
  setParameter(std::string("NextToken"), nextToken);
}

int ListLineageRequest::getPageSize() const {
  return pageSize_;
}

void ListLineageRequest::setPageSize(int pageSize) {
  pageSize_ = pageSize;
  setParameter(std::string("PageSize"), std::to_string(pageSize));
}

std::string ListLineageRequest::getKeyword() const {
  return keyword_;
}

void ListLineageRequest::setKeyword(const std::string &keyword) {
  keyword_ = keyword;
  setParameter(std::string("Keyword"), keyword);
}

std::string ListLineageRequest::getDirection() const {
  return direction_;
}

void ListLineageRequest::setDirection(const std::string &direction) {
  direction_ = direction;
  setParameter(std::string("Direction"), direction);
}

