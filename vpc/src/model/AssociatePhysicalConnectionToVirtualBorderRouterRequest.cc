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

#include <alibabacloud/vpc/model/AssociatePhysicalConnectionToVirtualBorderRouterRequest.h>

using AlibabaCloud::Vpc::Model::AssociatePhysicalConnectionToVirtualBorderRouterRequest;

AssociatePhysicalConnectionToVirtualBorderRouterRequest::AssociatePhysicalConnectionToVirtualBorderRouterRequest()
    : RpcServiceRequest("vpc", "2016-04-28", "AssociatePhysicalConnectionToVirtualBorderRouter") {
  setMethod(HttpRequest::Method::Post);
}

AssociatePhysicalConnectionToVirtualBorderRouterRequest::~AssociatePhysicalConnectionToVirtualBorderRouterRequest() {}

long AssociatePhysicalConnectionToVirtualBorderRouterRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void AssociatePhysicalConnectionToVirtualBorderRouterRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string AssociatePhysicalConnectionToVirtualBorderRouterRequest::getCircuitCode() const {
  return circuitCode_;
}

void AssociatePhysicalConnectionToVirtualBorderRouterRequest::setCircuitCode(const std::string &circuitCode) {
  circuitCode_ = circuitCode;
  setParameter(std::string("CircuitCode"), circuitCode);
}

std::string AssociatePhysicalConnectionToVirtualBorderRouterRequest::getVlanId() const {
  return vlanId_;
}

void AssociatePhysicalConnectionToVirtualBorderRouterRequest::setVlanId(const std::string &vlanId) {
  vlanId_ = vlanId;
  setParameter(std::string("VlanId"), vlanId);
}

std::string AssociatePhysicalConnectionToVirtualBorderRouterRequest::getClientToken() const {
  return clientToken_;
}

void AssociatePhysicalConnectionToVirtualBorderRouterRequest::setClientToken(const std::string &clientToken) {
  clientToken_ = clientToken;
  setParameter(std::string("ClientToken"), clientToken);
}

std::string AssociatePhysicalConnectionToVirtualBorderRouterRequest::getEnableIpv6() const {
  return enableIpv6_;
}

void AssociatePhysicalConnectionToVirtualBorderRouterRequest::setEnableIpv6(const std::string &enableIpv6) {
  enableIpv6_ = enableIpv6;
  setParameter(std::string("EnableIpv6"), enableIpv6);
}

std::string AssociatePhysicalConnectionToVirtualBorderRouterRequest::getVbrId() const {
  return vbrId_;
}

void AssociatePhysicalConnectionToVirtualBorderRouterRequest::setVbrId(const std::string &vbrId) {
  vbrId_ = vbrId;
  setParameter(std::string("VbrId"), vbrId);
}

std::string AssociatePhysicalConnectionToVirtualBorderRouterRequest::getPeerGatewayIp() const {
  return peerGatewayIp_;
}

void AssociatePhysicalConnectionToVirtualBorderRouterRequest::setPeerGatewayIp(const std::string &peerGatewayIp) {
  peerGatewayIp_ = peerGatewayIp;
  setParameter(std::string("PeerGatewayIp"), peerGatewayIp);
}

std::string AssociatePhysicalConnectionToVirtualBorderRouterRequest::getPeerIpv6GatewayIp() const {
  return peerIpv6GatewayIp_;
}

void AssociatePhysicalConnectionToVirtualBorderRouterRequest::setPeerIpv6GatewayIp(const std::string &peerIpv6GatewayIp) {
  peerIpv6GatewayIp_ = peerIpv6GatewayIp;
  setParameter(std::string("PeerIpv6GatewayIp"), peerIpv6GatewayIp);
}

std::string AssociatePhysicalConnectionToVirtualBorderRouterRequest::getPeeringSubnetMask() const {
  return peeringSubnetMask_;
}

void AssociatePhysicalConnectionToVirtualBorderRouterRequest::setPeeringSubnetMask(const std::string &peeringSubnetMask) {
  peeringSubnetMask_ = peeringSubnetMask;
  setParameter(std::string("PeeringSubnetMask"), peeringSubnetMask);
}

std::string AssociatePhysicalConnectionToVirtualBorderRouterRequest::getRegionId() const {
  return regionId_;
}

void AssociatePhysicalConnectionToVirtualBorderRouterRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string AssociatePhysicalConnectionToVirtualBorderRouterRequest::getLocalGatewayIp() const {
  return localGatewayIp_;
}

void AssociatePhysicalConnectionToVirtualBorderRouterRequest::setLocalGatewayIp(const std::string &localGatewayIp) {
  localGatewayIp_ = localGatewayIp;
  setParameter(std::string("LocalGatewayIp"), localGatewayIp);
}

std::string AssociatePhysicalConnectionToVirtualBorderRouterRequest::getPeeringIpv6SubnetMask() const {
  return peeringIpv6SubnetMask_;
}

void AssociatePhysicalConnectionToVirtualBorderRouterRequest::setPeeringIpv6SubnetMask(const std::string &peeringIpv6SubnetMask) {
  peeringIpv6SubnetMask_ = peeringIpv6SubnetMask;
  setParameter(std::string("PeeringIpv6SubnetMask"), peeringIpv6SubnetMask);
}

std::string AssociatePhysicalConnectionToVirtualBorderRouterRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void AssociatePhysicalConnectionToVirtualBorderRouterRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string AssociatePhysicalConnectionToVirtualBorderRouterRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void AssociatePhysicalConnectionToVirtualBorderRouterRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

long AssociatePhysicalConnectionToVirtualBorderRouterRequest::getOwnerId() const {
  return ownerId_;
}

void AssociatePhysicalConnectionToVirtualBorderRouterRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

std::string AssociatePhysicalConnectionToVirtualBorderRouterRequest::getPhysicalConnectionId() const {
  return physicalConnectionId_;
}

void AssociatePhysicalConnectionToVirtualBorderRouterRequest::setPhysicalConnectionId(const std::string &physicalConnectionId) {
  physicalConnectionId_ = physicalConnectionId;
  setParameter(std::string("PhysicalConnectionId"), physicalConnectionId);
}

std::string AssociatePhysicalConnectionToVirtualBorderRouterRequest::getLocalIpv6GatewayIp() const {
  return localIpv6GatewayIp_;
}

void AssociatePhysicalConnectionToVirtualBorderRouterRequest::setLocalIpv6GatewayIp(const std::string &localIpv6GatewayIp) {
  localIpv6GatewayIp_ = localIpv6GatewayIp;
  setParameter(std::string("LocalIpv6GatewayIp"), localIpv6GatewayIp);
}

