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

#include <alibabacloud/ecs/model/ModifyDedicatedHostAutoReleaseTimeRequest.h>

using AlibabaCloud::Ecs::Model::ModifyDedicatedHostAutoReleaseTimeRequest;

ModifyDedicatedHostAutoReleaseTimeRequest::ModifyDedicatedHostAutoReleaseTimeRequest()
    : RpcServiceRequest("ecs", "2014-05-26", "ModifyDedicatedHostAutoReleaseTime") {
  setMethod(HttpRequest::Method::Post);
}

ModifyDedicatedHostAutoReleaseTimeRequest::~ModifyDedicatedHostAutoReleaseTimeRequest() {}

long ModifyDedicatedHostAutoReleaseTimeRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void ModifyDedicatedHostAutoReleaseTimeRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string ModifyDedicatedHostAutoReleaseTimeRequest::getRegionId() const {
  return regionId_;
}

void ModifyDedicatedHostAutoReleaseTimeRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string ModifyDedicatedHostAutoReleaseTimeRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void ModifyDedicatedHostAutoReleaseTimeRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string ModifyDedicatedHostAutoReleaseTimeRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void ModifyDedicatedHostAutoReleaseTimeRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

std::string ModifyDedicatedHostAutoReleaseTimeRequest::getAutoReleaseTime() const {
  return autoReleaseTime_;
}

void ModifyDedicatedHostAutoReleaseTimeRequest::setAutoReleaseTime(const std::string &autoReleaseTime) {
  autoReleaseTime_ = autoReleaseTime;
  setParameter(std::string("AutoReleaseTime"), autoReleaseTime);
}

std::string ModifyDedicatedHostAutoReleaseTimeRequest::getDedicatedHostId() const {
  return dedicatedHostId_;
}

void ModifyDedicatedHostAutoReleaseTimeRequest::setDedicatedHostId(const std::string &dedicatedHostId) {
  dedicatedHostId_ = dedicatedHostId;
  setParameter(std::string("DedicatedHostId"), dedicatedHostId);
}

long ModifyDedicatedHostAutoReleaseTimeRequest::getOwnerId() const {
  return ownerId_;
}

void ModifyDedicatedHostAutoReleaseTimeRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

