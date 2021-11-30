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

#include <alibabacloud/alb/model/AddServersToServerGroupRequest.h>

using AlibabaCloud::Alb::Model::AddServersToServerGroupRequest;

AddServersToServerGroupRequest::AddServersToServerGroupRequest()
    : RpcServiceRequest("alb", "2020-06-16", "AddServersToServerGroup") {
  setMethod(HttpRequest::Method::Post);
}

AddServersToServerGroupRequest::~AddServersToServerGroupRequest() {}

std::string AddServersToServerGroupRequest::getClientToken() const {
  return clientToken_;
}

void AddServersToServerGroupRequest::setClientToken(const std::string &clientToken) {
  clientToken_ = clientToken;
  setParameter(std::string("ClientToken"), clientToken);
}

std::string AddServersToServerGroupRequest::getServerGroupId() const {
  return serverGroupId_;
}

void AddServersToServerGroupRequest::setServerGroupId(const std::string &serverGroupId) {
  serverGroupId_ = serverGroupId;
  setParameter(std::string("ServerGroupId"), serverGroupId);
}

std::vector<AddServersToServerGroupRequest::Servers> AddServersToServerGroupRequest::getServers() const {
  return servers_;
}

void AddServersToServerGroupRequest::setServers(const std::vector<AddServersToServerGroupRequest::Servers> &servers) {
  servers_ = servers;
  for(int dep1 = 0; dep1 != servers.size(); dep1++) {
    setParameter(std::string("Servers") + "." + std::to_string(dep1 + 1) + ".RemoteIpEnabled", servers[dep1].remoteIpEnabled ? "true" : "false");
    setParameter(std::string("Servers") + "." + std::to_string(dep1 + 1) + ".ServerType", servers[dep1].serverType);
    setParameter(std::string("Servers") + "." + std::to_string(dep1 + 1) + ".Port", std::to_string(servers[dep1].port));
    setParameter(std::string("Servers") + "." + std::to_string(dep1 + 1) + ".Description", servers[dep1].description);
    setParameter(std::string("Servers") + "." + std::to_string(dep1 + 1) + ".ServerIp", servers[dep1].serverIp);
    setParameter(std::string("Servers") + "." + std::to_string(dep1 + 1) + ".Weight", std::to_string(servers[dep1].weight));
    setParameter(std::string("Servers") + "." + std::to_string(dep1 + 1) + ".ServerId", servers[dep1].serverId);
  }
}

bool AddServersToServerGroupRequest::getDryRun() const {
  return dryRun_;
}

void AddServersToServerGroupRequest::setDryRun(bool dryRun) {
  dryRun_ = dryRun;
  setParameter(std::string("DryRun"), dryRun ? "true" : "false");
}

