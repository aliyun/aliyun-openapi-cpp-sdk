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

#include <alibabacloud/ga/model/DeleteBasicAccelerateIpEndpointRelationRequest.h>

using AlibabaCloud::Ga::Model::DeleteBasicAccelerateIpEndpointRelationRequest;

DeleteBasicAccelerateIpEndpointRelationRequest::DeleteBasicAccelerateIpEndpointRelationRequest()
    : RpcServiceRequest("ga", "2019-11-20", "DeleteBasicAccelerateIpEndpointRelation") {
  setMethod(HttpRequest::Method::Post);
}

DeleteBasicAccelerateIpEndpointRelationRequest::~DeleteBasicAccelerateIpEndpointRelationRequest() {}

std::string DeleteBasicAccelerateIpEndpointRelationRequest::getClientToken() const {
  return clientToken_;
}

void DeleteBasicAccelerateIpEndpointRelationRequest::setClientToken(const std::string &clientToken) {
  clientToken_ = clientToken;
  setParameter(std::string("ClientToken"), clientToken);
}

std::string DeleteBasicAccelerateIpEndpointRelationRequest::getEndpointId() const {
  return endpointId_;
}

void DeleteBasicAccelerateIpEndpointRelationRequest::setEndpointId(const std::string &endpointId) {
  endpointId_ = endpointId;
  setParameter(std::string("EndpointId"), endpointId);
}

std::string DeleteBasicAccelerateIpEndpointRelationRequest::getAccelerateIpId() const {
  return accelerateIpId_;
}

void DeleteBasicAccelerateIpEndpointRelationRequest::setAccelerateIpId(const std::string &accelerateIpId) {
  accelerateIpId_ = accelerateIpId;
  setParameter(std::string("AccelerateIpId"), accelerateIpId);
}

std::string DeleteBasicAccelerateIpEndpointRelationRequest::getRegionId() const {
  return regionId_;
}

void DeleteBasicAccelerateIpEndpointRelationRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string DeleteBasicAccelerateIpEndpointRelationRequest::getAcceleratorId() const {
  return acceleratorId_;
}

void DeleteBasicAccelerateIpEndpointRelationRequest::setAcceleratorId(const std::string &acceleratorId) {
  acceleratorId_ = acceleratorId;
  setParameter(std::string("AcceleratorId"), acceleratorId);
}

