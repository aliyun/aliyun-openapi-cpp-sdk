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

#include <alibabacloud/nlb/model/ListServerGroupServersRequest.h>

using AlibabaCloud::Nlb::Model::ListServerGroupServersRequest;

ListServerGroupServersRequest::ListServerGroupServersRequest()
    : RpcServiceRequest("nlb", "2022-04-30", "ListServerGroupServers") {
  setMethod(HttpRequest::Method::Post);
}

ListServerGroupServersRequest::~ListServerGroupServersRequest() {}

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

std::string ListServerGroupServersRequest::getRegionId() const {
  return regionId_;
}

void ListServerGroupServersRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setBodyParameter(std::string("RegionId"), regionId);
}

std::vector<std::string> ListServerGroupServersRequest::getServerIds() const {
  return serverIds_;
}

void ListServerGroupServersRequest::setServerIds(const std::vector<std::string> &serverIds) {
  serverIds_ = serverIds;
}

std::vector<std::string> ListServerGroupServersRequest::getServerIps() const {
  return serverIps_;
}

void ListServerGroupServersRequest::setServerIps(const std::vector<std::string> &serverIps) {
  serverIps_ = serverIps;
}

int ListServerGroupServersRequest::getMaxResults() const {
  return maxResults_;
}

void ListServerGroupServersRequest::setMaxResults(int maxResults) {
  maxResults_ = maxResults;
  setBodyParameter(std::string("MaxResults"), std::to_string(maxResults));
}

