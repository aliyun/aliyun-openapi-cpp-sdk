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

#include <alibabacloud/vpc/model/ListPublicIpAddressPoolCidrBlocksRequest.h>

using AlibabaCloud::Vpc::Model::ListPublicIpAddressPoolCidrBlocksRequest;

ListPublicIpAddressPoolCidrBlocksRequest::ListPublicIpAddressPoolCidrBlocksRequest()
    : RpcServiceRequest("vpc", "2016-04-28", "ListPublicIpAddressPoolCidrBlocks") {
  setMethod(HttpRequest::Method::Post);
}

ListPublicIpAddressPoolCidrBlocksRequest::~ListPublicIpAddressPoolCidrBlocksRequest() {}

std::string ListPublicIpAddressPoolCidrBlocksRequest::getPublicIpAddressPoolId() const {
  return publicIpAddressPoolId_;
}

void ListPublicIpAddressPoolCidrBlocksRequest::setPublicIpAddressPoolId(const std::string &publicIpAddressPoolId) {
  publicIpAddressPoolId_ = publicIpAddressPoolId;
  setParameter(std::string("PublicIpAddressPoolId"), publicIpAddressPoolId);
}

long ListPublicIpAddressPoolCidrBlocksRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void ListPublicIpAddressPoolCidrBlocksRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string ListPublicIpAddressPoolCidrBlocksRequest::getNextToken() const {
  return nextToken_;
}

void ListPublicIpAddressPoolCidrBlocksRequest::setNextToken(const std::string &nextToken) {
  nextToken_ = nextToken;
  setParameter(std::string("NextToken"), nextToken);
}

std::string ListPublicIpAddressPoolCidrBlocksRequest::getRegionId() const {
  return regionId_;
}

void ListPublicIpAddressPoolCidrBlocksRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

bool ListPublicIpAddressPoolCidrBlocksRequest::getDryRun() const {
  return dryRun_;
}

void ListPublicIpAddressPoolCidrBlocksRequest::setDryRun(bool dryRun) {
  dryRun_ = dryRun;
  setParameter(std::string("DryRun"), dryRun ? "true" : "false");
}

std::string ListPublicIpAddressPoolCidrBlocksRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void ListPublicIpAddressPoolCidrBlocksRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string ListPublicIpAddressPoolCidrBlocksRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void ListPublicIpAddressPoolCidrBlocksRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

long ListPublicIpAddressPoolCidrBlocksRequest::getOwnerId() const {
  return ownerId_;
}

void ListPublicIpAddressPoolCidrBlocksRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

std::string ListPublicIpAddressPoolCidrBlocksRequest::getCidrBlock() const {
  return cidrBlock_;
}

void ListPublicIpAddressPoolCidrBlocksRequest::setCidrBlock(const std::string &cidrBlock) {
  cidrBlock_ = cidrBlock;
  setParameter(std::string("CidrBlock"), cidrBlock);
}

int ListPublicIpAddressPoolCidrBlocksRequest::getMaxResults() const {
  return maxResults_;
}

void ListPublicIpAddressPoolCidrBlocksRequest::setMaxResults(int maxResults) {
  maxResults_ = maxResults;
  setParameter(std::string("MaxResults"), std::to_string(maxResults));
}

