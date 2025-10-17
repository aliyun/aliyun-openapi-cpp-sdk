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

#include <alibabacloud/polardb/model/ListTagResourcesForRegionRequest.h>

using AlibabaCloud::Polardb::Model::ListTagResourcesForRegionRequest;

ListTagResourcesForRegionRequest::ListTagResourcesForRegionRequest()
    : RpcServiceRequest("polardb", "2017-08-01", "ListTagResourcesForRegion") {
  setMethod(HttpRequest::Method::Post);
}

ListTagResourcesForRegionRequest::~ListTagResourcesForRegionRequest() {}

long ListTagResourcesForRegionRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void ListTagResourcesForRegionRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string ListTagResourcesForRegionRequest::getAccessKeyId() const {
  return accessKeyId_;
}

void ListTagResourcesForRegionRequest::setAccessKeyId(const std::string &accessKeyId) {
  accessKeyId_ = accessKeyId;
  setParameter(std::string("AccessKeyId"), accessKeyId);
}

std::string ListTagResourcesForRegionRequest::getRegionId() const {
  return regionId_;
}

void ListTagResourcesForRegionRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string ListTagResourcesForRegionRequest::getNextToken() const {
  return nextToken_;
}

void ListTagResourcesForRegionRequest::setNextToken(const std::string &nextToken) {
  nextToken_ = nextToken;
  setParameter(std::string("NextToken"), nextToken);
}

std::string ListTagResourcesForRegionRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void ListTagResourcesForRegionRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string ListTagResourcesForRegionRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void ListTagResourcesForRegionRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

long ListTagResourcesForRegionRequest::getOwnerId() const {
  return ownerId_;
}

void ListTagResourcesForRegionRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

std::string ListTagResourcesForRegionRequest::getResourceType() const {
  return resourceType_;
}

void ListTagResourcesForRegionRequest::setResourceType(const std::string &resourceType) {
  resourceType_ = resourceType;
  setParameter(std::string("ResourceType"), resourceType);
}

