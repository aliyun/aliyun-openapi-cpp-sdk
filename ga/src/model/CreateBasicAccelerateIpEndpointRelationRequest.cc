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

#include <alibabacloud/ga/model/CreateBasicAccelerateIpEndpointRelationRequest.h>

using AlibabaCloud::Ga::Model::CreateBasicAccelerateIpEndpointRelationRequest;

CreateBasicAccelerateIpEndpointRelationRequest::CreateBasicAccelerateIpEndpointRelationRequest()
    : RpcServiceRequest("ga", "2019-11-20", "CreateBasicAccelerateIpEndpointRelation") {
  setMethod(HttpRequest::Method::Post);
}

CreateBasicAccelerateIpEndpointRelationRequest::~CreateBasicAccelerateIpEndpointRelationRequest() {}

std::string CreateBasicAccelerateIpEndpointRelationRequest::getClientToken() const {
  return clientToken_;
}

void CreateBasicAccelerateIpEndpointRelationRequest::setClientToken(const std::string &clientToken) {
  clientToken_ = clientToken;
  setParameter(std::string("ClientToken"), clientToken);
}

std::string CreateBasicAccelerateIpEndpointRelationRequest::getEndpointId() const {
  return endpointId_;
}

void CreateBasicAccelerateIpEndpointRelationRequest::setEndpointId(const std::string &endpointId) {
  endpointId_ = endpointId;
  setParameter(std::string("EndpointId"), endpointId);
}

std::string CreateBasicAccelerateIpEndpointRelationRequest::getAccelerateIpId() const {
  return accelerateIpId_;
}

void CreateBasicAccelerateIpEndpointRelationRequest::setAccelerateIpId(const std::string &accelerateIpId) {
  accelerateIpId_ = accelerateIpId;
  setParameter(std::string("AccelerateIpId"), accelerateIpId);
}

std::string CreateBasicAccelerateIpEndpointRelationRequest::getRegionId() const {
  return regionId_;
}

void CreateBasicAccelerateIpEndpointRelationRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string CreateBasicAccelerateIpEndpointRelationRequest::getAcceleratorId() const {
  return acceleratorId_;
}

void CreateBasicAccelerateIpEndpointRelationRequest::setAcceleratorId(const std::string &acceleratorId) {
  acceleratorId_ = acceleratorId;
  setParameter(std::string("AcceleratorId"), acceleratorId);
}

