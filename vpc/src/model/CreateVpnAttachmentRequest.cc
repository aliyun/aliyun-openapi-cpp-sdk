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

#include <alibabacloud/vpc/model/CreateVpnAttachmentRequest.h>

using AlibabaCloud::Vpc::Model::CreateVpnAttachmentRequest;

CreateVpnAttachmentRequest::CreateVpnAttachmentRequest()
    : RpcServiceRequest("vpc", "2016-04-28", "CreateVpnAttachment") {
  setMethod(HttpRequest::Method::Post);
}

CreateVpnAttachmentRequest::~CreateVpnAttachmentRequest() {}

long CreateVpnAttachmentRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void CreateVpnAttachmentRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string CreateVpnAttachmentRequest::getAttachType() const {
  return attachType_;
}

void CreateVpnAttachmentRequest::setAttachType(const std::string &attachType) {
  attachType_ = attachType;
  setParameter(std::string("AttachType"), attachType);
}

std::string CreateVpnAttachmentRequest::getBgpConfig() const {
  return bgpConfig_;
}

void CreateVpnAttachmentRequest::setBgpConfig(const std::string &bgpConfig) {
  bgpConfig_ = bgpConfig;
  setParameter(std::string("BgpConfig"), bgpConfig);
}

bool CreateVpnAttachmentRequest::getRouteTableAssociationEnabled() const {
  return routeTableAssociationEnabled_;
}

void CreateVpnAttachmentRequest::setRouteTableAssociationEnabled(bool routeTableAssociationEnabled) {
  routeTableAssociationEnabled_ = routeTableAssociationEnabled;
  setParameter(std::string("RouteTableAssociationEnabled"), routeTableAssociationEnabled ? "true" : "false");
}

std::string CreateVpnAttachmentRequest::getNetworkType() const {
  return networkType_;
}

void CreateVpnAttachmentRequest::setNetworkType(const std::string &networkType) {
  networkType_ = networkType;
  setParameter(std::string("NetworkType"), networkType);
}

std::string CreateVpnAttachmentRequest::getLocalSubnet() const {
  return localSubnet_;
}

void CreateVpnAttachmentRequest::setLocalSubnet(const std::string &localSubnet) {
  localSubnet_ = localSubnet;
  setParameter(std::string("LocalSubnet"), localSubnet);
}

std::string CreateVpnAttachmentRequest::getResourceGroupId() const {
  return resourceGroupId_;
}

void CreateVpnAttachmentRequest::setResourceGroupId(const std::string &resourceGroupId) {
  resourceGroupId_ = resourceGroupId;
  setParameter(std::string("ResourceGroupId"), resourceGroupId);
}

bool CreateVpnAttachmentRequest::getAutoPublishRouteEnabled() const {
  return autoPublishRouteEnabled_;
}

void CreateVpnAttachmentRequest::setAutoPublishRouteEnabled(bool autoPublishRouteEnabled) {
  autoPublishRouteEnabled_ = autoPublishRouteEnabled;
  setParameter(std::string("AutoPublishRouteEnabled"), autoPublishRouteEnabled ? "true" : "false");
}

bool CreateVpnAttachmentRequest::getRouteTablePropagationEnabled() const {
  return routeTablePropagationEnabled_;
}

void CreateVpnAttachmentRequest::setRouteTablePropagationEnabled(bool routeTablePropagationEnabled) {
  routeTablePropagationEnabled_ = routeTablePropagationEnabled;
  setParameter(std::string("RouteTablePropagationEnabled"), routeTablePropagationEnabled ? "true" : "false");
}

std::string CreateVpnAttachmentRequest::getRemoteSubnet() const {
  return remoteSubnet_;
}

void CreateVpnAttachmentRequest::setRemoteSubnet(const std::string &remoteSubnet) {
  remoteSubnet_ = remoteSubnet;
  setParameter(std::string("RemoteSubnet"), remoteSubnet);
}

bool CreateVpnAttachmentRequest::getEffectImmediately() const {
  return effectImmediately_;
}

void CreateVpnAttachmentRequest::setEffectImmediately(bool effectImmediately) {
  effectImmediately_ = effectImmediately;
  setParameter(std::string("EffectImmediately"), effectImmediately ? "true" : "false");
}

