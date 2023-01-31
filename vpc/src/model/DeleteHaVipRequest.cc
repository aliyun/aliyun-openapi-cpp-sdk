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

#include <alibabacloud/vpc/model/DeleteHaVipRequest.h>

using AlibabaCloud::Vpc::Model::DeleteHaVipRequest;

DeleteHaVipRequest::DeleteHaVipRequest()
    : RpcServiceRequest("vpc", "2016-04-28", "DeleteHaVip") {
  setMethod(HttpRequest::Method::Post);
}

DeleteHaVipRequest::~DeleteHaVipRequest() {}

long DeleteHaVipRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void DeleteHaVipRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string DeleteHaVipRequest::getClientToken() const {
  return clientToken_;
}

void DeleteHaVipRequest::setClientToken(const std::string &clientToken) {
  clientToken_ = clientToken;
  setParameter(std::string("ClientToken"), clientToken);
}

std::string DeleteHaVipRequest::getRegionId() const {
  return regionId_;
}

void DeleteHaVipRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string DeleteHaVipRequest::getHaVipId() const {
  return haVipId_;
}

void DeleteHaVipRequest::setHaVipId(const std::string &haVipId) {
  haVipId_ = haVipId;
  setParameter(std::string("HaVipId"), haVipId);
}

std::string DeleteHaVipRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void DeleteHaVipRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string DeleteHaVipRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void DeleteHaVipRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

long DeleteHaVipRequest::getOwnerId() const {
  return ownerId_;
}

void DeleteHaVipRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

