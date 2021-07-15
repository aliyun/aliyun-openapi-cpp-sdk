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

#include <alibabacloud/alb/model/ListTagKeysRequest.h>

using AlibabaCloud::Alb::Model::ListTagKeysRequest;

ListTagKeysRequest::ListTagKeysRequest()
    : RpcServiceRequest("alb", "2020-06-16", "ListTagKeys") {
  setMethod(HttpRequest::Method::Post);
}

ListTagKeysRequest::~ListTagKeysRequest() {}

std::string ListTagKeysRequest::getNextToken() const {
  return nextToken_;
}

void ListTagKeysRequest::setNextToken(const std::string &nextToken) {
  nextToken_ = nextToken;
  setParameter(std::string("NextToken"), nextToken);
}

std::string ListTagKeysRequest::getKeyword() const {
  return keyword_;
}

void ListTagKeysRequest::setKeyword(const std::string &keyword) {
  keyword_ = keyword;
  setParameter(std::string("Keyword"), keyword);
}

std::string ListTagKeysRequest::getResourceType() const {
  return resourceType_;
}

void ListTagKeysRequest::setResourceType(const std::string &resourceType) {
  resourceType_ = resourceType;
  setParameter(std::string("ResourceType"), resourceType);
}

int ListTagKeysRequest::getMaxResults() const {
  return maxResults_;
}

void ListTagKeysRequest::setMaxResults(int maxResults) {
  maxResults_ = maxResults;
  setParameter(std::string("MaxResults"), std::to_string(maxResults));
}

std::string ListTagKeysRequest::getCategory() const {
  return category_;
}

void ListTagKeysRequest::setCategory(const std::string &category) {
  category_ = category;
  setParameter(std::string("Category"), category);
}

