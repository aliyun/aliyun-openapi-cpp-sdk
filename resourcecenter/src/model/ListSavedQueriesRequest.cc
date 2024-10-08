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

#include <alibabacloud/resourcecenter/model/ListSavedQueriesRequest.h>

using AlibabaCloud::ResourceCenter::Model::ListSavedQueriesRequest;

ListSavedQueriesRequest::ListSavedQueriesRequest()
    : RpcServiceRequest("resourcecenter", "2022-12-01", "ListSavedQueries") {
  setMethod(HttpRequest::Method::Post);
}

ListSavedQueriesRequest::~ListSavedQueriesRequest() {}

std::string ListSavedQueriesRequest::getNextToken() const {
  return nextToken_;
}

void ListSavedQueriesRequest::setNextToken(const std::string &nextToken) {
  nextToken_ = nextToken;
  setParameter(std::string("NextToken"), nextToken);
}

std::string ListSavedQueriesRequest::getMaxResults() const {
  return maxResults_;
}

void ListSavedQueriesRequest::setMaxResults(const std::string &maxResults) {
  maxResults_ = maxResults;
  setParameter(std::string("MaxResults"), maxResults);
}

