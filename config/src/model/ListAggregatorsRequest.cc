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

#include <alibabacloud/config/model/ListAggregatorsRequest.h>

using AlibabaCloud::Config::Model::ListAggregatorsRequest;

ListAggregatorsRequest::ListAggregatorsRequest()
    : RpcServiceRequest("config", "2020-09-07", "ListAggregators") {
  setMethod(HttpRequest::Method::Post);
}

ListAggregatorsRequest::~ListAggregatorsRequest() {}

std::string ListAggregatorsRequest::getNextToken() const {
  return nextToken_;
}

void ListAggregatorsRequest::setNextToken(const std::string &nextToken) {
  nextToken_ = nextToken;
  setParameter(std::string("NextToken"), nextToken);
}

int ListAggregatorsRequest::getMaxResults() const {
  return maxResults_;
}

void ListAggregatorsRequest::setMaxResults(int maxResults) {
  maxResults_ = maxResults;
  setParameter(std::string("MaxResults"), std::to_string(maxResults));
}

