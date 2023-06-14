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

#include <alibabacloud/ga/model/CreateBasicEndpointGroupRequest.h>

using AlibabaCloud::Ga::Model::CreateBasicEndpointGroupRequest;

CreateBasicEndpointGroupRequest::CreateBasicEndpointGroupRequest()
    : RpcServiceRequest("ga", "2019-11-20", "CreateBasicEndpointGroup") {
  setMethod(HttpRequest::Method::Post);
}

CreateBasicEndpointGroupRequest::~CreateBasicEndpointGroupRequest() {}

std::string CreateBasicEndpointGroupRequest::getClientToken() const {
  return clientToken_;
}

void CreateBasicEndpointGroupRequest::setClientToken(const std::string &clientToken) {
  clientToken_ = clientToken;
  setParameter(std::string("ClientToken"), clientToken);
}

std::string CreateBasicEndpointGroupRequest::getDescription() const {
  return description_;
}

void CreateBasicEndpointGroupRequest::setDescription(const std::string &description) {
  description_ = description;
  setParameter(std::string("Description"), description);
}

std::string CreateBasicEndpointGroupRequest::getEndpointAddress() const {
  return endpointAddress_;
}

void CreateBasicEndpointGroupRequest::setEndpointAddress(const std::string &endpointAddress) {
  endpointAddress_ = endpointAddress;
  setParameter(std::string("EndpointAddress"), endpointAddress);
}

std::string CreateBasicEndpointGroupRequest::getEndpointGroupRegion() const {
  return endpointGroupRegion_;
}

void CreateBasicEndpointGroupRequest::setEndpointGroupRegion(const std::string &endpointGroupRegion) {
  endpointGroupRegion_ = endpointGroupRegion;
  setParameter(std::string("EndpointGroupRegion"), endpointGroupRegion);
}

std::string CreateBasicEndpointGroupRequest::getRegionId() const {
  return regionId_;
}

void CreateBasicEndpointGroupRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string CreateBasicEndpointGroupRequest::getEndpointType() const {
  return endpointType_;
}

void CreateBasicEndpointGroupRequest::setEndpointType(const std::string &endpointType) {
  endpointType_ = endpointType;
  setParameter(std::string("EndpointType"), endpointType);
}

std::string CreateBasicEndpointGroupRequest::getName() const {
  return name_;
}

void CreateBasicEndpointGroupRequest::setName(const std::string &name) {
  name_ = name;
  setParameter(std::string("Name"), name);
}

std::string CreateBasicEndpointGroupRequest::getAcceleratorId() const {
  return acceleratorId_;
}

void CreateBasicEndpointGroupRequest::setAcceleratorId(const std::string &acceleratorId) {
  acceleratorId_ = acceleratorId;
  setParameter(std::string("AcceleratorId"), acceleratorId);
}

std::string CreateBasicEndpointGroupRequest::getEndpointSubAddress() const {
  return endpointSubAddress_;
}

void CreateBasicEndpointGroupRequest::setEndpointSubAddress(const std::string &endpointSubAddress) {
  endpointSubAddress_ = endpointSubAddress;
  setParameter(std::string("EndpointSubAddress"), endpointSubAddress);
}

