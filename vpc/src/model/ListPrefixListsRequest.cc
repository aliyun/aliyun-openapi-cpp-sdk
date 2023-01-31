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

#include <alibabacloud/vpc/model/ListPrefixListsRequest.h>

using AlibabaCloud::Vpc::Model::ListPrefixListsRequest;

ListPrefixListsRequest::ListPrefixListsRequest()
    : RpcServiceRequest("vpc", "2016-04-28", "ListPrefixLists") {
  setMethod(HttpRequest::Method::Post);
}

ListPrefixListsRequest::~ListPrefixListsRequest() {}

long ListPrefixListsRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void ListPrefixListsRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string ListPrefixListsRequest::getResourceGroupId() const {
  return resourceGroupId_;
}

void ListPrefixListsRequest::setResourceGroupId(const std::string &resourceGroupId) {
  resourceGroupId_ = resourceGroupId;
  setParameter(std::string("ResourceGroupId"), resourceGroupId);
}

std::string ListPrefixListsRequest::getNextToken() const {
  return nextToken_;
}

void ListPrefixListsRequest::setNextToken(const std::string &nextToken) {
  nextToken_ = nextToken;
  setParameter(std::string("NextToken"), nextToken);
}

std::string ListPrefixListsRequest::getRegionId() const {
  return regionId_;
}

void ListPrefixListsRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string ListPrefixListsRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void ListPrefixListsRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string ListPrefixListsRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void ListPrefixListsRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

std::vector<std::string> ListPrefixListsRequest::getPrefixListIds() const {
  return prefixListIds_;
}

void ListPrefixListsRequest::setPrefixListIds(const std::vector<std::string> &prefixListIds) {
  prefixListIds_ = prefixListIds;
}

long ListPrefixListsRequest::getOwnerId() const {
  return ownerId_;
}

void ListPrefixListsRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

std::vector<ListPrefixListsRequest::Tags> ListPrefixListsRequest::getTags() const {
  return tags_;
}

void ListPrefixListsRequest::setTags(const std::vector<ListPrefixListsRequest::Tags> &tags) {
  tags_ = tags;
  for(int dep1 = 0; dep1 != tags.size(); dep1++) {
  auto tagsObj = tags.at(dep1);
  std::string tagsObjStr = std::string("Tags") + "." + std::to_string(dep1 + 1);
    setParameter(tagsObjStr + ".Key", tagsObj.key);
    setParameter(tagsObjStr + ".Value", tagsObj.value);
  }
}

std::string ListPrefixListsRequest::getPrefixListName() const {
  return prefixListName_;
}

void ListPrefixListsRequest::setPrefixListName(const std::string &prefixListName) {
  prefixListName_ = prefixListName;
  setParameter(std::string("PrefixListName"), prefixListName);
}

long ListPrefixListsRequest::getMaxResults() const {
  return maxResults_;
}

void ListPrefixListsRequest::setMaxResults(long maxResults) {
  maxResults_ = maxResults;
  setParameter(std::string("MaxResults"), std::to_string(maxResults));
}

