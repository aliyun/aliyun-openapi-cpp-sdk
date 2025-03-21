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

#include <alibabacloud/eiam/model/ListNetworkAccessEndpointsRequest.h>

using AlibabaCloud::Eiam::Model::ListNetworkAccessEndpointsRequest;

ListNetworkAccessEndpointsRequest::ListNetworkAccessEndpointsRequest()
    : RpcServiceRequest("eiam", "2021-12-01", "ListNetworkAccessEndpoints") {
  setMethod(HttpRequest::Method::Post);
}

ListNetworkAccessEndpointsRequest::~ListNetworkAccessEndpointsRequest() {}

std::string ListNetworkAccessEndpointsRequest::getNetworkAccessEndpointType() const {
  return networkAccessEndpointType_;
}

void ListNetworkAccessEndpointsRequest::setNetworkAccessEndpointType(const std::string &networkAccessEndpointType) {
  networkAccessEndpointType_ = networkAccessEndpointType;
  setParameter(std::string("NetworkAccessEndpointType"), networkAccessEndpointType);
}

std::string ListNetworkAccessEndpointsRequest::getNextToken() const {
  return nextToken_;
}

void ListNetworkAccessEndpointsRequest::setNextToken(const std::string &nextToken) {
  nextToken_ = nextToken;
  setParameter(std::string("NextToken"), nextToken);
}

std::string ListNetworkAccessEndpointsRequest::getVpcRegionId() const {
  return vpcRegionId_;
}

void ListNetworkAccessEndpointsRequest::setVpcRegionId(const std::string &vpcRegionId) {
  vpcRegionId_ = vpcRegionId;
  setParameter(std::string("VpcRegionId"), vpcRegionId);
}

std::string ListNetworkAccessEndpointsRequest::getNetworkAccessEndpointStatus() const {
  return networkAccessEndpointStatus_;
}

void ListNetworkAccessEndpointsRequest::setNetworkAccessEndpointStatus(const std::string &networkAccessEndpointStatus) {
  networkAccessEndpointStatus_ = networkAccessEndpointStatus;
  setParameter(std::string("NetworkAccessEndpointStatus"), networkAccessEndpointStatus);
}

std::string ListNetworkAccessEndpointsRequest::getInstanceId() const {
  return instanceId_;
}

void ListNetworkAccessEndpointsRequest::setInstanceId(const std::string &instanceId) {
  instanceId_ = instanceId;
  setParameter(std::string("InstanceId"), instanceId);
}

std::string ListNetworkAccessEndpointsRequest::getVpcId() const {
  return vpcId_;
}

void ListNetworkAccessEndpointsRequest::setVpcId(const std::string &vpcId) {
  vpcId_ = vpcId;
  setParameter(std::string("VpcId"), vpcId);
}

long ListNetworkAccessEndpointsRequest::getMaxResults() const {
  return maxResults_;
}

void ListNetworkAccessEndpointsRequest::setMaxResults(long maxResults) {
  maxResults_ = maxResults;
  setParameter(std::string("MaxResults"), std::to_string(maxResults));
}

