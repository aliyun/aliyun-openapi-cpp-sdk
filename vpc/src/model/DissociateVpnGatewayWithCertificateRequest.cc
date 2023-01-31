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

#include <alibabacloud/vpc/model/DissociateVpnGatewayWithCertificateRequest.h>

using AlibabaCloud::Vpc::Model::DissociateVpnGatewayWithCertificateRequest;

DissociateVpnGatewayWithCertificateRequest::DissociateVpnGatewayWithCertificateRequest()
    : RpcServiceRequest("vpc", "2016-04-28", "DissociateVpnGatewayWithCertificate") {
  setMethod(HttpRequest::Method::Post);
}

DissociateVpnGatewayWithCertificateRequest::~DissociateVpnGatewayWithCertificateRequest() {}

long DissociateVpnGatewayWithCertificateRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void DissociateVpnGatewayWithCertificateRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

bool DissociateVpnGatewayWithCertificateRequest::getDryRun() const {
  return dryRun_;
}

void DissociateVpnGatewayWithCertificateRequest::setDryRun(bool dryRun) {
  dryRun_ = dryRun;
  setParameter(std::string("DryRun"), dryRun ? "true" : "false");
}

std::string DissociateVpnGatewayWithCertificateRequest::getClientToken() const {
  return clientToken_;
}

void DissociateVpnGatewayWithCertificateRequest::setClientToken(const std::string &clientToken) {
  clientToken_ = clientToken;
  setParameter(std::string("ClientToken"), clientToken);
}

std::string DissociateVpnGatewayWithCertificateRequest::getCertificateId() const {
  return certificateId_;
}

void DissociateVpnGatewayWithCertificateRequest::setCertificateId(const std::string &certificateId) {
  certificateId_ = certificateId;
  setParameter(std::string("CertificateId"), certificateId);
}

std::string DissociateVpnGatewayWithCertificateRequest::getVpnGatewayId() const {
  return vpnGatewayId_;
}

void DissociateVpnGatewayWithCertificateRequest::setVpnGatewayId(const std::string &vpnGatewayId) {
  vpnGatewayId_ = vpnGatewayId;
  setParameter(std::string("VpnGatewayId"), vpnGatewayId);
}

std::string DissociateVpnGatewayWithCertificateRequest::getCallerBid() const {
  return callerBid_;
}

void DissociateVpnGatewayWithCertificateRequest::setCallerBid(const std::string &callerBid) {
  callerBid_ = callerBid;
  setParameter(std::string("callerBid"), callerBid);
}

std::string DissociateVpnGatewayWithCertificateRequest::getCertificateType() const {
  return certificateType_;
}

void DissociateVpnGatewayWithCertificateRequest::setCertificateType(const std::string &certificateType) {
  certificateType_ = certificateType;
  setParameter(std::string("CertificateType"), certificateType);
}

std::string DissociateVpnGatewayWithCertificateRequest::getRegionId() const {
  return regionId_;
}

void DissociateVpnGatewayWithCertificateRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

