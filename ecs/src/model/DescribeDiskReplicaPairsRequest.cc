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

#include <alibabacloud/ecs/model/DescribeDiskReplicaPairsRequest.h>

using AlibabaCloud::Ecs::Model::DescribeDiskReplicaPairsRequest;

DescribeDiskReplicaPairsRequest::DescribeDiskReplicaPairsRequest()
    : RpcServiceRequest("ecs", "2014-05-26", "DescribeDiskReplicaPairs") {
  setMethod(HttpRequest::Method::Post);
}

DescribeDiskReplicaPairsRequest::~DescribeDiskReplicaPairsRequest() {}

long DescribeDiskReplicaPairsRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void DescribeDiskReplicaPairsRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string DescribeDiskReplicaPairsRequest::getRegionId() const {
  return regionId_;
}

void DescribeDiskReplicaPairsRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string DescribeDiskReplicaPairsRequest::getNextToken() const {
  return nextToken_;
}

void DescribeDiskReplicaPairsRequest::setNextToken(const std::string &nextToken) {
  nextToken_ = nextToken;
  setParameter(std::string("NextToken"), nextToken);
}

std::string DescribeDiskReplicaPairsRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void DescribeDiskReplicaPairsRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string DescribeDiskReplicaPairsRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void DescribeDiskReplicaPairsRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

long DescribeDiskReplicaPairsRequest::getOwnerId() const {
  return ownerId_;
}

void DescribeDiskReplicaPairsRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

int DescribeDiskReplicaPairsRequest::getMaxResults() const {
  return maxResults_;
}

void DescribeDiskReplicaPairsRequest::setMaxResults(int maxResults) {
  maxResults_ = maxResults;
  setParameter(std::string("MaxResults"), std::to_string(maxResults));
}

