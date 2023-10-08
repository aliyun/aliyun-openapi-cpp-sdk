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

#include <alibabacloud/nlb/model/UpdateServerGroupAttributeRequest.h>

using AlibabaCloud::Nlb::Model::UpdateServerGroupAttributeRequest;

UpdateServerGroupAttributeRequest::UpdateServerGroupAttributeRequest()
    : RpcServiceRequest("nlb", "2022-04-30", "UpdateServerGroupAttribute") {
  setMethod(HttpRequest::Method::Post);
}

UpdateServerGroupAttributeRequest::~UpdateServerGroupAttributeRequest() {}

std::string UpdateServerGroupAttributeRequest::getQuicVersion() const {
  return quicVersion_;
}

void UpdateServerGroupAttributeRequest::setQuicVersion(const std::string &quicVersion) {
  quicVersion_ = quicVersion;
  setBodyParameter(std::string("QuicVersion"), quicVersion);
}

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

bool UpdateServerGroupAttributeRequest::getPreserveClientIpEnabled() const {
  return preserveClientIpEnabled_;
}

void UpdateServerGroupAttributeRequest::setPreserveClientIpEnabled(bool preserveClientIpEnabled) {
  preserveClientIpEnabled_ = preserveClientIpEnabled;
  setBodyParameter(std::string("PreserveClientIpEnabled"), preserveClientIpEnabled ? "true" : "false");
}

UpdateServerGroupAttributeRequest::HealthCheckConfig UpdateServerGroupAttributeRequest::getHealthCheckConfig() const {
  return healthCheckConfig_;
}

void UpdateServerGroupAttributeRequest::setHealthCheckConfig(const UpdateServerGroupAttributeRequest::HealthCheckConfig &healthCheckConfig) {
  healthCheckConfig_ = healthCheckConfig;
  setBodyParameter(std::string("HealthCheckConfig") + ".HealthCheckEnabled", healthCheckConfig.healthCheckEnabled ? "true" : "false");
  setBodyParameter(std::string("HealthCheckConfig") + ".HealthCheckType", healthCheckConfig.healthCheckType);
  setBodyParameter(std::string("HealthCheckConfig") + ".HealthCheckConnectPort", std::to_string(healthCheckConfig.healthCheckConnectPort));
  setBodyParameter(std::string("HealthCheckConfig") + ".HealthyThreshold", std::to_string(healthCheckConfig.healthyThreshold));
  setBodyParameter(std::string("HealthCheckConfig") + ".UnhealthyThreshold", std::to_string(healthCheckConfig.unhealthyThreshold));
  setBodyParameter(std::string("HealthCheckConfig") + ".HealthCheckConnectTimeout", std::to_string(healthCheckConfig.healthCheckConnectTimeout));
  setBodyParameter(std::string("HealthCheckConfig") + ".HealthCheckInterval", std::to_string(healthCheckConfig.healthCheckInterval));
  setBodyParameter(std::string("HealthCheckConfig") + ".HealthCheckDomain", healthCheckConfig.healthCheckDomain);
  setBodyParameter(std::string("HealthCheckConfig") + ".HealthCheckUrl", healthCheckConfig.healthCheckUrl);
  for(int dep1 = 0; dep1 != healthCheckConfig.healthCheckHttpCode.size(); dep1++) {
    setBodyParameter(std::string("HealthCheckConfig") + ".HealthCheckHttpCode." + std::to_string(dep1 + 1), healthCheckConfig.healthCheckHttpCode[dep1]);
  }
  setBodyParameter(std::string("HealthCheckConfig") + ".HttpCheckMethod", healthCheckConfig.httpCheckMethod);
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

std::string UpdateServerGroupAttributeRequest::getRegionId() const {
  return regionId_;
}

void UpdateServerGroupAttributeRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setBodyParameter(std::string("RegionId"), regionId);
}

bool UpdateServerGroupAttributeRequest::getPersistenceEnabled() const {
  return persistenceEnabled_;
}

void UpdateServerGroupAttributeRequest::setPersistenceEnabled(bool persistenceEnabled) {
  persistenceEnabled_ = persistenceEnabled;
  setBodyParameter(std::string("PersistenceEnabled"), persistenceEnabled ? "true" : "false");
}

int UpdateServerGroupAttributeRequest::getPersistenceTimeout() const {
  return persistenceTimeout_;
}

void UpdateServerGroupAttributeRequest::setPersistenceTimeout(int persistenceTimeout) {
  persistenceTimeout_ = persistenceTimeout;
  setBodyParameter(std::string("PersistenceTimeout"), std::to_string(persistenceTimeout));
}

bool UpdateServerGroupAttributeRequest::getDryRun() const {
  return dryRun_;
}

void UpdateServerGroupAttributeRequest::setDryRun(bool dryRun) {
  dryRun_ = dryRun;
  setBodyParameter(std::string("DryRun"), dryRun ? "true" : "false");
}

bool UpdateServerGroupAttributeRequest::getConnectionDrainEnabled() const {
  return connectionDrainEnabled_;
}

void UpdateServerGroupAttributeRequest::setConnectionDrainEnabled(bool connectionDrainEnabled) {
  connectionDrainEnabled_ = connectionDrainEnabled;
  setBodyParameter(std::string("ConnectionDrainEnabled"), connectionDrainEnabled ? "true" : "false");
}

int UpdateServerGroupAttributeRequest::getConnectionDrainTimeout() const {
  return connectionDrainTimeout_;
}

void UpdateServerGroupAttributeRequest::setConnectionDrainTimeout(int connectionDrainTimeout) {
  connectionDrainTimeout_ = connectionDrainTimeout;
  setBodyParameter(std::string("ConnectionDrainTimeout"), std::to_string(connectionDrainTimeout));
}

