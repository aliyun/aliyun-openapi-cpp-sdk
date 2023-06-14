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

#include <alibabacloud/ga/model/GetBasicEndpointRequest.h>

using AlibabaCloud::Ga::Model::GetBasicEndpointRequest;

GetBasicEndpointRequest::GetBasicEndpointRequest()
    : RpcServiceRequest("ga", "2019-11-20", "GetBasicEndpoint") {
  setMethod(HttpRequest::Method::Post);
}

GetBasicEndpointRequest::~GetBasicEndpointRequest() {}

std::string GetBasicEndpointRequest::getClientToken() const {
  return clientToken_;
}

void GetBasicEndpointRequest::setClientToken(const std::string &clientToken) {
  clientToken_ = clientToken;
  setParameter(std::string("ClientToken"), clientToken);
}

std::string GetBasicEndpointRequest::getEndpointId() const {
  return endpointId_;
}

void GetBasicEndpointRequest::setEndpointId(const std::string &endpointId) {
  endpointId_ = endpointId;
  setParameter(std::string("EndpointId"), endpointId);
}

std::string GetBasicEndpointRequest::getRegionId() const {
  return regionId_;
}

void GetBasicEndpointRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

