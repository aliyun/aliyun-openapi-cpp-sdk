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

#include <alibabacloud/ga/model/UpdateCustomRoutingEndpointGroupDestinationsRequest.h>

using AlibabaCloud::Ga::Model::UpdateCustomRoutingEndpointGroupDestinationsRequest;

UpdateCustomRoutingEndpointGroupDestinationsRequest::UpdateCustomRoutingEndpointGroupDestinationsRequest()
    : RpcServiceRequest("ga", "2019-11-20", "UpdateCustomRoutingEndpointGroupDestinations") {
  setMethod(HttpRequest::Method::Post);
}

UpdateCustomRoutingEndpointGroupDestinationsRequest::~UpdateCustomRoutingEndpointGroupDestinationsRequest() {}

bool UpdateCustomRoutingEndpointGroupDestinationsRequest::getDryRun() const {
  return dryRun_;
}

void UpdateCustomRoutingEndpointGroupDestinationsRequest::setDryRun(bool dryRun) {
  dryRun_ = dryRun;
  setParameter(std::string("DryRun"), dryRun ? "true" : "false");
}

std::string UpdateCustomRoutingEndpointGroupDestinationsRequest::getClientToken() const {
  return clientToken_;
}

void UpdateCustomRoutingEndpointGroupDestinationsRequest::setClientToken(const std::string &clientToken) {
  clientToken_ = clientToken;
  setParameter(std::string("ClientToken"), clientToken);
}

std::vector<UpdateCustomRoutingEndpointGroupDestinationsRequest::DestinationConfigurations> UpdateCustomRoutingEndpointGroupDestinationsRequest::getDestinationConfigurations() const {
  return destinationConfigurations_;
}

void UpdateCustomRoutingEndpointGroupDestinationsRequest::setDestinationConfigurations(const std::vector<UpdateCustomRoutingEndpointGroupDestinationsRequest::DestinationConfigurations> &destinationConfigurations) {
  destinationConfigurations_ = destinationConfigurations;
  for(int dep1 = 0; dep1 != destinationConfigurations.size(); dep1++) {
  auto destinationConfigurationsObj = destinationConfigurations.at(dep1);
  std::string destinationConfigurationsObjStr = std::string("DestinationConfigurations") + "." + std::to_string(dep1 + 1);
    setParameter(destinationConfigurationsObjStr + ".FromPort", std::to_string(destinationConfigurationsObj.fromPort));
    setParameter(destinationConfigurationsObjStr + ".ToPort", std::to_string(destinationConfigurationsObj.toPort));
    setParameter(destinationConfigurationsObjStr + ".DestinationId", destinationConfigurationsObj.destinationId);
  }
}

std::string UpdateCustomRoutingEndpointGroupDestinationsRequest::getRegionId() const {
  return regionId_;
}

void UpdateCustomRoutingEndpointGroupDestinationsRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string UpdateCustomRoutingEndpointGroupDestinationsRequest::getEndpointGroupId() const {
  return endpointGroupId_;
}

void UpdateCustomRoutingEndpointGroupDestinationsRequest::setEndpointGroupId(const std::string &endpointGroupId) {
  endpointGroupId_ = endpointGroupId;
  setParameter(std::string("EndpointGroupId"), endpointGroupId);
}

