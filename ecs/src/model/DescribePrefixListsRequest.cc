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

#include <alibabacloud/ecs/model/DescribePrefixListsRequest.h>

using AlibabaCloud::Ecs::Model::DescribePrefixListsRequest;

DescribePrefixListsRequest::DescribePrefixListsRequest()
    : RpcServiceRequest("ecs", "2014-05-26", "DescribePrefixLists") {
  setMethod(HttpRequest::Method::Post);
}

DescribePrefixListsRequest::~DescribePrefixListsRequest() {}

long DescribePrefixListsRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void DescribePrefixListsRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string DescribePrefixListsRequest::getRegionId() const {
  return regionId_;
}

void DescribePrefixListsRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string DescribePrefixListsRequest::getNextToken() const {
  return nextToken_;
}

void DescribePrefixListsRequest::setNextToken(const std::string &nextToken) {
  nextToken_ = nextToken;
  setParameter(std::string("NextToken"), nextToken);
}

std::vector<std::string> DescribePrefixListsRequest::getPrefixListId() const {
  return prefixListId_;
}

void DescribePrefixListsRequest::setPrefixListId(const std::vector<std::string> &prefixListId) {
  prefixListId_ = prefixListId;
}

std::string DescribePrefixListsRequest::getAddressFamily() const {
  return addressFamily_;
}

void DescribePrefixListsRequest::setAddressFamily(const std::string &addressFamily) {
  addressFamily_ = addressFamily;
  setParameter(std::string("AddressFamily"), addressFamily);
}

std::string DescribePrefixListsRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void DescribePrefixListsRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string DescribePrefixListsRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void DescribePrefixListsRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

long DescribePrefixListsRequest::getOwnerId() const {
  return ownerId_;
}

void DescribePrefixListsRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

std::string DescribePrefixListsRequest::getPrefixListName() const {
  return prefixListName_;
}

void DescribePrefixListsRequest::setPrefixListName(const std::string &prefixListName) {
  prefixListName_ = prefixListName;
  setParameter(std::string("PrefixListName"), prefixListName);
}

int DescribePrefixListsRequest::getMaxResults() const {
  return maxResults_;
}

void DescribePrefixListsRequest::setMaxResults(int maxResults) {
  maxResults_ = maxResults;
  setParameter(std::string("MaxResults"), std::to_string(maxResults));
}

