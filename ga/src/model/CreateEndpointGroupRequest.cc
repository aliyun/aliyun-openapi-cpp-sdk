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

#include <alibabacloud/ga/model/CreateEndpointGroupRequest.h>

using AlibabaCloud::Ga::Model::CreateEndpointGroupRequest;

CreateEndpointGroupRequest::CreateEndpointGroupRequest()
    : RpcServiceRequest("ga", "2019-11-20", "CreateEndpointGroup") {
  setMethod(HttpRequest::Method::Post);
}

CreateEndpointGroupRequest::~CreateEndpointGroupRequest() {}

std::vector<CreateEndpointGroupRequest::PortOverrides> CreateEndpointGroupRequest::getPortOverrides() const {
  return portOverrides_;
}

void CreateEndpointGroupRequest::setPortOverrides(const std::vector<CreateEndpointGroupRequest::PortOverrides> &portOverrides) {
  portOverrides_ = portOverrides;
  for(int dep1 = 0; dep1 != portOverrides.size(); dep1++) {
  auto portOverridesObj = portOverrides.at(dep1);
  std::string portOverridesObjStr = std::string("PortOverrides") + "." + std::to_string(dep1 + 1);
    setParameter(portOverridesObjStr + ".ListenerPort", std::to_string(portOverridesObj.listenerPort));
    setParameter(portOverridesObjStr + ".EndpointPort", std::to_string(portOverridesObj.endpointPort));
  }
}

bool CreateEndpointGroupRequest::getHealthCheckEnabled() const {
  return healthCheckEnabled_;
}

void CreateEndpointGroupRequest::setHealthCheckEnabled(bool healthCheckEnabled) {
  healthCheckEnabled_ = healthCheckEnabled;
  setParameter(std::string("HealthCheckEnabled"), healthCheckEnabled ? "true" : "false");
}

std::string CreateEndpointGroupRequest::getClientToken() const {
  return clientToken_;
}

void CreateEndpointGroupRequest::setClientToken(const std::string &clientToken) {
  clientToken_ = clientToken;
  setParameter(std::string("ClientToken"), clientToken);
}

std::vector<CreateEndpointGroupRequest::SystemTag> CreateEndpointGroupRequest::getSystemTag() const {
  return systemTag_;
}

void CreateEndpointGroupRequest::setSystemTag(const std::vector<CreateEndpointGroupRequest::SystemTag> &systemTag) {
  systemTag_ = systemTag;
  for(int dep1 = 0; dep1 != systemTag.size(); dep1++) {
  auto systemTagObj = systemTag.at(dep1);
  std::string systemTagObjStr = std::string("SystemTag") + "." + std::to_string(dep1 + 1);
    setParameter(systemTagObjStr + ".Key", systemTagObj.key);
    setParameter(systemTagObjStr + ".Value", systemTagObj.value);
    setParameter(systemTagObjStr + ".Scope", systemTagObj.scope);
  }
}

int CreateEndpointGroupRequest::getHealthCheckIntervalSeconds() const {
  return healthCheckIntervalSeconds_;
}

void CreateEndpointGroupRequest::setHealthCheckIntervalSeconds(int healthCheckIntervalSeconds) {
  healthCheckIntervalSeconds_ = healthCheckIntervalSeconds;
  setParameter(std::string("HealthCheckIntervalSeconds"), std::to_string(healthCheckIntervalSeconds));
}

std::string CreateEndpointGroupRequest::getDescription() const {
  return description_;
}

void CreateEndpointGroupRequest::setDescription(const std::string &description) {
  description_ = description;
  setParameter(std::string("Description"), description);
}

std::string CreateEndpointGroupRequest::getHealthCheckProtocol() const {
  return healthCheckProtocol_;
}

void CreateEndpointGroupRequest::setHealthCheckProtocol(const std::string &healthCheckProtocol) {
  healthCheckProtocol_ = healthCheckProtocol;
  setParameter(std::string("HealthCheckProtocol"), healthCheckProtocol);
}

std::string CreateEndpointGroupRequest::getEndpointRequestProtocol() const {
  return endpointRequestProtocol_;
}

