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

#include <alibabacloud/alb/model/ListServerGroupServersRequest.h>

using AlibabaCloud::Alb::Model::ListServerGroupServersRequest;

ListServerGroupServersRequest::ListServerGroupServersRequest()
    : RpcServiceRequest("alb", "2020-06-16", "ListServerGroupServers") {
  setMethod(HttpRequest::Method::Post);
}

ListServerGroupServersRequest::~ListServerGroupServersRequest() {}

std::string ListServerGroupServersRequest::getServerGroupId() const {
  return serverGroupId_;
}

void ListServerGroupServersRequest::setServerGroupId(const std::string &serverGroupId) {
  serverGroupId_ = serverGroupId;
  setParameter(std::string("ServerGroupId"), serverGroupId);
}

std::string ListServerGroupServersRequest::getNextToken() const {
  return nextToken_;
}

void ListServerGroupServersRequest::setNextToken(const std::string &nextToken) {
  nextToken_ = nextToken;
  setParameter(std::string("NextToken"), nextToken);
}

std::string ListServerGroupServersRequest::getServerIp() const {
  return serverIp_;
}

void ListServerGroupServersRequest::setServerIp(const std::string &serverIp) {
  serverIp_ = serverIp;
  setParameter(std::string("ServerIp"), serverIp);
}

std::vector<ListServerGroupServersRequest::Tag> ListServerGroupServersRequest::getTag() const {
  return tag_;
}

void ListServerGroupServersRequest::setTag(const std::vector<ListServerGroupServersRequest::Tag> &tag) {
  tag_ = tag;
  for(int dep1 = 0; dep1 != tag.size(); dep1++) {
    setParameter(std::string("Tag") + "." + std::to_string(dep1 + 1) + ".Value", tag[dep1].value);
    setParameter(std::string("Tag") + "." + std::to_string(dep1 + 1) + ".Key", tag[dep1].key);
  }
}

std::string ListServerGroupServersRequest::getServerId() const {
  return serverId_;
}

void ListServerGroupServersRequest::setServerId(const std::string &serverId) {
  serverId_ = serverId;
  setParameter(std::string("ServerId"), serverId);
}

std::vector<ListServerGroupServersRequest::std::string> ListServerGroupServersRequest::getServerIds() const {
  return serverIds_;
}

void ListServerGroupServersRequest::setServerIds(const std::vector<ListServerGroupServersRequest::std::string> &serverIds) {
  serverIds_ = serverIds;
  for(int dep1 = 0; dep1 != serverIds.size(); dep1++) {
    setParameter(std::string("ServerIds") + "." + std::to_string(dep1 + 1), serverIds[dep1]);
  }
}

int ListServerGroupServersRequest::getMaxResults() const {
  return maxResults_;
}

void ListServerGroupServersRequest::setMaxResults(int maxResults) {
  maxResults_ = maxResults;
  setParameter(std::string("MaxResults"), std::to_string(maxResults));
}

