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

#include <alibabacloud/vpc/model/UntagResourcesForExpressConnectRequest.h>

using AlibabaCloud::Vpc::Model::UntagResourcesForExpressConnectRequest;

UntagResourcesForExpressConnectRequest::UntagResourcesForExpressConnectRequest()
    : RpcServiceRequest("vpc", "2016-04-28", "UntagResourcesForExpressConnect") {
  setMethod(HttpRequest::Method::Post);
}

UntagResourcesForExpressConnectRequest::~UntagResourcesForExpressConnectRequest() {}

long UntagResourcesForExpressConnectRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void UntagResourcesForExpressConnectRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string UntagResourcesForExpressConnectRequest::getRegionId() const {
  return regionId_;
}

void UntagResourcesForExpressConnectRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::vector<UntagResourcesForExpressConnectRequest::Tag> UntagResourcesForExpressConnectRequest::getTag() const {
  return tag_;
}

void UntagResourcesForExpressConnectRequest::setTag(const std::vector<UntagResourcesForExpressConnectRequest::Tag> &tag) {
  tag_ = tag;
  for(int dep1 = 0; dep1 != tag.size(); dep1++) {
  auto tagObj = tag.at(dep1);
  std::string tagObjStr = std::string("Tag") + "." + std::to_string(dep1 + 1);
    setParameter(tagObjStr + ".Value", tagObj.value);
    setParameter(tagObjStr + ".Key", tagObj.key);
  }
}

bool UntagResourcesForExpressConnectRequest::getAll() const {
  return all_;
}

void UntagResourcesForExpressConnectRequest::setAll(bool all) {
  all_ = all;
  setParameter(std::string("All"), all ? "true" : "false");
}

std::vector<std::string> UntagResourcesForExpressConnectRequest::getResourceId() const {
  return resourceId_;
}

void UntagResourcesForExpressConnectRequest::setResourceId(const std::vector<std::string> &resourceId) {
  resourceId_ = resourceId;
}

std::string UntagResourcesForExpressConnectRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void UntagResourcesForExpressConnectRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string UntagResourcesForExpressConnectRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void UntagResourcesForExpressConnectRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

long UntagResourcesForExpressConnectRequest::getOwnerId() const {
  return ownerId_;
}

void UntagResourcesForExpressConnectRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

std::string UntagResourcesForExpressConnectRequest::getResourceType() const {
  return resourceType_;
}

void UntagResourcesForExpressConnectRequest::setResourceType(const std::string &resourceType) {
  resourceType_ = resourceType;
  setParameter(std::string("ResourceType"), resourceType);
}

std::vector<std::string> UntagResourcesForExpressConnectRequest::getTagKey() const {
  return tagKey_;
}

void UntagResourcesForExpressConnectRequest::setTagKey(const std::vector<std::string> &tagKey) {
  tagKey_ = tagKey;
}

