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

#include <alibabacloud/vpc/model/UpdateIpsecServerRequest.h>

using AlibabaCloud::Vpc::Model::UpdateIpsecServerRequest;

UpdateIpsecServerRequest::UpdateIpsecServerRequest()
    : RpcServiceRequest("vpc", "2016-04-28", "UpdateIpsecServer") {
  setMethod(HttpRequest::Method::Post);
}

UpdateIpsecServerRequest::~UpdateIpsecServerRequest() {}

std::string UpdateIpsecServerRequest::getIkeConfig() const {
  return ikeConfig_;
}

void UpdateIpsecServerRequest::setIkeConfig(const std::string &ikeConfig) {
  ikeConfig_ = ikeConfig;
  setParameter(std::string("IkeConfig"), ikeConfig);
}

long UpdateIpsecServerRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void UpdateIpsecServerRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string UpdateIpsecServerRequest::getClientToken() const {
  return clientToken_;
}

void UpdateIpsecServerRequest::setClientToken(const std::string &clientToken) {
  clientToken_ = clientToken;
  setParameter(std::string("ClientToken"), clientToken);
}

std::string UpdateIpsecServerRequest::getIpsecConfig() const {
  return ipsecConfig_;
}

void UpdateIpsecServerRequest::setIpsecConfig(const std::string &ipsecConfig) {
  ipsecConfig_ = ipsecConfig;
  setParameter(std::string("IpsecConfig"), ipsecConfig);
}

std::string UpdateIpsecServerRequest::getPsk() const {
  return psk_;
}

void UpdateIpsecServerRequest::setPsk(const std::string &psk) {
  psk_ = psk;
  setParameter(std::string("Psk"), psk);
}

std::string UpdateIpsecServerRequest::getLocalSubnet() const {
  return localSubnet_;
}

void UpdateIpsecServerRequest::setLocalSubnet(const std::string &localSubnet) {
  localSubnet_ = localSubnet;
  setParameter(std::string("LocalSubnet"), localSubnet);
}

std::string UpdateIpsecServerRequest::getRegionId() const {
  return regionId_;
}

void UpdateIpsecServerRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string UpdateIpsecServerRequest::getIDaaSInstanceId() const {
  return iDaaSInstanceId_;
}

void UpdateIpsecServerRequest::setIDaaSInstanceId(const std::string &iDaaSInstanceId) {
  iDaaSInstanceId_ = iDaaSInstanceId;
  setParameter(std::string("IDaaSInstanceId"), iDaaSInstanceId);
}

bool UpdateIpsecServerRequest::getEffectImmediately() const {
  return effectImmediately_;
}

void UpdateIpsecServerRequest::setEffectImmediately(bool effectImmediately) {
  effectImmediately_ = effectImmediately;
  setParameter(std::string("EffectImmediately"), effectImmediately ? "true" : "false");
}

std::string UpdateIpsecServerRequest::getClientIpPool() const {
  return clientIpPool_;
}

void UpdateIpsecServerRequest::setClientIpPool(const std::string &clientIpPool) {
  clientIpPool_ = clientIpPool;
  setParameter(std::string("ClientIpPool"), clientIpPool);
}

std::string UpdateIpsecServerRequest::getDryRun() const {
  return dryRun_;
}

void UpdateIpsecServerRequest::setDryRun(const std::string &dryRun) {
  dryRun_ = dryRun;
  setParameter(std::string("DryRun"), dryRun);
}

std::string UpdateIpsecServerRequest::getCallerBid() const {
  return callerBid_;
}

void UpdateIpsecServerRequest::setCallerBid(const std::string &callerBid) {
  callerBid_ = callerBid;
  setParameter(std::string("callerBid"), callerBid);
}

bool UpdateIpsecServerRequest::getPskEnabled() const {
  return pskEnabled_;
}

void UpdateIpsecServerRequest::setPskEnabled(bool pskEnabled) {
  pskEnabled_ = pskEnabled;
  setParameter(std::string("PskEnabled"), pskEnabled ? "true" : "false");
}

bool UpdateIpsecServerRequest::getMultiFactorAuthEnabled() const {
  return multiFactorAuthEnabled_;
}

void UpdateIpsecServerRequest::setMultiFactorAuthEnabled(bool multiFactorAuthEnabled) {
  multiFactorAuthEnabled_ = multiFactorAuthEnabled;
  setParameter(std::string("MultiFactorAuthEnabled"), multiFactorAuthEnabled ? "true" : "false");
}

std::string UpdateIpsecServerRequest::getIpsecServerName() const {
  return ipsecServerName_;
}

void UpdateIpsecServerRequest::setIpsecServerName(const std::string &ipsecServerName) {
  ipsecServerName_ = ipsecServerName;
  setParameter(std::string("IpsecServerName"), ipsecServerName);
}

std::string UpdateIpsecServerRequest::getIpsecServerId() const {
  return ipsecServerId_;
}

void UpdateIpsecServerRequest::setIpsecServerId(const std::string &ipsecServerId) {
  ipsecServerId_ = ipsecServerId;
  setParameter(std::string("IpsecServerId"), ipsecServerId);
}

