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

#include <alibabacloud/vpc/model/CreateIpsecServerRequest.h>

using AlibabaCloud::Vpc::Model::CreateIpsecServerRequest;

CreateIpsecServerRequest::CreateIpsecServerRequest()
    : RpcServiceRequest("vpc", "2016-04-28", "CreateIpsecServer") {
  setMethod(HttpRequest::Method::Post);
}

CreateIpsecServerRequest::~CreateIpsecServerRequest() {}

std::string CreateIpsecServerRequest::getIkeConfig() const {
  return ikeConfig_;
}

void CreateIpsecServerRequest::setIkeConfig(const std::string &ikeConfig) {
  ikeConfig_ = ikeConfig;
  setParameter(std::string("IkeConfig"), ikeConfig);
}

long CreateIpsecServerRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void CreateIpsecServerRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string CreateIpsecServerRequest::getClientToken() const {
  return clientToken_;
}

void CreateIpsecServerRequest::setClientToken(const std::string &clientToken) {
  clientToken_ = clientToken;
  setParameter(std::string("ClientToken"), clientToken);
}

std::string CreateIpsecServerRequest::getIpsecConfig() const {
  return ipsecConfig_;
}

void CreateIpsecServerRequest::setIpsecConfig(const std::string &ipsecConfig) {
  ipsecConfig_ = ipsecConfig;
  setParameter(std::string("IpsecConfig"), ipsecConfig);
}

std::string CreateIpsecServerRequest::getPsk() const {
  return psk_;
}

void CreateIpsecServerRequest::setPsk(const std::string &psk) {
  psk_ = psk;
  setParameter(std::string("Psk"), psk);
}

std::string CreateIpsecServerRequest::getLocalSubnet() const {
  return localSubnet_;
}

void CreateIpsecServerRequest::setLocalSubnet(const std::string &localSubnet) {
  localSubnet_ = localSubnet;
  setParameter(std::string("LocalSubnet"), localSubnet);
}

std::string CreateIpsecServerRequest::getRegionId() const {
  return regionId_;
}

void CreateIpsecServerRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string CreateIpsecServerRequest::getIDaaSInstanceId() const {
  return iDaaSInstanceId_;
}

void CreateIpsecServerRequest::setIDaaSInstanceId(const std::string &iDaaSInstanceId) {
  iDaaSInstanceId_ = iDaaSInstanceId;
  setParameter(std::string("IDaaSInstanceId"), iDaaSInstanceId);
}

bool CreateIpsecServerRequest::getEffectImmediately() const {
  return effectImmediately_;
}

void CreateIpsecServerRequest::setEffectImmediately(bool effectImmediately) {
  effectImmediately_ = effectImmediately;
  setParameter(std::string("EffectImmediately"), effectImmediately ? "true" : "false");
}

std::string CreateIpsecServerRequest::getClientIpPool() const {
  return clientIpPool_;
}

void CreateIpsecServerRequest::setClientIpPool(const std::string &clientIpPool) {
  clientIpPool_ = clientIpPool;
  setParameter(std::string("ClientIpPool"), clientIpPool);
}

std::string CreateIpsecServerRequest::getDryRun() const {
  return dryRun_;
}

void CreateIpsecServerRequest::setDryRun(const std::string &dryRun) {
  dryRun_ = dryRun;
  setParameter(std::string("DryRun"), dryRun);
}

std::string CreateIpsecServerRequest::getVpnGatewayId() const {
  return vpnGatewayId_;
}

void CreateIpsecServerRequest::setVpnGatewayId(const std::string &vpnGatewayId) {
  vpnGatewayId_ = vpnGatewayId;
  setParameter(std::string("VpnGatewayId"), vpnGatewayId);
}

std::string CreateIpsecServerRequest::getCallerBid() const {
  return callerBid_;
}

void CreateIpsecServerRequest::setCallerBid(const std::string &callerBid) {
  callerBid_ = callerBid;
  setParameter(std::string("callerBid"), callerBid);
}

bool CreateIpsecServerRequest::getPskEnabled() const {
  return pskEnabled_;
}

void CreateIpsecServerRequest::setPskEnabled(bool pskEnabled) {
  pskEnabled_ = pskEnabled;
  setParameter(std::string("PskEnabled"), pskEnabled ? "true" : "false");
}

bool CreateIpsecServerRequest::getMultiFactorAuthEnabled() const {
  return multiFactorAuthEnabled_;
}

void CreateIpsecServerRequest::setMultiFactorAuthEnabled(bool multiFactorAuthEnabled) {
  multiFactorAuthEnabled_ = multiFactorAuthEnabled;
  setParameter(std::string("MultiFactorAuthEnabled"), multiFactorAuthEnabled ? "true" : "false");
}

std::string CreateIpsecServerRequest::getIpSecServerName() const {
  return ipSecServerName_;
}

void CreateIpsecServerRequest::setIpSecServerName(const std::string &ipSecServerName) {
  ipSecServerName_ = ipSecServerName;
  setParameter(std::string("IpSecServerName"), ipSecServerName);
}