bool CreateVpnAttachmentRequest::getDryRun() const {
  return dryRun_;
}

void CreateVpnAttachmentRequest::setDryRun(bool dryRun) {
  dryRun_ = dryRun;
  setParameter(std::string("DryRun"), dryRun ? "true" : "false");
}

bool CreateVpnAttachmentRequest::getEnableDpd() const {
  return enableDpd_;
}

void CreateVpnAttachmentRequest::setEnableDpd(bool enableDpd) {
  enableDpd_ = enableDpd;
  setParameter(std::string("EnableDpd"), enableDpd ? "true" : "false");
}

std::vector<CreateVpnAttachmentRequest::Tags> CreateVpnAttachmentRequest::getTags() const {
  return tags_;
}

void CreateVpnAttachmentRequest::setTags(const std::vector<CreateVpnAttachmentRequest::Tags> &tags) {
  tags_ = tags;
  for(int dep1 = 0; dep1 != tags.size(); dep1++) {
  auto tagsObj = tags.at(dep1);
  std::string tagsObjStr = std::string("Tags") + "." + std::to_string(dep1 + 1);
    setParameter(tagsObjStr + ".Value", tagsObj.value);
    setParameter(tagsObjStr + ".Key", tagsObj.key);
  }
}

std::string CreateVpnAttachmentRequest::getName() const {
  return name_;
}

void CreateVpnAttachmentRequest::setName(const std::string &name) {
  name_ = name;
  setParameter(std::string("Name"), name);
}

std::string CreateVpnAttachmentRequest::getZoneId() const {
  return zoneId_;
}

void CreateVpnAttachmentRequest::setZoneId(const std::string &zoneId) {
  zoneId_ = zoneId;
  setParameter(std::string("ZoneId"), zoneId);
}

bool CreateVpnAttachmentRequest::getEnableNatTraversal() const {
  return enableNatTraversal_;
}

void CreateVpnAttachmentRequest::setEnableNatTraversal(bool enableNatTraversal) {
  enableNatTraversal_ = enableNatTraversal;
  setParameter(std::string("EnableNatTraversal"), enableNatTraversal ? "true" : "false");
}

std::string CreateVpnAttachmentRequest::getIkeConfig() const {
  return ikeConfig_;
}

void CreateVpnAttachmentRequest::setIkeConfig(const std::string &ikeConfig) {
  ikeConfig_ = ikeConfig;
  setParameter(std::string("IkeConfig"), ikeConfig);
}

bool CreateVpnAttachmentRequest::getAutoConfigRoute() const {
  return autoConfigRoute_;
}

void CreateVpnAttachmentRequest::setAutoConfigRoute(bool autoConfigRoute) {
  autoConfigRoute_ = autoConfigRoute;
  setParameter(std::string("AutoConfigRoute"), autoConfigRoute ? "true" : "false");
}

std::string CreateVpnAttachmentRequest::getCenId() const {
  return cenId_;
}

void CreateVpnAttachmentRequest::setCenId(const std::string &cenId) {
  cenId_ = cenId;
  setParameter(std::string("CenId"), cenId);
}

std::string CreateVpnAttachmentRequest::getClientToken() const {
  return clientToken_;
}

void CreateVpnAttachmentRequest::setClientToken(const std::string &clientToken) {
  clientToken_ = clientToken;
  setParameter(std::string("ClientToken"), clientToken);
}

std::string CreateVpnAttachmentRequest::getIpsecConfig() const {
  return ipsecConfig_;
}

void CreateVpnAttachmentRequest::setIpsecConfig(const std::string &ipsecConfig) {
  ipsecConfig_ = ipsecConfig;
  setParameter(std::string("IpsecConfig"), ipsecConfig);
}

std::string CreateVpnAttachmentRequest::getHealthCheckConfig() const {
  return healthCheckConfig_;
}

void CreateVpnAttachmentRequest::setHealthCheckConfig(const std::string &healthCheckConfig) {
  healthCheckConfig_ = healthCheckConfig;
  setParameter(std::string("HealthCheckConfig"), healthCheckConfig);
}

std::string CreateVpnAttachmentRequest::getCustomerGatewayId() const {
  return customerGatewayId_;
}

void CreateVpnAttachmentRequest::setCustomerGatewayId(const std::string &customerGatewayId) {
  customerGatewayId_ = customerGatewayId;
  setParameter(std::string("CustomerGatewayId"), customerGatewayId);
}

