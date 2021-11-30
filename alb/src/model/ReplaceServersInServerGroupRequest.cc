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

#include <alibabacloud/alb/model/ReplaceServersInServerGroupRequest.h>

using AlibabaCloud::Alb::Model::ReplaceServersInServerGroupRequest;

ReplaceServersInServerGroupRequest::ReplaceServersInServerGroupRequest()
    : RpcServiceRequest("alb", "2020-06-16", "ReplaceServersInServerGroup") {
  setMethod(HttpRequest::Method::Post);
}

ReplaceServersInServerGroupRequest::~ReplaceServersInServerGroupRequest() {}

std::string ReplaceServersInServerGroupRequest::getClientToken() const {
  return clientToken_;
}

void ReplaceServersInServerGroupRequest::setClientToken(const std::string &clientToken) {
  clientToken_ = clientToken;
  setParameter(std::string("ClientToken"), clientToken);
}

std::string ReplaceServersInServerGroupRequest::getServerGroupId() const {
  return serverGroupId_;
}

void ReplaceServersInServerGroupRequest::setServerGroupId(const std::string &serverGroupId) {
  serverGroupId_ = serverGroupId;
  setParameter(std::string("ServerGroupId"), serverGroupId);
}

std::vector<ReplaceServersInServerGroupRequest::AddedServers> ReplaceServersInServerGroupRequest::getAddedServers() const {
  return addedServers_;
}

void ReplaceServersInServerGroupRequest::setAddedServers(const std::vector<ReplaceServersInServerGroupRequest::AddedServers> &addedServers) {
  addedServers_ = addedServers;
  for(int dep1 = 0; dep1 != addedServers.size(); dep1++) {
    setParameter(std::string("AddedServers") + "." + std::to_string(dep1 + 1) + ".RemoteIpEnabled", addedServers[dep1].remoteIpEnabled ? "true" : "false");
    setParameter(std::string("AddedServers") + "." + std::to_string(dep1 + 1) + ".ServerType", addedServers[dep1].serverType);
    setParameter(std::string("AddedServers") + "." + std::to_string(dep1 + 1) + ".Port", std::to_string(addedServers[dep1].port));
    setParameter(std::string("AddedServers") + "." + std::to_string(dep1 + 1) + ".Description", addedServers[dep1].description);
    setParameter(std::string("AddedServers") + "." + std::to_string(dep1 + 1) + ".ServerIp", addedServers[dep1].serverIp);
    setParameter(std::string("AddedServers") + "." + std::to_string(dep1 + 1) + ".Weight", std::to_string(addedServers[dep1].weight));
    setParameter(std::string("AddedServers") + "." + std::to_string(dep1 + 1) + ".ServerId", addedServers[dep1].serverId);
  }
}

bool ReplaceServersInServerGroupRequest::getDryRun() const {
  return dryRun_;
}

void ReplaceServersInServerGroupRequest::setDryRun(bool dryRun) {
  dryRun_ = dryRun;
  setParameter(std::string("DryRun"), dryRun ? "true" : "false");
}

std::vector<ReplaceServersInServerGroupRequest::RemovedServers> ReplaceServersInServerGroupRequest::getRemovedServers() const {
  return removedServers_;
}

void ReplaceServersInServerGroupRequest::setRemovedServers(const std::vector<ReplaceServersInServerGroupRequest::RemovedServers> &removedServers) {
  removedServers_ = removedServers;
  for(int dep1 = 0; dep1 != removedServers.size(); dep1++) {
    setParameter(std::string("RemovedServers") + "." + std::to_string(dep1 + 1) + ".ServerType", removedServers[dep1].serverType);
    setParameter(std::string("RemovedServers") + "." + std::to_string(dep1 + 1) + ".Port", std::to_string(removedServers[dep1].port));
    setParameter(std::string("RemovedServers") + "." + std::to_string(dep1 + 1) + ".ServerIp", removedServers[dep1].serverIp);
    setParameter(std::string("RemovedServers") + "." + std::to_string(dep1 + 1) + ".ServerId", removedServers[dep1].serverId);
  }
}

