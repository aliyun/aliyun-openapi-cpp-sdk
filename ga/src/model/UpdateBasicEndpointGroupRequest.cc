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

#include <alibabacloud/ga/model/UpdateBasicEndpointGroupRequest.h>

using AlibabaCloud::Ga::Model::UpdateBasicEndpointGroupRequest;

UpdateBasicEndpointGroupRequest::UpdateBasicEndpointGroupRequest()
    : RpcServiceRequest("ga", "2019-11-20", "UpdateBasicEndpointGroup") {
  setMethod(HttpRequest::Method::Post);
}

UpdateBasicEndpointGroupRequest::~UpdateBasicEndpointGroupRequest() {}

std::string UpdateBasicEndpointGroupRequest::getClientToken() const {
  return clientToken_;
}

void UpdateBasicEndpointGroupRequest::setClientToken(const std::string &clientToken) {
  clientToken_ = clientToken;
  setParameter(std::string("ClientToken"), clientToken);
}

std::string UpdateBasicEndpointGroupRequest::getDescription() const {
  return description_;
}

void UpdateBasicEndpointGroupRequest::setDescription(const std::string &description) {
  description_ = description;
  setParameter(std::string("Description"), description);
}

std::string UpdateBasicEndpointGroupRequest::getEndpointAddress() const {
  return endpointAddress_;
}

void UpdateBasicEndpointGroupRequest::setEndpointAddress(const std::string &endpointAddress) {
  endpointAddress_ = endpointAddress;
  setParameter(std::string("EndpointAddress"), endpointAddress);
}

std::string UpdateBasicEndpointGroupRequest::getRegionId() const {
  return regionId_;
}

void UpdateBasicEndpointGroupRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string UpdateBasicEndpointGroupRequest::getEndpointType() const {
  return endpointType_;
}

void UpdateBasicEndpointGroupRequest::setEndpointType(const std::string &endpointType) {
  endpointType_ = endpointType;
  setParameter(std::string("EndpointType"), endpointType);
}

std::string UpdateBasicEndpointGroupRequest::getName() const {
  return name_;
}

void UpdateBasicEndpointGroupRequest::setName(const std::string &name) {
  name_ = name;
  setParameter(std::string("Name"), name);
}

std::string UpdateBasicEndpointGroupRequest::getEndpointSubAddress() const {
  return endpointSubAddress_;
}

void UpdateBasicEndpointGroupRequest::setEndpointSubAddress(const std::string &endpointSubAddress) {
  endpointSubAddress_ = endpointSubAddress;
  setParameter(std::string("EndpointSubAddress"), endpointSubAddress);
}

std::string UpdateBasicEndpointGroupRequest::getEndpointGroupId() const {
  return endpointGroupId_;
}

void UpdateBasicEndpointGroupRequest::setEndpointGroupId(const std::string &endpointGroupId) {
  endpointGroupId_ = endpointGroupId;
  setParameter(std::string("EndpointGroupId"), endpointGroupId);
}

