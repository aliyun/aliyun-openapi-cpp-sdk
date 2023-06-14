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

#include <alibabacloud/ga/model/DeleteCustomRoutingEndpointsRequest.h>

using AlibabaCloud::Ga::Model::DeleteCustomRoutingEndpointsRequest;

DeleteCustomRoutingEndpointsRequest::DeleteCustomRoutingEndpointsRequest()
    : RpcServiceRequest("ga", "2019-11-20", "DeleteCustomRoutingEndpoints") {
  setMethod(HttpRequest::Method::Post);
}

DeleteCustomRoutingEndpointsRequest::~DeleteCustomRoutingEndpointsRequest() {}

std::string DeleteCustomRoutingEndpointsRequest::getClientToken() const {
  return clientToken_;
}

void DeleteCustomRoutingEndpointsRequest::setClientToken(const std::string &clientToken) {
  clientToken_ = clientToken;
  setParameter(std::string("ClientToken"), clientToken);
}

std::vector<std::string> DeleteCustomRoutingEndpointsRequest::getEndpointIds() const {
  return endpointIds_;
}

void DeleteCustomRoutingEndpointsRequest::setEndpointIds(const std::vector<std::string> &endpointIds) {
  endpointIds_ = endpointIds;
}

std::string DeleteCustomRoutingEndpointsRequest::getRegionId() const {
  return regionId_;
}

void DeleteCustomRoutingEndpointsRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string DeleteCustomRoutingEndpointsRequest::getEndpointGroupId() const {
  return endpointGroupId_;
}

void DeleteCustomRoutingEndpointsRequest::setEndpointGroupId(const std::string &endpointGroupId) {
  endpointGroupId_ = endpointGroupId;
  setParameter(std::string("EndpointGroupId"), endpointGroupId);
}

