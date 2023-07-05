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

#include <alibabacloud/privatelink/model/ListVpcEndpointConnectionsRequest.h>

using AlibabaCloud::Privatelink::Model::ListVpcEndpointConnectionsRequest;

ListVpcEndpointConnectionsRequest::ListVpcEndpointConnectionsRequest()
    : RpcServiceRequest("privatelink", "2020-04-15", "ListVpcEndpointConnections") {
  setMethod(HttpRequest::Method::Post);
}

ListVpcEndpointConnectionsRequest::~ListVpcEndpointConnectionsRequest() {}

std::string ListVpcEndpointConnectionsRequest::getEndpointId() const {
  return endpointId_;
}

void ListVpcEndpointConnectionsRequest::setEndpointId(const std::string &endpointId) {
  endpointId_ = endpointId;
  setParameter(std::string("EndpointId"), endpointId);
}

long ListVpcEndpointConnectionsRequest::getEndpointOwnerId() const {
  return endpointOwnerId_;
}

void ListVpcEndpointConnectionsRequest::setEndpointOwnerId(long endpointOwnerId) {
  endpointOwnerId_ = endpointOwnerId;
  setParameter(std::string("EndpointOwnerId"), std::to_string(endpointOwnerId));
}

std::string ListVpcEndpointConnectionsRequest::getReplacedResourceId() const {
  return replacedResourceId_;
}

void ListVpcEndpointConnectionsRequest::setReplacedResourceId(const std::string &replacedResourceId) {
  replacedResourceId_ = replacedResourceId;
  setParameter(std::string("ReplacedResourceId"), replacedResourceId);
}

std::string ListVpcEndpointConnectionsRequest::getResourceGroupId() const {
  return resourceGroupId_;
}

void ListVpcEndpointConnectionsRequest::setResourceGroupId(const std::string &resourceGroupId) {
  resourceGroupId_ = resourceGroupId;
  setParameter(std::string("ResourceGroupId"), resourceGroupId);
}

std::string ListVpcEndpointConnectionsRequest::getRegionId() const {
  return regionId_;
}

void ListVpcEndpointConnectionsRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string ListVpcEndpointConnectionsRequest::getNextToken() const {
  return nextToken_;
}

void ListVpcEndpointConnectionsRequest::setNextToken(const std::string &nextToken) {
  nextToken_ = nextToken;
  setParameter(std::string("NextToken"), nextToken);
}

long ListVpcEndpointConnectionsRequest::getConnectionId() const {
  return connectionId_;
}

void ListVpcEndpointConnectionsRequest::setConnectionId(long connectionId) {
  connectionId_ = connectionId;
  setParameter(std::string("ConnectionId"), std::to_string(connectionId));
}

std::string ListVpcEndpointConnectionsRequest::getResourceId() const {
  return resourceId_;
}

void ListVpcEndpointConnectionsRequest::setResourceId(const std::string &resourceId) {
  resourceId_ = resourceId;
  setParameter(std::string("ResourceId"), resourceId);
}

std::string ListVpcEndpointConnectionsRequest::getConnectionStatus() const {
  return connectionStatus_;
}

void ListVpcEndpointConnectionsRequest::setConnectionStatus(const std::string &connectionStatus) {
  connectionStatus_ = connectionStatus;
  setParameter(std::string("ConnectionStatus"), connectionStatus);
}

int ListVpcEndpointConnectionsRequest::getMaxResults() const {
  return maxResults_;
}

void ListVpcEndpointConnectionsRequest::setMaxResults(int maxResults) {
  maxResults_ = maxResults;
  setParameter(std::string("MaxResults"), std::to_string(maxResults));
}

std::string ListVpcEndpointConnectionsRequest::getEniId() const {
  return eniId_;
}

void ListVpcEndpointConnectionsRequest::setEniId(const std::string &eniId) {
  eniId_ = eniId;
  setParameter(std::string("EniId"), eniId);
}

std::string ListVpcEndpointConnectionsRequest::getZoneId() const {
  return zoneId_;
}

void ListVpcEndpointConnectionsRequest::setZoneId(const std::string &zoneId) {
  zoneId_ = zoneId;
  setParameter(std::string("ZoneId"), zoneId);
}

std::string ListVpcEndpointConnectionsRequest::getServiceId() const {
  return serviceId_;
}

void ListVpcEndpointConnectionsRequest::setServiceId(const std::string &serviceId) {
  serviceId_ = serviceId;
  setParameter(std::string("ServiceId"), serviceId);
}

