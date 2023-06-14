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

#include <alibabacloud/ga/model/UpdateBasicEndpointRequest.h>

using AlibabaCloud::Ga::Model::UpdateBasicEndpointRequest;

UpdateBasicEndpointRequest::UpdateBasicEndpointRequest()
    : RpcServiceRequest("ga", "2019-11-20", "UpdateBasicEndpoint") {
  setMethod(HttpRequest::Method::Post);
}

UpdateBasicEndpointRequest::~UpdateBasicEndpointRequest() {}

std::string UpdateBasicEndpointRequest::getClientToken() const {
  return clientToken_;
}

void UpdateBasicEndpointRequest::setClientToken(const std::string &clientToken) {
  clientToken_ = clientToken;
  setParameter(std::string("ClientToken"), clientToken);
}

std::string UpdateBasicEndpointRequest::getEndpointId() const {
  return endpointId_;
}

void UpdateBasicEndpointRequest::setEndpointId(const std::string &endpointId) {
  endpointId_ = endpointId;
  setParameter(std::string("EndpointId"), endpointId);
}

std::string UpdateBasicEndpointRequest::getRegionId() const {
  return regionId_;
}

void UpdateBasicEndpointRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string UpdateBasicEndpointRequest::getName() const {
  return name_;
}

void UpdateBasicEndpointRequest::setName(const std::string &name) {
  name_ = name;
  setParameter(std::string("Name"), name);
}

std::string UpdateBasicEndpointRequest::getEndpointGroupId() const {
  return endpointGroupId_;
}

void UpdateBasicEndpointRequest::setEndpointGroupId(const std::string &endpointGroupId) {
  endpointGroupId_ = endpointGroupId;
  setParameter(std::string("EndpointGroupId"), endpointGroupId);
}

