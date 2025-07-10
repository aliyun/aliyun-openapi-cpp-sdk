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

#include <alibabacloud/vpc/model/ModifyTunnelAttributeRequest.h>

using AlibabaCloud::Vpc::Model::ModifyTunnelAttributeRequest;

ModifyTunnelAttributeRequest::ModifyTunnelAttributeRequest()
    : RpcServiceRequest("vpc", "2016-04-28", "ModifyTunnelAttribute") {
  setMethod(HttpRequest::Method::Post);
}

ModifyTunnelAttributeRequest::~ModifyTunnelAttributeRequest() {}

long ModifyTunnelAttributeRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void ModifyTunnelAttributeRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string ModifyTunnelAttributeRequest::getClientToken() const {
  return clientToken_;
}

void ModifyTunnelAttributeRequest::setClientToken(const std::string &clientToken) {
  clientToken_ = clientToken;
  setParameter(std::string("ClientToken"), clientToken);
}

std::string ModifyTunnelAttributeRequest::getRegionId() const {
  return regionId_;
}

void ModifyTunnelAttributeRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string ModifyTunnelAttributeRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void ModifyTunnelAttributeRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string ModifyTunnelAttributeRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void ModifyTunnelAttributeRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

long ModifyTunnelAttributeRequest::getOwnerId() const {
  return ownerId_;
}

void ModifyTunnelAttributeRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

ModifyTunnelAttributeRequest::TunnelOptionsSpecification ModifyTunnelAttributeRequest::getTunnelOptionsSpecification() const {
  return tunnelOptionsSpecification_;
}

void ModifyTunnelAttributeRequest::setTunnelOptionsSpecification(const ModifyTunnelAttributeRequest::TunnelOptionsSpecification &tunnelOptionsSpecification) {
  tunnelOptionsSpecification_ = tunnelOptionsSpecification;
  setParameter(std::string("TunnelOptionsSpecification") + ".TunnelIpsecConfig.IpsecPfs", tunnelOptionsSpecification.tunnelIpsecConfig.ipsecPfs);
  setParameter(std::string("TunnelOptionsSpecification") + ".TunnelIpsecConfig.IpsecLifetime", std::to_string(tunnelOptionsSpecification.tunnelIpsecConfig.ipsecLifetime));
  setParameter(std::string("TunnelOptionsSpecification") + ".TunnelIpsecConfig.IpsecAuthAlg", tunnelOptionsSpecification.tunnelIpsecConfig.ipsecAuthAlg);
  setParameter(std::string("TunnelOptionsSpecification") + ".TunnelIpsecConfig.IpsecEncAlg", tunnelOptionsSpecification.tunnelIpsecConfig.ipsecEncAlg);
  setParameter(std::string("TunnelOptionsSpecification") + ".TunnelBgpConfig.LocalAsn", std::to_string(tunnelOptionsSpecification.tunnelBgpConfig.localAsn));
  setParameter(std::string("TunnelOptionsSpecification") + ".TunnelBgpConfig.TunnelCidr", tunnelOptionsSpecification.tunnelBgpConfig.tunnelCidr);
  setParameter(std::string("TunnelOptionsSpecification") + ".TunnelBgpConfig.LocalBgpIp", tunnelOptionsSpecification.tunnelBgpConfig.localBgpIp);
  setParameter(std::string("TunnelOptionsSpecification") + ".RemoteCaCertificate", tunnelOptionsSpecification.remoteCaCertificate);
  setParameter(std::string("TunnelOptionsSpecification") + ".TunnelIkeConfig.IkeVersion", tunnelOptionsSpecification.tunnelIkeConfig.ikeVersion);
  setParameter(std::string("TunnelOptionsSpecification") + ".TunnelIkeConfig.IkeMode", tunnelOptionsSpecification.tunnelIkeConfig.ikeMode);
  setParameter(std::string("TunnelOptionsSpecification") + ".TunnelIkeConfig.IkeAuthAlg", tunnelOptionsSpecification.tunnelIkeConfig.ikeAuthAlg);
  setParameter(std::string("TunnelOptionsSpecification") + ".TunnelIkeConfig.Psk", tunnelOptionsSpecification.tunnelIkeConfig.psk);
  setParameter(std::string("TunnelOptionsSpecification") + ".TunnelIkeConfig.IkePfs", tunnelOptionsSpecification.tunnelIkeConfig.ikePfs);
  setParameter(std::string("TunnelOptionsSpecification") + ".TunnelIkeConfig.IkeLifetime", std::to_string(tunnelOptionsSpecification.tunnelIkeConfig.ikeLifetime));
  setParameter(std::string("TunnelOptionsSpecification") + ".TunnelIkeConfig.LocalId", tunnelOptionsSpecification.tunnelIkeConfig.localId);
  setParameter(std::string("TunnelOptionsSpecification") + ".TunnelIkeConfig.IkeEncAlg", tunnelOptionsSpecification.tunnelIkeConfig.ikeEncAlg);
  setParameter(std::string("TunnelOptionsSpecification") + ".TunnelIkeConfig.RemoteId", tunnelOptionsSpecification.tunnelIkeConfig.remoteId);
  setParameter(std::string("TunnelOptionsSpecification") + ".EnableNatTraversal", tunnelOptionsSpecification.enableNatTraversal ? "true" : "false");
  setParameter(std::string("TunnelOptionsSpecification") + ".EnableDpd", tunnelOptionsSpecification.enableDpd ? "true" : "false");
  setParameter(std::string("TunnelOptionsSpecification") + ".CustomerGatewayId", tunnelOptionsSpecification.customerGatewayId);
}

std::string ModifyTunnelAttributeRequest::getVpnConnectionId() const {
  return vpnConnectionId_;
}

void ModifyTunnelAttributeRequest::setVpnConnectionId(const std::string &vpnConnectionId) {
  vpnConnectionId_ = vpnConnectionId;
  setParameter(std::string("VpnConnectionId"), vpnConnectionId);
}

std::string ModifyTunnelAttributeRequest::getTunnelId() const {
  return tunnelId_;
}

void ModifyTunnelAttributeRequest::setTunnelId(const std::string &tunnelId) {
  tunnelId_ = tunnelId;
  setParameter(std::string("TunnelId"), tunnelId);
}

