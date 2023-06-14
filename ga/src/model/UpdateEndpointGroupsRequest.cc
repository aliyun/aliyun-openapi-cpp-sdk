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

#include <alibabacloud/ga/model/UpdateEndpointGroupsRequest.h>

using AlibabaCloud::Ga::Model::UpdateEndpointGroupsRequest;

UpdateEndpointGroupsRequest::UpdateEndpointGroupsRequest()
    : RpcServiceRequest("ga", "2019-11-20", "UpdateEndpointGroups") {
  setMethod(HttpRequest::Method::Post);
}

UpdateEndpointGroupsRequest::~UpdateEndpointGroupsRequest() {}

bool UpdateEndpointGroupsRequest::getDryRun() const {
  return dryRun_;
}

void UpdateEndpointGroupsRequest::setDryRun(bool dryRun) {
  dryRun_ = dryRun;
  setParameter(std::string("DryRun"), dryRun ? "true" : "false");
}

std::string UpdateEndpointGroupsRequest::getClientToken() const {
  return clientToken_;
}

void UpdateEndpointGroupsRequest::setClientToken(const std::string &clientToken) {
  clientToken_ = clientToken;
  setParameter(std::string("ClientToken"), clientToken);
}

std::vector<UpdateEndpointGroupsRequest::EndpointGroupConfigurations> UpdateEndpointGroupsRequest::getEndpointGroupConfigurations() const {
  return endpointGroupConfigurations_;
}

void UpdateEndpointGroupsRequest::setEndpointGroupConfigurations(const std::vector<UpdateEndpointGroupsRequest::EndpointGroupConfigurations> &endpointGroupConfigurations) {
  endpointGroupConfigurations_ = endpointGroupConfigurations;
  for(int dep1 = 0; dep1 != endpointGroupConfigurations.size(); dep1++) {
  auto endpointGroupConfigurationsObj = endpointGroupConfigurations.at(dep1);
  std::string endpointGroupConfigurationsObjStr = std::string("EndpointGroupConfigurations") + "." + std::to_string(dep1 + 1);
    setParameter(endpointGroupConfigurationsObjStr + ".EndpointGroupName", endpointGroupConfigurationsObj.endpointGroupName);
    setParameter(endpointGroupConfigurationsObjStr + ".EndpointGroupDescription", endpointGroupConfigurationsObj.endpointGroupDescription);
    setParameter(endpointGroupConfigurationsObjStr + ".TrafficPercentage", std::to_string(endpointGroupConfigurationsObj.trafficPercentage));
    setParameter(endpointGroupConfigurationsObjStr + ".HealthCheckEnabled", endpointGroupConfigurationsObj.healthCheckEnabled ? "true" : "false");
    setParameter(endpointGroupConfigurationsObjStr + ".HealthCheckIntervalSeconds", std::to_string(endpointGroupConfigurationsObj.healthCheckIntervalSeconds));
    setParameter(endpointGroupConfigurationsObjStr + ".HealthCheckPath", endpointGroupConfigurationsObj.healthCheckPath);
    setParameter(endpointGroupConfigurationsObjStr + ".HealthCheckPort", std::to_string(endpointGroupConfigurationsObj.healthCheckPort));
    setParameter(endpointGroupConfigurationsObjStr + ".HealthCheckProtocol", endpointGroupConfigurationsObj.healthCheckProtocol);
    setParameter(endpointGroupConfigurationsObjStr + ".ThresholdCount", std::to_string(endpointGroupConfigurationsObj.thresholdCount));
    for(int dep2 = 0; dep2 != endpointGroupConfigurationsObj.endpointConfigurations.size(); dep2++) {
    auto endpointConfigurationsObj = endpointGroupConfigurationsObj.endpointConfigurations.at(dep2);
    std::string endpointConfigurationsObjStr = endpointGroupConfigurationsObjStr + ".EndpointConfigurations" + "." + std::to_string(dep2 + 1);
      setParameter(endpointConfigurationsObjStr + ".Type", endpointConfigurationsObj.type);
      setParameter(endpointConfigurationsObjStr + ".Weight", std::to_string(endpointConfigurationsObj.weight));
      setParameter(endpointConfigurationsObjStr + ".Endpoint", endpointConfigurationsObj.endpoint);
    }
    setParameter(endpointGroupConfigurationsObjStr + ".EndpointRequestProtocol", endpointGroupConfigurationsObj.endpointRequestProtocol);
    for(int dep2 = 0; dep2 != endpointGroupConfigurationsObj.portOverrides.size(); dep2++) {
    auto portOverridesObj = endpointGroupConfigurationsObj.portOverrides.at(dep2);
    std::string portOverridesObjStr = endpointGroupConfigurationsObjStr + ".PortOverrides" + "." + std::to_string(dep2 + 1);
      setParameter(portOverridesObjStr + ".ListenerPort", std::to_string(portOverridesObj.listenerPort));
      setParameter(portOverridesObjStr + ".EndpointPort", std::to_string(portOverridesObj.endpointPort));
    }
    setParameter(endpointGroupConfigurationsObjStr + ".EnableClientIPPreservationToa", endpointGroupConfigurationsObj.enableClientIPPreservationToa ? "true" : "false");
    setParameter(endpointGroupConfigurationsObjStr + ".EnableClientIPPreservationProxyProtocol", endpointGroupConfigurationsObj.enableClientIPPreservationProxyProtocol ? "true" : "false");
    setParameter(endpointGroupConfigurationsObjStr + ".EndpointGroupId", endpointGroupConfigurationsObj.endpointGroupId);
  }
}

std::string UpdateEndpointGroupsRequest::getListenerId() const {
  return listenerId_;
}

void UpdateEndpointGroupsRequest::setListenerId(const std::string &listenerId) {
  listenerId_ = listenerId;
  setParameter(std::string("ListenerId"), listenerId);
}

std::string UpdateEndpointGroupsRequest::getRegionId() const {
  return regionId_;
}

void UpdateEndpointGroupsRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

