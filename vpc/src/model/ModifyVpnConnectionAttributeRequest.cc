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

#include <alibabacloud/vpc/model/ModifyVpnConnectionAttributeRequest.h>

using AlibabaCloud::Vpc::Model::ModifyVpnConnectionAttributeRequest;

ModifyVpnConnectionAttributeRequest::ModifyVpnConnectionAttributeRequest()
    : RpcServiceRequest("vpc", "2016-04-28", "ModifyVpnConnectionAttribute") {
  setMethod(HttpRequest::Method::Post);
}

ModifyVpnConnectionAttributeRequest::~ModifyVpnConnectionAttributeRequest() {}

std::string ModifyVpnConnectionAttributeRequest::getIkeConfig() const {
  return ikeConfig_;
}

void ModifyVpnConnectionAttributeRequest::setIkeConfig(const std::string &ikeConfig) {
  ikeConfig_ = ikeConfig;
  setParameter(std::string("IkeConfig"), ikeConfig);
}

long ModifyVpnConnectionAttributeRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void ModifyVpnConnectionAttributeRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

bool ModifyVpnConnectionAttributeRequest::getAutoConfigRoute() const {
  return autoConfigRoute_;
}

void ModifyVpnConnectionAttributeRequest::setAutoConfigRoute(bool autoConfigRoute) {
  autoConfigRoute_ = autoConfigRoute;
  setParameter(std::string("AutoConfigRoute"), autoConfigRoute ? "true" : "false");
}

std::string ModifyVpnConnectionAttributeRequest::getClientToken() const {
  return clientToken_;
}

void ModifyVpnConnectionAttributeRequest::setClientToken(const std::string &clientToken) {
  clientToken_ = clientToken;
  setParameter(std::string("ClientToken"), clientToken);
}

std::string ModifyVpnConnectionAttributeRequest::getIpsecConfig() const {
  return ipsecConfig_;
}

void ModifyVpnConnectionAttributeRequest::setIpsecConfig(const std::string &ipsecConfig) {
  ipsecConfig_ = ipsecConfig;
  setParameter(std::string("IpsecConfig"), ipsecConfig);
}

std::string ModifyVpnConnectionAttributeRequest::getBgpConfig() const {
  return bgpConfig_;
}

void ModifyVpnConnectionAttributeRequest::setBgpConfig(const std::string &bgpConfig) {
  bgpConfig_ = bgpConfig;
  setParameter(std::string("BgpConfig"), bgpConfig);
}

std::string ModifyVpnConnectionAttributeRequest::getHealthCheckConfig() const {
  return healthCheckConfig_;
}

void ModifyVpnConnectionAttributeRequest::setHealthCheckConfig(const std::string &healthCheckConfig) {
  healthCheckConfig_ = healthCheckConfig;
  setParameter(std::string("HealthCheckConfig"), healthCheckConfig);
}

std::string ModifyVpnConnectionAttributeRequest::getLocalSubnet() const {
  return localSubnet_;
}

void ModifyVpnConnectionAttributeRequest::setLocalSubnet(const std::string &localSubnet) {
  localSubnet_ = localSubnet;
  setParameter(std::string("LocalSubnet"), localSubnet);
}

bool ModifyVpnConnectionAttributeRequest::getEnableTunnelsBgp() const {
  return enableTunnelsBgp_;
}

void ModifyVpnConnectionAttributeRequest::setEnableTunnelsBgp(bool enableTunnelsBgp) {
  enableTunnelsBgp_ = enableTunnelsBgp;
  setParameter(std::string("EnableTunnelsBgp"), enableTunnelsBgp ? "true" : "false");
}

std::string ModifyVpnConnectionAttributeRequest::getRegionId() const {
  return regionId_;
}

void ModifyVpnConnectionAttributeRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string ModifyVpnConnectionAttributeRequest::getRemoteSubnet() const {
  return remoteSubnet_;
}

void ModifyVpnConnectionAttributeRequest::setRemoteSubnet(const std::string &remoteSubnet) {
  remoteSubnet_ = remoteSubnet;
  setParameter(std::string("RemoteSubnet"), remoteSubnet);
}

bool ModifyVpnConnectionAttributeRequest::getEffectImmediately() const {
  return effectImmediately_;
}

