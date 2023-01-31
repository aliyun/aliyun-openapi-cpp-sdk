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

#include <alibabacloud/vpc/model/ListGatewayRouteTableEntriesRequest.h>

using AlibabaCloud::Vpc::Model::ListGatewayRouteTableEntriesRequest;

ListGatewayRouteTableEntriesRequest::ListGatewayRouteTableEntriesRequest()
    : RpcServiceRequest("vpc", "2016-04-28", "ListGatewayRouteTableEntries") {
  setMethod(HttpRequest::Method::Post);
}

ListGatewayRouteTableEntriesRequest::~ListGatewayRouteTableEntriesRequest() {}

long ListGatewayRouteTableEntriesRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void ListGatewayRouteTableEntriesRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string ListGatewayRouteTableEntriesRequest::getRegionId() const {
  return regionId_;
}

void ListGatewayRouteTableEntriesRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string ListGatewayRouteTableEntriesRequest::getNextToken() const {
  return nextToken_;
}

void ListGatewayRouteTableEntriesRequest::setNextToken(const std::string &nextToken) {
  nextToken_ = nextToken;
  setParameter(std::string("NextToken"), nextToken);
}

std::string ListGatewayRouteTableEntriesRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void ListGatewayRouteTableEntriesRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string ListGatewayRouteTableEntriesRequest::getDestinationCidrBlock() const {
  return destinationCidrBlock_;
}

void ListGatewayRouteTableEntriesRequest::setDestinationCidrBlock(const std::string &destinationCidrBlock) {
  destinationCidrBlock_ = destinationCidrBlock;
  setParameter(std::string("DestinationCidrBlock"), destinationCidrBlock);
}

std::string ListGatewayRouteTableEntriesRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void ListGatewayRouteTableEntriesRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

std::string ListGatewayRouteTableEntriesRequest::getGatewayRouteTableId() const {
  return gatewayRouteTableId_;
}

void ListGatewayRouteTableEntriesRequest::setGatewayRouteTableId(const std::string &gatewayRouteTableId) {
  gatewayRouteTableId_ = gatewayRouteTableId;
  setParameter(std::string("GatewayRouteTableId"), gatewayRouteTableId);
}

long ListGatewayRouteTableEntriesRequest::getOwnerId() const {
  return ownerId_;
}

void ListGatewayRouteTableEntriesRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

int ListGatewayRouteTableEntriesRequest::getMaxResults() const {
  return maxResults_;
}

void ListGatewayRouteTableEntriesRequest::setMaxResults(int maxResults) {
  maxResults_ = maxResults;
  setParameter(std::string("MaxResults"), std::to_string(maxResults));
}

