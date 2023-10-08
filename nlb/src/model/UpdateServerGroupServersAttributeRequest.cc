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

#include <alibabacloud/nlb/model/UpdateServerGroupServersAttributeRequest.h>

using AlibabaCloud::Nlb::Model::UpdateServerGroupServersAttributeRequest;

UpdateServerGroupServersAttributeRequest::UpdateServerGroupServersAttributeRequest()
    : RpcServiceRequest("nlb", "2022-04-30", "UpdateServerGroupServersAttribute") {
  setMethod(HttpRequest::Method::Post);
}

UpdateServerGroupServersAttributeRequest::~UpdateServerGroupServersAttributeRequest() {}

std::string UpdateServerGroupServersAttributeRequest::getClientToken() const {
  return clientToken_;
}

void UpdateServerGroupServersAttributeRequest::setClientToken(const std::string &clientToken) {
  clientToken_ = clientToken;
  setBodyParameter(std::string("ClientToken"), clientToken);
}

std::string UpdateServerGroupServersAttributeRequest::getServerGroupId() const {
  return serverGroupId_;
}

void UpdateServerGroupServersAttributeRequest::setServerGroupId(const std::string &serverGroupId) {
  serverGroupId_ = serverGroupId;
  setBodyParameter(std::string("ServerGroupId"), serverGroupId);
}

std::vector<UpdateServerGroupServersAttributeRequest::Servers> UpdateServerGroupServersAttributeRequest::getServers() const {
  return servers_;
}

void UpdateServerGroupServersAttributeRequest::setServers(const std::vector<UpdateServerGroupServersAttributeRequest::Servers> &servers) {
  servers_ = servers;
  for(int dep1 = 0; dep1 != servers.size(); dep1++) {
  auto serversObj = servers.at(dep1);
  std::string serversObjStr = std::string("Servers") + "." + std::to_string(dep1 + 1);
    setBodyParameter(serversObjStr + ".ServerId", serversObj.serverId);
    setBodyParameter(serversObjStr + ".ServerType", serversObj.serverType);
    setBodyParameter(serversObjStr + ".ServerIp", serversObj.serverIp);
    setBodyParameter(serversObjStr + ".Port", std::to_string(serversObj.port));
    setBodyParameter(serversObjStr + ".Weight", std::to_string(serversObj.weight));
    setBodyParameter(serversObjStr + ".Description", serversObj.description);
  }
}

std::string UpdateServerGroupServersAttributeRequest::getRegionId() const {
  return regionId_;
}

void UpdateServerGroupServersAttributeRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setBodyParameter(std::string("RegionId"), regionId);
}

bool UpdateServerGroupServersAttributeRequest::getDryRun() const {
  return dryRun_;
}

void UpdateServerGroupServersAttributeRequest::setDryRun(bool dryRun) {
  dryRun_ = dryRun;
  setBodyParameter(std::string("DryRun"), dryRun ? "true" : "false");
}

