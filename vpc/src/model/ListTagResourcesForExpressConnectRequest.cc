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

#include <alibabacloud/vpc/model/ListTagResourcesForExpressConnectRequest.h>

using AlibabaCloud::Vpc::Model::ListTagResourcesForExpressConnectRequest;

ListTagResourcesForExpressConnectRequest::ListTagResourcesForExpressConnectRequest()
    : RpcServiceRequest("vpc", "2016-04-28", "ListTagResourcesForExpressConnect") {
  setMethod(HttpRequest::Method::Post);
}

ListTagResourcesForExpressConnectRequest::~ListTagResourcesForExpressConnectRequest() {}

long ListTagResourcesForExpressConnectRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void ListTagResourcesForExpressConnectRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string ListTagResourcesForExpressConnectRequest::getRegionId() const {
  return regionId_;
}

void ListTagResourcesForExpressConnectRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string ListTagResourcesForExpressConnectRequest::getNextToken() const {
  return nextToken_;
}

void ListTagResourcesForExpressConnectRequest::setNextToken(const std::string &nextToken) {
  nextToken_ = nextToken;
  setParameter(std::string("NextToken"), nextToken);
}

std::vector<ListTagResourcesForExpressConnectRequest::Tag> ListTagResourcesForExpressConnectRequest::getTag() const {
  return tag_;
}

void ListTagResourcesForExpressConnectRequest::setTag(const std::vector<ListTagResourcesForExpressConnectRequest::Tag> &tag) {
  tag_ = tag;
  for(int dep1 = 0; dep1 != tag.size(); dep1++) {
  auto tagObj = tag.at(dep1);
  std::string tagObjStr = std::string("Tag") + "." + std::to_string(dep1 + 1);
    setParameter(tagObjStr + ".Value", tagObj.value);
    setParameter(tagObjStr + ".Key", tagObj.key);
  }
}

std::vector<std::string> ListTagResourcesForExpressConnectRequest::getResourceId() const {
  return resourceId_;
}

void ListTagResourcesForExpressConnectRequest::setResourceId(const std::vector<std::string> &resourceId) {
  resourceId_ = resourceId;
}

std::string ListTagResourcesForExpressConnectRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void ListTagResourcesForExpressConnectRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string ListTagResourcesForExpressConnectRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void ListTagResourcesForExpressConnectRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

long ListTagResourcesForExpressConnectRequest::getOwnerId() const {
  return ownerId_;
}

void ListTagResourcesForExpressConnectRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

std::string ListTagResourcesForExpressConnectRequest::getResourceType() const {
  return resourceType_;
}

void ListTagResourcesForExpressConnectRequest::setResourceType(const std::string &resourceType) {
  resourceType_ = resourceType;
  setParameter(std::string("ResourceType"), resourceType);
}

int ListTagResourcesForExpressConnectRequest::getMaxResults() const {
  return maxResults_;
}

void ListTagResourcesForExpressConnectRequest::setMaxResults(int maxResults) {
  maxResults_ = maxResults;
  setParameter(std::string("MaxResults"), std::to_string(maxResults));
}