void ModifyVpnConnectionAttributeRequest::setEffectImmediately(bool effectImmediately) {
  effectImmediately_ = effectImmediately;
  setParameter(std::string("EffectImmediately"), effectImmediately ? "true" : "false");
}

std::string ModifyVpnConnectionAttributeRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void ModifyVpnConnectionAttributeRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string ModifyVpnConnectionAttributeRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void ModifyVpnConnectionAttributeRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

long ModifyVpnConnectionAttributeRequest::getOwnerId() const {
  return ownerId_;
}

void ModifyVpnConnectionAttributeRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

bool ModifyVpnConnectionAttributeRequest::getEnableDpd() const {
  return enableDpd_;
}

void ModifyVpnConnectionAttributeRequest::setEnableDpd(bool enableDpd) {
  enableDpd_ = enableDpd;
  setParameter(std::string("EnableDpd"), enableDpd ? "true" : "false");
}

std::vector<ModifyVpnConnectionAttributeRequest::TunnelOptionsSpecification> ModifyVpnConnectionAttributeRequest::getTunnelOptionsSpecification() const {
  return tunnelOptionsSpecification_;
}

void ModifyVpnConnectionAttributeRequest::setTunnelOptionsSpecification(const std::vector<ModifyVpnConnectionAttributeRequest::TunnelOptionsSpecification> &tunnelOptionsSpecification) {
  tunnelOptionsSpecification_ = tunnelOptionsSpecification;
  for(int dep1 = 0; dep1 != tunnelOptionsSpecification.size(); dep1++) {
    setBodyParameter(std::string("TunnelOptionsSpecification") + "." + std::to_string(dep1 + 1) + ".TunnelIpsecConfig.IpsecPfs", tunnelOptionsSpecification[dep1].tunnelIpsecConfig.ipsecPfs);
    setBodyParameter(std::string("TunnelOptionsSpecification") + "." + std::to_string(dep1 + 1) + ".TunnelIpsecConfig.IpsecLifetime", std::to_string(tunnelOptionsSpecification[dep1].tunnelIpsecConfig.ipsecLifetime));
    setBodyParameter(std::string("TunnelOptionsSpecification") + "." + std::to_string(dep1 + 1) + ".TunnelIpsecConfig.IpsecAuthAlg", tunnelOptionsSpecification[dep1].tunnelIpsecConfig.ipsecAuthAlg);
    setBodyParameter(std::string("TunnelOptionsSpecification") + "." + std::to_string(dep1 + 1) + ".TunnelIpsecConfig.IpsecEncAlg", tunnelOptionsSpecification[dep1].tunnelIpsecConfig.ipsecEncAlg);
    setBodyParameter(std::string("TunnelOptionsSpecification") + "." + std::to_string(dep1 + 1) + ".Role", tunnelOptionsSpecification[dep1].role);
    setBodyParameter(std::string("TunnelOptionsSpecification") + "." + std::to_string(dep1 + 1) + ".TunnelBgpConfig.LocalAsn", std::to_string(tunnelOptionsSpecification[dep1].tunnelBgpConfig.localAsn));
    setBodyParameter(std::string("TunnelOptionsSpecification") + "." + std::to_string(dep1 + 1) + ".TunnelBgpConfig.TunnelCidr", tunnelOptionsSpecification[dep1].tunnelBgpConfig.tunnelCidr);
    setBodyParameter(std::string("TunnelOptionsSpecification") + "." + std::to_string(dep1 + 1) + ".TunnelBgpConfig.LocalBgpIp", tunnelOptionsSpecification[dep1].tunnelBgpConfig.localBgpIp);
    setBodyParameter(std::string("TunnelOptionsSpecification") + "." + std::to_string(dep1 + 1) + ".RemoteCaCertificate", tunnelOptionsSpecification[dep1].remoteCaCertificate);
    setBodyParameter(std::string("TunnelOptionsSpecification") + "." + std::to_string(dep1 + 1) + ".TunnelId", tunnelOptionsSpecification[dep1].tunnelId);
    setBodyParameter(std::string("TunnelOptionsSpecification") + "." + std::to_string(dep1 + 1) + ".TunnelIkeConfig.IkeVersion", tunnelOptionsSpecification[dep1].tunnelIkeConfig.ikeVersion);
    setBodyParameter(std::string("TunnelOptionsSpecification") + "." + std::to_string(dep1 + 1) + ".TunnelIkeConfig.IkeMode", tunnelOptionsSpecification[dep1].tunnelIkeConfig.ikeMode);
    setBodyParameter(std::string("TunnelOptionsSpecification") + "." + std::to_string(dep1 + 1) + ".TunnelIkeConfig.IkeAuthAlg", tunnelOptionsSpecification[dep1].tunnelIkeConfig.ikeAuthAlg);
    setBodyParameter(std::string("TunnelOptionsSpecification") + "." + std::to_string(dep1 + 1) + ".TunnelIkeConfig.Psk", tunnelOptionsSpecification[dep1].tunnelIkeConfig.psk);
    setBodyParameter(std::string("TunnelOptionsSpecification") + "." + std::to_string(dep1 + 1) + ".TunnelIkeConfig.IkePfs", tunnelOptionsSpecification[dep1].tunnelIkeConfig.ikePfs);
    setBodyParameter(std::string("TunnelOptionsSpecification") + "." + std::to_string(dep1 + 1) + ".TunnelIkeConfig.IkeLifetime", std::to_string(tunnelOptionsSpecification[dep1].tunnelIkeConfig.ikeLifetime));
    setBodyParameter(std::string("TunnelOptionsSpecification") + "." + std::to_string(dep1 + 1) + ".TunnelIkeConfig.LocalId", tunnelOptionsSpecification[dep1].tunnelIkeConfig.localId);
    setBodyParameter(std::string("TunnelOptionsSpecification") + "." + std::to_string(dep1 + 1) + ".TunnelIkeConfig.IkeEncAlg", tunnelOptionsSpecification[dep1].tunnelIkeConfig.ikeEncAlg);
    setBodyParameter(std::string("TunnelOptionsSpecification") + "." + std::to_string(dep1 + 1) + ".TunnelIkeConfig.RemoteId", tunnelOptionsSpecification[dep1].tunnelIkeConfig.remoteId);
    setBodyParameter(std::string("TunnelOptionsSpecification") + "." + std::to_string(dep1 + 1) + ".EnableNatTraversal", tunnelOptionsSpecification[dep1].enableNatTraversal ? "true" : "false");
    setBodyParameter(std::string("TunnelOptionsSpecification") + "." + std::to_string(dep1 + 1) + ".EnableDpd", tunnelOptionsSpecification[dep1].enableDpd ? "true" : "false");
    setBodyParameter(std::string("TunnelOptionsSpecification") + "." + std::to_string(dep1 + 1) + ".CustomerGatewayId", tunnelOptionsSpecification[dep1].customerGatewayId);
  }
}

