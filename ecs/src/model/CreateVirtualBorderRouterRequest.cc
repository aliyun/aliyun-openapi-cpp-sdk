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

#include <alibabacloud/ecs/model/CreateVirtualBorderRouterRequest.h>

using AlibabaCloud::Ecs::Model::CreateVirtualBorderRouterRequest;

CreateVirtualBorderRouterRequest::CreateVirtualBorderRouterRequest()
    : RpcServiceRequest("ecs", "2014-05-26", "CreateVirtualBorderRouter") {
  setMethod(HttpRequest::Method::Post);
}

CreateVirtualBorderRouterRequest::~CreateVirtualBorderRouterRequest() {}

long CreateVirtualBorderRouterRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void CreateVirtualBorderRouterRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string CreateVirtualBorderRouterRequest::getCircuitCode() const {
  return circuitCode_;
}

void CreateVirtualBorderRouterRequest::setCircuitCode(const std::string &circuitCode) {
  circuitCode_ = circuitCode;
  setParameter(std::string("CircuitCode"), circuitCode);
}

int CreateVirtualBorderRouterRequest::getVlanId() const {
  return vlanId_;
}

void CreateVirtualBorderRouterRequest::setVlanId(int vlanId) {
  vlanId_ = vlanId;
  setParameter(std::string("VlanId"), std::to_string(vlanId));
}

std::string CreateVirtualBorderRouterRequest::getClientToken() const {
  return clientToken_;
}

void CreateVirtualBorderRouterRequest::setClientToken(const std::string &clientToken) {
  clientToken_ = clientToken;
  setParameter(std::string("ClientToken"), clientToken);
}

std::string CreateVirtualBorderRouterRequest::getDescription() const {
  return description_;
}

void CreateVirtualBorderRouterRequest::setDescription(const std::string &description) {
  description_ = description;
  setParameter(std::string("Description"), description);
}

std::string CreateVirtualBorderRouterRequest::getPeerGatewayIp() const {
  return peerGatewayIp_;
}

void CreateVirtualBorderRouterRequest::setPeerGatewayIp(const std::string &peerGatewayIp) {
  peerGatewayIp_ = peerGatewayIp;
  setParameter(std::string("PeerGatewayIp"), peerGatewayIp);
}

std::string CreateVirtualBorderRouterRequest::getPeeringSubnetMask() const {
  return peeringSubnetMask_;
}

void CreateVirtualBorderRouterRequest::setPeeringSubnetMask(const std::string &peeringSubnetMask) {
  peeringSubnetMask_ = peeringSubnetMask;
  setParameter(std::string("PeeringSubnetMask"), peeringSubnetMask);
}

std::string CreateVirtualBorderRouterRequest::getRegionId() const {
  return regionId_;
}

void CreateVirtualBorderRouterRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string CreateVirtualBorderRouterRequest::getLocalGatewayIp() const {
  return localGatewayIp_;
}

void CreateVirtualBorderRouterRequest::setLocalGatewayIp(const std::string &localGatewayIp) {
  localGatewayIp_ = localGatewayIp;
  setParameter(std::string("LocalGatewayIp"), localGatewayIp);
}

std::string CreateVirtualBorderRouterRequest::getUserCidr() const {
  return userCidr_;
}

void CreateVirtualBorderRouterRequest::setUserCidr(const std::string &userCidr) {
  userCidr_ = userCidr;
  setParameter(std::string("UserCidr"), userCidr);
}

std::string CreateVirtualBorderRouterRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void CreateVirtualBorderRouterRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string CreateVirtualBorderRouterRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void CreateVirtualBorderRouterRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

long CreateVirtualBorderRouterRequest::getOwnerId() const {
  return ownerId_;
}

void CreateVirtualBorderRouterRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

std::string CreateVirtualBorderRouterRequest::getPhysicalConnectionId() const {
  return physicalConnectionId_;
}

void CreateVirtualBorderRouterRequest::setPhysicalConnectionId(const std::string &physicalConnectionId) {
  physicalConnectionId_ = physicalConnectionId;
  setParameter(std::string("PhysicalConnectionId"), physicalConnectionId);
}

std::string CreateVirtualBorderRouterRequest::getName() const {
  return name_;
}

void CreateVirtualBorderRouterRequest::setName(const std::string &name) {
  name_ = name;
  setParameter(std::string("Name"), name);
}

long CreateVirtualBorderRouterRequest::getVbrOwnerId() const {
  return vbrOwnerId_;
}

void CreateVirtualBorderRouterRequest::setVbrOwnerId(long vbrOwnerId) {
  vbrOwnerId_ = vbrOwnerId;
  setParameter(std::string("VbrOwnerId"), std::to_string(vbrOwnerId));
}

