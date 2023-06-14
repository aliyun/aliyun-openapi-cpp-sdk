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

#include <alibabacloud/ga/model/ListBasicEndpointsRequest.h>

using AlibabaCloud::Ga::Model::ListBasicEndpointsRequest;

ListBasicEndpointsRequest::ListBasicEndpointsRequest()
    : RpcServiceRequest("ga", "2019-11-20", "ListBasicEndpoints") {
  setMethod(HttpRequest::Method::Post);
}

ListBasicEndpointsRequest::~ListBasicEndpointsRequest() {}

std::string ListBasicEndpointsRequest::getClientToken() const {
  return clientToken_;
}

void ListBasicEndpointsRequest::setClientToken(const std::string &clientToken) {
  clientToken_ = clientToken;
  setParameter(std::string("ClientToken"), clientToken);
}

std::string ListBasicEndpointsRequest::getEndpointId() const {
  return endpointId_;
}

void ListBasicEndpointsRequest::setEndpointId(const std::string &endpointId) {
  endpointId_ = endpointId;
  setParameter(std::string("EndpointId"), endpointId);
}

std::string ListBasicEndpointsRequest::getRegionId() const {
  return regionId_;
}

void ListBasicEndpointsRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string ListBasicEndpointsRequest::getEndpointType() const {
  return endpointType_;
}

void ListBasicEndpointsRequest::setEndpointType(const std::string &endpointType) {
  endpointType_ = endpointType;
  setParameter(std::string("EndpointType"), endpointType);
}

std::string ListBasicEndpointsRequest::getNextToken() const {
  return nextToken_;
}

void ListBasicEndpointsRequest::setNextToken(const std::string &nextToken) {
  nextToken_ = nextToken;
  setParameter(std::string("NextToken"), nextToken);
}

std::string ListBasicEndpointsRequest::getName() const {
  return name_;
}

void ListBasicEndpointsRequest::setName(const std::string &name) {
  name_ = name;
  setParameter(std::string("Name"), name);
}

int ListBasicEndpointsRequest::getMaxResults() const {
  return maxResults_;
}

void ListBasicEndpointsRequest::setMaxResults(int maxResults) {
  maxResults_ = maxResults;
  setParameter(std::string("MaxResults"), std::to_string(maxResults));
}

std::string ListBasicEndpointsRequest::getEndpointGroupId() const {
  return endpointGroupId_;
}

void ListBasicEndpointsRequest::setEndpointGroupId(const std::string &endpointGroupId) {
  endpointGroupId_ = endpointGroupId;
  setParameter(std::string("EndpointGroupId"), endpointGroupId);
}

