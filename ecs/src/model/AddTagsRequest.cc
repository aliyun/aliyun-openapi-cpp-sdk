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

#include <alibabacloud/ecs/model/AddTagsRequest.h>

using AlibabaCloud::Ecs::Model::AddTagsRequest;

AddTagsRequest::AddTagsRequest()
    : RpcServiceRequest("ecs", "2014-05-26", "AddTags") {
  setMethod(HttpRequest::Method::Post);
}

AddTagsRequest::~AddTagsRequest() {}

long AddTagsRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void AddTagsRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string AddTagsRequest::getRegionId() const {
  return regionId_;
}

void AddTagsRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::vector<AddTagsRequest::Tag> AddTagsRequest::getTag() const {
  return tag_;
}

void AddTagsRequest::setTag(const std::vector<AddTagsRequest::Tag> &tag) {
  tag_ = tag;
  for(int dep1 = 0; dep1 != tag.size(); dep1++) {
  auto tagObj = tag.at(dep1);
  std::string tagObjStr = std::string("Tag") + "." + std::to_string(dep1 + 1);
    setParameter(tagObjStr + ".Value", tagObj.value);
    setParameter(tagObjStr + ".Key", tagObj.key);
  }
}

std::string AddTagsRequest::getResourceId() const {
  return resourceId_;
}

void AddTagsRequest::setResourceId(const std::string &resourceId) {
  resourceId_ = resourceId;
  setParameter(std::string("ResourceId"), resourceId);
}

std::string AddTagsRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void AddTagsRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

long AddTagsRequest::getOwnerId() const {
  return ownerId_;
}

void AddTagsRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

std::string AddTagsRequest::getResourceType() const {
  return resourceType_;
}

void AddTagsRequest::setResourceType(const std::string &resourceType) {
  resourceType_ = resourceType;
  setParameter(std::string("ResourceType"), resourceType);
}

