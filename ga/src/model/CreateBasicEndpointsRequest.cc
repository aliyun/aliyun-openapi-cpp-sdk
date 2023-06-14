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

#include <alibabacloud/ga/model/CreateBasicEndpointsRequest.h>

using AlibabaCloud::Ga::Model::CreateBasicEndpointsRequest;

CreateBasicEndpointsRequest::CreateBasicEndpointsRequest()
    : RpcServiceRequest("ga", "2019-11-20", "CreateBasicEndpoints") {
  setMethod(HttpRequest::Method::Post);
}

CreateBasicEndpointsRequest::~CreateBasicEndpointsRequest() {}

std::vector<CreateBasicEndpointsRequest::Endpoints> CreateBasicEndpointsRequest::getEndpoints() const {
  return endpoints_;
}

void CreateBasicEndpointsRequest::setEndpoints(const std::vector<CreateBasicEndpointsRequest::Endpoints> &endpoints) {
  endpoints_ = endpoints;
  for(int dep1 = 0; dep1 != endpoints.size(); dep1++) {
    setParameter(std::string("Endpoints") + "." + std::to_string(dep1 + 1) + ".Name", endpoints[dep1].name);
    setParameter(std::string("Endpoints") + "." + std::to_string(dep1 + 1) + ".EndpointType", endpoints[dep1].endpointType);
    setParameter(std::string("Endpoints") + "." + std::to_string(dep1 + 1) + ".EndpointAddress", endpoints[dep1].endpointAddress);
    setParameter(std::string("Endpoints") + "." + std::to_string(dep1 + 1) + ".EndpointSubAddress", endpoints[dep1].endpointSubAddress);
    setParameter(std::string("Endpoints") + "." + std::to_string(dep1 + 1) + ".EndpointSubAddressType", endpoints[dep1].endpointSubAddressType);
    setParameter(std::string("Endpoints") + "." + std::to_string(dep1 + 1) + ".EndpointZoneId", endpoints[dep1].endpointZoneId);
  }
}

std::string CreateBasicEndpointsRequest::getClientToken() const {
  return clientToken_;
}

void CreateBasicEndpointsRequest::setClientToken(const std::string &clientToken) {
  clientToken_ = clientToken;
  setParameter(std::string("ClientToken"), clientToken);
}

std::string CreateBasicEndpointsRequest::getRegionId() const {
  return regionId_;
}

void CreateBasicEndpointsRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string CreateBasicEndpointsRequest::getAcceleratorId() const {
  return acceleratorId_;
}

void CreateBasicEndpointsRequest::setAcceleratorId(const std::string &acceleratorId) {
  acceleratorId_ = acceleratorId;
  setParameter(std::string("AcceleratorId"), acceleratorId);
}

std::string CreateBasicEndpointsRequest::getEndpointGroupId() const {
  return endpointGroupId_;
}

void CreateBasicEndpointsRequest::setEndpointGroupId(const std::string &endpointGroupId) {
  endpointGroupId_ = endpointGroupId;
  setParameter(std::string("EndpointGroupId"), endpointGroupId);
}

