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

#include <alibabacloud/vpc/model/DescribeNatGatewayAssociateNetworkInterfacesRequest.h>

using AlibabaCloud::Vpc::Model::DescribeNatGatewayAssociateNetworkInterfacesRequest;

DescribeNatGatewayAssociateNetworkInterfacesRequest::DescribeNatGatewayAssociateNetworkInterfacesRequest()
    : RpcServiceRequest("vpc", "2016-04-28", "DescribeNatGatewayAssociateNetworkInterfaces") {
  setMethod(HttpRequest::Method::Post);
}

DescribeNatGatewayAssociateNetworkInterfacesRequest::~DescribeNatGatewayAssociateNetworkInterfacesRequest() {}

long DescribeNatGatewayAssociateNetworkInterfacesRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void DescribeNatGatewayAssociateNetworkInterfacesRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string DescribeNatGatewayAssociateNetworkInterfacesRequest::getClientToken() const {
  return clientToken_;
}

void DescribeNatGatewayAssociateNetworkInterfacesRequest::setClientToken(const std::string &clientToken) {
  clientToken_ = clientToken;
  setParameter(std::string("ClientToken"), clientToken);
}

std::string DescribeNatGatewayAssociateNetworkInterfacesRequest::getResourceGroupId() const {
  return resourceGroupId_;
}

void DescribeNatGatewayAssociateNetworkInterfacesRequest::setResourceGroupId(const std::string &resourceGroupId) {
  resourceGroupId_ = resourceGroupId;
  setParameter(std::string("ResourceGroupId"), resourceGroupId);
}

std::string DescribeNatGatewayAssociateNetworkInterfacesRequest::getRegionId() const {
  return regionId_;
}

void DescribeNatGatewayAssociateNetworkInterfacesRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string DescribeNatGatewayAssociateNetworkInterfacesRequest::getNextToken() const {
  return nextToken_;
}

void DescribeNatGatewayAssociateNetworkInterfacesRequest::setNextToken(const std::string &nextToken) {
  nextToken_ = nextToken;
  setParameter(std::string("NextToken"), nextToken);
}

std::string DescribeNatGatewayAssociateNetworkInterfacesRequest::getNatGatewayId() const {
  return natGatewayId_;
}

void DescribeNatGatewayAssociateNetworkInterfacesRequest::setNatGatewayId(const std::string &natGatewayId) {
  natGatewayId_ = natGatewayId;
  setParameter(std::string("NatGatewayId"), natGatewayId);
}

std::vector<DescribeNatGatewayAssociateNetworkInterfacesRequest::Tag> DescribeNatGatewayAssociateNetworkInterfacesRequest::getTag() const {
  return tag_;
}

void DescribeNatGatewayAssociateNetworkInterfacesRequest::setTag(const std::vector<DescribeNatGatewayAssociateNetworkInterfacesRequest::Tag> &tag) {
  tag_ = tag;
  for(int dep1 = 0; dep1 != tag.size(); dep1++) {
  auto tagObj = tag.at(dep1);
  std::string tagObjStr = std::string("Tag") + "." + std::to_string(dep1 + 1);
    setParameter(tagObjStr + ".Key", tagObj.key);
    setParameter(tagObjStr + ".Value", tagObj.value);
  }
}

std::string DescribeNatGatewayAssociateNetworkInterfacesRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void DescribeNatGatewayAssociateNetworkInterfacesRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string DescribeNatGatewayAssociateNetworkInterfacesRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void DescribeNatGatewayAssociateNetworkInterfacesRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

long DescribeNatGatewayAssociateNetworkInterfacesRequest::getOwnerId() const {
  return ownerId_;
}

void DescribeNatGatewayAssociateNetworkInterfacesRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

std::vector<DescribeNatGatewayAssociateNetworkInterfacesRequest::Filter> DescribeNatGatewayAssociateNetworkInterfacesRequest::getFilter() const {
  return filter_;
}

void DescribeNatGatewayAssociateNetworkInterfacesRequest::setFilter(const std::vector<DescribeNatGatewayAssociateNetworkInterfacesRequest::Filter> &filter) {
  filter_ = filter;
  for(int dep1 = 0; dep1 != filter.size(); dep1++) {
    setParameter(std::string("Filter") + "." + std::to_string(dep1 + 1) + ".Key", filter[dep1].key);
    setParameter(std::string("Filter") + "." + std::to_string(dep1 + 1) + ".Value", filter[dep1].value);
  }
}

int DescribeNatGatewayAssociateNetworkInterfacesRequest::getMaxResults() const {
  return maxResults_;
}

void DescribeNatGatewayAssociateNetworkInterfacesRequest::setMaxResults(int maxResults) {
  maxResults_ = maxResults;
  setParameter(std::string("MaxResults"), std::to_string(maxResults));
}