std::string ModifyVpnConnectionAttributeRequest::getRemoteCaCertificate() const {
  return remoteCaCertificate_;
}

void ModifyVpnConnectionAttributeRequest::setRemoteCaCertificate(const std::string &remoteCaCertificate) {
  remoteCaCertificate_ = remoteCaCertificate;
  setParameter(std::string("RemoteCaCertificate"), remoteCaCertificate);
}

std::string ModifyVpnConnectionAttributeRequest::getVpnConnectionId() const {
  return vpnConnectionId_;
}

void ModifyVpnConnectionAttributeRequest::setVpnConnectionId(const std::string &vpnConnectionId) {
  vpnConnectionId_ = vpnConnectionId;
  setParameter(std::string("VpnConnectionId"), vpnConnectionId);
}

std::string ModifyVpnConnectionAttributeRequest::getName() const {
  return name_;
}

void ModifyVpnConnectionAttributeRequest::setName(const std::string &name) {
  name_ = name;
  setParameter(std::string("Name"), name);
}

bool ModifyVpnConnectionAttributeRequest::getEnableNatTraversal() const {
  return enableNatTraversal_;
}

void ModifyVpnConnectionAttributeRequest::setEnableNatTraversal(bool enableNatTraversal) {
  enableNatTraversal_ = enableNatTraversal;
  setParameter(std::string("EnableNatTraversal"), enableNatTraversal ? "true" : "false");
}

