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

#include <alibabacloud/vpc/model/TagResourcesForExpressConnectRequest.h>

using AlibabaCloud::Vpc::Model::TagResourcesForExpressConnectRequest;

TagResourcesForExpressConnectRequest::TagResourcesForExpressConnectRequest()
    : RpcServiceRequest("vpc", "2016-04-28", "TagResourcesForExpressConnect") {
  setMethod(HttpRequest::Method::Post);
}

TagResourcesForExpressConnectRequest::~TagResourcesForExpressConnectRequest() {}

long TagResourcesForExpressConnectRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void TagResourcesForExpressConnectRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string TagResourcesForExpressConnectRequest::getRegionId() const {
  return regionId_;
}

void TagResourcesForExpressConnectRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::vector<TagResourcesForExpressConnectRequest::Tag> TagResourcesForExpressConnectRequest::getTag() const {
  return tag_;
}

void TagResourcesForExpressConnectRequest::setTag(const std::vector<TagResourcesForExpressConnectRequest::Tag> &tag) {
  tag_ = tag;
  for(int dep1 = 0; dep1 != tag.size(); dep1++) {
  auto tagObj = tag.at(dep1);
  std::string tagObjStr = std::string("Tag") + "." + std::to_string(dep1 + 1);
    setParameter(tagObjStr + ".Value", tagObj.value);
    setParameter(tagObjStr + ".Key", tagObj.key);
  }
}

std::vector<std::string> TagResourcesForExpressConnectRequest::getResourceId() const {
  return resourceId_;
}

void TagResourcesForExpressConnectRequest::setResourceId(const std::vector<std::string> &resourceId) {
  resourceId_ = resourceId;
}

std::string TagResourcesForExpressConnectRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void TagResourcesForExpressConnectRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string TagResourcesForExpressConnectRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void TagResourcesForExpressConnectRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

long TagResourcesForExpressConnectRequest::getOwnerId() const {
  return ownerId_;
}

void TagResourcesForExpressConnectRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

std::string TagResourcesForExpressConnectRequest::getResourceType() const {
  return resourceType_;
}

void TagResourcesForExpressConnectRequest::setResourceType(const std::string &resourceType) {
  resourceType_ = resourceType;
  setParameter(std::string("ResourceType"), resourceType);
}

