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

#include <alibabacloud/ga/model/UpdateCustomRoutingEndpointsRequest.h>

using AlibabaCloud::Ga::Model::UpdateCustomRoutingEndpointsRequest;

UpdateCustomRoutingEndpointsRequest::UpdateCustomRoutingEndpointsRequest()
    : RpcServiceRequest("ga", "2019-11-20", "UpdateCustomRoutingEndpoints") {
  setMethod(HttpRequest::Method::Post);
}

UpdateCustomRoutingEndpointsRequest::~UpdateCustomRoutingEndpointsRequest() {}

std::string UpdateCustomRoutingEndpointsRequest::getClientToken() const {
  return clientToken_;
}

void UpdateCustomRoutingEndpointsRequest::setClientToken(const std::string &clientToken) {
  clientToken_ = clientToken;
  setParameter(std::string("ClientToken"), clientToken);
}

std::vector<UpdateCustomRoutingEndpointsRequest::EndpointConfigurations> UpdateCustomRoutingEndpointsRequest::getEndpointConfigurations() const {
  return endpointConfigurations_;
}

void UpdateCustomRoutingEndpointsRequest::setEndpointConfigurations(const std::vector<UpdateCustomRoutingEndpointsRequest::EndpointConfigurations> &endpointConfigurations) {
  endpointConfigurations_ = endpointConfigurations;
  for(int dep1 = 0; dep1 != endpointConfigurations.size(); dep1++) {
  auto endpointConfigurationsObj = endpointConfigurations.at(dep1);
  std::string endpointConfigurationsObjStr = std::string("EndpointConfigurations") + "." + std::to_string(dep1 + 1);
    setParameter(endpointConfigurationsObjStr + ".TrafficToEndpointPolicy", endpointConfigurationsObj.trafficToEndpointPolicy);
    setParameter(endpointConfigurationsObjStr + ".EndpointId", endpointConfigurationsObj.endpointId);
    for(int dep2 = 0; dep2 != endpointConfigurationsObj.policyConfigurations.size(); dep2++) {
    auto policyConfigurationsObj = endpointConfigurationsObj.policyConfigurations.at(dep2);
    std::string policyConfigurationsObjStr = endpointConfigurationsObjStr + ".PolicyConfigurations" + "." + std::to_string(dep2 + 1);
      setParameter(policyConfigurationsObjStr + ".Address", policyConfigurationsObj.address);
      for(int dep3 = 0; dep3 != policyConfigurationsObj.portRanges.size(); dep3++) {
      auto portRangesObj = policyConfigurationsObj.portRanges.at(dep3);
      std::string portRangesObjStr = policyConfigurationsObjStr + ".PortRanges" + "." + std::to_string(dep3 + 1);
        setParameter(portRangesObjStr + ".FromPort", portRangesObj.fromPort);
        setParameter(portRangesObjStr + ".ToPort", portRangesObj.toPort);
      }
    }
  }
}

std::string UpdateCustomRoutingEndpointsRequest::getRegionId() const {
  return regionId_;
}

void UpdateCustomRoutingEndpointsRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string UpdateCustomRoutingEndpointsRequest::getEndpointGroupId() const {
  return endpointGroupId_;
}

void UpdateCustomRoutingEndpointsRequest::setEndpointGroupId(const std::string &endpointGroupId) {
  endpointGroupId_ = endpointGroupId;
  setParameter(std::string("EndpointGroupId"), endpointGroupId);
}

