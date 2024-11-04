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

#include <alibabacloud/alb/model/CreateHealthCheckTemplateRequest.h>

using AlibabaCloud::Alb::Model::CreateHealthCheckTemplateRequest;

CreateHealthCheckTemplateRequest::CreateHealthCheckTemplateRequest()
    : RpcServiceRequest("alb", "2020-06-16", "CreateHealthCheckTemplate") {
  setMethod(HttpRequest::Method::Post);
}

CreateHealthCheckTemplateRequest::~CreateHealthCheckTemplateRequest() {}

int CreateHealthCheckTemplateRequest::getHealthCheckTimeout() const {
  return healthCheckTimeout_;
}

void CreateHealthCheckTemplateRequest::setHealthCheckTimeout(int healthCheckTimeout) {
  healthCheckTimeout_ = healthCheckTimeout;
  setParameter(std::string("HealthCheckTimeout"), std::to_string(healthCheckTimeout));
}

std::string CreateHealthCheckTemplateRequest::getClientToken() const {
  return clientToken_;
}

void CreateHealthCheckTemplateRequest::setClientToken(const std::string &clientToken) {
  clientToken_ = clientToken;
  setParameter(std::string("ClientToken"), clientToken);
}

std::string CreateHealthCheckTemplateRequest::getHealthCheckProtocol() const {
  return healthCheckProtocol_;
}

void CreateHealthCheckTemplateRequest::setHealthCheckProtocol(const std::string &healthCheckProtocol) {
  healthCheckProtocol_ = healthCheckProtocol;
  setParameter(std::string("HealthCheckProtocol"), healthCheckProtocol);
}

int CreateHealthCheckTemplateRequest::getUnhealthyThreshold() const {
  return unhealthyThreshold_;
}

void CreateHealthCheckTemplateRequest::setUnhealthyThreshold(int unhealthyThreshold) {
  unhealthyThreshold_ = unhealthyThreshold;
  setParameter(std::string("UnhealthyThreshold"), std::to_string(unhealthyThreshold));
}

int CreateHealthCheckTemplateRequest::getHealthyThreshold() const {
  return healthyThreshold_;
}

void CreateHealthCheckTemplateRequest::setHealthyThreshold(int healthyThreshold) {
  healthyThreshold_ = healthyThreshold;
  setParameter(std::string("HealthyThreshold"), std::to_string(healthyThreshold));
}

bool CreateHealthCheckTemplateRequest::getHealthCheckTcpFastCloseEnabled() const {
  return healthCheckTcpFastCloseEnabled_;
}

void CreateHealthCheckTemplateRequest::setHealthCheckTcpFastCloseEnabled(bool healthCheckTcpFastCloseEnabled) {
  healthCheckTcpFastCloseEnabled_ = healthCheckTcpFastCloseEnabled;
  setParameter(std::string("HealthCheckTcpFastCloseEnabled"), healthCheckTcpFastCloseEnabled ? "true" : "false");
}

std::string CreateHealthCheckTemplateRequest::getHealthCheckPath() const {
  return healthCheckPath_;
}

void CreateHealthCheckTemplateRequest::setHealthCheckPath(const std::string &healthCheckPath) {
  healthCheckPath_ = healthCheckPath;
  setParameter(std::string("HealthCheckPath"), healthCheckPath);
}

std::vector<CreateHealthCheckTemplateRequest::Tag> CreateHealthCheckTemplateRequest::getTag() const {
  return tag_;
}

void CreateHealthCheckTemplateRequest::setTag(const std::vector<CreateHealthCheckTemplateRequest::Tag> &tag) {
  tag_ = tag;
  for(int dep1 = 0; dep1 != tag.size(); dep1++) {
    setParameter(std::string("Tag") + "." + std::to_string(dep1 + 1) + ".Value", tag[dep1].value);
    setParameter(std::string("Tag") + "." + std::to_string(dep1 + 1) + ".Key", tag[dep1].key);
  }
}

