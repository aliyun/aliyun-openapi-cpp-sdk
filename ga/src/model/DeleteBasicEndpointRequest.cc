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

#include <alibabacloud/ga/model/DeleteBasicEndpointRequest.h>

using AlibabaCloud::Ga::Model::DeleteBasicEndpointRequest;

DeleteBasicEndpointRequest::DeleteBasicEndpointRequest()
    : RpcServiceRequest("ga", "2019-11-20", "DeleteBasicEndpoint") {
  setMethod(HttpRequest::Method::Post);
}

DeleteBasicEndpointRequest::~DeleteBasicEndpointRequest() {}

std::string DeleteBasicEndpointRequest::getClientToken() const {
  return clientToken_;
}

void DeleteBasicEndpointRequest::setClientToken(const std::string &clientToken) {
  clientToken_ = clientToken;
  setParameter(std::string("ClientToken"), clientToken);
}

std::string DeleteBasicEndpointRequest::getEndpointId() const {
  return endpointId_;
}

void DeleteBasicEndpointRequest::setEndpointId(const std::string &endpointId) {
  endpointId_ = endpointId;
  setParameter(std::string("EndpointId"), endpointId);
}

std::string DeleteBasicEndpointRequest::getRegionId() const {
  return regionId_;
}

void DeleteBasicEndpointRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string DeleteBasicEndpointRequest::getEndpointGroupId() const {
  return endpointGroupId_;
}

void DeleteBasicEndpointRequest::setEndpointGroupId(const std::string &endpointGroupId) {
  endpointGroupId_ = endpointGroupId;
  setParameter(std::string("EndpointGroupId"), endpointGroupId);
}

