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

#include <alibabacloud/vpc/model/CreateVpnRouteEntryRequest.h>

using AlibabaCloud::Vpc::Model::CreateVpnRouteEntryRequest;

CreateVpnRouteEntryRequest::CreateVpnRouteEntryRequest()
    : RpcServiceRequest("vpc", "2016-04-28", "CreateVpnRouteEntry") {
  setMethod(HttpRequest::Method::Post);
}

CreateVpnRouteEntryRequest::~CreateVpnRouteEntryRequest() {}

long CreateVpnRouteEntryRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void CreateVpnRouteEntryRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string CreateVpnRouteEntryRequest::getClientToken() const {
  return clientToken_;
}

void CreateVpnRouteEntryRequest::setClientToken(const std::string &clientToken) {
  clientToken_ = clientToken;
  setParameter(std::string("ClientToken"), clientToken);
}

std::string CreateVpnRouteEntryRequest::getDescription() const {
  return description_;
}

void CreateVpnRouteEntryRequest::setDescription(const std::string &description) {
  description_ = description;
  setParameter(std::string("Description"), description);
}

bool CreateVpnRouteEntryRequest::getPublishVpc() const {
  return publishVpc_;
}

void CreateVpnRouteEntryRequest::setPublishVpc(bool publishVpc) {
  publishVpc_ = publishVpc;
  setParameter(std::string("PublishVpc"), publishVpc ? "true" : "false");
}

std::string CreateVpnRouteEntryRequest::getRegionId() const {
  return regionId_;
}

void CreateVpnRouteEntryRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

bool CreateVpnRouteEntryRequest::getDryRun() const {
  return dryRun_;
}

void CreateVpnRouteEntryRequest::setDryRun(bool dryRun) {
  dryRun_ = dryRun;
  setParameter(std::string("DryRun"), dryRun ? "true" : "false");
}

std::string CreateVpnRouteEntryRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void CreateVpnRouteEntryRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string CreateVpnRouteEntryRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void CreateVpnRouteEntryRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

int CreateVpnRouteEntryRequest::getWeight() const {
  return weight_;
}

void CreateVpnRouteEntryRequest::setWeight(int weight) {
  weight_ = weight;
  setParameter(std::string("Weight"), std::to_string(weight));
}

std::string CreateVpnRouteEntryRequest::getVpnGatewayId() const {
  return vpnGatewayId_;
}

void CreateVpnRouteEntryRequest::setVpnGatewayId(const std::string &vpnGatewayId) {
  vpnGatewayId_ = vpnGatewayId;
  setParameter(std::string("VpnGatewayId"), vpnGatewayId);
}

long CreateVpnRouteEntryRequest::getOwnerId() const {
  return ownerId_;
}

void CreateVpnRouteEntryRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

std::string CreateVpnRouteEntryRequest::getRouteDest() const {
  return routeDest_;
}

void CreateVpnRouteEntryRequest::setRouteDest(const std::string &routeDest) {
  routeDest_ = routeDest;
  setParameter(std::string("RouteDest"), routeDest);
}

std::string CreateVpnRouteEntryRequest::getNextHop() const {
  return nextHop_;
}

void CreateVpnRouteEntryRequest::setNextHop(const std::string &nextHop) {
  nextHop_ = nextHop;
  setParameter(std::string("NextHop"), nextHop);
}

std::string CreateVpnRouteEntryRequest::getOverlayMode() const {
  return overlayMode_;
}

void CreateVpnRouteEntryRequest::setOverlayMode(const std::string &overlayMode) {
  overlayMode_ = overlayMode;
  setParameter(std::string("OverlayMode"), overlayMode);
}

