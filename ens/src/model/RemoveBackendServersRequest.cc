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

#include <alibabacloud/ens/model/RemoveBackendServersRequest.h>

using AlibabaCloud::Ens::Model::RemoveBackendServersRequest;

RemoveBackendServersRequest::RemoveBackendServersRequest()
    : RpcServiceRequest("ens", "2017-11-10", "RemoveBackendServers") {
  setMethod(HttpRequest::Method::Post);
}

RemoveBackendServersRequest::~RemoveBackendServersRequest() {}

std::vector<RemoveBackendServersRequest::BackendServers> RemoveBackendServersRequest::getBackendServers() const {
  return backendServers_;
}

void RemoveBackendServersRequest::setBackendServers(const std::vector<RemoveBackendServersRequest::BackendServers> &backendServers) {
  backendServers_ = backendServers;
  for(int dep1 = 0; dep1 != backendServers.size(); dep1++) {
    setParameter(std::string("BackendServers") + "." + std::to_string(dep1 + 1) + ".Port", std::to_string(backendServers[dep1].port));
    setParameter(std::string("BackendServers") + "." + std::to_string(dep1 + 1) + ".Ip", backendServers[dep1].ip);
    setParameter(std::string("BackendServers") + "." + std::to_string(dep1 + 1) + ".Weight", std::to_string(backendServers[dep1].weight));
    setParameter(std::string("BackendServers") + "." + std::to_string(dep1 + 1) + ".Type", backendServers[dep1].type);
    setParameter(std::string("BackendServers") + "." + std::to_string(dep1 + 1) + ".ServerId", backendServers[dep1].serverId);
  }
}

std::string RemoveBackendServersRequest::getLoadBalancerId() const {
  return loadBalancerId_;
}

void RemoveBackendServersRequest::setLoadBalancerId(const std::string &loadBalancerId) {
  loadBalancerId_ = loadBalancerId;
  setParameter(std::string("LoadBalancerId"), loadBalancerId);
}

