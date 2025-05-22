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

#include <alibabacloud/rds/model/ListTagResourcesRequest.h>

using AlibabaCloud::Rds::Model::ListTagResourcesRequest;

ListTagResourcesRequest::ListTagResourcesRequest()
    : RpcServiceRequest("rds", "2014-08-15", "ListTagResources") {
  setMethod(HttpRequest::Method::Post);
}

ListTagResourcesRequest::~ListTagResourcesRequest() {}

long ListTagResourcesRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void ListTagResourcesRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string ListTagResourcesRequest::getAccessKeyId() const {
  return accessKeyId_;
}

void ListTagResourcesRequest::setAccessKeyId(const std::string &accessKeyId) {
  accessKeyId_ = accessKeyId;
  setParameter(std::string("AccessKeyId"), accessKeyId);
}

std::string ListTagResourcesRequest::getRegionId() const {
  return regionId_;
}

void ListTagResourcesRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string ListTagResourcesRequest::getNextToken() const {
  return nextToken_;
}

void ListTagResourcesRequest::setNextToken(const std::string &nextToken) {
  nextToken_ = nextToken;
  setParameter(std::string("NextToken"), nextToken);
}

std::vector<ListTagResourcesRequest::Tag> ListTagResourcesRequest::getTag() const {
  return tag_;
}

void ListTagResourcesRequest::setTag(const std::vector<ListTagResourcesRequest::Tag> &tag) {
  tag_ = tag;
  for(int dep1 = 0; dep1 != tag.size(); dep1++) {
  auto tagObj = tag.at(dep1);
  std::string tagObjStr = std::string("Tag") + "." + std::to_string(dep1 + 1);
    setParameter(tagObjStr + ".Value", tagObj.value);
    setParameter(tagObjStr + ".Key", tagObj.key);
  }
}

std::vector<std::string> ListTagResourcesRequest::getResourceId() const {
  return resourceId_;
}

void ListTagResourcesRequest::setResourceId(const std::vector<std::string> &resourceId) {
  resourceId_ = resourceId;
}

std::string ListTagResourcesRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void ListTagResourcesRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

long ListTagResourcesRequest::getOwnerId() const {
  return ownerId_;
}

void ListTagResourcesRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

std::string ListTagResourcesRequest::getResourceType() const {
  return resourceType_;
}

void ListTagResourcesRequest::setResourceType(const std::string &resourceType) {
  resourceType_ = resourceType;
  setParameter(std::string("ResourceType"), resourceType);
}