std::vector<CreateHealthCheckTemplateRequest::std::string> CreateHealthCheckTemplateRequest::getHealthCheckCodes() const {
  return healthCheckCodes_;
}

void CreateHealthCheckTemplateRequest::setHealthCheckCodes(const std::vector<CreateHealthCheckTemplateRequest::std::string> &healthCheckCodes) {
  healthCheckCodes_ = healthCheckCodes;
  for(int dep1 = 0; dep1 != healthCheckCodes.size(); dep1++) {
    setParameter(std::string("HealthCheckCodes") + "." + std::to_string(dep1 + 1), healthCheckCodes[dep1]);
  }
}

bool CreateHealthCheckTemplateRequest::getDryRun() const {
  return dryRun_;
}

void CreateHealthCheckTemplateRequest::setDryRun(bool dryRun) {
  dryRun_ = dryRun;
  setParameter(std::string("DryRun"), dryRun ? "true" : "false");
}

std::string CreateHealthCheckTemplateRequest::getHealthCheckMethod() const {
  return healthCheckMethod_;
}

void CreateHealthCheckTemplateRequest::setHealthCheckMethod(const std::string &healthCheckMethod) {
  healthCheckMethod_ = healthCheckMethod;
  setParameter(std::string("HealthCheckMethod"), healthCheckMethod);
}

std::string CreateHealthCheckTemplateRequest::getHealthCheckHost() const {
  return healthCheckHost_;
}

void CreateHealthCheckTemplateRequest::setHealthCheckHost(const std::string &healthCheckHost) {
  healthCheckHost_ = healthCheckHost;
  setParameter(std::string("HealthCheckHost"), healthCheckHost);
}

int CreateHealthCheckTemplateRequest::getHealthCheckInterval() const {
  return healthCheckInterval_;
}

void CreateHealthCheckTemplateRequest::setHealthCheckInterval(int healthCheckInterval) {
  healthCheckInterval_ = healthCheckInterval;
  setParameter(std::string("HealthCheckInterval"), std::to_string(healthCheckInterval));
}

std::string CreateHealthCheckTemplateRequest::getHealthCheckTemplateName() const {
  return healthCheckTemplateName_;
}

void CreateHealthCheckTemplateRequest::setHealthCheckTemplateName(const std::string &healthCheckTemplateName) {
  healthCheckTemplateName_ = healthCheckTemplateName;
  setParameter(std::string("HealthCheckTemplateName"), healthCheckTemplateName);
}

std::vector<CreateHealthCheckTemplateRequest::std::string> CreateHealthCheckTemplateRequest::getHealthCheckHttpCodes() const {
  return healthCheckHttpCodes_;
}

void CreateHealthCheckTemplateRequest::setHealthCheckHttpCodes(const std::vector<CreateHealthCheckTemplateRequest::std::string> &healthCheckHttpCodes) {
  healthCheckHttpCodes_ = healthCheckHttpCodes;
  for(int dep1 = 0; dep1 != healthCheckHttpCodes.size(); dep1++) {
    setParameter(std::string("HealthCheckHttpCodes") + "." + std::to_string(dep1 + 1), healthCheckHttpCodes[dep1]);
  }
}

std::string CreateHealthCheckTemplateRequest::getHealthCheckHttpVersion() const {
  return healthCheckHttpVersion_;
}

void CreateHealthCheckTemplateRequest::setHealthCheckHttpVersion(const std::string &healthCheckHttpVersion) {
  healthCheckHttpVersion_ = healthCheckHttpVersion;
  setParameter(std::string("HealthCheckHttpVersion"), healthCheckHttpVersion);
}

int CreateHealthCheckTemplateRequest::getHealthCheckConnectPort() const {
  return healthCheckConnectPort_;
}

void CreateHealthCheckTemplateRequest::setHealthCheckConnectPort(int healthCheckConnectPort) {
  healthCheckConnectPort_ = healthCheckConnectPort;
  setParameter(std::string("HealthCheckConnectPort"), std::to_string(healthCheckConnectPort));
}

