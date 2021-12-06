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

#include <alibabacloud/ecs/model/AssociateHaVipRequest.h>

using AlibabaCloud::Ecs::Model::AssociateHaVipRequest;

AssociateHaVipRequest::AssociateHaVipRequest()
    : RpcServiceRequest("ecs", "2014-05-26", "AssociateHaVip") {
  setMethod(HttpRequest::Method::Post);
}

AssociateHaVipRequest::~AssociateHaVipRequest() {}

long AssociateHaVipRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void AssociateHaVipRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string AssociateHaVipRequest::getClientToken() const {
  return clientToken_;
}

void AssociateHaVipRequest::setClientToken(const std::string &clientToken) {
  clientToken_ = clientToken;
  setParameter(std::string("ClientToken"), clientToken);
}

std::string AssociateHaVipRequest::getRegionId() const {
  return regionId_;
}

void AssociateHaVipRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string AssociateHaVipRequest::getHaVipId() const {
  return haVipId_;
}

void AssociateHaVipRequest::setHaVipId(const std::string &haVipId) {
  haVipId_ = haVipId;
  setParameter(std::string("HaVipId"), haVipId);
}

std::string AssociateHaVipRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void AssociateHaVipRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string AssociateHaVipRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void AssociateHaVipRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

long AssociateHaVipRequest::getOwnerId() const {
  return ownerId_;
}

void AssociateHaVipRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

std::string AssociateHaVipRequest::getInstanceId() const {
  return instanceId_;
}

void AssociateHaVipRequest::setInstanceId(const std::string &instanceId) {
  instanceId_ = instanceId;
  setParameter(std::string("InstanceId"), instanceId);
}

