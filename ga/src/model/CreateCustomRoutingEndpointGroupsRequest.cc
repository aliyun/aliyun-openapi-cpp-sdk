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

#include <alibabacloud/ga/model/CreateCustomRoutingEndpointGroupsRequest.h>

using AlibabaCloud::Ga::Model::CreateCustomRoutingEndpointGroupsRequest;

CreateCustomRoutingEndpointGroupsRequest::CreateCustomRoutingEndpointGroupsRequest()
    : RpcServiceRequest("ga", "2019-11-20", "CreateCustomRoutingEndpointGroups") {
  setMethod(HttpRequest::Method::Post);
}

CreateCustomRoutingEndpointGroupsRequest::~CreateCustomRoutingEndpointGroupsRequest() {}

bool CreateCustomRoutingEndpointGroupsRequest::getDryRun() const {
  return dryRun_;
}

void CreateCustomRoutingEndpointGroupsRequest::setDryRun(bool dryRun) {
  dryRun_ = dryRun;
  setParameter(std::string("DryRun"), dryRun ? "true" : "false");
}

std::string CreateCustomRoutingEndpointGroupsRequest::getClientToken() const {
  return clientToken_;
}

void CreateCustomRoutingEndpointGroupsRequest::setClientToken(const std::string &clientToken) {
  clientToken_ = clientToken;
  setParameter(std::string("ClientToken"), clientToken);
}

std::vector<CreateCustomRoutingEndpointGroupsRequest::EndpointGroupConfigurations> CreateCustomRoutingEndpointGroupsRequest::getEndpointGroupConfigurations() const {
  return endpointGroupConfigurations_;
}

void CreateCustomRoutingEndpointGroupsRequest::setEndpointGroupConfigurations(const std::vector<CreateCustomRoutingEndpointGroupsRequest::EndpointGroupConfigurations> &endpointGroupConfigurations) {
  endpointGroupConfigurations_ = endpointGroupConfigurations;
  for(int dep1 = 0; dep1 != endpointGroupConfigurations.size(); dep1++) {
  auto endpointGroupConfigurationsObj = endpointGroupConfigurations.at(dep1);
  std::string endpointGroupConfigurationsObjStr = std::string("EndpointGroupConfigurations") + "." + std::to_string(dep1 + 1);
    setParameter(endpointGroupConfigurationsObjStr + ".EndpointGroupRegion", endpointGroupConfigurationsObj.endpointGroupRegion);
    setParameter(endpointGroupConfigurationsObjStr + ".Name", endpointGroupConfigurationsObj.name);
    setParameter(endpointGroupConfigurationsObjStr + ".Description", endpointGroupConfigurationsObj.description);
    for(int dep2 = 0; dep2 != endpointGroupConfigurationsObj.destinationConfigurations.size(); dep2++) {
    auto destinationConfigurationsObj = endpointGroupConfigurationsObj.destinationConfigurations.at(dep2);
    std::string destinationConfigurationsObjStr = endpointGroupConfigurationsObjStr + ".DestinationConfigurations" + "." + std::to_string(dep2 + 1);
      setParameter(destinationConfigurationsObjStr + ".FromPort", std::to_string(destinationConfigurationsObj.fromPort));
      setParameter(destinationConfigurationsObjStr + ".ToPort", std::to_string(destinationConfigurationsObj.toPort));
    }
    for(int dep2 = 0; dep2 != endpointGroupConfigurationsObj.endpointConfigurations.size(); dep2++) {
    auto endpointConfigurationsObj = endpointGroupConfigurationsObj.endpointConfigurations.at(dep2);
    std::string endpointConfigurationsObjStr = endpointGroupConfigurationsObjStr + ".EndpointConfigurations" + "." + std::to_string(dep2 + 1);
      setParameter(endpointConfigurationsObjStr + ".Type", endpointConfigurationsObj.type);
      setParameter(endpointConfigurationsObjStr + ".Endpoint", endpointConfigurationsObj.endpoint);
      setParameter(endpointConfigurationsObjStr + ".TrafficToEndpointPolicy", endpointConfigurationsObj.trafficToEndpointPolicy);
      for(int dep3 = 0; dep3 != endpointConfigurationsObj.policyConfigurations.size(); dep3++) {
      auto policyConfigurationsObj = endpointConfigurationsObj.policyConfigurations.at(dep3);
      std::string policyConfigurationsObjStr = endpointConfigurationsObjStr + ".PolicyConfigurations" + "." + std::to_string(dep3 + 1);
        setParameter(policyConfigurationsObjStr + ".Address", policyConfigurationsObj.address);
        for(int dep4 = 0; dep4 != policyConfigurationsObj.portRanges.size(); dep4++) {
        auto portRangesObj = policyConfigurationsObj.portRanges.at(dep4);
        std::string portRangesObjStr = policyConfigurationsObjStr + ".PortRanges" + "." + std::to_string(dep4 + 1);
          setParameter(portRangesObjStr + ".FromPort", std::to_string(portRangesObj.fromPort));
          setParameter(portRangesObjStr + ".ToPort", std::to_string(portRangesObj.toPort));
        }
      }
    }
  }
}

std::string CreateCustomRoutingEndpointGroupsRequest::getListenerId() const {
  return listenerId_;
}

void CreateCustomRoutingEndpointGroupsRequest::setListenerId(const std::string &listenerId) {
  listenerId_ = listenerId;
  setParameter(std::string("ListenerId"), listenerId);
}

std::string CreateCustomRoutingEndpointGroupsRequest::getRegionId() const {
  return regionId_;
}

void CreateCustomRoutingEndpointGroupsRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string CreateCustomRoutingEndpointGroupsRequest::getAcceleratorId() const {
  return acceleratorId_;
}

void CreateCustomRoutingEndpointGroupsRequest::setAcceleratorId(const std::string &acceleratorId) {
  acceleratorId_ = acceleratorId;
  setParameter(std::string("AcceleratorId"), acceleratorId);
}

