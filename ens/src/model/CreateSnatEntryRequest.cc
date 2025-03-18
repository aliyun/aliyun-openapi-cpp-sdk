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

#include <alibabacloud/ens/model/CreateSnatEntryRequest.h>

using AlibabaCloud::Ens::Model::CreateSnatEntryRequest;

CreateSnatEntryRequest::CreateSnatEntryRequest()
    : RpcServiceRequest("ens", "2017-11-10", "CreateSnatEntry") {
  setMethod(HttpRequest::Method::Post);
}

CreateSnatEntryRequest::~CreateSnatEntryRequest() {}

std::string CreateSnatEntryRequest::getSnatIp() const {
  return snatIp_;
}

void CreateSnatEntryRequest::setSnatIp(const std::string &snatIp) {
  snatIp_ = snatIp;
  setParameter(std::string("SnatIp"), snatIp);
}

std::string CreateSnatEntryRequest::getType() const {
  return type_;
}

void CreateSnatEntryRequest::setType(const std::string &type) {
  type_ = type;
  setParameter(std::string("Type"), type);
}

std::string CreateSnatEntryRequest::getDestCIDR() const {
  return destCIDR_;
}

void CreateSnatEntryRequest::setDestCIDR(const std::string &destCIDR) {
  destCIDR_ = destCIDR;
  setParameter(std::string("DestCIDR"), destCIDR);
}

std::string CreateSnatEntryRequest::getSourceVSwitchId() const {
  return sourceVSwitchId_;
}

void CreateSnatEntryRequest::setSourceVSwitchId(const std::string &sourceVSwitchId) {
  sourceVSwitchId_ = sourceVSwitchId;
  setParameter(std::string("SourceVSwitchId"), sourceVSwitchId);
}

bool CreateSnatEntryRequest::getEipAffinity() const {
  return eipAffinity_;
}

void CreateSnatEntryRequest::setEipAffinity(bool eipAffinity) {
  eipAffinity_ = eipAffinity;
  setParameter(std::string("EipAffinity"), eipAffinity ? "true" : "false");
}

std::string CreateSnatEntryRequest::getSourceNetworkId() const {
  return sourceNetworkId_;
}

void CreateSnatEntryRequest::setSourceNetworkId(const std::string &sourceNetworkId) {
  sourceNetworkId_ = sourceNetworkId;
  setParameter(std::string("SourceNetworkId"), sourceNetworkId);
}

std::string CreateSnatEntryRequest::getStandbySnatIp() const {
  return standbySnatIp_;
}

void CreateSnatEntryRequest::setStandbySnatIp(const std::string &standbySnatIp) {
  standbySnatIp_ = standbySnatIp;
  setParameter(std::string("StandbySnatIp"), standbySnatIp);
}

std::string CreateSnatEntryRequest::getSourceCIDR() const {
  return sourceCIDR_;
}

void CreateSnatEntryRequest::setSourceCIDR(const std::string &sourceCIDR) {
  sourceCIDR_ = sourceCIDR;
  setParameter(std::string("SourceCIDR"), sourceCIDR);
}

std::string CreateSnatEntryRequest::getNatGatewayId() const {
  return natGatewayId_;
}

void CreateSnatEntryRequest::setNatGatewayId(const std::string &natGatewayId) {
  natGatewayId_ = natGatewayId;
  setParameter(std::string("NatGatewayId"), natGatewayId);
}

int CreateSnatEntryRequest::getIdleTimeout() const {
  return idleTimeout_;
}

void CreateSnatEntryRequest::setIdleTimeout(int idleTimeout) {
  idleTimeout_ = idleTimeout;
  setParameter(std::string("IdleTimeout"), std::to_string(idleTimeout));
}

std::string CreateSnatEntryRequest::getSnatEntryName() const {
  return snatEntryName_;
}

void CreateSnatEntryRequest::setSnatEntryName(const std::string &snatEntryName) {
  snatEntryName_ = snatEntryName;
  setParameter(std::string("SnatEntryName"), snatEntryName);
}

bool CreateSnatEntryRequest::getIspAffinity() const {
  return ispAffinity_;
}

void CreateSnatEntryRequest::setIspAffinity(bool ispAffinity) {
  ispAffinity_ = ispAffinity;
  setParameter(std::string("IspAffinity"), ispAffinity ? "true" : "false");
}

