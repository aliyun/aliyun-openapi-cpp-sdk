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

#include <alibabacloud/ecs/model/RedeployDedicatedHostRequest.h>

using AlibabaCloud::Ecs::Model::RedeployDedicatedHostRequest;

RedeployDedicatedHostRequest::RedeployDedicatedHostRequest()
    : RpcServiceRequest("ecs", "2014-05-26", "RedeployDedicatedHost") {
  setMethod(HttpRequest::Method::Post);
}

RedeployDedicatedHostRequest::~RedeployDedicatedHostRequest() {}

long RedeployDedicatedHostRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void RedeployDedicatedHostRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string RedeployDedicatedHostRequest::getRegionId() const {
  return regionId_;
}

void RedeployDedicatedHostRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string RedeployDedicatedHostRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void RedeployDedicatedHostRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string RedeployDedicatedHostRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void RedeployDedicatedHostRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

std::string RedeployDedicatedHostRequest::getDedicatedHostId() const {
  return dedicatedHostId_;
}

void RedeployDedicatedHostRequest::setDedicatedHostId(const std::string &dedicatedHostId) {
  dedicatedHostId_ = dedicatedHostId;
  setParameter(std::string("DedicatedHostId"), dedicatedHostId);
}

long RedeployDedicatedHostRequest::getOwnerId() const {
  return ownerId_;
}

void RedeployDedicatedHostRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

std::string RedeployDedicatedHostRequest::getMigrationType() const {
  return migrationType_;
}

void RedeployDedicatedHostRequest::setMigrationType(const std::string &migrationType) {
  migrationType_ = migrationType;
  setParameter(std::string("MigrationType"), migrationType);
}

