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

#include <alibabacloud/privatelink/model/ListVpcEndpointsRequest.h>

using AlibabaCloud::Privatelink::Model::ListVpcEndpointsRequest;

ListVpcEndpointsRequest::ListVpcEndpointsRequest()
    : RpcServiceRequest("privatelink", "2020-04-15", "ListVpcEndpoints") {
  setMethod(HttpRequest::Method::Post);
}

ListVpcEndpointsRequest::~ListVpcEndpointsRequest() {}

std::string ListVpcEndpointsRequest::getEndpointId() const {
  return endpointId_;
}

void ListVpcEndpointsRequest::setEndpointId(const std::string &endpointId) {
  endpointId_ = endpointId;
  setParameter(std::string("EndpointId"), endpointId);
}

std::string ListVpcEndpointsRequest::getEndpointStatus() const {
  return endpointStatus_;
}

void ListVpcEndpointsRequest::setEndpointStatus(const std::string &endpointStatus) {
  endpointStatus_ = endpointStatus;
  setParameter(std::string("EndpointStatus"), endpointStatus);
}

std::string ListVpcEndpointsRequest::getResourceGroupId() const {
  return resourceGroupId_;
}

void ListVpcEndpointsRequest::setResourceGroupId(const std::string &resourceGroupId) {
  resourceGroupId_ = resourceGroupId;
  setParameter(std::string("ResourceGroupId"), resourceGroupId);
}

std::string ListVpcEndpointsRequest::getRegionId() const {
  return regionId_;
}

void ListVpcEndpointsRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string ListVpcEndpointsRequest::getNextToken() const {
  return nextToken_;
}

void ListVpcEndpointsRequest::setNextToken(const std::string &nextToken) {
  nextToken_ = nextToken;
  setParameter(std::string("NextToken"), nextToken);
}

std::string ListVpcEndpointsRequest::getEndpointType() const {
  return endpointType_;
}

void ListVpcEndpointsRequest::setEndpointType(const std::string &endpointType) {
  endpointType_ = endpointType;
  setParameter(std::string("EndpointType"), endpointType);
}

std::string ListVpcEndpointsRequest::getServiceName() const {
  return serviceName_;
}

void ListVpcEndpointsRequest::setServiceName(const std::string &serviceName) {
  serviceName_ = serviceName;
  setParameter(std::string("ServiceName"), serviceName);
}

std::vector<ListVpcEndpointsRequest::Tag> ListVpcEndpointsRequest::getTag() const {
  return tag_;
}

void ListVpcEndpointsRequest::setTag(const std::vector<ListVpcEndpointsRequest::Tag> &tag) {
  tag_ = tag;
  for(int dep1 = 0; dep1 != tag.size(); dep1++) {
    setParameter(std::string("Tag") + "." + std::to_string(dep1 + 1) + ".Key", tag[dep1].key);
    setParameter(std::string("Tag") + "." + std::to_string(dep1 + 1) + ".Value", tag[dep1].value);
  }
}

std::string ListVpcEndpointsRequest::getConnectionStatus() const {
  return connectionStatus_;
}

void ListVpcEndpointsRequest::setConnectionStatus(const std::string &connectionStatus) {
  connectionStatus_ = connectionStatus;
  setParameter(std::string("ConnectionStatus"), connectionStatus);
}

std::string ListVpcEndpointsRequest::getVpcId() const {
  return vpcId_;
}

void ListVpcEndpointsRequest::setVpcId(const std::string &vpcId) {
  vpcId_ = vpcId;
  setParameter(std::string("VpcId"), vpcId);
}

std::string ListVpcEndpointsRequest::getEndpointName() const {
  return endpointName_;
}

void ListVpcEndpointsRequest::setEndpointName(const std::string &endpointName) {
  endpointName_ = endpointName;
  setParameter(std::string("EndpointName"), endpointName);
}

int ListVpcEndpointsRequest::getMaxResults() const {
  return maxResults_;
}

void ListVpcEndpointsRequest::setMaxResults(int maxResults) {
  maxResults_ = maxResults;
  setParameter(std::string("MaxResults"), std::to_string(maxResults));
}

