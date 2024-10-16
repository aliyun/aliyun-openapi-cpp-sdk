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

#include <alibabacloud/gwlb/model/UpdateServerGroupAttributeRequest.h>

using AlibabaCloud::Gwlb::Model::UpdateServerGroupAttributeRequest;

UpdateServerGroupAttributeRequest::UpdateServerGroupAttributeRequest()
    : RpcServiceRequest("gwlb", "2024-04-15", "UpdateServerGroupAttribute") {
  setMethod(HttpRequest::Method::Post);
}

UpdateServerGroupAttributeRequest::~UpdateServerGroupAttributeRequest() {}

std::string UpdateServerGroupAttributeRequest::getServerGroupName() const {
  return serverGroupName_;
}

void UpdateServerGroupAttributeRequest::setServerGroupName(const std::string &serverGroupName) {
  serverGroupName_ = serverGroupName;
  setBodyParameter(std::string("ServerGroupName"), serverGroupName);
}

std::string UpdateServerGroupAttributeRequest::getClientToken() const {
  return clientToken_;
}

void UpdateServerGroupAttributeRequest::setClientToken(const std::string &clientToken) {
  clientToken_ = clientToken;
  setBodyParameter(std::string("ClientToken"), clientToken);
}

UpdateServerGroupAttributeRequest::HealthCheckConfig UpdateServerGroupAttributeRequest::getHealthCheckConfig() const {
  return healthCheckConfig_;
}

void UpdateServerGroupAttributeRequest::setHealthCheckConfig(const UpdateServerGroupAttributeRequest::HealthCheckConfig &healthCheckConfig) {
  healthCheckConfig_ = healthCheckConfig;
  setBodyParameter(std::string("HealthCheckConfig") + ".HealthCheckConnectPort", std::to_string(healthCheckConfig.healthCheckConnectPort));
  setBodyParameter(std::string("HealthCheckConfig") + ".HealthCheckConnectTimeout", std::to_string(healthCheckConfig.healthCheckConnectTimeout));
  setBodyParameter(std::string("HealthCheckConfig") + ".HealthCheckDomain", healthCheckConfig.healthCheckDomain);
  setBodyParameter(std::string("HealthCheckConfig") + ".HealthCheckEnabled", healthCheckConfig.healthCheckEnabled ? "true" : "false");
  for(int dep1 = 0; dep1 != healthCheckConfig.healthCheckHttpCode.size(); dep1++) {
    setBodyParameter(std::string("HealthCheckConfig") + ".HealthCheckHttpCode." + std::to_string(dep1 + 1), healthCheckConfig.healthCheckHttpCode[dep1]);
  }
  setBodyParameter(std::string("HealthCheckConfig") + ".HealthCheckInterval", std::to_string(healthCheckConfig.healthCheckInterval));
  setBodyParameter(std::string("HealthCheckConfig") + ".HealthCheckPath", healthCheckConfig.healthCheckPath);
  setBodyParameter(std::string("HealthCheckConfig") + ".HealthCheckProtocol", healthCheckConfig.healthCheckProtocol);
  setBodyParameter(std::string("HealthCheckConfig") + ".HealthyThreshold", std::to_string(healthCheckConfig.healthyThreshold));
  setBodyParameter(std::string("HealthCheckConfig") + ".UnhealthyThreshold", std::to_string(healthCheckConfig.unhealthyThreshold));
}

std::string UpdateServerGroupAttributeRequest::getServerGroupId() const {
  return serverGroupId_;
}

void UpdateServerGroupAttributeRequest::setServerGroupId(const std::string &serverGroupId) {
  serverGroupId_ = serverGroupId;
  setBodyParameter(std::string("ServerGroupId"), serverGroupId);
}

std::string UpdateServerGroupAttributeRequest::getScheduler() const {
  return scheduler_;
}

void UpdateServerGroupAttributeRequest::setScheduler(const std::string &scheduler) {
  scheduler_ = scheduler;
  setBodyParameter(std::string("Scheduler"), scheduler);
}

bool UpdateServerGroupAttributeRequest::getDryRun() const {
  return dryRun_;
}

void UpdateServerGroupAttributeRequest::setDryRun(bool dryRun) {
  dryRun_ = dryRun;
  setBodyParameter(std::string("DryRun"), dryRun ? "true" : "false");
}

UpdateServerGroupAttributeRequest::ConnectionDrainConfig UpdateServerGroupAttributeRequest::getConnectionDrainConfig() const {
  return connectionDrainConfig_;
}

void UpdateServerGroupAttributeRequest::setConnectionDrainConfig(const UpdateServerGroupAttributeRequest::ConnectionDrainConfig &connectionDrainConfig) {
  connectionDrainConfig_ = connectionDrainConfig;
  setBodyParameter(std::string("ConnectionDrainConfig") + ".ConnectionDrainEnabled", connectionDrainConfig.connectionDrainEnabled ? "true" : "false");
  setBodyParameter(std::string("ConnectionDrainConfig") + ".ConnectionDrainTimeout", std::to_string(connectionDrainConfig.connectionDrainTimeout));
}

