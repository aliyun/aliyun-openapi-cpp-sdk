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

#include <alibabacloud/ecs/model/JoinResourceGroupRequest.h>

using AlibabaCloud::Ecs::Model::JoinResourceGroupRequest;

JoinResourceGroupRequest::JoinResourceGroupRequest()
    : RpcServiceRequest("ecs", "2014-05-26", "JoinResourceGroup") {
  setMethod(HttpRequest::Method::Post);
}

JoinResourceGroupRequest::~JoinResourceGroupRequest() {}

long JoinResourceGroupRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void JoinResourceGroupRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string JoinResourceGroupRequest::getResourceGroupId() const {
  return resourceGroupId_;
}

void JoinResourceGroupRequest::setResourceGroupId(const std::string &resourceGroupId) {
  resourceGroupId_ = resourceGroupId;
  setParameter(std::string("ResourceGroupId"), resourceGroupId);
}

std::string JoinResourceGroupRequest::getRegionId() const {
  return regionId_;
}

void JoinResourceGroupRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string JoinResourceGroupRequest::getResourceId() const {
  return resourceId_;
}

void JoinResourceGroupRequest::setResourceId(const std::string &resourceId) {
  resourceId_ = resourceId;
  setParameter(std::string("ResourceId"), resourceId);
}

std::string JoinResourceGroupRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void JoinResourceGroupRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string JoinResourceGroupRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void JoinResourceGroupRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

long JoinResourceGroupRequest::getOwnerId() const {
  return ownerId_;
}

void JoinResourceGroupRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

std::string JoinResourceGroupRequest::getResourceType() const {
  return resourceType_;
}

void JoinResourceGroupRequest::setResourceType(const std::string &resourceType) {
  resourceType_ = resourceType;
  setParameter(std::string("ResourceType"), resourceType);
}

