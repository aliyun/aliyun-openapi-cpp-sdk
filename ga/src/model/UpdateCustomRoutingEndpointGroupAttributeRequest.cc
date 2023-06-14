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

#include <alibabacloud/ga/model/UpdateCustomRoutingEndpointGroupAttributeRequest.h>

using AlibabaCloud::Ga::Model::UpdateCustomRoutingEndpointGroupAttributeRequest;

UpdateCustomRoutingEndpointGroupAttributeRequest::UpdateCustomRoutingEndpointGroupAttributeRequest()
    : RpcServiceRequest("ga", "2019-11-20", "UpdateCustomRoutingEndpointGroupAttribute") {
  setMethod(HttpRequest::Method::Post);
}

UpdateCustomRoutingEndpointGroupAttributeRequest::~UpdateCustomRoutingEndpointGroupAttributeRequest() {}

std::string UpdateCustomRoutingEndpointGroupAttributeRequest::getClientToken() const {
  return clientToken_;
}

void UpdateCustomRoutingEndpointGroupAttributeRequest::setClientToken(const std::string &clientToken) {
  clientToken_ = clientToken;
  setParameter(std::string("ClientToken"), clientToken);
}

std::string UpdateCustomRoutingEndpointGroupAttributeRequest::getDescription() const {
  return description_;
}

void UpdateCustomRoutingEndpointGroupAttributeRequest::setDescription(const std::string &description) {
  description_ = description;
  setParameter(std::string("Description"), description);
}

std::string UpdateCustomRoutingEndpointGroupAttributeRequest::getRegionId() const {
  return regionId_;
}

void UpdateCustomRoutingEndpointGroupAttributeRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string UpdateCustomRoutingEndpointGroupAttributeRequest::getName() const {
  return name_;
}

void UpdateCustomRoutingEndpointGroupAttributeRequest::setName(const std::string &name) {
  name_ = name;
  setParameter(std::string("Name"), name);
}

std::string UpdateCustomRoutingEndpointGroupAttributeRequest::getEndpointGroupId() const {
  return endpointGroupId_;
}

void UpdateCustomRoutingEndpointGroupAttributeRequest::setEndpointGroupId(const std::string &endpointGroupId) {
  endpointGroupId_ = endpointGroupId;
  setParameter(std::string("EndpointGroupId"), endpointGroupId);
}

