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

#include <alibabacloud/vpc/model/CreateVcoRouteEntryRequest.h>

using AlibabaCloud::Vpc::Model::CreateVcoRouteEntryRequest;

CreateVcoRouteEntryRequest::CreateVcoRouteEntryRequest()
    : RpcServiceRequest("vpc", "2016-04-28", "CreateVcoRouteEntry") {
  setMethod(HttpRequest::Method::Post);
}

CreateVcoRouteEntryRequest::~CreateVcoRouteEntryRequest() {}

long CreateVcoRouteEntryRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void CreateVcoRouteEntryRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string CreateVcoRouteEntryRequest::getClientToken() const {
  return clientToken_;
}

void CreateVcoRouteEntryRequest::setClientToken(const std::string &clientToken) {
  clientToken_ = clientToken;
  setParameter(std::string("ClientToken"), clientToken);
}

std::string CreateVcoRouteEntryRequest::getDescription() const {
  return description_;
}

void CreateVcoRouteEntryRequest::setDescription(const std::string &description) {
  description_ = description;
  setParameter(std::string("Description"), description);
}

std::string CreateVcoRouteEntryRequest::getRegionId() const {
  return regionId_;
}

void CreateVcoRouteEntryRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

bool CreateVcoRouteEntryRequest::getDryRun() const {
  return dryRun_;
}

void CreateVcoRouteEntryRequest::setDryRun(bool dryRun) {
  dryRun_ = dryRun;
  setParameter(std::string("DryRun"), dryRun ? "true" : "false");
}

std::string CreateVcoRouteEntryRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void CreateVcoRouteEntryRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string CreateVcoRouteEntryRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void CreateVcoRouteEntryRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

int CreateVcoRouteEntryRequest::getWeight() const {
  return weight_;
}

void CreateVcoRouteEntryRequest::setWeight(int weight) {
  weight_ = weight;
  setParameter(std::string("Weight"), std::to_string(weight));
}

std::string CreateVcoRouteEntryRequest::getRouteDest() const {
  return routeDest_;
}

void CreateVcoRouteEntryRequest::setRouteDest(const std::string &routeDest) {
  routeDest_ = routeDest;
  setParameter(std::string("RouteDest"), routeDest);
}

std::string CreateVcoRouteEntryRequest::getNextHop() const {
  return nextHop_;
}

void CreateVcoRouteEntryRequest::setNextHop(const std::string &nextHop) {
  nextHop_ = nextHop;
  setParameter(std::string("NextHop"), nextHop);
}

std::string CreateVcoRouteEntryRequest::getVpnConnectionId() const {
  return vpnConnectionId_;
}

void CreateVcoRouteEntryRequest::setVpnConnectionId(const std::string &vpnConnectionId) {
  vpnConnectionId_ = vpnConnectionId;
  setParameter(std::string("VpnConnectionId"), vpnConnectionId);
}

std::string CreateVcoRouteEntryRequest::getOverlayMode() const {
  return overlayMode_;
}

void CreateVcoRouteEntryRequest::setOverlayMode(const std::string &overlayMode) {
  overlayMode_ = overlayMode;
  setParameter(std::string("OverlayMode"), overlayMode);
}

