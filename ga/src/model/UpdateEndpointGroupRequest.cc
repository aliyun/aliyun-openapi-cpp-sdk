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

#include <alibabacloud/ga/model/UpdateEndpointGroupRequest.h>

using AlibabaCloud::Ga::Model::UpdateEndpointGroupRequest;

UpdateEndpointGroupRequest::UpdateEndpointGroupRequest()
    : RpcServiceRequest("ga", "2019-11-20", "UpdateEndpointGroup") {
  setMethod(HttpRequest::Method::Post);
}

UpdateEndpointGroupRequest::~UpdateEndpointGroupRequest() {}

std::vector<UpdateEndpointGroupRequest::PortOverrides> UpdateEndpointGroupRequest::getPortOverrides() const {
  return portOverrides_;
}

void UpdateEndpointGroupRequest::setPortOverrides(const std::vector<UpdateEndpointGroupRequest::PortOverrides> &portOverrides) {
  portOverrides_ = portOverrides;
  for(int dep1 = 0; dep1 != portOverrides.size(); dep1++) {
  auto portOverridesObj = portOverrides.at(dep1);
  std::string portOverridesObjStr = std::string("PortOverrides") + "." + std::to_string(dep1 + 1);
    setParameter(portOverridesObjStr + ".ListenerPort", std::to_string(portOverridesObj.listenerPort));
    setParameter(portOverridesObjStr + ".EndpointPort", std::to_string(portOverridesObj.endpointPort));
  }
}

bool UpdateEndpointGroupRequest::getHealthCheckEnabled() const {
  return healthCheckEnabled_;
}

void UpdateEndpointGroupRequest::setHealthCheckEnabled(bool healthCheckEnabled) {
  healthCheckEnabled_ = healthCheckEnabled;
  setParameter(std::string("HealthCheckEnabled"), healthCheckEnabled ? "true" : "false");
}

std::string UpdateEndpointGroupRequest::getClientToken() const {
  return clientToken_;
}

void UpdateEndpointGroupRequest::setClientToken(const std::string &clientToken) {
  clientToken_ = clientToken;
  setParameter(std::string("ClientToken"), clientToken);
}

int UpdateEndpointGroupRequest::getHealthCheckIntervalSeconds() const {
  return healthCheckIntervalSeconds_;
}

void UpdateEndpointGroupRequest::setHealthCheckIntervalSeconds(int healthCheckIntervalSeconds) {
  healthCheckIntervalSeconds_ = healthCheckIntervalSeconds;
  setParameter(std::string("HealthCheckIntervalSeconds"), std::to_string(healthCheckIntervalSeconds));
}

std::string UpdateEndpointGroupRequest::getDescription() const {
  return description_;
}

void UpdateEndpointGroupRequest::setDescription(const std::string &description) {
  description_ = description;
  setParameter(std::string("Description"), description);
}

std::string UpdateEndpointGroupRequest::getHealthCheckProtocol() const {
  return healthCheckProtocol_;
}

void UpdateEndpointGroupRequest::setHealthCheckProtocol(const std::string &healthCheckProtocol) {
  healthCheckProtocol_ = healthCheckProtocol;
  setParameter(std::string("HealthCheckProtocol"), healthCheckProtocol);
}

std::string UpdateEndpointGroupRequest::getEndpointRequestProtocol() const {
  return endpointRequestProtocol_;
}

void UpdateEndpointGroupRequest::setEndpointRequestProtocol(const std::string &endpointRequestProtocol) {
  endpointRequestProtocol_ = endpointRequestProtocol;
  setParameter(std::string("EndpointRequestProtocol"), endpointRequestProtocol);
}

std::string UpdateEndpointGroupRequest::getHealthCheckPath() const {
  return healthCheckPath_;
}

void UpdateEndpointGroupRequest::setHealthCheckPath(const std::string &healthCheckPath) {
  healthCheckPath_ = healthCheckPath;
  setParameter(std::string("HealthCheckPath"), healthCheckPath);
}

std::vector<UpdateEndpointGroupRequest::EndpointConfigurations> UpdateEndpointGroupRequest::getEndpointConfigurations() const {
  return endpointConfigurations_;
}

void UpdateEndpointGroupRequest::setEndpointConfigurations(const std::vector<UpdateEndpointGroupRequest::EndpointConfigurations> &endpointConfigurations) {
  endpointConfigurations_ = endpointConfigurations;
  for(int dep1 = 0; dep1 != endpointConfigurations.size(); dep1++) {
  auto endpointConfigurationsObj = endpointConfigurations.at(dep1);
  std::string endpointConfigurationsObjStr = std::string("EndpointConfigurations") + "." + std::to_string(dep1 + 1);
    setParameter(endpointConfigurationsObjStr + ".Type", endpointConfigurationsObj.type);
    setParameter(endpointConfigurationsObjStr + ".EnableClientIPPreservation", endpointConfigurationsObj.enableClientIPPreservation ? "true" : "false");
    setParameter(endpointConfigurationsObjStr + ".Weight", std::to_string(endpointConfigurationsObj.weight));
    setParameter(endpointConfigurationsObjStr + ".EnableProxyProtocol", endpointConfigurationsObj.enableProxyProtocol ? "true" : "false");
    setParameter(endpointConfigurationsObjStr + ".Endpoint", endpointConfigurationsObj.endpoint);
  }
}

std::string UpdateEndpointGroupRequest::getRegionId() const {
  return regionId_;
}

void UpdateEndpointGroupRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string UpdateEndpointGroupRequest::getEndpointGroupId() const {
  return endpointGroupId_;
}

void UpdateEndpointGroupRequest::setEndpointGroupId(const std::string &endpointGroupId) {
  endpointGroupId_ = endpointGroupId;
  setParameter(std::string("EndpointGroupId"), endpointGroupId);
}

int UpdateEndpointGroupRequest::getTrafficPercentage() const {
  return trafficPercentage_;
}

void UpdateEndpointGroupRequest::setTrafficPercentage(int trafficPercentage) {
  trafficPercentage_ = trafficPercentage;
  setParameter(std::string("TrafficPercentage"), std::to_string(trafficPercentage));
}

int UpdateEndpointGroupRequest::getHealthCheckPort() const {
  return healthCheckPort_;
}

void UpdateEndpointGroupRequest::setHealthCheckPort(int healthCheckPort) {
  healthCheckPort_ = healthCheckPort;
  setParameter(std::string("HealthCheckPort"), std::to_string(healthCheckPort));
}

int UpdateEndpointGroupRequest::getThresholdCount() const {
  return thresholdCount_;
}

void UpdateEndpointGroupRequest::setThresholdCount(int thresholdCount) {
  thresholdCount_ = thresholdCount;
  setParameter(std::string("ThresholdCount"), std::to_string(thresholdCount));
}

std::string UpdateEndpointGroupRequest::getEndpointGroupRegion() const {
  return endpointGroupRegion_;
}

void UpdateEndpointGroupRequest::setEndpointGroupRegion(const std::string &endpointGroupRegion) {
  endpointGroupRegion_ = endpointGroupRegion;
  setParameter(std::string("EndpointGroupRegion"), endpointGroupRegion);
}

std::string UpdateEndpointGroupRequest::getName() const {
  return name_;
}

void UpdateEndpointGroupRequest::setName(const std::string &name) {
  name_ = name;
  setParameter(std::string("Name"), name);
}

