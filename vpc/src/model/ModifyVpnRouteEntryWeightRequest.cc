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

#include <alibabacloud/vpc/model/ModifyVpnRouteEntryWeightRequest.h>

using AlibabaCloud::Vpc::Model::ModifyVpnRouteEntryWeightRequest;

ModifyVpnRouteEntryWeightRequest::ModifyVpnRouteEntryWeightRequest()
    : RpcServiceRequest("vpc", "2016-04-28", "ModifyVpnRouteEntryWeight") {
  setMethod(HttpRequest::Method::Post);
}

ModifyVpnRouteEntryWeightRequest::~ModifyVpnRouteEntryWeightRequest() {}

long ModifyVpnRouteEntryWeightRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void ModifyVpnRouteEntryWeightRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string ModifyVpnRouteEntryWeightRequest::getClientToken() const {
  return clientToken_;
}

void ModifyVpnRouteEntryWeightRequest::setClientToken(const std::string &clientToken) {
  clientToken_ = clientToken;
  setParameter(std::string("ClientToken"), clientToken);
}

int ModifyVpnRouteEntryWeightRequest::getNewWeight() const {
  return newWeight_;
}

void ModifyVpnRouteEntryWeightRequest::setNewWeight(int newWeight) {
  newWeight_ = newWeight;
  setParameter(std::string("NewWeight"), std::to_string(newWeight));
}

std::string ModifyVpnRouteEntryWeightRequest::getRegionId() const {
  return regionId_;
}

void ModifyVpnRouteEntryWeightRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string ModifyVpnRouteEntryWeightRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void ModifyVpnRouteEntryWeightRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string ModifyVpnRouteEntryWeightRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void ModifyVpnRouteEntryWeightRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

int ModifyVpnRouteEntryWeightRequest::getWeight() const {
  return weight_;
}

void ModifyVpnRouteEntryWeightRequest::setWeight(int weight) {
  weight_ = weight;
  setParameter(std::string("Weight"), std::to_string(weight));
}

std::string ModifyVpnRouteEntryWeightRequest::getVpnGatewayId() const {
  return vpnGatewayId_;
}

void ModifyVpnRouteEntryWeightRequest::setVpnGatewayId(const std::string &vpnGatewayId) {
  vpnGatewayId_ = vpnGatewayId;
  setParameter(std::string("VpnGatewayId"), vpnGatewayId);
}

long ModifyVpnRouteEntryWeightRequest::getOwnerId() const {
  return ownerId_;
}

void ModifyVpnRouteEntryWeightRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

std::string ModifyVpnRouteEntryWeightRequest::getRouteDest() const {
  return routeDest_;
}

void ModifyVpnRouteEntryWeightRequest::setRouteDest(const std::string &routeDest) {
  routeDest_ = routeDest;
  setParameter(std::string("RouteDest"), routeDest);
}

std::string ModifyVpnRouteEntryWeightRequest::getNextHop() const {
  return nextHop_;
}

void ModifyVpnRouteEntryWeightRequest::setNextHop(const std::string &nextHop) {
  nextHop_ = nextHop;
  setParameter(std::string("NextHop"), nextHop);
}

std::string ModifyVpnRouteEntryWeightRequest::getOverlayMode() const {
  return overlayMode_;
}

void ModifyVpnRouteEntryWeightRequest::setOverlayMode(const std::string &overlayMode) {
  overlayMode_ = overlayMode;
  setParameter(std::string("OverlayMode"), overlayMode);
}

