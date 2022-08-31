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

#include <alibabacloud/ecs/model/DeleteImageComponentRequest.h>

using AlibabaCloud::Ecs::Model::DeleteImageComponentRequest;

DeleteImageComponentRequest::DeleteImageComponentRequest()
    : RpcServiceRequest("ecs", "2014-05-26", "DeleteImageComponent") {
  setMethod(HttpRequest::Method::Post);
}

DeleteImageComponentRequest::~DeleteImageComponentRequest() {}

long DeleteImageComponentRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void DeleteImageComponentRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string DeleteImageComponentRequest::getImageComponentId() const {
  return imageComponentId_;
}

void DeleteImageComponentRequest::setImageComponentId(const std::string &imageComponentId) {
  imageComponentId_ = imageComponentId;
  setParameter(std::string("ImageComponentId"), imageComponentId);
}

std::string DeleteImageComponentRequest::getRegionId() const {
  return regionId_;
}

void DeleteImageComponentRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string DeleteImageComponentRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void DeleteImageComponentRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string DeleteImageComponentRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void DeleteImageComponentRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

long DeleteImageComponentRequest::getOwnerId() const {
  return ownerId_;
}

void DeleteImageComponentRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

