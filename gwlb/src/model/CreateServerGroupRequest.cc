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

#include <alibabacloud/gwlb/model/CreateServerGroupRequest.h>

using AlibabaCloud::Gwlb::Model::CreateServerGroupRequest;

CreateServerGroupRequest::CreateServerGroupRequest()
    : RpcServiceRequest("gwlb", "2024-04-15", "CreateServerGroup") {
  setMethod(HttpRequest::Method::Post);
}

CreateServerGroupRequest::~CreateServerGroupRequest() {}

std::string CreateServerGroupRequest::getServerGroupName() const {
  return serverGroupName_;
}

void CreateServerGroupRequest::setServerGroupName(const std::string &serverGroupName) {
  serverGroupName_ = serverGroupName;
  setBodyParameter(std::string("ServerGroupName"), serverGroupName);
}

std::string CreateServerGroupRequest::getClientToken() const {
  return clientToken_;
}

void CreateServerGroupRequest::setClientToken(const std::string &clientToken) {
  clientToken_ = clientToken;
  setBodyParameter(std::string("ClientToken"), clientToken);
}

CreateServerGroupRequest::HealthCheckConfig CreateServerGroupRequest::getHealthCheckConfig() const {
  return healthCheckConfig_;
}

void CreateServerGroupRequest::setHealthCheckConfig(const CreateServerGroupRequest::HealthCheckConfig &healthCheckConfig) {
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

std::string CreateServerGroupRequest::getScheduler() const {
  return scheduler_;
}

void CreateServerGroupRequest::setScheduler(const std::string &scheduler) {
  scheduler_ = scheduler;
  setBodyParameter(std::string("Scheduler"), scheduler);
}

std::string CreateServerGroupRequest::getResourceGroupId() const {
  return resourceGroupId_;
}

void CreateServerGroupRequest::setResourceGroupId(const std::string &resourceGroupId) {
  resourceGroupId_ = resourceGroupId;
  setBodyParameter(std::string("ResourceGroupId"), resourceGroupId);
}

std::string CreateServerGroupRequest::getProtocol() const {
  return protocol_;
}

void CreateServerGroupRequest::setProtocol(const std::string &protocol) {
  protocol_ = protocol;
  setBodyParameter(std::string("Protocol"), protocol);
}

std::vector<CreateServerGroupRequest::Tag> CreateServerGroupRequest::getTag() const {
  return tag_;
}

void CreateServerGroupRequest::setTag(const std::vector<CreateServerGroupRequest::Tag> &tag) {
  tag_ = tag;
  for(int dep1 = 0; dep1 != tag.size(); dep1++) {
    setBodyParameter(std::string("Tag") + "." + std::to_string(dep1 + 1) + ".Key", tag[dep1].key);
    setBodyParameter(std::string("Tag") + "." + std::to_string(dep1 + 1) + ".Value", tag[dep1].value);
  }
}

bool CreateServerGroupRequest::getDryRun() const {
  return dryRun_;
}

void CreateServerGroupRequest::setDryRun(bool dryRun) {
  dryRun_ = dryRun;
  setBodyParameter(std::string("DryRun"), dryRun ? "true" : "false");
}

CreateServerGroupRequest::ConnectionDrainConfig CreateServerGroupRequest::getConnectionDrainConfig() const {
  return connectionDrainConfig_;
}

void CreateServerGroupRequest::setConnectionDrainConfig(const CreateServerGroupRequest::ConnectionDrainConfig &connectionDrainConfig) {
  connectionDrainConfig_ = connectionDrainConfig;
  setBodyParameter(std::string("ConnectionDrainConfig") + ".ConnectionDrainEnabled", connectionDrainConfig.connectionDrainEnabled ? "true" : "false");
  setBodyParameter(std::string("ConnectionDrainConfig") + ".ConnectionDrainTimeout", std::to_string(connectionDrainConfig.connectionDrainTimeout));
}

std::string CreateServerGroupRequest::getServerGroupType() const {
  return serverGroupType_;
}

void CreateServerGroupRequest::setServerGroupType(const std::string &serverGroupType) {
  serverGroupType_ = serverGroupType;
  setBodyParameter(std::string("ServerGroupType"), serverGroupType);
}

std::string CreateServerGroupRequest::getVpcId() const {
  return vpcId_;
}

void CreateServerGroupRequest::setVpcId(const std::string &vpcId) {
  vpcId_ = vpcId;
  setBodyParameter(std::string("VpcId"), vpcId);
}

