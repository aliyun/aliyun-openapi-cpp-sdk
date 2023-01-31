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

#include <alibabacloud/vpc/model/DeleteVcoRouteEntryRequest.h>

using AlibabaCloud::Vpc::Model::DeleteVcoRouteEntryRequest;

DeleteVcoRouteEntryRequest::DeleteVcoRouteEntryRequest()
    : RpcServiceRequest("vpc", "2016-04-28", "DeleteVcoRouteEntry") {
  setMethod(HttpRequest::Method::Post);
}

DeleteVcoRouteEntryRequest::~DeleteVcoRouteEntryRequest() {}

long DeleteVcoRouteEntryRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void DeleteVcoRouteEntryRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string DeleteVcoRouteEntryRequest::getClientToken() const {
  return clientToken_;
}

void DeleteVcoRouteEntryRequest::setClientToken(const std::string &clientToken) {
  clientToken_ = clientToken;
  setParameter(std::string("ClientToken"), clientToken);
}

std::string DeleteVcoRouteEntryRequest::getRegionId() const {
  return regionId_;
}

void DeleteVcoRouteEntryRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string DeleteVcoRouteEntryRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void DeleteVcoRouteEntryRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string DeleteVcoRouteEntryRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void DeleteVcoRouteEntryRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

int DeleteVcoRouteEntryRequest::getWeight() const {
  return weight_;
}

void DeleteVcoRouteEntryRequest::setWeight(int weight) {
  weight_ = weight;
  setParameter(std::string("Weight"), std::to_string(weight));
}

std::string DeleteVcoRouteEntryRequest::getRouteDest() const {
  return routeDest_;
}

void DeleteVcoRouteEntryRequest::setRouteDest(const std::string &routeDest) {
  routeDest_ = routeDest;
  setParameter(std::string("RouteDest"), routeDest);
}

std::string DeleteVcoRouteEntryRequest::getNextHop() const {
  return nextHop_;
}

void DeleteVcoRouteEntryRequest::setNextHop(const std::string &nextHop) {
  nextHop_ = nextHop;
  setParameter(std::string("NextHop"), nextHop);
}

std::string DeleteVcoRouteEntryRequest::getVpnConnectionId() const {
  return vpnConnectionId_;
}

void DeleteVcoRouteEntryRequest::setVpnConnectionId(const std::string &vpnConnectionId) {
  vpnConnectionId_ = vpnConnectionId;
  setParameter(std::string("VpnConnectionId"), vpnConnectionId);
}

std::string DeleteVcoRouteEntryRequest::getOverlayMode() const {
  return overlayMode_;
}

void DeleteVcoRouteEntryRequest::setOverlayMode(const std::string &overlayMode) {
  overlayMode_ = overlayMode;
  setParameter(std::string("OverlayMode"), overlayMode);
}

