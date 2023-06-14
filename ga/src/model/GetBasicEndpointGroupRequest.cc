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

#include <alibabacloud/ga/model/GetBasicEndpointGroupRequest.h>

using AlibabaCloud::Ga::Model::GetBasicEndpointGroupRequest;

GetBasicEndpointGroupRequest::GetBasicEndpointGroupRequest()
    : RpcServiceRequest("ga", "2019-11-20", "GetBasicEndpointGroup") {
  setMethod(HttpRequest::Method::Post);
}

GetBasicEndpointGroupRequest::~GetBasicEndpointGroupRequest() {}

std::string GetBasicEndpointGroupRequest::getClientToken() const {
  return clientToken_;
}

void GetBasicEndpointGroupRequest::setClientToken(const std::string &clientToken) {
  clientToken_ = clientToken;
  setParameter(std::string("ClientToken"), clientToken);
}

std::string GetBasicEndpointGroupRequest::getRegionId() const {
  return regionId_;
}

void GetBasicEndpointGroupRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string GetBasicEndpointGroupRequest::getEndpointGroupId() const {
  return endpointGroupId_;
}

void GetBasicEndpointGroupRequest::setEndpointGroupId(const std::string &endpointGroupId) {
  endpointGroupId_ = endpointGroupId;
  setParameter(std::string("EndpointGroupId"), endpointGroupId);
}

