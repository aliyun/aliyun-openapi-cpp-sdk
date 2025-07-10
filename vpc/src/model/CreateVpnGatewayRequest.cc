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

#include <alibabacloud/vpc/model/CreateVpnGatewayRequest.h>

using AlibabaCloud::Vpc::Model::CreateVpnGatewayRequest;

CreateVpnGatewayRequest::CreateVpnGatewayRequest()
    : RpcServiceRequest("vpc", "2016-04-28", "CreateVpnGateway") {
  setMethod(HttpRequest::Method::Post);
}

CreateVpnGatewayRequest::~CreateVpnGatewayRequest() {}

long CreateVpnGatewayRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void CreateVpnGatewayRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string CreateVpnGatewayRequest::getClientToken() const {
  return clientToken_;
}

void CreateVpnGatewayRequest::setClientToken(const std::string &clientToken) {
  clientToken_ = clientToken;
  setParameter(std::string("ClientToken"), clientToken);
}

bool CreateVpnGatewayRequest::getEnableIpsec() const {
  return enableIpsec_;
}

void CreateVpnGatewayRequest::setEnableIpsec(bool enableIpsec) {
  enableIpsec_ = enableIpsec;
  setParameter(std::string("EnableIpsec"), enableIpsec ? "true" : "false");
}

std::string CreateVpnGatewayRequest::getNetworkType() const {
  return networkType_;
}

void CreateVpnGatewayRequest::setNetworkType(const std::string &networkType) {
  networkType_ = networkType;
  setParameter(std::string("NetworkType"), networkType);
}

std::string CreateVpnGatewayRequest::getResourceGroupId() const {
  return resourceGroupId_;
}

void CreateVpnGatewayRequest::setResourceGroupId(const std::string &resourceGroupId) {
  resourceGroupId_ = resourceGroupId;
  setParameter(std::string("ResourceGroupId"), resourceGroupId);
}

std::string CreateVpnGatewayRequest::getRegionId() const {
  return regionId_;
}

void CreateVpnGatewayRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string CreateVpnGatewayRequest::getInstanceChargeType() const {
  return instanceChargeType_;
}

void CreateVpnGatewayRequest::setInstanceChargeType(const std::string &instanceChargeType) {
  instanceChargeType_ = instanceChargeType;
  setParameter(std::string("InstanceChargeType"), instanceChargeType);
}

int CreateVpnGatewayRequest::getPeriod() const {
  return period_;
}

void CreateVpnGatewayRequest::setPeriod(int period) {
  period_ = period;
  setParameter(std::string("Period"), std::to_string(period));
}

bool CreateVpnGatewayRequest::getAutoPay() const {
  return autoPay_;
}

void CreateVpnGatewayRequest::setAutoPay(bool autoPay) {
  autoPay_ = autoPay;
  setParameter(std::string("AutoPay"), autoPay ? "true" : "false");
}

std::string CreateVpnGatewayRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void CreateVpnGatewayRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

int CreateVpnGatewayRequest::getBandwidth() const {
  return bandwidth_;
}

void CreateVpnGatewayRequest::setBandwidth(int bandwidth) {
  bandwidth_ = bandwidth;
  setParameter(std::string("Bandwidth"), std::to_string(bandwidth));
}

std::string CreateVpnGatewayRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void CreateVpnGatewayRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

std::string CreateVpnGatewayRequest::getDisasterRecoveryVSwitchId() const {
  return disasterRecoveryVSwitchId_;
}

void CreateVpnGatewayRequest::setDisasterRecoveryVSwitchId(const std::string &disasterRecoveryVSwitchId) {
  disasterRecoveryVSwitchId_ = disasterRecoveryVSwitchId;
  setParameter(std::string("DisasterRecoveryVSwitchId"), disasterRecoveryVSwitchId);
}

long CreateVpnGatewayRequest::getOwnerId() const {
  return ownerId_;
}

void CreateVpnGatewayRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

std::string CreateVpnGatewayRequest::getVpnType() const {
  return vpnType_;
}

void CreateVpnGatewayRequest::setVpnType(const std::string &vpnType) {
  vpnType_ = vpnType;
  setParameter(std::string("VpnType"), vpnType);
}

std::vector<CreateVpnGatewayRequest::Tags> CreateVpnGatewayRequest::getTags() const {
  return tags_;
}

void CreateVpnGatewayRequest::setTags(const std::vector<CreateVpnGatewayRequest::Tags> &tags) {
  tags_ = tags;
  for(int dep1 = 0; dep1 != tags.size(); dep1++) {
  auto tagsObj = tags.at(dep1);
  std::string tagsObjStr = std::string("Tags") + "." + std::to_string(dep1 + 1);
    setParameter(tagsObjStr + ".Value", tagsObj.value);
    setParameter(tagsObjStr + ".Key", tagsObj.key);
  }
}

std::string CreateVpnGatewayRequest::getVSwitchId() const {
  return vSwitchId_;
}

void CreateVpnGatewayRequest::setVSwitchId(const std::string &vSwitchId) {
  vSwitchId_ = vSwitchId;
  setParameter(std::string("VSwitchId"), vSwitchId);
}

bool CreateVpnGatewayRequest::getEnableSsl() const {
  return enableSsl_;
}

void CreateVpnGatewayRequest::setEnableSsl(bool enableSsl) {
  enableSsl_ = enableSsl;
  setParameter(std::string("EnableSsl"), enableSsl ? "true" : "false");
}

int CreateVpnGatewayRequest::getSslConnections() const {
  return sslConnections_;
}

void CreateVpnGatewayRequest::setSslConnections(int sslConnections) {
  sslConnections_ = sslConnections;
  setParameter(std::string("SslConnections"), std::to_string(sslConnections));
}

std::string CreateVpnGatewayRequest::getVpcId() const {
  return vpcId_;
}

void CreateVpnGatewayRequest::setVpcId(const std::string &vpcId) {
  vpcId_ = vpcId;
  setParameter(std::string("VpcId"), vpcId);
}

std::string CreateVpnGatewayRequest::getName() const {
  return name_;
}

void CreateVpnGatewayRequest::setName(const std::string &name) {
  name_ = name;
  setParameter(std::string("Name"), name);
}

