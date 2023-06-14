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

#include <alibabacloud/ga/model/CreateBasicAccelerateIpEndpointRelationsRequest.h>

using AlibabaCloud::Ga::Model::CreateBasicAccelerateIpEndpointRelationsRequest;

CreateBasicAccelerateIpEndpointRelationsRequest::CreateBasicAccelerateIpEndpointRelationsRequest()
    : RpcServiceRequest("ga", "2019-11-20", "CreateBasicAccelerateIpEndpointRelations") {
  setMethod(HttpRequest::Method::Post);
}

CreateBasicAccelerateIpEndpointRelationsRequest::~CreateBasicAccelerateIpEndpointRelationsRequest() {}

std::string CreateBasicAccelerateIpEndpointRelationsRequest::getClientToken() const {
  return clientToken_;
}

void CreateBasicAccelerateIpEndpointRelationsRequest::setClientToken(const std::string &clientToken) {
  clientToken_ = clientToken;
  setParameter(std::string("ClientToken"), clientToken);
}

std::string CreateBasicAccelerateIpEndpointRelationsRequest::getRegionId() const {
  return regionId_;
}

void CreateBasicAccelerateIpEndpointRelationsRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string CreateBasicAccelerateIpEndpointRelationsRequest::getAcceleratorId() const {
  return acceleratorId_;
}

void CreateBasicAccelerateIpEndpointRelationsRequest::setAcceleratorId(const std::string &acceleratorId) {
  acceleratorId_ = acceleratorId;
  setParameter(std::string("AcceleratorId"), acceleratorId);
}

std::vector<CreateBasicAccelerateIpEndpointRelationsRequest::AccelerateIpEndpointRelations> CreateBasicAccelerateIpEndpointRelationsRequest::getAccelerateIpEndpointRelations() const {
  return accelerateIpEndpointRelations_;
}

void CreateBasicAccelerateIpEndpointRelationsRequest::setAccelerateIpEndpointRelations(const std::vector<CreateBasicAccelerateIpEndpointRelationsRequest::AccelerateIpEndpointRelations> &accelerateIpEndpointRelations) {
  accelerateIpEndpointRelations_ = accelerateIpEndpointRelations;
  for(int dep1 = 0; dep1 != accelerateIpEndpointRelations.size(); dep1++) {
    setParameter(std::string("AccelerateIpEndpointRelations") + "." + std::to_string(dep1 + 1) + ".AccelerateIpId", accelerateIpEndpointRelations[dep1].accelerateIpId);
    setParameter(std::string("AccelerateIpEndpointRelations") + "." + std::to_string(dep1 + 1) + ".EndpointId", accelerateIpEndpointRelations[dep1].endpointId);
  }
}

