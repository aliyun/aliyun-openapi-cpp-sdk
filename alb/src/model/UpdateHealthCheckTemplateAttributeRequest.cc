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

#include <alibabacloud/alb/model/UpdateHealthCheckTemplateAttributeRequest.h>

using AlibabaCloud::Alb::Model::UpdateHealthCheckTemplateAttributeRequest;

UpdateHealthCheckTemplateAttributeRequest::UpdateHealthCheckTemplateAttributeRequest()
    : RpcServiceRequest("alb", "2020-06-16", "UpdateHealthCheckTemplateAttribute") {
  setMethod(HttpRequest::Method::Post);
}

UpdateHealthCheckTemplateAttributeRequest::~UpdateHealthCheckTemplateAttributeRequest() {}

int UpdateHealthCheckTemplateAttributeRequest::getHealthCheckTimeout() const {
  return healthCheckTimeout_;
}

void UpdateHealthCheckTemplateAttributeRequest::setHealthCheckTimeout(int healthCheckTimeout) {
  healthCheckTimeout_ = healthCheckTimeout;
  setParameter(std::string("HealthCheckTimeout"), std::to_string(healthCheckTimeout));
}

std::string UpdateHealthCheckTemplateAttributeRequest::getClientToken() const {
  return clientToken_;
}

void UpdateHealthCheckTemplateAttributeRequest::setClientToken(const std::string &clientToken) {
  clientToken_ = clientToken;
  setParameter(std::string("ClientToken"), clientToken);
}

std::string UpdateHealthCheckTemplateAttributeRequest::getHealthCheckProtocol() const {
  return healthCheckProtocol_;
}

void UpdateHealthCheckTemplateAttributeRequest::setHealthCheckProtocol(const std::string &healthCheckProtocol) {
  healthCheckProtocol_ = healthCheckProtocol;
  setParameter(std::string("HealthCheckProtocol"), healthCheckProtocol);
}

int UpdateHealthCheckTemplateAttributeRequest::getUnhealthyThreshold() const {
  return unhealthyThreshold_;
}

void UpdateHealthCheckTemplateAttributeRequest::setUnhealthyThreshold(int unhealthyThreshold) {
  unhealthyThreshold_ = unhealthyThreshold;
  setParameter(std::string("UnhealthyThreshold"), std::to_string(unhealthyThreshold));
}

int UpdateHealthCheckTemplateAttributeRequest::getHealthyThreshold() const {
  return healthyThreshold_;
}

void UpdateHealthCheckTemplateAttributeRequest::setHealthyThreshold(int healthyThreshold) {
  healthyThreshold_ = healthyThreshold;
  setParameter(std::string("HealthyThreshold"), std::to_string(healthyThreshold));
}

bool UpdateHealthCheckTemplateAttributeRequest::getHealthCheckTcpFastCloseEnabled() const {
  return healthCheckTcpFastCloseEnabled_;
}

void UpdateHealthCheckTemplateAttributeRequest::setHealthCheckTcpFastCloseEnabled(bool healthCheckTcpFastCloseEnabled) {
  healthCheckTcpFastCloseEnabled_ = healthCheckTcpFastCloseEnabled;
  setParameter(std::string("HealthCheckTcpFastCloseEnabled"), healthCheckTcpFastCloseEnabled ? "true" : "false");
}

std::string UpdateHealthCheckTemplateAttributeRequest::getHealthCheckPath() const {
  return healthCheckPath_;
}

void UpdateHealthCheckTemplateAttributeRequest::setHealthCheckPath(const std::string &healthCheckPath) {
  healthCheckPath_ = healthCheckPath;
  setParameter(std::string("HealthCheckPath"), healthCheckPath);
}

std::vector<UpdateHealthCheckTemplateAttributeRequest::std::string> UpdateHealthCheckTemplateAttributeRequest::getHealthCheckCodes() const {
  return healthCheckCodes_;
}

void UpdateHealthCheckTemplateAttributeRequest::setHealthCheckCodes(const std::vector<UpdateHealthCheckTemplateAttributeRequest::std::string> &healthCheckCodes) {
  healthCheckCodes_ = healthCheckCodes;
  for(int dep1 = 0; dep1 != healthCheckCodes.size(); dep1++) {
    setParameter(std::string("HealthCheckCodes") + "." + std::to_string(dep1 + 1), healthCheckCodes[dep1]);
  }
}

