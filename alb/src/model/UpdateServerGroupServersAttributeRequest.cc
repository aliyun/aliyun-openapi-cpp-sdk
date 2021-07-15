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

#include <alibabacloud/alb/model/UpdateServerGroupServersAttributeRequest.h>

using AlibabaCloud::Alb::Model::UpdateServerGroupServersAttributeRequest;

UpdateServerGroupServersAttributeRequest::UpdateServerGroupServersAttributeRequest()
    : RpcServiceRequest("alb", "2020-06-16", "UpdateServerGroupServersAttribute") {
  setMethod(HttpRequest::Method::Post);
}

UpdateServerGroupServersAttributeRequest::~UpdateServerGroupServersAttributeRequest() {}

std::string UpdateServerGroupServersAttributeRequest::getClientToken() const {
  return clientToken_;
}

void UpdateServerGroupServersAttributeRequest::setClientToken(const std::string &clientToken) {
  clientToken_ = clientToken;
  setParameter(std::string("ClientToken"), clientToken);
}

std::string UpdateServerGroupServersAttributeRequest::getServerGroupId() const {
  return serverGroupId_;
}

void UpdateServerGroupServersAttributeRequest::setServerGroupId(const std::string &serverGroupId) {
  serverGroupId_ = serverGroupId;
  setParameter(std::string("ServerGroupId"), serverGroupId);
}

std::vector<UpdateServerGroupServersAttributeRequest::Servers> UpdateServerGroupServersAttributeRequest::getServers() const {
  return servers_;
}

void UpdateServerGroupServersAttributeRequest::setServers(const std::vector<UpdateServerGroupServersAttributeRequest::Servers> &servers) {
  servers_ = servers;
  for(int dep1 = 0; dep1 != servers.size(); dep1++) {
    setParameter(std::string("Servers") + "." + std::to_string(dep1 + 1) + ".ServerType", servers[dep1].serverType);
    setParameter(std::string("Servers") + "." + std::to_string(dep1 + 1) + ".Port", std::to_string(servers[dep1].port));
    setParameter(std::string("Servers") + "." + std::to_string(dep1 + 1) + ".Description", servers[dep1].description);
    setParameter(std::string("Servers") + "." + std::to_string(dep1 + 1) + ".ServerIp", servers[dep1].serverIp);
    setParameter(std::string("Servers") + "." + std::to_string(dep1 + 1) + ".Weight", std::to_string(servers[dep1].weight));
    setParameter(std::string("Servers") + "." + std::to_string(dep1 + 1) + ".ServerId", servers[dep1].serverId);
  }
}

bool UpdateServerGroupServersAttributeRequest::getDryRun() const {
  return dryRun_;
}

void UpdateServerGroupServersAttributeRequest::setDryRun(bool dryRun) {
  dryRun_ = dryRun;
  setParameter(std::string("DryRun"), dryRun ? "true" : "false");
}

