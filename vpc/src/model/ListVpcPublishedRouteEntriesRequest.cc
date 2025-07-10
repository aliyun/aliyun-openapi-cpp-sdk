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

#include <alibabacloud/vpc/model/ListVpcPublishedRouteEntriesRequest.h>

using AlibabaCloud::Vpc::Model::ListVpcPublishedRouteEntriesRequest;

ListVpcPublishedRouteEntriesRequest::ListVpcPublishedRouteEntriesRequest()
    : RpcServiceRequest("vpc", "2016-04-28", "ListVpcPublishedRouteEntries") {
  setMethod(HttpRequest::Method::Post);
}

ListVpcPublishedRouteEntriesRequest::~ListVpcPublishedRouteEntriesRequest() {}

long ListVpcPublishedRouteEntriesRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void ListVpcPublishedRouteEntriesRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string ListVpcPublishedRouteEntriesRequest::getTargetType() const {
  return targetType_;
}

void ListVpcPublishedRouteEntriesRequest::setTargetType(const std::string &targetType) {
  targetType_ = targetType;
  setParameter(std::string("TargetType"), targetType);
}

std::string ListVpcPublishedRouteEntriesRequest::getRegionId() const {
  return regionId_;
}

void ListVpcPublishedRouteEntriesRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string ListVpcPublishedRouteEntriesRequest::getNextToken() const {
  return nextToken_;
}

void ListVpcPublishedRouteEntriesRequest::setNextToken(const std::string &nextToken) {
  nextToken_ = nextToken;
  setParameter(std::string("NextToken"), nextToken);
}

std::string ListVpcPublishedRouteEntriesRequest::getRouteTableId() const {
  return routeTableId_;
}

void ListVpcPublishedRouteEntriesRequest::setRouteTableId(const std::string &routeTableId) {
  routeTableId_ = routeTableId;
  setParameter(std::string("RouteTableId"), routeTableId);
}

std::string ListVpcPublishedRouteEntriesRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void ListVpcPublishedRouteEntriesRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string ListVpcPublishedRouteEntriesRequest::getDestinationCidrBlock() const {
  return destinationCidrBlock_;
}

void ListVpcPublishedRouteEntriesRequest::setDestinationCidrBlock(const std::string &destinationCidrBlock) {
  destinationCidrBlock_ = destinationCidrBlock;
  setParameter(std::string("DestinationCidrBlock"), destinationCidrBlock);
}

std::string ListVpcPublishedRouteEntriesRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void ListVpcPublishedRouteEntriesRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

long ListVpcPublishedRouteEntriesRequest::getOwnerId() const {
  return ownerId_;
}

void ListVpcPublishedRouteEntriesRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

std::string ListVpcPublishedRouteEntriesRequest::getTargetInstanceId() const {
  return targetInstanceId_;
}

void ListVpcPublishedRouteEntriesRequest::setTargetInstanceId(const std::string &targetInstanceId) {
  targetInstanceId_ = targetInstanceId;
  setParameter(std::string("TargetInstanceId"), targetInstanceId);
}

int ListVpcPublishedRouteEntriesRequest::getMaxResults() const {
  return maxResults_;
}

void ListVpcPublishedRouteEntriesRequest::setMaxResults(int maxResults) {
  maxResults_ = maxResults;
  setParameter(std::string("MaxResults"), std::to_string(maxResults));
}

