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

#include <alibabacloud/vpc/model/ModifyGlobalAccelerationInstanceAttributesRequest.h>

using AlibabaCloud::Vpc::Model::ModifyGlobalAccelerationInstanceAttributesRequest;

ModifyGlobalAccelerationInstanceAttributesRequest::ModifyGlobalAccelerationInstanceAttributesRequest()
    : RpcServiceRequest("vpc", "2016-04-28", "ModifyGlobalAccelerationInstanceAttributes") {
  setMethod(HttpRequest::Method::Post);
}

ModifyGlobalAccelerationInstanceAttributesRequest::~ModifyGlobalAccelerationInstanceAttributesRequest() {}

long ModifyGlobalAccelerationInstanceAttributesRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void ModifyGlobalAccelerationInstanceAttributesRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string ModifyGlobalAccelerationInstanceAttributesRequest::getDescription() const {
  return description_;
}

void ModifyGlobalAccelerationInstanceAttributesRequest::setDescription(const std::string &description) {
  description_ = description;
  setParameter(std::string("Description"), description);
}

std::string ModifyGlobalAccelerationInstanceAttributesRequest::getGlobalAccelerationInstanceId() const {
  return globalAccelerationInstanceId_;
}

void ModifyGlobalAccelerationInstanceAttributesRequest::setGlobalAccelerationInstanceId(const std::string &globalAccelerationInstanceId) {
  globalAccelerationInstanceId_ = globalAccelerationInstanceId;
  setParameter(std::string("GlobalAccelerationInstanceId"), globalAccelerationInstanceId);
}

std::string ModifyGlobalAccelerationInstanceAttributesRequest::getRegionId() const {
  return regionId_;
}

void ModifyGlobalAccelerationInstanceAttributesRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string ModifyGlobalAccelerationInstanceAttributesRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void ModifyGlobalAccelerationInstanceAttributesRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string ModifyGlobalAccelerationInstanceAttributesRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void ModifyGlobalAccelerationInstanceAttributesRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

long ModifyGlobalAccelerationInstanceAttributesRequest::getOwnerId() const {
  return ownerId_;
}

void ModifyGlobalAccelerationInstanceAttributesRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

std::string ModifyGlobalAccelerationInstanceAttributesRequest::getName() const {
  return name_;
}

void ModifyGlobalAccelerationInstanceAttributesRequest::setName(const std::string &name) {
  name_ = name;
  setParameter(std::string("Name"), name);
}

