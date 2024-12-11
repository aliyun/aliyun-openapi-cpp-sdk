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

#include <alibabacloud/alb/model/CreateServerGroupRequest.h>

using AlibabaCloud::Alb::Model::CreateServerGroupRequest;

CreateServerGroupRequest::CreateServerGroupRequest()
    : RpcServiceRequest("alb", "2020-06-16", "CreateServerGroup") {
  setMethod(HttpRequest::Method::Post);
}

CreateServerGroupRequest::~CreateServerGroupRequest() {}

bool CreateServerGroupRequest::getCrossZoneEnabled() const {
  return crossZoneEnabled_;
}

void CreateServerGroupRequest::setCrossZoneEnabled(bool crossZoneEnabled) {
  crossZoneEnabled_ = crossZoneEnabled;
  setParameter(std::string("CrossZoneEnabled"), crossZoneEnabled ? "true" : "false");
}

std::string CreateServerGroupRequest::getServerGroupName() const {
  return serverGroupName_;
}

void CreateServerGroupRequest::setServerGroupName(const std::string &serverGroupName) {
  serverGroupName_ = serverGroupName;
  setParameter(std::string("ServerGroupName"), serverGroupName);
}

std::string CreateServerGroupRequest::getClientToken() const {
  return clientToken_;
}

void CreateServerGroupRequest::setClientToken(const std::string &clientToken) {
  clientToken_ = clientToken;
  setParameter(std::string("ClientToken"), clientToken);
}

CreateServerGroupRequest::HealthCheckConfig CreateServerGroupRequest::getHealthCheckConfig() const {
  return healthCheckConfig_;
}

void CreateServerGroupRequest::setHealthCheckConfig(const CreateServerGroupRequest::HealthCheckConfig &healthCheckConfig) {
  healthCheckConfig_ = healthCheckConfig;
  for(int dep1 = 0; dep1 != healthCheckConfig.healthCheckCodes.size(); dep1++) {
    setParameter(std::string("HealthCheckConfig") + ".HealthCheckCodes." + std::to_string(dep1 + 1), healthCheckConfig.healthCheckCodes[dep1]);
  }
  setParameter(std::string("HealthCheckConfig") + ".HealthCheckEnabled", healthCheckConfig.healthCheckEnabled ? "true" : "false");
  setParameter(std::string("HealthCheckConfig") + ".HealthCheckTimeout", std::to_string(healthCheckConfig.healthCheckTimeout));
  setParameter(std::string("HealthCheckConfig") + ".HealthCheckMethod", healthCheckConfig.healthCheckMethod);
  setParameter(std::string("HealthCheckConfig") + ".HealthCheckHost", healthCheckConfig.healthCheckHost);
  setParameter(std::string("HealthCheckConfig") + ".HealthCheckProtocol", healthCheckConfig.healthCheckProtocol);
  setParameter(std::string("HealthCheckConfig") + ".UnhealthyThreshold", std::to_string(healthCheckConfig.unhealthyThreshold));
  setParameter(std::string("HealthCheckConfig") + ".HealthyThreshold", std::to_string(healthCheckConfig.healthyThreshold));
  setParameter(std::string("HealthCheckConfig") + ".HealthCheckTcpFastCloseEnabled", healthCheckConfig.healthCheckTcpFastCloseEnabled ? "true" : "false");
  setParameter(std::string("HealthCheckConfig") + ".HealthCheckPath", healthCheckConfig.healthCheckPath);
  setParameter(std::string("HealthCheckConfig") + ".HealthCheckInterval", std::to_string(healthCheckConfig.healthCheckInterval));
  for(int dep1 = 0; dep1 != healthCheckConfig.healthCheckHttpCodes.size(); dep1++) {
    setParameter(std::string("HealthCheckConfig") + ".HealthCheckHttpCodes." + std::to_string(dep1 + 1), healthCheckConfig.healthCheckHttpCodes[dep1]);
  }
  setParameter(std::string("HealthCheckConfig") + ".HealthCheckHttpVersion", healthCheckConfig.healthCheckHttpVersion);
  setParameter(std::string("HealthCheckConfig") + ".HealthCheckConnectPort", std::to_string(healthCheckConfig.healthCheckConnectPort));
}

CreateServerGroupRequest::SlowStartConfig CreateServerGroupRequest::getSlowStartConfig() const {
  return slowStartConfig_;
}

void CreateServerGroupRequest::setSlowStartConfig(const CreateServerGroupRequest::SlowStartConfig &slowStartConfig) {
  slowStartConfig_ = slowStartConfig;
  setParameter(std::string("SlowStartConfig") + ".SlowStartDuration", std::to_string(slowStartConfig.slowStartDuration));
  setParameter(std::string("SlowStartConfig") + ".SlowStartEnabled", slowStartConfig.slowStartEnabled ? "true" : "false");
}

std::string CreateServerGroupRequest::getScheduler() const {
  return scheduler_;
}

void CreateServerGroupRequest::setScheduler(const std::string &scheduler) {
  scheduler_ = scheduler;
  setParameter(std::string("Scheduler"), scheduler);
}

