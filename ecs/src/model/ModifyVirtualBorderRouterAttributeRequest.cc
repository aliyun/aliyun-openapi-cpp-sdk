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

#include <alibabacloud/ecs/model/ModifyVirtualBorderRouterAttributeRequest.h>

using AlibabaCloud::Ecs::Model::ModifyVirtualBorderRouterAttributeRequest;

ModifyVirtualBorderRouterAttributeRequest::ModifyVirtualBorderRouterAttributeRequest()
    : RpcServiceRequest("ecs", "2014-05-26", "ModifyVirtualBorderRouterAttribute") {
  setMethod(HttpRequest::Method::Post);
}

ModifyVirtualBorderRouterAttributeRequest::~ModifyVirtualBorderRouterAttributeRequest() {}

long ModifyVirtualBorderRouterAttributeRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void ModifyVirtualBorderRouterAttributeRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string ModifyVirtualBorderRouterAttributeRequest::getCircuitCode() const {
  return circuitCode_;
}

void ModifyVirtualBorderRouterAttributeRequest::setCircuitCode(const std::string &circuitCode) {
  circuitCode_ = circuitCode;
  setParameter(std::string("CircuitCode"), circuitCode);
}

int ModifyVirtualBorderRouterAttributeRequest::getVlanId() const {
  return vlanId_;
}

void ModifyVirtualBorderRouterAttributeRequest::setVlanId(int vlanId) {
  vlanId_ = vlanId;
  setParameter(std::string("VlanId"), std::to_string(vlanId));
}

std::string ModifyVirtualBorderRouterAttributeRequest::getClientToken() const {
  return clientToken_;
}

void ModifyVirtualBorderRouterAttributeRequest::setClientToken(const std::string &clientToken) {
  clientToken_ = clientToken;
  setParameter(std::string("ClientToken"), clientToken);
}

std::string ModifyVirtualBorderRouterAttributeRequest::getDescription() const {
  return description_;
}

void ModifyVirtualBorderRouterAttributeRequest::setDescription(const std::string &description) {
  description_ = description;
  setParameter(std::string("Description"), description);
}

std::string ModifyVirtualBorderRouterAttributeRequest::getVbrId() const {
  return vbrId_;
}

void ModifyVirtualBorderRouterAttributeRequest::setVbrId(const std::string &vbrId) {
  vbrId_ = vbrId;
  setParameter(std::string("VbrId"), vbrId);
}

std::string ModifyVirtualBorderRouterAttributeRequest::getPeerGatewayIp() const {
  return peerGatewayIp_;
}

void ModifyVirtualBorderRouterAttributeRequest::setPeerGatewayIp(const std::string &peerGatewayIp) {
  peerGatewayIp_ = peerGatewayIp;
  setParameter(std::string("PeerGatewayIp"), peerGatewayIp);
}

std::string ModifyVirtualBorderRouterAttributeRequest::getPeeringSubnetMask() const {
  return peeringSubnetMask_;
}

void ModifyVirtualBorderRouterAttributeRequest::setPeeringSubnetMask(const std::string &peeringSubnetMask) {
  peeringSubnetMask_ = peeringSubnetMask;
  setParameter(std::string("PeeringSubnetMask"), peeringSubnetMask);
}

std::string ModifyVirtualBorderRouterAttributeRequest::getRegionId() const {
  return regionId_;
}

void ModifyVirtualBorderRouterAttributeRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string ModifyVirtualBorderRouterAttributeRequest::getLocalGatewayIp() const {
  return localGatewayIp_;
}

void ModifyVirtualBorderRouterAttributeRequest::setLocalGatewayIp(const std::string &localGatewayIp) {
  localGatewayIp_ = localGatewayIp;
  setParameter(std::string("LocalGatewayIp"), localGatewayIp);
}

std::string ModifyVirtualBorderRouterAttributeRequest::getUserCidr() const {
  return userCidr_;
}

void ModifyVirtualBorderRouterAttributeRequest::setUserCidr(const std::string &userCidr) {
  userCidr_ = userCidr;
  setParameter(std::string("UserCidr"), userCidr);
}

std::string ModifyVirtualBorderRouterAttributeRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void ModifyVirtualBorderRouterAttributeRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string ModifyVirtualBorderRouterAttributeRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void ModifyVirtualBorderRouterAttributeRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

long ModifyVirtualBorderRouterAttributeRequest::getOwnerId() const {
  return ownerId_;
}

void ModifyVirtualBorderRouterAttributeRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

std::string ModifyVirtualBorderRouterAttributeRequest::getName() const {
  return name_;
}

void ModifyVirtualBorderRouterAttributeRequest::setName(const std::string &name) {
  name_ = name;
  setParameter(std::string("Name"), name);
}

