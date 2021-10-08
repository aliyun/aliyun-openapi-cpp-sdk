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

#include <alibabacloud/ecs/model/DescribePrefixListAssociationsRequest.h>

using AlibabaCloud::Ecs::Model::DescribePrefixListAssociationsRequest;

DescribePrefixListAssociationsRequest::DescribePrefixListAssociationsRequest()
    : RpcServiceRequest("ecs", "2014-05-26", "DescribePrefixListAssociations") {
  setMethod(HttpRequest::Method::Post);
}

DescribePrefixListAssociationsRequest::~DescribePrefixListAssociationsRequest() {}

long DescribePrefixListAssociationsRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void DescribePrefixListAssociationsRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string DescribePrefixListAssociationsRequest::getRegionId() const {
  return regionId_;
}

void DescribePrefixListAssociationsRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string DescribePrefixListAssociationsRequest::getPrefixListId() const {
  return prefixListId_;
}

void DescribePrefixListAssociationsRequest::setPrefixListId(const std::string &prefixListId) {
  prefixListId_ = prefixListId;
  setParameter(std::string("PrefixListId"), prefixListId);
}

std::string DescribePrefixListAssociationsRequest::getNextToken() const {
  return nextToken_;
}

void DescribePrefixListAssociationsRequest::setNextToken(const std::string &nextToken) {
  nextToken_ = nextToken;
  setParameter(std::string("NextToken"), nextToken);
}

std::string DescribePrefixListAssociationsRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void DescribePrefixListAssociationsRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string DescribePrefixListAssociationsRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void DescribePrefixListAssociationsRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

long DescribePrefixListAssociationsRequest::getOwnerId() const {
  return ownerId_;
}

void DescribePrefixListAssociationsRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

int DescribePrefixListAssociationsRequest::getMaxResults() const {
  return maxResults_;
}

void DescribePrefixListAssociationsRequest::setMaxResults(int maxResults) {
  maxResults_ = maxResults;
  setParameter(std::string("MaxResults"), std::to_string(maxResults));
}

