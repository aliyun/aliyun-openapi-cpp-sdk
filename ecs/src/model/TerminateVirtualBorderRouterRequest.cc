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

#include <alibabacloud/ecs/model/TerminateVirtualBorderRouterRequest.h>

using AlibabaCloud::Ecs::Model::TerminateVirtualBorderRouterRequest;

TerminateVirtualBorderRouterRequest::TerminateVirtualBorderRouterRequest()
    : RpcServiceRequest("ecs", "2014-05-26", "TerminateVirtualBorderRouter") {
  setMethod(HttpRequest::Method::Post);
}

TerminateVirtualBorderRouterRequest::~TerminateVirtualBorderRouterRequest() {}

long TerminateVirtualBorderRouterRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void TerminateVirtualBorderRouterRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string TerminateVirtualBorderRouterRequest::getClientToken() const {
  return clientToken_;
}

void TerminateVirtualBorderRouterRequest::setClientToken(const std::string &clientToken) {
  clientToken_ = clientToken;
  setParameter(std::string("ClientToken"), clientToken);
}

std::string TerminateVirtualBorderRouterRequest::getVbrId() const {
  return vbrId_;
}

void TerminateVirtualBorderRouterRequest::setVbrId(const std::string &vbrId) {
  vbrId_ = vbrId;
  setParameter(std::string("VbrId"), vbrId);
}

std::string TerminateVirtualBorderRouterRequest::getRegionId() const {
  return regionId_;
}

void TerminateVirtualBorderRouterRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string TerminateVirtualBorderRouterRequest::getUserCidr() const {
  return userCidr_;
}

void TerminateVirtualBorderRouterRequest::setUserCidr(const std::string &userCidr) {
  userCidr_ = userCidr;
  setParameter(std::string("UserCidr"), userCidr);
}

std::string TerminateVirtualBorderRouterRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void TerminateVirtualBorderRouterRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string TerminateVirtualBorderRouterRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void TerminateVirtualBorderRouterRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

long TerminateVirtualBorderRouterRequest::getOwnerId() const {
  return ownerId_;
}

void TerminateVirtualBorderRouterRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

