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

#include <alibabacloud/gwlb/model/AddServersToServerGroupRequest.h>

using AlibabaCloud::Gwlb::Model::AddServersToServerGroupRequest;

AddServersToServerGroupRequest::AddServersToServerGroupRequest()
    : RpcServiceRequest("gwlb", "2024-04-15", "AddServersToServerGroup") {
  setMethod(HttpRequest::Method::Post);
}

AddServersToServerGroupRequest::~AddServersToServerGroupRequest() {}

std::string AddServersToServerGroupRequest::getClientToken() const {
  return clientToken_;
}

void AddServersToServerGroupRequest::setClientToken(const std::string &clientToken) {
  clientToken_ = clientToken;
  setBodyParameter(std::string("ClientToken"), clientToken);
}

std::string AddServersToServerGroupRequest::getServerGroupId() const {
  return serverGroupId_;
}

void AddServersToServerGroupRequest::setServerGroupId(const std::string &serverGroupId) {
  serverGroupId_ = serverGroupId;
  setBodyParameter(std::string("ServerGroupId"), serverGroupId);
}

std::vector<AddServersToServerGroupRequest::Servers> AddServersToServerGroupRequest::getServers() const {
  return servers_;
}

void AddServersToServerGroupRequest::setServers(const std::vector<AddServersToServerGroupRequest::Servers> &servers) {
  servers_ = servers;
  for(int dep1 = 0; dep1 != servers.size(); dep1++) {
    setBodyParameter(std::string("Servers") + "." + std::to_string(dep1 + 1) + ".Port", std::to_string(servers[dep1].port));
    setBodyParameter(std::string("Servers") + "." + std::to_string(dep1 + 1) + ".ServerId", servers[dep1].serverId);
    setBodyParameter(std::string("Servers") + "." + std::to_string(dep1 + 1) + ".ServerIp", servers[dep1].serverIp);
    setBodyParameter(std::string("Servers") + "." + std::to_string(dep1 + 1) + ".ServerType", servers[dep1].serverType);
  }
}

bool AddServersToServerGroupRequest::getDryRun() const {
  return dryRun_;
}

void AddServersToServerGroupRequest::setDryRun(bool dryRun) {
  dryRun_ = dryRun;
  setBodyParameter(std::string("DryRun"), dryRun ? "true" : "false");
}

