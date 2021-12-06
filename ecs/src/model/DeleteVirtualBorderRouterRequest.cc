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

#include <alibabacloud/ecs/model/DeleteVirtualBorderRouterRequest.h>

using AlibabaCloud::Ecs::Model::DeleteVirtualBorderRouterRequest;

DeleteVirtualBorderRouterRequest::DeleteVirtualBorderRouterRequest()
    : RpcServiceRequest("ecs", "2014-05-26", "DeleteVirtualBorderRouter") {
  setMethod(HttpRequest::Method::Post);
}

DeleteVirtualBorderRouterRequest::~DeleteVirtualBorderRouterRequest() {}

long DeleteVirtualBorderRouterRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void DeleteVirtualBorderRouterRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string DeleteVirtualBorderRouterRequest::getClientToken() const {
  return clientToken_;
}

void DeleteVirtualBorderRouterRequest::setClientToken(const std::string &clientToken) {
  clientToken_ = clientToken;
  setParameter(std::string("ClientToken"), clientToken);
}

std::string DeleteVirtualBorderRouterRequest::getVbrId() const {
  return vbrId_;
}

void DeleteVirtualBorderRouterRequest::setVbrId(const std::string &vbrId) {
  vbrId_ = vbrId;
  setParameter(std::string("VbrId"), vbrId);
}

std::string DeleteVirtualBorderRouterRequest::getRegionId() const {
  return regionId_;
}

void DeleteVirtualBorderRouterRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string DeleteVirtualBorderRouterRequest::getUserCidr() const {
  return userCidr_;
}

void DeleteVirtualBorderRouterRequest::setUserCidr(const std::string &userCidr) {
  userCidr_ = userCidr;
  setParameter(std::string("UserCidr"), userCidr);
}

std::string DeleteVirtualBorderRouterRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void DeleteVirtualBorderRouterRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string DeleteVirtualBorderRouterRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void DeleteVirtualBorderRouterRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

long DeleteVirtualBorderRouterRequest::getOwnerId() const {
  return ownerId_;
}

void DeleteVirtualBorderRouterRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

