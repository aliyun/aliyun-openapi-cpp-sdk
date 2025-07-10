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

#include <alibabacloud/vpc/model/GetVpcPrefixListAssociationsRequest.h>

using AlibabaCloud::Vpc::Model::GetVpcPrefixListAssociationsRequest;

GetVpcPrefixListAssociationsRequest::GetVpcPrefixListAssociationsRequest()
    : RpcServiceRequest("vpc", "2016-04-28", "GetVpcPrefixListAssociations") {
  setMethod(HttpRequest::Method::Post);
}

GetVpcPrefixListAssociationsRequest::~GetVpcPrefixListAssociationsRequest() {}

long GetVpcPrefixListAssociationsRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void GetVpcPrefixListAssociationsRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string GetVpcPrefixListAssociationsRequest::getPrefixListId() const {
  return prefixListId_;
}

void GetVpcPrefixListAssociationsRequest::setPrefixListId(const std::string &prefixListId) {
  prefixListId_ = prefixListId;
  setParameter(std::string("PrefixListId"), prefixListId);
}

std::string GetVpcPrefixListAssociationsRequest::getNextToken() const {
  return nextToken_;
}

void GetVpcPrefixListAssociationsRequest::setNextToken(const std::string &nextToken) {
  nextToken_ = nextToken;
  setParameter(std::string("NextToken"), nextToken);
}

std::string GetVpcPrefixListAssociationsRequest::getRegionId() const {
  return regionId_;
}

void GetVpcPrefixListAssociationsRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string GetVpcPrefixListAssociationsRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void GetVpcPrefixListAssociationsRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string GetVpcPrefixListAssociationsRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void GetVpcPrefixListAssociationsRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

long GetVpcPrefixListAssociationsRequest::getOwnerId() const {
  return ownerId_;
}

void GetVpcPrefixListAssociationsRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

long GetVpcPrefixListAssociationsRequest::getMaxResults() const {
  return maxResults_;
}

void GetVpcPrefixListAssociationsRequest::setMaxResults(long maxResults) {
  maxResults_ = maxResults;
  setParameter(std::string("MaxResults"), std::to_string(maxResults));
}

