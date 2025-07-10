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

#include <alibabacloud/vpc/model/ModifyVirtualBorderRouterAttributeRequest.h>

using AlibabaCloud::Vpc::Model::ModifyVirtualBorderRouterAttributeRequest;

ModifyVirtualBorderRouterAttributeRequest::ModifyVirtualBorderRouterAttributeRequest()
    : RpcServiceRequest("vpc", "2016-04-28", "ModifyVirtualBorderRouterAttribute") {
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

std::string ModifyVirtualBorderRouterAttributeRequest::getAssociatedPhysicalConnections() const {
  return associatedPhysicalConnections_;
}

void ModifyVirtualBorderRouterAttributeRequest::setAssociatedPhysicalConnections(const std::string &associatedPhysicalConnections) {
  associatedPhysicalConnections_ = associatedPhysicalConnections;
  setParameter(std::string("AssociatedPhysicalConnections"), associatedPhysicalConnections);
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

bool ModifyVirtualBorderRouterAttributeRequest::getEnableIpv6() const {
  return enableIpv6_;
}

void ModifyVirtualBorderRouterAttributeRequest::setEnableIpv6(bool enableIpv6) {
  enableIpv6_ = enableIpv6;
  setParameter(std::string("EnableIpv6"), enableIpv6 ? "true" : "false");
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

std::string ModifyVirtualBorderRouterAttributeRequest::getPeerIpv6GatewayIp() const {
  return peerIpv6GatewayIp_;
}

void ModifyVirtualBorderRouterAttributeRequest::setPeerIpv6GatewayIp(const std::string &peerIpv6GatewayIp) {
  peerIpv6GatewayIp_ = peerIpv6GatewayIp;
  setParameter(std::string("PeerIpv6GatewayIp"), peerIpv6GatewayIp);
}

long ModifyVirtualBorderRouterAttributeRequest::getDetectMultiplier() const {
  return detectMultiplier_;
}

void ModifyVirtualBorderRouterAttributeRequest::setDetectMultiplier(long detectMultiplier) {
  detectMultiplier_ = detectMultiplier;
  setParameter(std::string("DetectMultiplier"), std::to_string(detectMultiplier));
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

long ModifyVirtualBorderRouterAttributeRequest::getMinTxInterval() const {
  return minTxInterval_;
}

void ModifyVirtualBorderRouterAttributeRequest::setMinTxInterval(long minTxInterval) {
  minTxInterval_ = minTxInterval;
  setParameter(std::string("MinTxInterval"), std::to_string(minTxInterval));
}

std::string ModifyVirtualBorderRouterAttributeRequest::getPeeringIpv6SubnetMask() const {
  return peeringIpv6SubnetMask_;
}

void ModifyVirtualBorderRouterAttributeRequest::setPeeringIpv6SubnetMask(const std::string &peeringIpv6SubnetMask) {
  peeringIpv6SubnetMask_ = peeringIpv6SubnetMask;
  setParameter(std::string("PeeringIpv6SubnetMask"), peeringIpv6SubnetMask);
}

std::string ModifyVirtualBorderRouterAttributeRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void ModifyVirtualBorderRouterAttributeRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

int ModifyVirtualBorderRouterAttributeRequest::getBandwidth() const {
  return bandwidth_;
}

void ModifyVirtualBorderRouterAttributeRequest::setBandwidth(int bandwidth) {
  bandwidth_ = bandwidth;
  setParameter(std::string("Bandwidth"), std::to_string(bandwidth));
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

long ModifyVirtualBorderRouterAttributeRequest::getMinRxInterval() const {
  return minRxInterval_;
}

void ModifyVirtualBorderRouterAttributeRequest::setMinRxInterval(long minRxInterval) {
  minRxInterval_ = minRxInterval;
  setParameter(std::string("MinRxInterval"), std::to_string(minRxInterval));
}

bool ModifyVirtualBorderRouterAttributeRequest::getSitelinkEnable() const {
  return sitelinkEnable_;
}

void ModifyVirtualBorderRouterAttributeRequest::setSitelinkEnable(bool sitelinkEnable) {
  sitelinkEnable_ = sitelinkEnable;
  setParameter(std::string("SitelinkEnable"), sitelinkEnable ? "true" : "false");
}

std::string ModifyVirtualBorderRouterAttributeRequest::getLocalIpv6GatewayIp() const {
  return localIpv6GatewayIp_;
}

void ModifyVirtualBorderRouterAttributeRequest::setLocalIpv6GatewayIp(const std::string &localIpv6GatewayIp) {
  localIpv6GatewayIp_ = localIpv6GatewayIp;
  setParameter(std::string("LocalIpv6GatewayIp"), localIpv6GatewayIp);
}

std::string ModifyVirtualBorderRouterAttributeRequest::getName() const {
  return name_;
}

void ModifyVirtualBorderRouterAttributeRequest::setName(const std::string &name) {
  name_ = name;
  setParameter(std::string("Name"), name);
}

