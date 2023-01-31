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

#include <alibabacloud/vpc/model/ModifyVpnAttachmentAttributeRequest.h>

using AlibabaCloud::Vpc::Model::ModifyVpnAttachmentAttributeRequest;

ModifyVpnAttachmentAttributeRequest::ModifyVpnAttachmentAttributeRequest()
    : RpcServiceRequest("vpc", "2016-04-28", "ModifyVpnAttachmentAttribute") {
  setMethod(HttpRequest::Method::Post);
}

ModifyVpnAttachmentAttributeRequest::~ModifyVpnAttachmentAttributeRequest() {}

std::string ModifyVpnAttachmentAttributeRequest::getIkeConfig() const {
  return ikeConfig_;
}

void ModifyVpnAttachmentAttributeRequest::setIkeConfig(const std::string &ikeConfig) {
  ikeConfig_ = ikeConfig;
  setParameter(std::string("IkeConfig"), ikeConfig);
}

bool ModifyVpnAttachmentAttributeRequest::getAutoConfigRoute() const {
  return autoConfigRoute_;
}

void ModifyVpnAttachmentAttributeRequest::setAutoConfigRoute(bool autoConfigRoute) {
  autoConfigRoute_ = autoConfigRoute;
  setParameter(std::string("AutoConfigRoute"), autoConfigRoute ? "true" : "false");
}

long ModifyVpnAttachmentAttributeRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void ModifyVpnAttachmentAttributeRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string ModifyVpnAttachmentAttributeRequest::getClientToken() const {
  return clientToken_;
}

void ModifyVpnAttachmentAttributeRequest::setClientToken(const std::string &clientToken) {
  clientToken_ = clientToken;
  setParameter(std::string("ClientToken"), clientToken);
}

std::string ModifyVpnAttachmentAttributeRequest::getIpsecConfig() const {
  return ipsecConfig_;
}

void ModifyVpnAttachmentAttributeRequest::setIpsecConfig(const std::string &ipsecConfig) {
  ipsecConfig_ = ipsecConfig;
  setParameter(std::string("IpsecConfig"), ipsecConfig);
}

std::string ModifyVpnAttachmentAttributeRequest::getBgpConfig() const {
  return bgpConfig_;
}

void ModifyVpnAttachmentAttributeRequest::setBgpConfig(const std::string &bgpConfig) {
  bgpConfig_ = bgpConfig;
  setParameter(std::string("BgpConfig"), bgpConfig);
}

std::string ModifyVpnAttachmentAttributeRequest::getNetworkType() const {
  return networkType_;
}

void ModifyVpnAttachmentAttributeRequest::setNetworkType(const std::string &networkType) {
  networkType_ = networkType;
  setParameter(std::string("NetworkType"), networkType);
}

std::string ModifyVpnAttachmentAttributeRequest::getHealthCheckConfig() const {
  return healthCheckConfig_;
}

void ModifyVpnAttachmentAttributeRequest::setHealthCheckConfig(const std::string &healthCheckConfig) {
  healthCheckConfig_ = healthCheckConfig;
  setParameter(std::string("HealthCheckConfig"), healthCheckConfig);
}

std::string ModifyVpnAttachmentAttributeRequest::getCustomerGatewayId() const {
  return customerGatewayId_;
}

void ModifyVpnAttachmentAttributeRequest::setCustomerGatewayId(const std::string &customerGatewayId) {
  customerGatewayId_ = customerGatewayId;
  setParameter(std::string("CustomerGatewayId"), customerGatewayId);
}

std::string ModifyVpnAttachmentAttributeRequest::getLocalSubnet() const {
  return localSubnet_;
}

void ModifyVpnAttachmentAttributeRequest::setLocalSubnet(const std::string &localSubnet) {
  localSubnet_ = localSubnet;
  setParameter(std::string("LocalSubnet"), localSubnet);
}

std::string ModifyVpnAttachmentAttributeRequest::getRemoteCaCert() const {
  return remoteCaCert_;
}

void ModifyVpnAttachmentAttributeRequest::setRemoteCaCert(const std::string &remoteCaCert) {
  remoteCaCert_ = remoteCaCert;
  setParameter(std::string("RemoteCaCert"), remoteCaCert);
}

std::string ModifyVpnAttachmentAttributeRequest::getRegionId() const {
  return regionId_;
}

void ModifyVpnAttachmentAttributeRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string ModifyVpnAttachmentAttributeRequest::getRemoteSubnet() const {
  return remoteSubnet_;
}

void ModifyVpnAttachmentAttributeRequest::setRemoteSubnet(const std::string &remoteSubnet) {
  remoteSubnet_ = remoteSubnet;
  setParameter(std::string("RemoteSubnet"), remoteSubnet);
}

bool ModifyVpnAttachmentAttributeRequest::getEffectImmediately() const {
  return effectImmediately_;
}

void ModifyVpnAttachmentAttributeRequest::setEffectImmediately(bool effectImmediately) {
  effectImmediately_ = effectImmediately;
  setParameter(std::string("EffectImmediately"), effectImmediately ? "true" : "false");
}

std::string ModifyVpnAttachmentAttributeRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void ModifyVpnAttachmentAttributeRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string ModifyVpnAttachmentAttributeRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void ModifyVpnAttachmentAttributeRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

bool ModifyVpnAttachmentAttributeRequest::getEnableDpd() const {
  return enableDpd_;
}

void ModifyVpnAttachmentAttributeRequest::setEnableDpd(bool enableDpd) {
  enableDpd_ = enableDpd;
  setParameter(std::string("EnableDpd"), enableDpd ? "true" : "false");
}

std::string ModifyVpnAttachmentAttributeRequest::getVpnConnectionId() const {
  return vpnConnectionId_;
}

void ModifyVpnAttachmentAttributeRequest::setVpnConnectionId(const std::string &vpnConnectionId) {
  vpnConnectionId_ = vpnConnectionId;
  setParameter(std::string("VpnConnectionId"), vpnConnectionId);
}

std::string ModifyVpnAttachmentAttributeRequest::getName() const {
  return name_;
}

void ModifyVpnAttachmentAttributeRequest::setName(const std::string &name) {
  name_ = name;
  setParameter(std::string("Name"), name);
}

bool ModifyVpnAttachmentAttributeRequest::getEnableNatTraversal() const {
  return enableNatTraversal_;
}

void ModifyVpnAttachmentAttributeRequest::setEnableNatTraversal(bool enableNatTraversal) {
  enableNatTraversal_ = enableNatTraversal;
  setParameter(std::string("EnableNatTraversal"), enableNatTraversal ? "true" : "false");
}