std::string CreateVpnAttachmentRequest::getRemoteCaCert() const {
  return remoteCaCert_;
}

void CreateVpnAttachmentRequest::setRemoteCaCert(const std::string &remoteCaCert) {
  remoteCaCert_ = remoteCaCert;
  setParameter(std::string("RemoteCaCert"), remoteCaCert);
}

bool CreateVpnAttachmentRequest::getEnableTunnelsBgp() const {
  return enableTunnelsBgp_;
}

void CreateVpnAttachmentRequest::setEnableTunnelsBgp(bool enableTunnelsBgp) {
  enableTunnelsBgp_ = enableTunnelsBgp;
  setParameter(std::string("EnableTunnelsBgp"), enableTunnelsBgp ? "true" : "false");
}

std::string CreateVpnAttachmentRequest::getRegionId() const {
  return regionId_;
}

void CreateVpnAttachmentRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string CreateVpnAttachmentRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void CreateVpnAttachmentRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string CreateVpnAttachmentRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void CreateVpnAttachmentRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

std::vector<CreateVpnAttachmentRequest::TunnelOptionsSpecification> CreateVpnAttachmentRequest::getTunnelOptionsSpecification() const {
  return tunnelOptionsSpecification_;
}

void CreateVpnAttachmentRequest::setTunnelOptionsSpecification(const std::vector<CreateVpnAttachmentRequest::TunnelOptionsSpecification> &tunnelOptionsSpecification) {
  tunnelOptionsSpecification_ = tunnelOptionsSpecification;
  for(int dep1 = 0; dep1 != tunnelOptionsSpecification.size(); dep1++) {
    setBodyParameter(std::string("TunnelOptionsSpecification") + "." + std::to_string(dep1 + 1) + ".TunnelIpsecConfig.IpsecPfs", tunnelOptionsSpecification[dep1].tunnelIpsecConfig.ipsecPfs);
    setBodyParameter(std::string("TunnelOptionsSpecification") + "." + std::to_string(dep1 + 1) + ".TunnelIpsecConfig.IpsecLifetime", std::to_string(tunnelOptionsSpecification[dep1].tunnelIpsecConfig.ipsecLifetime));
    setBodyParameter(std::string("TunnelOptionsSpecification") + "." + std::to_string(dep1 + 1) + ".TunnelIpsecConfig.IpsecAuthAlg", tunnelOptionsSpecification[dep1].tunnelIpsecConfig.ipsecAuthAlg);
    setBodyParameter(std::string("TunnelOptionsSpecification") + "." + std::to_string(dep1 + 1) + ".TunnelIpsecConfig.IpsecEncAlg", tunnelOptionsSpecification[dep1].tunnelIpsecConfig.ipsecEncAlg);
    setBodyParameter(std::string("TunnelOptionsSpecification") + "." + std::to_string(dep1 + 1) + ".TunnelBgpConfig.LocalAsn", std::to_string(tunnelOptionsSpecification[dep1].tunnelBgpConfig.localAsn));
    setBodyParameter(std::string("TunnelOptionsSpecification") + "." + std::to_string(dep1 + 1) + ".TunnelBgpConfig.TunnelCidr", tunnelOptionsSpecification[dep1].tunnelBgpConfig.tunnelCidr);
    setBodyParameter(std::string("TunnelOptionsSpecification") + "." + std::to_string(dep1 + 1) + ".TunnelBgpConfig.LocalBgpIp", tunnelOptionsSpecification[dep1].tunnelBgpConfig.localBgpIp);
    setBodyParameter(std::string("TunnelOptionsSpecification") + "." + std::to_string(dep1 + 1) + ".RemoteCaCertificate", tunnelOptionsSpecification[dep1].remoteCaCertificate);
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
    setBodyParameter(std::string("TunnelOptionsSpecification") + "." + std::to_string(dep1 + 1) + ".TunnelIndex", std::to_string(tunnelOptionsSpecification[dep1].tunnelIndex));
    setBodyParameter(std::string("TunnelOptionsSpecification") + "." + std::to_string(dep1 + 1) + ".CustomerGatewayId", tunnelOptionsSpecification[dep1].customerGatewayId);
  }
}

