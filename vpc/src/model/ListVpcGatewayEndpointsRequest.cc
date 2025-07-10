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

#include <alibabacloud/vpc/model/ListVpcGatewayEndpointsRequest.h>

using AlibabaCloud::Vpc::Model::ListVpcGatewayEndpointsRequest;

ListVpcGatewayEndpointsRequest::ListVpcGatewayEndpointsRequest()
    : RpcServiceRequest("vpc", "2016-04-28", "ListVpcGatewayEndpoints") {
  setMethod(HttpRequest::Method::Post);
}

ListVpcGatewayEndpointsRequest::~ListVpcGatewayEndpointsRequest() {}

long ListVpcGatewayEndpointsRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void ListVpcGatewayEndpointsRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string ListVpcGatewayEndpointsRequest::getEndpointId() const {
  return endpointId_;
}

void ListVpcGatewayEndpointsRequest::setEndpointId(const std::string &endpointId) {
  endpointId_ = endpointId;
  setParameter(std::string("EndpointId"), endpointId);
}

std::string ListVpcGatewayEndpointsRequest::getResourceGroupId() const {
  return resourceGroupId_;
}

void ListVpcGatewayEndpointsRequest::setResourceGroupId(const std::string &resourceGroupId) {
  resourceGroupId_ = resourceGroupId;
  setParameter(std::string("ResourceGroupId"), resourceGroupId);
}

std::string ListVpcGatewayEndpointsRequest::getNextToken() const {
  return nextToken_;
}

void ListVpcGatewayEndpointsRequest::setNextToken(const std::string &nextToken) {
  nextToken_ = nextToken;
  setParameter(std::string("NextToken"), nextToken);
}

std::string ListVpcGatewayEndpointsRequest::getRegionId() const {
  return regionId_;
}

void ListVpcGatewayEndpointsRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string ListVpcGatewayEndpointsRequest::getServiceName() const {
  return serviceName_;
}

void ListVpcGatewayEndpointsRequest::setServiceName(const std::string &serviceName) {
  serviceName_ = serviceName;
  setParameter(std::string("ServiceName"), serviceName);
}

std::string ListVpcGatewayEndpointsRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void ListVpcGatewayEndpointsRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string ListVpcGatewayEndpointsRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void ListVpcGatewayEndpointsRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

long ListVpcGatewayEndpointsRequest::getOwnerId() const {
  return ownerId_;
}

void ListVpcGatewayEndpointsRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

std::vector<ListVpcGatewayEndpointsRequest::Tags> ListVpcGatewayEndpointsRequest::getTags() const {
  return tags_;
}

void ListVpcGatewayEndpointsRequest::setTags(const std::vector<ListVpcGatewayEndpointsRequest::Tags> &tags) {
  tags_ = tags;
  for(int dep1 = 0; dep1 != tags.size(); dep1++) {
  auto tagsObj = tags.at(dep1);
  std::string tagsObjStr = std::string("Tags") + "." + std::to_string(dep1 + 1);
    setParameter(tagsObjStr + ".Key", tagsObj.key);
    setParameter(tagsObjStr + ".Value", tagsObj.value);
  }
}

std::string ListVpcGatewayEndpointsRequest::getEndpointName() const {
  return endpointName_;
}

void ListVpcGatewayEndpointsRequest::setEndpointName(const std::string &endpointName) {
  endpointName_ = endpointName;
  setParameter(std::string("EndpointName"), endpointName);
}

std::string ListVpcGatewayEndpointsRequest::getVpcId() const {
  return vpcId_;
}

void ListVpcGatewayEndpointsRequest::setVpcId(const std::string &vpcId) {
  vpcId_ = vpcId;
  setParameter(std::string("VpcId"), vpcId);
}

long ListVpcGatewayEndpointsRequest::getMaxResults() const {
  return maxResults_;
}

void ListVpcGatewayEndpointsRequest::setMaxResults(long maxResults) {
  maxResults_ = maxResults;
  setParameter(std::string("MaxResults"), std::to_string(maxResults));
}

