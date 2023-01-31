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

#include <alibabacloud/vpc/model/ModifyVpnPbrRouteEntryPriorityRequest.h>

using AlibabaCloud::Vpc::Model::ModifyVpnPbrRouteEntryPriorityRequest;

ModifyVpnPbrRouteEntryPriorityRequest::ModifyVpnPbrRouteEntryPriorityRequest()
    : RpcServiceRequest("vpc", "2016-04-28", "ModifyVpnPbrRouteEntryPriority") {
  setMethod(HttpRequest::Method::Post);
}

ModifyVpnPbrRouteEntryPriorityRequest::~ModifyVpnPbrRouteEntryPriorityRequest() {}

std::string ModifyVpnPbrRouteEntryPriorityRequest::getRouteSource() const {
  return routeSource_;
}

void ModifyVpnPbrRouteEntryPriorityRequest::setRouteSource(const std::string &routeSource) {
  routeSource_ = routeSource;
  setParameter(std::string("RouteSource"), routeSource);
}

long ModifyVpnPbrRouteEntryPriorityRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void ModifyVpnPbrRouteEntryPriorityRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string ModifyVpnPbrRouteEntryPriorityRequest::getClientToken() const {
  return clientToken_;
}

void ModifyVpnPbrRouteEntryPriorityRequest::setClientToken(const std::string &clientToken) {
  clientToken_ = clientToken;
  setParameter(std::string("ClientToken"), clientToken);
}

int ModifyVpnPbrRouteEntryPriorityRequest::getNewPriority() const {
  return newPriority_;
}

void ModifyVpnPbrRouteEntryPriorityRequest::setNewPriority(int newPriority) {
  newPriority_ = newPriority;
  setParameter(std::string("NewPriority"), std::to_string(newPriority));
}

std::string ModifyVpnPbrRouteEntryPriorityRequest::getRegionId() const {
  return regionId_;
}

void ModifyVpnPbrRouteEntryPriorityRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string ModifyVpnPbrRouteEntryPriorityRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void ModifyVpnPbrRouteEntryPriorityRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string ModifyVpnPbrRouteEntryPriorityRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void ModifyVpnPbrRouteEntryPriorityRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

int ModifyVpnPbrRouteEntryPriorityRequest::getWeight() const {
  return weight_;
}

void ModifyVpnPbrRouteEntryPriorityRequest::setWeight(int weight) {
  weight_ = weight;
  setParameter(std::string("Weight"), std::to_string(weight));
}

std::string ModifyVpnPbrRouteEntryPriorityRequest::getVpnGatewayId() const {
  return vpnGatewayId_;
}

void ModifyVpnPbrRouteEntryPriorityRequest::setVpnGatewayId(const std::string &vpnGatewayId) {
  vpnGatewayId_ = vpnGatewayId;
  setParameter(std::string("VpnGatewayId"), vpnGatewayId);
}

long ModifyVpnPbrRouteEntryPriorityRequest::getOwnerId() const {
  return ownerId_;
}

void ModifyVpnPbrRouteEntryPriorityRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

int ModifyVpnPbrRouteEntryPriorityRequest::getPriority() const {
  return priority_;
}

void ModifyVpnPbrRouteEntryPriorityRequest::setPriority(int priority) {
  priority_ = priority;
  setParameter(std::string("Priority"), std::to_string(priority));
}

std::string ModifyVpnPbrRouteEntryPriorityRequest::getRouteDest() const {
  return routeDest_;
}

void ModifyVpnPbrRouteEntryPriorityRequest::setRouteDest(const std::string &routeDest) {
  routeDest_ = routeDest;
  setParameter(std::string("RouteDest"), routeDest);
}

std::string ModifyVpnPbrRouteEntryPriorityRequest::getNextHop() const {
  return nextHop_;
}

void ModifyVpnPbrRouteEntryPriorityRequest::setNextHop(const std::string &nextHop) {
  nextHop_ = nextHop;
  setParameter(std::string("NextHop"), nextHop);
}

