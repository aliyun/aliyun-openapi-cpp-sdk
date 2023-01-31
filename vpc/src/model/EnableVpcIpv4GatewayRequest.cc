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

#include <alibabacloud/vpc/model/EnableVpcIpv4GatewayRequest.h>

using AlibabaCloud::Vpc::Model::EnableVpcIpv4GatewayRequest;

EnableVpcIpv4GatewayRequest::EnableVpcIpv4GatewayRequest()
    : RpcServiceRequest("vpc", "2016-04-28", "EnableVpcIpv4Gateway") {
  setMethod(HttpRequest::Method::Post);
}

EnableVpcIpv4GatewayRequest::~EnableVpcIpv4GatewayRequest() {}

long EnableVpcIpv4GatewayRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void EnableVpcIpv4GatewayRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string EnableVpcIpv4GatewayRequest::getClientToken() const {
  return clientToken_;
}

void EnableVpcIpv4GatewayRequest::setClientToken(const std::string &clientToken) {
  clientToken_ = clientToken;
  setParameter(std::string("ClientToken"), clientToken);
}

std::string EnableVpcIpv4GatewayRequest::getRegionId() const {
  return regionId_;
}

void EnableVpcIpv4GatewayRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string EnableVpcIpv4GatewayRequest::getIpv4GatewayId() const {
  return ipv4GatewayId_;
}

void EnableVpcIpv4GatewayRequest::setIpv4GatewayId(const std::string &ipv4GatewayId) {
  ipv4GatewayId_ = ipv4GatewayId;
  setParameter(std::string("Ipv4GatewayId"), ipv4GatewayId);
}

std::vector<std::string> EnableVpcIpv4GatewayRequest::getRouteTableList() const {
  return routeTableList_;
}

void EnableVpcIpv4GatewayRequest::setRouteTableList(const std::vector<std::string> &routeTableList) {
  routeTableList_ = routeTableList;
}

bool EnableVpcIpv4GatewayRequest::getDryRun() const {
  return dryRun_;
}

void EnableVpcIpv4GatewayRequest::setDryRun(bool dryRun) {
  dryRun_ = dryRun;
  setParameter(std::string("DryRun"), dryRun ? "true" : "false");
}

std::string EnableVpcIpv4GatewayRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void EnableVpcIpv4GatewayRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string EnableVpcIpv4GatewayRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void EnableVpcIpv4GatewayRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

long EnableVpcIpv4GatewayRequest::getOwnerId() const {
  return ownerId_;
}

void EnableVpcIpv4GatewayRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

