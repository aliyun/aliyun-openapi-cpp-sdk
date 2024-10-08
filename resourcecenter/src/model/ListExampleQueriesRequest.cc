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

#include <alibabacloud/resourcecenter/model/ListExampleQueriesRequest.h>

using AlibabaCloud::ResourceCenter::Model::ListExampleQueriesRequest;

ListExampleQueriesRequest::ListExampleQueriesRequest()
    : RpcServiceRequest("resourcecenter", "2022-12-01", "ListExampleQueries") {
  setMethod(HttpRequest::Method::Post);
}

ListExampleQueriesRequest::~ListExampleQueriesRequest() {}

std::string ListExampleQueriesRequest::getNextToken() const {
  return nextToken_;
}

void ListExampleQueriesRequest::setNextToken(const std::string &nextToken) {
  nextToken_ = nextToken;
  setParameter(std::string("NextToken"), nextToken);
}

std::string ListExampleQueriesRequest::getMaxResults() const {
  return maxResults_;
}

void ListExampleQueriesRequest::setMaxResults(const std::string &maxResults) {
  maxResults_ = maxResults;
  setParameter(std::string("MaxResults"), maxResults);
}

