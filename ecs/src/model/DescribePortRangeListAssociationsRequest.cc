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

#include <alibabacloud/ecs/model/DescribePortRangeListAssociationsRequest.h>

using AlibabaCloud::Ecs::Model::DescribePortRangeListAssociationsRequest;

DescribePortRangeListAssociationsRequest::DescribePortRangeListAssociationsRequest()
    : RpcServiceRequest("ecs", "2014-05-26", "DescribePortRangeListAssociations") {
  setMethod(HttpRequest::Method::Post);
}

DescribePortRangeListAssociationsRequest::~DescribePortRangeListAssociationsRequest() {}

long DescribePortRangeListAssociationsRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void DescribePortRangeListAssociationsRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string DescribePortRangeListAssociationsRequest::getRegionId() const {
  return regionId_;
}

void DescribePortRangeListAssociationsRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string DescribePortRangeListAssociationsRequest::getNextToken() const {
  return nextToken_;
}

void DescribePortRangeListAssociationsRequest::setNextToken(const std::string &nextToken) {
  nextToken_ = nextToken;
  setParameter(std::string("NextToken"), nextToken);
}

std::string DescribePortRangeListAssociationsRequest::getPortRangeListId() const {
  return portRangeListId_;
}

void DescribePortRangeListAssociationsRequest::setPortRangeListId(const std::string &portRangeListId) {
  portRangeListId_ = portRangeListId;
  setParameter(std::string("PortRangeListId"), portRangeListId);
}

std::string DescribePortRangeListAssociationsRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void DescribePortRangeListAssociationsRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string DescribePortRangeListAssociationsRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void DescribePortRangeListAssociationsRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

long DescribePortRangeListAssociationsRequest::getOwnerId() const {
  return ownerId_;
}

void DescribePortRangeListAssociationsRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

int DescribePortRangeListAssociationsRequest::getMaxResults() const {
  return maxResults_;
}

void DescribePortRangeListAssociationsRequest::setMaxResults(int maxResults) {
  maxResults_ = maxResults;
  setParameter(std::string("MaxResults"), std::to_string(maxResults));
}

