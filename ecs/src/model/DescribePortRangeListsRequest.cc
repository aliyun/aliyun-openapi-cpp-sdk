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

#include <alibabacloud/ecs/model/DescribePortRangeListsRequest.h>

using AlibabaCloud::Ecs::Model::DescribePortRangeListsRequest;

DescribePortRangeListsRequest::DescribePortRangeListsRequest()
    : RpcServiceRequest("ecs", "2014-05-26", "DescribePortRangeLists") {
  setMethod(HttpRequest::Method::Post);
}

DescribePortRangeListsRequest::~DescribePortRangeListsRequest() {}

long DescribePortRangeListsRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void DescribePortRangeListsRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string DescribePortRangeListsRequest::getResourceGroupId() const {
  return resourceGroupId_;
}

void DescribePortRangeListsRequest::setResourceGroupId(const std::string &resourceGroupId) {
  resourceGroupId_ = resourceGroupId;
  setParameter(std::string("ResourceGroupId"), resourceGroupId);
}

std::string DescribePortRangeListsRequest::getRegionId() const {
  return regionId_;
}

void DescribePortRangeListsRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string DescribePortRangeListsRequest::getNextToken() const {
  return nextToken_;
}

void DescribePortRangeListsRequest::setNextToken(const std::string &nextToken) {
  nextToken_ = nextToken;
  setParameter(std::string("NextToken"), nextToken);
}

std::vector<DescribePortRangeListsRequest::Tag> DescribePortRangeListsRequest::getTag() const {
  return tag_;
}

void DescribePortRangeListsRequest::setTag(const std::vector<DescribePortRangeListsRequest::Tag> &tag) {
  tag_ = tag;
  for(int dep1 = 0; dep1 != tag.size(); dep1++) {
  auto tagObj = tag.at(dep1);
  std::string tagObjStr = std::string("Tag") + "." + std::to_string(dep1 + 1);
    setParameter(tagObjStr + ".Key", tagObj.key);
    setParameter(tagObjStr + ".Value", tagObj.value);
  }
}

std::vector<std::string> DescribePortRangeListsRequest::getPortRangeListId() const {
  return portRangeListId_;
}

void DescribePortRangeListsRequest::setPortRangeListId(const std::vector<std::string> &portRangeListId) {
  portRangeListId_ = portRangeListId;
}

std::string DescribePortRangeListsRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void DescribePortRangeListsRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string DescribePortRangeListsRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void DescribePortRangeListsRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

long DescribePortRangeListsRequest::getOwnerId() const {
  return ownerId_;
}

void DescribePortRangeListsRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

int DescribePortRangeListsRequest::getMaxResults() const {
  return maxResults_;
}

void DescribePortRangeListsRequest::setMaxResults(int maxResults) {
  maxResults_ = maxResults;
  setParameter(std::string("MaxResults"), std::to_string(maxResults));
}

std::string DescribePortRangeListsRequest::getPortRangeListName() const {
  return portRangeListName_;
}

void DescribePortRangeListsRequest::setPortRangeListName(const std::string &portRangeListName) {
  portRangeListName_ = portRangeListName;
  setParameter(std::string("PortRangeListName"), portRangeListName);
}

