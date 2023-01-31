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

#include <alibabacloud/vpc/model/ModifyVcoRouteEntryWeightRequest.h>

using AlibabaCloud::Vpc::Model::ModifyVcoRouteEntryWeightRequest;

ModifyVcoRouteEntryWeightRequest::ModifyVcoRouteEntryWeightRequest()
    : RpcServiceRequest("vpc", "2016-04-28", "ModifyVcoRouteEntryWeight") {
  setMethod(HttpRequest::Method::Post);
}

ModifyVcoRouteEntryWeightRequest::~ModifyVcoRouteEntryWeightRequest() {}

long ModifyVcoRouteEntryWeightRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void ModifyVcoRouteEntryWeightRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string ModifyVcoRouteEntryWeightRequest::getClientToken() const {
  return clientToken_;
}

void ModifyVcoRouteEntryWeightRequest::setClientToken(const std::string &clientToken) {
  clientToken_ = clientToken;
  setParameter(std::string("ClientToken"), clientToken);
}

int ModifyVcoRouteEntryWeightRequest::getNewWeight() const {
  return newWeight_;
}

void ModifyVcoRouteEntryWeightRequest::setNewWeight(int newWeight) {
  newWeight_ = newWeight;
  setParameter(std::string("NewWeight"), std::to_string(newWeight));
}

std::string ModifyVcoRouteEntryWeightRequest::getRegionId() const {
  return regionId_;
}

void ModifyVcoRouteEntryWeightRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string ModifyVcoRouteEntryWeightRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void ModifyVcoRouteEntryWeightRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string ModifyVcoRouteEntryWeightRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void ModifyVcoRouteEntryWeightRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

int ModifyVcoRouteEntryWeightRequest::getWeight() const {
  return weight_;
}

void ModifyVcoRouteEntryWeightRequest::setWeight(int weight) {
  weight_ = weight;
  setParameter(std::string("Weight"), std::to_string(weight));
}

std::string ModifyVcoRouteEntryWeightRequest::getRouteDest() const {
  return routeDest_;
}

void ModifyVcoRouteEntryWeightRequest::setRouteDest(const std::string &routeDest) {
  routeDest_ = routeDest;
  setParameter(std::string("RouteDest"), routeDest);
}

std::string ModifyVcoRouteEntryWeightRequest::getNextHop() const {
  return nextHop_;
}

void ModifyVcoRouteEntryWeightRequest::setNextHop(const std::string &nextHop) {
  nextHop_ = nextHop;
  setParameter(std::string("NextHop"), nextHop);
}

std::string ModifyVcoRouteEntryWeightRequest::getVpnConnectionId() const {
  return vpnConnectionId_;
}

void ModifyVcoRouteEntryWeightRequest::setVpnConnectionId(const std::string &vpnConnectionId) {
  vpnConnectionId_ = vpnConnectionId;
  setParameter(std::string("VpnConnectionId"), vpnConnectionId);
}

std::string ModifyVcoRouteEntryWeightRequest::getOverlayMode() const {
  return overlayMode_;
}

void ModifyVcoRouteEntryWeightRequest::setOverlayMode(const std::string &overlayMode) {
  overlayMode_ = overlayMode;
  setParameter(std::string("OverlayMode"), overlayMode);
}

