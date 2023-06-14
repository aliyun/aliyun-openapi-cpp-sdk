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

#include <alibabacloud/ga/model/GetBasicAccelerateIpEndpointRelationRequest.h>

using AlibabaCloud::Ga::Model::GetBasicAccelerateIpEndpointRelationRequest;

GetBasicAccelerateIpEndpointRelationRequest::GetBasicAccelerateIpEndpointRelationRequest()
    : RpcServiceRequest("ga", "2019-11-20", "GetBasicAccelerateIpEndpointRelation") {
  setMethod(HttpRequest::Method::Post);
}

GetBasicAccelerateIpEndpointRelationRequest::~GetBasicAccelerateIpEndpointRelationRequest() {}

std::string GetBasicAccelerateIpEndpointRelationRequest::getClientToken() const {
  return clientToken_;
}

void GetBasicAccelerateIpEndpointRelationRequest::setClientToken(const std::string &clientToken) {
  clientToken_ = clientToken;
  setParameter(std::string("ClientToken"), clientToken);
}

std::string GetBasicAccelerateIpEndpointRelationRequest::getEndpointId() const {
  return endpointId_;
}

void GetBasicAccelerateIpEndpointRelationRequest::setEndpointId(const std::string &endpointId) {
  endpointId_ = endpointId;
  setParameter(std::string("EndpointId"), endpointId);
}

std::string GetBasicAccelerateIpEndpointRelationRequest::getAccelerateIpId() const {
  return accelerateIpId_;
}

void GetBasicAccelerateIpEndpointRelationRequest::setAccelerateIpId(const std::string &accelerateIpId) {
  accelerateIpId_ = accelerateIpId;
  setParameter(std::string("AccelerateIpId"), accelerateIpId);
}

std::string GetBasicAccelerateIpEndpointRelationRequest::getRegionId() const {
  return regionId_;
}

void GetBasicAccelerateIpEndpointRelationRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string GetBasicAccelerateIpEndpointRelationRequest::getAcceleratorId() const {
  return acceleratorId_;
}

void GetBasicAccelerateIpEndpointRelationRequest::setAcceleratorId(const std::string &acceleratorId) {
  acceleratorId_ = acceleratorId;
  setParameter(std::string("AcceleratorId"), acceleratorId);
}

