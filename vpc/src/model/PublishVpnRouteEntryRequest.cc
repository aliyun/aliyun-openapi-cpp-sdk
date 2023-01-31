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

#include <alibabacloud/vpc/model/PublishVpnRouteEntryRequest.h>

using AlibabaCloud::Vpc::Model::PublishVpnRouteEntryRequest;

PublishVpnRouteEntryRequest::PublishVpnRouteEntryRequest()
    : RpcServiceRequest("vpc", "2016-04-28", "PublishVpnRouteEntry") {
  setMethod(HttpRequest::Method::Post);
}

PublishVpnRouteEntryRequest::~PublishVpnRouteEntryRequest() {}

long PublishVpnRouteEntryRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void PublishVpnRouteEntryRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string PublishVpnRouteEntryRequest::getClientToken() const {
  return clientToken_;
}

void PublishVpnRouteEntryRequest::setClientToken(const std::string &clientToken) {
  clientToken_ = clientToken;
  setParameter(std::string("ClientToken"), clientToken);
}

std::string PublishVpnRouteEntryRequest::getRouteType() const {
  return routeType_;
}

void PublishVpnRouteEntryRequest::setRouteType(const std::string &routeType) {
  routeType_ = routeType;
  setParameter(std::string("RouteType"), routeType);
}

bool PublishVpnRouteEntryRequest::getPublishVpc() const {
  return publishVpc_;
}

void PublishVpnRouteEntryRequest::setPublishVpc(bool publishVpc) {
  publishVpc_ = publishVpc;
  setParameter(std::string("PublishVpc"), publishVpc ? "true" : "false");
}

std::string PublishVpnRouteEntryRequest::getRegionId() const {
  return regionId_;
}

void PublishVpnRouteEntryRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string PublishVpnRouteEntryRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void PublishVpnRouteEntryRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string PublishVpnRouteEntryRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void PublishVpnRouteEntryRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

std::string PublishVpnRouteEntryRequest::getVpnGatewayId() const {
  return vpnGatewayId_;
}

void PublishVpnRouteEntryRequest::setVpnGatewayId(const std::string &vpnGatewayId) {
  vpnGatewayId_ = vpnGatewayId;
  setParameter(std::string("VpnGatewayId"), vpnGatewayId);
}

long PublishVpnRouteEntryRequest::getOwnerId() const {
  return ownerId_;
}

void PublishVpnRouteEntryRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

std::string PublishVpnRouteEntryRequest::getRouteDest() const {
  return routeDest_;
}

void PublishVpnRouteEntryRequest::setRouteDest(const std::string &routeDest) {
  routeDest_ = routeDest;
  setParameter(std::string("RouteDest"), routeDest);
}

std::string PublishVpnRouteEntryRequest::getNextHop() const {
  return nextHop_;
}

void PublishVpnRouteEntryRequest::setNextHop(const std::string &nextHop) {
  nextHop_ = nextHop;
  setParameter(std::string("NextHop"), nextHop);
}

