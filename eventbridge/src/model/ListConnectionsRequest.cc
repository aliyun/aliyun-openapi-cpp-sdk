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

#include <alibabacloud/eventbridge/model/ListConnectionsRequest.h>

using AlibabaCloud::Eventbridge::Model::ListConnectionsRequest;

ListConnectionsRequest::ListConnectionsRequest()
    : RpcServiceRequest("eventbridge", "2020-04-01", "ListConnections") {
  setMethod(HttpRequest::Method::Post);
}

ListConnectionsRequest::~ListConnectionsRequest() {}

std::string ListConnectionsRequest::getConnectionNamePrefix() const {
  return connectionNamePrefix_;
}

void ListConnectionsRequest::setConnectionNamePrefix(const std::string &connectionNamePrefix) {
  connectionNamePrefix_ = connectionNamePrefix;
  setBodyParameter(std::string("ConnectionNamePrefix"), connectionNamePrefix);
}

std::string ListConnectionsRequest::getNextToken() const {
  return nextToken_;
}

void ListConnectionsRequest::setNextToken(const std::string &nextToken) {
  nextToken_ = nextToken;
  setBodyParameter(std::string("NextToken"), nextToken);
}

long ListConnectionsRequest::getMaxResults() const {
  return maxResults_;
}

void ListConnectionsRequest::setMaxResults(long maxResults) {
  maxResults_ = maxResults;
  setBodyParameter(std::string("MaxResults"), std::to_string(maxResults));
}