std::string CreateServerGroupRequest::getResourceGroupId() const {
  return resourceGroupId_;
}

void CreateServerGroupRequest::setResourceGroupId(const std::string &resourceGroupId) {
  resourceGroupId_ = resourceGroupId;
  setParameter(std::string("ResourceGroupId"), resourceGroupId);
}

std::string CreateServerGroupRequest::getProtocol() const {
  return protocol_;
}

void CreateServerGroupRequest::setProtocol(const std::string &protocol) {
  protocol_ = protocol;
  setParameter(std::string("Protocol"), protocol);
}

bool CreateServerGroupRequest::getUpstreamKeepaliveEnabled() const {
  return upstreamKeepaliveEnabled_;
}

void CreateServerGroupRequest::setUpstreamKeepaliveEnabled(bool upstreamKeepaliveEnabled) {
  upstreamKeepaliveEnabled_ = upstreamKeepaliveEnabled;
  setParameter(std::string("UpstreamKeepaliveEnabled"), upstreamKeepaliveEnabled ? "true" : "false");
}

std::string CreateServerGroupRequest::getServiceName() const {
  return serviceName_;
}

void CreateServerGroupRequest::setServiceName(const std::string &serviceName) {
  serviceName_ = serviceName;
  setParameter(std::string("ServiceName"), serviceName);
}

std::vector<CreateServerGroupRequest::Tag> CreateServerGroupRequest::getTag() const {
  return tag_;
}

void CreateServerGroupRequest::setTag(const std::vector<CreateServerGroupRequest::Tag> &tag) {
  tag_ = tag;
  for(int dep1 = 0; dep1 != tag.size(); dep1++) {
    setParameter(std::string("Tag") + "." + std::to_string(dep1 + 1) + ".Value", tag[dep1].value);
    setParameter(std::string("Tag") + "." + std::to_string(dep1 + 1) + ".Key", tag[dep1].key);
  }
}

CreateServerGroupRequest::StickySessionConfig CreateServerGroupRequest::getStickySessionConfig() const {
  return stickySessionConfig_;
}

void CreateServerGroupRequest::setStickySessionConfig(const CreateServerGroupRequest::StickySessionConfig &stickySessionConfig) {
  stickySessionConfig_ = stickySessionConfig;
  setParameter(std::string("StickySessionConfig") + ".StickySessionEnabled", stickySessionConfig.stickySessionEnabled ? "true" : "false");
  setParameter(std::string("StickySessionConfig") + ".Cookie", stickySessionConfig.cookie);
  setParameter(std::string("StickySessionConfig") + ".CookieTimeout", std::to_string(stickySessionConfig.cookieTimeout));
  setParameter(std::string("StickySessionConfig") + ".StickySessionType", stickySessionConfig.stickySessionType);
}

bool CreateServerGroupRequest::getDryRun() const {
  return dryRun_;
}

void CreateServerGroupRequest::setDryRun(bool dryRun) {
  dryRun_ = dryRun;
  setParameter(std::string("DryRun"), dryRun ? "true" : "false");
}

bool CreateServerGroupRequest::getIpv6Enabled() const {
  return ipv6Enabled_;
}

void CreateServerGroupRequest::setIpv6Enabled(bool ipv6Enabled) {
  ipv6Enabled_ = ipv6Enabled;
  setParameter(std::string("Ipv6Enabled"), ipv6Enabled ? "true" : "false");
}

CreateServerGroupRequest::ConnectionDrainConfig CreateServerGroupRequest::getConnectionDrainConfig() const {
  return connectionDrainConfig_;
}

void CreateServerGroupRequest::setConnectionDrainConfig(const CreateServerGroupRequest::ConnectionDrainConfig &connectionDrainConfig) {
  connectionDrainConfig_ = connectionDrainConfig;
  setParameter(std::string("ConnectionDrainConfig") + ".ConnectionDrainEnabled", connectionDrainConfig.connectionDrainEnabled ? "true" : "false");
  setParameter(std::string("ConnectionDrainConfig") + ".ConnectionDrainTimeout", std::to_string(connectionDrainConfig.connectionDrainTimeout));
}

std::string CreateServerGroupRequest::getServerGroupType() const {
  return serverGroupType_;
}

void CreateServerGroupRequest::setServerGroupType(const std::string &serverGroupType) {
  serverGroupType_ = serverGroupType;
  setParameter(std::string("ServerGroupType"), serverGroupType);
}

std::string CreateServerGroupRequest::getVpcId() const {
  return vpcId_;
}

void CreateServerGroupRequest::setVpcId(const std::string &vpcId) {
  vpcId_ = vpcId;
  setParameter(std::string("VpcId"), vpcId);
}

CreateServerGroupRequest::UchConfig CreateServerGroupRequest::getUchConfig() const {
  return uchConfig_;
}

void CreateServerGroupRequest::setUchConfig(const CreateServerGroupRequest::UchConfig &uchConfig) {
  uchConfig_ = uchConfig;
  setParameter(std::string("UchConfig") + ".Type", uchConfig.type);
  setParameter(std::string("UchConfig") + ".Value", uchConfig.value);
}

