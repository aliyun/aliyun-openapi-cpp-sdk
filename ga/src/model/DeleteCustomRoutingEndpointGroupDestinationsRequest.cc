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

#include <alibabacloud/ga/model/DeleteCustomRoutingEndpointGroupDestinationsRequest.h>

using AlibabaCloud::Ga::Model::DeleteCustomRoutingEndpointGroupDestinationsRequest;

DeleteCustomRoutingEndpointGroupDestinationsRequest::DeleteCustomRoutingEndpointGroupDestinationsRequest()
    : RpcServiceRequest("ga", "2019-11-20", "DeleteCustomRoutingEndpointGroupDestinations") {
  setMethod(HttpRequest::Method::Post);
}

DeleteCustomRoutingEndpointGroupDestinationsRequest::~DeleteCustomRoutingEndpointGroupDestinationsRequest() {}

std::vector<std::string> DeleteCustomRoutingEndpointGroupDestinationsRequest::getDestinationIds() const {
  return destinationIds_;
}

void DeleteCustomRoutingEndpointGroupDestinationsRequest::setDestinationIds(const std::vector<std::string> &destinationIds) {
  destinationIds_ = destinationIds;
}

bool DeleteCustomRoutingEndpointGroupDestinationsRequest::getDryRun() const {
  return dryRun_;
}

void DeleteCustomRoutingEndpointGroupDestinationsRequest::setDryRun(bool dryRun) {
  dryRun_ = dryRun;
  setParameter(std::string("DryRun"), dryRun ? "true" : "false");
}

std::string DeleteCustomRoutingEndpointGroupDestinationsRequest::getClientToken() const {
  return clientToken_;
}

void DeleteCustomRoutingEndpointGroupDestinationsRequest::setClientToken(const std::string &clientToken) {
  clientToken_ = clientToken;
  setParameter(std::string("ClientToken"), clientToken);
}

std::string DeleteCustomRoutingEndpointGroupDestinationsRequest::getRegionId() const {
  return regionId_;
}

void DeleteCustomRoutingEndpointGroupDestinationsRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string DeleteCustomRoutingEndpointGroupDestinationsRequest::getEndpointGroupId() const {
  return endpointGroupId_;
}

void DeleteCustomRoutingEndpointGroupDestinationsRequest::setEndpointGroupId(const std::string &endpointGroupId) {
  endpointGroupId_ = endpointGroupId;
  setParameter(std::string("EndpointGroupId"), endpointGroupId);
}