void CreateEndpointGroupRequest::setEndpointRequestProtocol(const std::string &endpointRequestProtocol) {
  endpointRequestProtocol_ = endpointRequestProtocol;
  setParameter(std::string("EndpointRequestProtocol"), endpointRequestProtocol);
}

std::string CreateEndpointGroupRequest::getListenerId() const {
  return listenerId_;
}

void CreateEndpointGroupRequest::setListenerId(const std::string &listenerId) {
  listenerId_ = listenerId;
  setParameter(std::string("ListenerId"), listenerId);
}

std::string CreateEndpointGroupRequest::getHealthCheckPath() const {
  return healthCheckPath_;
}

void CreateEndpointGroupRequest::setHealthCheckPath(const std::string &healthCheckPath) {
  healthCheckPath_ = healthCheckPath;
  setParameter(std::string("HealthCheckPath"), healthCheckPath);
}

std::vector<CreateEndpointGroupRequest::EndpointConfigurations> CreateEndpointGroupRequest::getEndpointConfigurations() const {
  return endpointConfigurations_;
}

void CreateEndpointGroupRequest::setEndpointConfigurations(const std::vector<CreateEndpointGroupRequest::EndpointConfigurations> &endpointConfigurations) {
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

std::string CreateEndpointGroupRequest::getRegionId() const {
  return regionId_;
}

void CreateEndpointGroupRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string CreateEndpointGroupRequest::getEndpointGroupType() const {
  return endpointGroupType_;
}

void CreateEndpointGroupRequest::setEndpointGroupType(const std::string &endpointGroupType) {
  endpointGroupType_ = endpointGroupType;
  setParameter(std::string("EndpointGroupType"), endpointGroupType);
}

std::string CreateEndpointGroupRequest::getAcceleratorId() const {
  return acceleratorId_;
}

void CreateEndpointGroupRequest::setAcceleratorId(const std::string &acceleratorId) {
  acceleratorId_ = acceleratorId;
  setParameter(std::string("AcceleratorId"), acceleratorId);
}

std::vector<CreateEndpointGroupRequest::Tag> CreateEndpointGroupRequest::getTag() const {
  return tag_;
}

void CreateEndpointGroupRequest::setTag(const std::vector<CreateEndpointGroupRequest::Tag> &tag) {
  tag_ = tag;
  for(int dep1 = 0; dep1 != tag.size(); dep1++) {
  auto tagObj = tag.at(dep1);
  std::string tagObjStr = std::string("Tag") + "." + std::to_string(dep1 + 1);
    setParameter(tagObjStr + ".Key", tagObj.key);
    setParameter(tagObjStr + ".Value", tagObj.value);
  }
}

int CreateEndpointGroupRequest::getTrafficPercentage() const {
  return trafficPercentage_;
}

void CreateEndpointGroupRequest::setTrafficPercentage(int trafficPercentage) {
  trafficPercentage_ = trafficPercentage;
  setParameter(std::string("TrafficPercentage"), std::to_string(trafficPercentage));
}

int CreateEndpointGroupRequest::getHealthCheckPort() const {
  return healthCheckPort_;
}

void CreateEndpointGroupRequest::setHealthCheckPort(int healthCheckPort) {
  healthCheckPort_ = healthCheckPort;
  setParameter(std::string("HealthCheckPort"), std::to_string(healthCheckPort));
}

int CreateEndpointGroupRequest::getThresholdCount() const {
  return thresholdCount_;
}

void CreateEndpointGroupRequest::setThresholdCount(int thresholdCount) {
  thresholdCount_ = thresholdCount;
  setParameter(std::string("ThresholdCount"), std::to_string(thresholdCount));
}

std::string CreateEndpointGroupRequest::getEndpointGroupRegion() const {
  return endpointGroupRegion_;
}

void CreateEndpointGroupRequest::setEndpointGroupRegion(const std::string &endpointGroupRegion) {
  endpointGroupRegion_ = endpointGroupRegion;
  setParameter(std::string("EndpointGroupRegion"), endpointGroupRegion);
}

std::string CreateEndpointGroupRequest::getName() const {
  return name_;
}

void CreateEndpointGroupRequest::setName(const std::string &name) {
  name_ = name;
  setParameter(std::string("Name"), name);
}

