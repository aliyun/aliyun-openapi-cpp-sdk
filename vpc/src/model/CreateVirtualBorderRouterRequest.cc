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

#include <alibabacloud/vpc/model/CreateVirtualBorderRouterRequest.h>

using AlibabaCloud::Vpc::Model::CreateVirtualBorderRouterRequest;

CreateVirtualBorderRouterRequest::CreateVirtualBorderRouterRequest()
    : RpcServiceRequest("vpc", "2016-04-28", "CreateVirtualBorderRouter") {
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

bool CreateVirtualBorderRouterRequest::getEnableIpv6() const {
  return enableIpv6_;
}

void CreateVirtualBorderRouterRequest::setEnableIpv6(bool enableIpv6) {
  enableIpv6_ = enableIpv6;
  setParameter(std::string("EnableIpv6"), enableIpv6 ? "true" : "false");
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

std::string CreateVirtualBorderRouterRequest::getPeerIpv6GatewayIp() const {
  return peerIpv6GatewayIp_;
}

void CreateVirtualBorderRouterRequest::setPeerIpv6GatewayIp(const std::string &peerIpv6GatewayIp) {
  peerIpv6GatewayIp_ = peerIpv6GatewayIp;
  setParameter(std::string("PeerIpv6GatewayIp"), peerIpv6GatewayIp);
}

std::string CreateVirtualBorderRouterRequest::getResourceGroupId() const {
  return resourceGroupId_;
}

void CreateVirtualBorderRouterRequest::setResourceGroupId(const std::string &resourceGroupId) {
  resourceGroupId_ = resourceGroupId;
  setParameter(std::string("ResourceGroupId"), resourceGroupId);
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

std::string CreateVirtualBorderRouterRequest::getPeeringIpv6SubnetMask() const {
  return peeringIpv6SubnetMask_;
}

void CreateVirtualBorderRouterRequest::setPeeringIpv6SubnetMask(const std::string &peeringIpv6SubnetMask) {
  peeringIpv6SubnetMask_ = peeringIpv6SubnetMask;
  setParameter(std::string("PeeringIpv6SubnetMask"), peeringIpv6SubnetMask);
}

std::string CreateVirtualBorderRouterRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void CreateVirtualBorderRouterRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

long CreateVirtualBorderRouterRequest::getBandwidth() const {
  return bandwidth_;
}

void CreateVirtualBorderRouterRequest::setBandwidth(long bandwidth) {
  bandwidth_ = bandwidth;
  setParameter(std::string("Bandwidth"), std::to_string(bandwidth));
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

std::vector<CreateVirtualBorderRouterRequest::Tags> CreateVirtualBorderRouterRequest::getTags() const {
  return tags_;
}

void CreateVirtualBorderRouterRequest::setTags(const std::vector<CreateVirtualBorderRouterRequest::Tags> &tags) {
  tags_ = tags;
  for(int dep1 = 0; dep1 != tags.size(); dep1++) {
  auto tagsObj = tags.at(dep1);
  std::string tagsObjStr = std::string("Tags") + "." + std::to_string(dep1 + 1);
    setParameter(tagsObjStr + ".Value", tagsObj.value);
    setParameter(tagsObjStr + ".Key", tagsObj.key);
  }
}

std::string CreateVirtualBorderRouterRequest::getPhysicalConnectionId() const {
  return physicalConnectionId_;
}

void CreateVirtualBorderRouterRequest::setPhysicalConnectionId(const std::string &physicalConnectionId) {
  physicalConnectionId_ = physicalConnectionId;
  setParameter(std::string("PhysicalConnectionId"), physicalConnectionId);
}

std::string CreateVirtualBorderRouterRequest::getLocalIpv6GatewayIp() const {
  return localIpv6GatewayIp_;
}

void CreateVirtualBorderRouterRequest::setLocalIpv6GatewayIp(const std::string &localIpv6GatewayIp) {
  localIpv6GatewayIp_ = localIpv6GatewayIp;
  setParameter(std::string("LocalIpv6GatewayIp"), localIpv6GatewayIp);
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

