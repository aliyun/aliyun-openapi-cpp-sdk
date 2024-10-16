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

#include <alibabacloud/gwlb/model/ListServerGroupServersRequest.h>

using AlibabaCloud::Gwlb::Model::ListServerGroupServersRequest;

ListServerGroupServersRequest::ListServerGroupServersRequest()
    : RpcServiceRequest("gwlb", "2024-04-15", "ListServerGroupServers") {
  setMethod(HttpRequest::Method::Post);
}

ListServerGroupServersRequest::~ListServerGroupServersRequest() {}

int ListServerGroupServersRequest::getSkip() const {
  return skip_;
}

void ListServerGroupServersRequest::setSkip(int skip) {
  skip_ = skip;
  setBodyParameter(std::string("Skip"), std::to_string(skip));
}

std::string ListServerGroupServersRequest::getServerGroupId() const {
  return serverGroupId_;
}

void ListServerGroupServersRequest::setServerGroupId(const std::string &serverGroupId) {
  serverGroupId_ = serverGroupId;
  setBodyParameter(std::string("ServerGroupId"), serverGroupId);
}

std::string ListServerGroupServersRequest::getNextToken() const {
  return nextToken_;
}

void ListServerGroupServersRequest::setNextToken(const std::string &nextToken) {
  nextToken_ = nextToken;
  setBodyParameter(std::string("NextToken"), nextToken);
}

std::vector<ListServerGroupServersRequest::std::string> ListServerGroupServersRequest::getServerIds() const {
  return serverIds_;
}

void ListServerGroupServersRequest::setServerIds(const std::vector<ListServerGroupServersRequest::std::string> &serverIds) {
  serverIds_ = serverIds;
  for(int dep1 = 0; dep1 != serverIds.size(); dep1++) {
    setBodyParameter(std::string("ServerIds") + "." + std::to_string(dep1 + 1), serverIds[dep1]);
  }
}

std::vector<ListServerGroupServersRequest::std::string> ListServerGroupServersRequest::getServerIps() const {
  return serverIps_;
}

void ListServerGroupServersRequest::setServerIps(const std::vector<ListServerGroupServersRequest::std::string> &serverIps) {
  serverIps_ = serverIps;
  for(int dep1 = 0; dep1 != serverIps.size(); dep1++) {
    setBodyParameter(std::string("ServerIps") + "." + std::to_string(dep1 + 1), serverIps[dep1]);
  }
}

int ListServerGroupServersRequest::getMaxResults() const {
  return maxResults_;
}

void ListServerGroupServersRequest::setMaxResults(int maxResults) {
  maxResults_ = maxResults;
  setBodyParameter(std::string("MaxResults"), std::to_string(maxResults));
}

