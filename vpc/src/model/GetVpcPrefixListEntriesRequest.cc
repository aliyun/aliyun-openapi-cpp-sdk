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

#include <alibabacloud/vpc/model/GetVpcPrefixListEntriesRequest.h>

using AlibabaCloud::Vpc::Model::GetVpcPrefixListEntriesRequest;

GetVpcPrefixListEntriesRequest::GetVpcPrefixListEntriesRequest()
    : RpcServiceRequest("vpc", "2016-04-28", "GetVpcPrefixListEntries") {
  setMethod(HttpRequest::Method::Post);
}

GetVpcPrefixListEntriesRequest::~GetVpcPrefixListEntriesRequest() {}

long GetVpcPrefixListEntriesRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void GetVpcPrefixListEntriesRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string GetVpcPrefixListEntriesRequest::getPrefixListId() const {
  return prefixListId_;
}

void GetVpcPrefixListEntriesRequest::setPrefixListId(const std::string &prefixListId) {
  prefixListId_ = prefixListId;
  setParameter(std::string("PrefixListId"), prefixListId);
}

std::string GetVpcPrefixListEntriesRequest::getNextToken() const {
  return nextToken_;
}

void GetVpcPrefixListEntriesRequest::setNextToken(const std::string &nextToken) {
  nextToken_ = nextToken;
  setParameter(std::string("NextToken"), nextToken);
}

std::string GetVpcPrefixListEntriesRequest::getRegionId() const {
  return regionId_;
}

void GetVpcPrefixListEntriesRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string GetVpcPrefixListEntriesRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void GetVpcPrefixListEntriesRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string GetVpcPrefixListEntriesRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void GetVpcPrefixListEntriesRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

long GetVpcPrefixListEntriesRequest::getOwnerId() const {
  return ownerId_;
}

void GetVpcPrefixListEntriesRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

long GetVpcPrefixListEntriesRequest::getMaxResults() const {
  return maxResults_;
}

void GetVpcPrefixListEntriesRequest::setMaxResults(long maxResults) {
  maxResults_ = maxResults;
  setParameter(std::string("MaxResults"), std::to_string(maxResults));
}

