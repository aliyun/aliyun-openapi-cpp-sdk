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

#include <alibabacloud/ga/model/ListBasicAccelerateIpEndpointRelationsRequest.h>

using AlibabaCloud::Ga::Model::ListBasicAccelerateIpEndpointRelationsRequest;

ListBasicAccelerateIpEndpointRelationsRequest::ListBasicAccelerateIpEndpointRelationsRequest()
    : RpcServiceRequest("ga", "2019-11-20", "ListBasicAccelerateIpEndpointRelations") {
  setMethod(HttpRequest::Method::Post);
}

ListBasicAccelerateIpEndpointRelationsRequest::~ListBasicAccelerateIpEndpointRelationsRequest() {}

std::string ListBasicAccelerateIpEndpointRelationsRequest::getClientToken() const {
  return clientToken_;
}

void ListBasicAccelerateIpEndpointRelationsRequest::setClientToken(const std::string &clientToken) {
  clientToken_ = clientToken;
  setParameter(std::string("ClientToken"), clientToken);
}

std::string ListBasicAccelerateIpEndpointRelationsRequest::getEndpointId() const {
  return endpointId_;
}

void ListBasicAccelerateIpEndpointRelationsRequest::setEndpointId(const std::string &endpointId) {
  endpointId_ = endpointId;
  setParameter(std::string("EndpointId"), endpointId);
}

std::string ListBasicAccelerateIpEndpointRelationsRequest::getAccelerateIpId() const {
  return accelerateIpId_;
}

void ListBasicAccelerateIpEndpointRelationsRequest::setAccelerateIpId(const std::string &accelerateIpId) {
  accelerateIpId_ = accelerateIpId;
  setParameter(std::string("AccelerateIpId"), accelerateIpId);
}

std::string ListBasicAccelerateIpEndpointRelationsRequest::getRegionId() const {
  return regionId_;
}

void ListBasicAccelerateIpEndpointRelationsRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string ListBasicAccelerateIpEndpointRelationsRequest::getNextToken() const {
  return nextToken_;
}

void ListBasicAccelerateIpEndpointRelationsRequest::setNextToken(const std::string &nextToken) {
  nextToken_ = nextToken;
  setParameter(std::string("NextToken"), nextToken);
}

int ListBasicAccelerateIpEndpointRelationsRequest::getMaxResults() const {
  return maxResults_;
}

void ListBasicAccelerateIpEndpointRelationsRequest::setMaxResults(int maxResults) {
  maxResults_ = maxResults;
  setParameter(std::string("MaxResults"), std::to_string(maxResults));
}

std::string ListBasicAccelerateIpEndpointRelationsRequest::getAcceleratorId() const {
  return acceleratorId_;
}

void ListBasicAccelerateIpEndpointRelationsRequest::setAcceleratorId(const std::string &acceleratorId) {
  acceleratorId_ = acceleratorId;
  setParameter(std::string("AcceleratorId"), acceleratorId);
}

