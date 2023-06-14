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

#include <alibabacloud/ga/model/CreateBasicEndpointRequest.h>

using AlibabaCloud::Ga::Model::CreateBasicEndpointRequest;

CreateBasicEndpointRequest::CreateBasicEndpointRequest()
    : RpcServiceRequest("ga", "2019-11-20", "CreateBasicEndpoint") {
  setMethod(HttpRequest::Method::Post);
}

CreateBasicEndpointRequest::~CreateBasicEndpointRequest() {}

std::string CreateBasicEndpointRequest::getEndpointZoneId() const {
  return endpointZoneId_;
}

void CreateBasicEndpointRequest::setEndpointZoneId(const std::string &endpointZoneId) {
  endpointZoneId_ = endpointZoneId;
  setParameter(std::string("EndpointZoneId"), endpointZoneId);
}

std::string CreateBasicEndpointRequest::getEndpointSubAddressType() const {
  return endpointSubAddressType_;
}

void CreateBasicEndpointRequest::setEndpointSubAddressType(const std::string &endpointSubAddressType) {
  endpointSubAddressType_ = endpointSubAddressType;
  setParameter(std::string("EndpointSubAddressType"), endpointSubAddressType);
}

std::string CreateBasicEndpointRequest::getClientToken() const {
  return clientToken_;
}

void CreateBasicEndpointRequest::setClientToken(const std::string &clientToken) {
  clientToken_ = clientToken;
  setParameter(std::string("ClientToken"), clientToken);
}

std::string CreateBasicEndpointRequest::getEndpointAddress() const {
  return endpointAddress_;
}

void CreateBasicEndpointRequest::setEndpointAddress(const std::string &endpointAddress) {
  endpointAddress_ = endpointAddress;
  setParameter(std::string("EndpointAddress"), endpointAddress);
}

std::string CreateBasicEndpointRequest::getRegionId() const {
  return regionId_;
}

void CreateBasicEndpointRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string CreateBasicEndpointRequest::getEndpointType() const {
  return endpointType_;
}

void CreateBasicEndpointRequest::setEndpointType(const std::string &endpointType) {
  endpointType_ = endpointType;
  setParameter(std::string("EndpointType"), endpointType);
}

std::string CreateBasicEndpointRequest::getName() const {
  return name_;
}

void CreateBasicEndpointRequest::setName(const std::string &name) {
  name_ = name;
  setParameter(std::string("Name"), name);
}

std::string CreateBasicEndpointRequest::getAcceleratorId() const {
  return acceleratorId_;
}

void CreateBasicEndpointRequest::setAcceleratorId(const std::string &acceleratorId) {
  acceleratorId_ = acceleratorId;
  setParameter(std::string("AcceleratorId"), acceleratorId);
}

std::string CreateBasicEndpointRequest::getEndpointSubAddress() const {
  return endpointSubAddress_;
}

void CreateBasicEndpointRequest::setEndpointSubAddress(const std::string &endpointSubAddress) {
  endpointSubAddress_ = endpointSubAddress;
  setParameter(std::string("EndpointSubAddress"), endpointSubAddress);
}

std::string CreateBasicEndpointRequest::getEndpointGroupId() const {
  return endpointGroupId_;
}

void CreateBasicEndpointRequest::setEndpointGroupId(const std::string &endpointGroupId) {
  endpointGroupId_ = endpointGroupId;
  setParameter(std::string("EndpointGroupId"), endpointGroupId);
}

