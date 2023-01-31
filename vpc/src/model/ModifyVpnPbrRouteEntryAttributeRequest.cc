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

#include <alibabacloud/vpc/model/ModifyVpnPbrRouteEntryAttributeRequest.h>

using AlibabaCloud::Vpc::Model::ModifyVpnPbrRouteEntryAttributeRequest;

ModifyVpnPbrRouteEntryAttributeRequest::ModifyVpnPbrRouteEntryAttributeRequest()
    : RpcServiceRequest("vpc", "2016-04-28", "ModifyVpnPbrRouteEntryAttribute") {
  setMethod(HttpRequest::Method::Post);
}

ModifyVpnPbrRouteEntryAttributeRequest::~ModifyVpnPbrRouteEntryAttributeRequest() {}

std::string ModifyVpnPbrRouteEntryAttributeRequest::getRouteSource() const {
  return routeSource_;
}

void ModifyVpnPbrRouteEntryAttributeRequest::setRouteSource(const std::string &routeSource) {
  routeSource_ = routeSource;
  setParameter(std::string("RouteSource"), routeSource);
}

long ModifyVpnPbrRouteEntryAttributeRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void ModifyVpnPbrRouteEntryAttributeRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string ModifyVpnPbrRouteEntryAttributeRequest::getClientToken() const {
  return clientToken_;
}

void ModifyVpnPbrRouteEntryAttributeRequest::setClientToken(const std::string &clientToken) {
  clientToken_ = clientToken;
  setParameter(std::string("ClientToken"), clientToken);
}

int ModifyVpnPbrRouteEntryAttributeRequest::getNewWeight() const {
  return newWeight_;
}

void ModifyVpnPbrRouteEntryAttributeRequest::setNewWeight(int newWeight) {
  newWeight_ = newWeight;
  setParameter(std::string("NewWeight"), std::to_string(newWeight));
}

int ModifyVpnPbrRouteEntryAttributeRequest::getNewPriority() const {
  return newPriority_;
}

void ModifyVpnPbrRouteEntryAttributeRequest::setNewPriority(int newPriority) {
  newPriority_ = newPriority;
  setParameter(std::string("NewPriority"), std::to_string(newPriority));
}

std::string ModifyVpnPbrRouteEntryAttributeRequest::getRegionId() const {
  return regionId_;
}

void ModifyVpnPbrRouteEntryAttributeRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string ModifyVpnPbrRouteEntryAttributeRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void ModifyVpnPbrRouteEntryAttributeRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string ModifyVpnPbrRouteEntryAttributeRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void ModifyVpnPbrRouteEntryAttributeRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

int ModifyVpnPbrRouteEntryAttributeRequest::getWeight() const {
  return weight_;
}

void ModifyVpnPbrRouteEntryAttributeRequest::setWeight(int weight) {
  weight_ = weight;
  setParameter(std::string("Weight"), std::to_string(weight));
}

std::string ModifyVpnPbrRouteEntryAttributeRequest::getVpnGatewayId() const {
  return vpnGatewayId_;
}

void ModifyVpnPbrRouteEntryAttributeRequest::setVpnGatewayId(const std::string &vpnGatewayId) {
  vpnGatewayId_ = vpnGatewayId;
  setParameter(std::string("VpnGatewayId"), vpnGatewayId);
}

long ModifyVpnPbrRouteEntryAttributeRequest::getOwnerId() const {
  return ownerId_;
}

void ModifyVpnPbrRouteEntryAttributeRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

int ModifyVpnPbrRouteEntryAttributeRequest::getPriority() const {
  return priority_;
}

void ModifyVpnPbrRouteEntryAttributeRequest::setPriority(int priority) {
  priority_ = priority;
  setParameter(std::string("Priority"), std::to_string(priority));
}

std::string ModifyVpnPbrRouteEntryAttributeRequest::getRouteDest() const {
  return routeDest_;
}

void ModifyVpnPbrRouteEntryAttributeRequest::setRouteDest(const std::string &routeDest) {
  routeDest_ = routeDest;
  setParameter(std::string("RouteDest"), routeDest);
}

std::string ModifyVpnPbrRouteEntryAttributeRequest::getNextHop() const {
  return nextHop_;
}

void ModifyVpnPbrRouteEntryAttributeRequest::setNextHop(const std::string &nextHop) {
  nextHop_ = nextHop;
  setParameter(std::string("NextHop"), nextHop);
}

