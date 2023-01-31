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

#include <alibabacloud/vpc/model/UnassociatePhysicalConnectionFromVirtualBorderRouterRequest.h>

using AlibabaCloud::Vpc::Model::UnassociatePhysicalConnectionFromVirtualBorderRouterRequest;

UnassociatePhysicalConnectionFromVirtualBorderRouterRequest::UnassociatePhysicalConnectionFromVirtualBorderRouterRequest()
    : RpcServiceRequest("vpc", "2016-04-28", "UnassociatePhysicalConnectionFromVirtualBorderRouter") {
  setMethod(HttpRequest::Method::Post);
}

UnassociatePhysicalConnectionFromVirtualBorderRouterRequest::~UnassociatePhysicalConnectionFromVirtualBorderRouterRequest() {}

long UnassociatePhysicalConnectionFromVirtualBorderRouterRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void UnassociatePhysicalConnectionFromVirtualBorderRouterRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string UnassociatePhysicalConnectionFromVirtualBorderRouterRequest::getClientToken() const {
  return clientToken_;
}

void UnassociatePhysicalConnectionFromVirtualBorderRouterRequest::setClientToken(const std::string &clientToken) {
  clientToken_ = clientToken;
  setParameter(std::string("ClientToken"), clientToken);
}

std::string UnassociatePhysicalConnectionFromVirtualBorderRouterRequest::getVbrId() const {
  return vbrId_;
}

void UnassociatePhysicalConnectionFromVirtualBorderRouterRequest::setVbrId(const std::string &vbrId) {
  vbrId_ = vbrId;
  setParameter(std::string("VbrId"), vbrId);
}

std::string UnassociatePhysicalConnectionFromVirtualBorderRouterRequest::getRegionId() const {
  return regionId_;
}

void UnassociatePhysicalConnectionFromVirtualBorderRouterRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string UnassociatePhysicalConnectionFromVirtualBorderRouterRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void UnassociatePhysicalConnectionFromVirtualBorderRouterRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string UnassociatePhysicalConnectionFromVirtualBorderRouterRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void UnassociatePhysicalConnectionFromVirtualBorderRouterRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

long UnassociatePhysicalConnectionFromVirtualBorderRouterRequest::getOwnerId() const {
  return ownerId_;
}

void UnassociatePhysicalConnectionFromVirtualBorderRouterRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

std::string UnassociatePhysicalConnectionFromVirtualBorderRouterRequest::getPhysicalConnectionId() const {
  return physicalConnectionId_;
}

void UnassociatePhysicalConnectionFromVirtualBorderRouterRequest::setPhysicalConnectionId(const std::string &physicalConnectionId) {
  physicalConnectionId_ = physicalConnectionId;
  setParameter(std::string("PhysicalConnectionId"), physicalConnectionId);
}

