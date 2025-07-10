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

#include <alibabacloud/vpc/model/CreateVpnPbrRouteEntryRequest.h>

using AlibabaCloud::Vpc::Model::CreateVpnPbrRouteEntryRequest;

CreateVpnPbrRouteEntryRequest::CreateVpnPbrRouteEntryRequest()
    : RpcServiceRequest("vpc", "2016-04-28", "CreateVpnPbrRouteEntry") {
  setMethod(HttpRequest::Method::Post);
}

CreateVpnPbrRouteEntryRequest::~CreateVpnPbrRouteEntryRequest() {}

std::string CreateVpnPbrRouteEntryRequest::getRouteSource() const {
  return routeSource_;
}

void CreateVpnPbrRouteEntryRequest::setRouteSource(const std::string &routeSource) {
  routeSource_ = routeSource;
  setParameter(std::string("RouteSource"), routeSource);
}

long CreateVpnPbrRouteEntryRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void CreateVpnPbrRouteEntryRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string CreateVpnPbrRouteEntryRequest::getClientToken() const {
  return clientToken_;
}

void CreateVpnPbrRouteEntryRequest::setClientToken(const std::string &clientToken) {
  clientToken_ = clientToken;
  setParameter(std::string("ClientToken"), clientToken);
}

std::string CreateVpnPbrRouteEntryRequest::getDescription() const {
  return description_;
}

void CreateVpnPbrRouteEntryRequest::setDescription(const std::string &description) {
  description_ = description;
  setParameter(std::string("Description"), description);
}

bool CreateVpnPbrRouteEntryRequest::getPublishVpc() const {
  return publishVpc_;
}

void CreateVpnPbrRouteEntryRequest::setPublishVpc(bool publishVpc) {
  publishVpc_ = publishVpc;
  setParameter(std::string("PublishVpc"), publishVpc ? "true" : "false");
}

std::string CreateVpnPbrRouteEntryRequest::getRegionId() const {
  return regionId_;
}

void CreateVpnPbrRouteEntryRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

bool CreateVpnPbrRouteEntryRequest::getDryRun() const {
  return dryRun_;
}

void CreateVpnPbrRouteEntryRequest::setDryRun(bool dryRun) {
  dryRun_ = dryRun;
  setParameter(std::string("DryRun"), dryRun ? "true" : "false");
}

std::string CreateVpnPbrRouteEntryRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void CreateVpnPbrRouteEntryRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string CreateVpnPbrRouteEntryRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void CreateVpnPbrRouteEntryRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

int CreateVpnPbrRouteEntryRequest::getWeight() const {
  return weight_;
}

void CreateVpnPbrRouteEntryRequest::setWeight(int weight) {
  weight_ = weight;
  setParameter(std::string("Weight"), std::to_string(weight));
}

std::string CreateVpnPbrRouteEntryRequest::getVpnGatewayId() const {
  return vpnGatewayId_;
}

void CreateVpnPbrRouteEntryRequest::setVpnGatewayId(const std::string &vpnGatewayId) {
  vpnGatewayId_ = vpnGatewayId;
  setParameter(std::string("VpnGatewayId"), vpnGatewayId);
}

long CreateVpnPbrRouteEntryRequest::getOwnerId() const {
  return ownerId_;
}

void CreateVpnPbrRouteEntryRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

int CreateVpnPbrRouteEntryRequest::getPriority() const {
  return priority_;
}

void CreateVpnPbrRouteEntryRequest::setPriority(int priority) {
  priority_ = priority;
  setParameter(std::string("Priority"), std::to_string(priority));
}

std::string CreateVpnPbrRouteEntryRequest::getRouteDest() const {
  return routeDest_;
}

void CreateVpnPbrRouteEntryRequest::setRouteDest(const std::string &routeDest) {
  routeDest_ = routeDest;
  setParameter(std::string("RouteDest"), routeDest);
}

std::string CreateVpnPbrRouteEntryRequest::getNextHop() const {
  return nextHop_;
}

void CreateVpnPbrRouteEntryRequest::setNextHop(const std::string &nextHop) {
  nextHop_ = nextHop;
  setParameter(std::string("NextHop"), nextHop);
}

std::string CreateVpnPbrRouteEntryRequest::getOverlayMode() const {
  return overlayMode_;
}

void CreateVpnPbrRouteEntryRequest::setOverlayMode(const std::string &overlayMode) {
  overlayMode_ = overlayMode;
  setParameter(std::string("OverlayMode"), overlayMode);
}