bool UpdateHealthCheckTemplateAttributeRequest::getDryRun() const {
  return dryRun_;
}

void UpdateHealthCheckTemplateAttributeRequest::setDryRun(bool dryRun) {
  dryRun_ = dryRun;
  setParameter(std::string("DryRun"), dryRun ? "true" : "false");
}

std::string UpdateHealthCheckTemplateAttributeRequest::getHealthCheckMethod() const {
  return healthCheckMethod_;
}

void UpdateHealthCheckTemplateAttributeRequest::setHealthCheckMethod(const std::string &healthCheckMethod) {
  healthCheckMethod_ = healthCheckMethod;
  setParameter(std::string("HealthCheckMethod"), healthCheckMethod);
}

std::string UpdateHealthCheckTemplateAttributeRequest::getHealthCheckHost() const {
  return healthCheckHost_;
}

void UpdateHealthCheckTemplateAttributeRequest::setHealthCheckHost(const std::string &healthCheckHost) {
  healthCheckHost_ = healthCheckHost;
  setParameter(std::string("HealthCheckHost"), healthCheckHost);
}

int UpdateHealthCheckTemplateAttributeRequest::getHealthCheckInterval() const {
  return healthCheckInterval_;
}

void UpdateHealthCheckTemplateAttributeRequest::setHealthCheckInterval(int healthCheckInterval) {
  healthCheckInterval_ = healthCheckInterval;
  setParameter(std::string("HealthCheckInterval"), std::to_string(healthCheckInterval));
}

std::string UpdateHealthCheckTemplateAttributeRequest::getHealthCheckTemplateName() const {
  return healthCheckTemplateName_;
}

void UpdateHealthCheckTemplateAttributeRequest::setHealthCheckTemplateName(const std::string &healthCheckTemplateName) {
  healthCheckTemplateName_ = healthCheckTemplateName;
  setParameter(std::string("HealthCheckTemplateName"), healthCheckTemplateName);
}

std::vector<UpdateHealthCheckTemplateAttributeRequest::std::string> UpdateHealthCheckTemplateAttributeRequest::getHealthCheckHttpCodes() const {
  return healthCheckHttpCodes_;
}

void UpdateHealthCheckTemplateAttributeRequest::setHealthCheckHttpCodes(const std::vector<UpdateHealthCheckTemplateAttributeRequest::std::string> &healthCheckHttpCodes) {
  healthCheckHttpCodes_ = healthCheckHttpCodes;
  for(int dep1 = 0; dep1 != healthCheckHttpCodes.size(); dep1++) {
    setParameter(std::string("HealthCheckHttpCodes") + "." + std::to_string(dep1 + 1), healthCheckHttpCodes[dep1]);
  }
}

std::string UpdateHealthCheckTemplateAttributeRequest::getHealthCheckTemplateId() const {
  return healthCheckTemplateId_;
}

void UpdateHealthCheckTemplateAttributeRequest::setHealthCheckTemplateId(const std::string &healthCheckTemplateId) {
  healthCheckTemplateId_ = healthCheckTemplateId;
  setParameter(std::string("HealthCheckTemplateId"), healthCheckTemplateId);
}

std::string UpdateHealthCheckTemplateAttributeRequest::getHealthCheckHttpVersion() const {
  return healthCheckHttpVersion_;
}

void UpdateHealthCheckTemplateAttributeRequest::setHealthCheckHttpVersion(const std::string &healthCheckHttpVersion) {
  healthCheckHttpVersion_ = healthCheckHttpVersion;
  setParameter(std::string("HealthCheckHttpVersion"), healthCheckHttpVersion);
}

int UpdateHealthCheckTemplateAttributeRequest::getHealthCheckConnectPort() const {
  return healthCheckConnectPort_;
}

void UpdateHealthCheckTemplateAttributeRequest::setHealthCheckConnectPort(int healthCheckConnectPort) {
  healthCheckConnectPort_ = healthCheckConnectPort;
  setParameter(std::string("HealthCheckConnectPort"), std::to_string(healthCheckConnectPort));
}

