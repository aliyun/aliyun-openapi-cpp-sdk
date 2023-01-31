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

#include <alibabacloud/vpc/model/AssociateVpnGatewayWithCertificateRequest.h>

using AlibabaCloud::Vpc::Model::AssociateVpnGatewayWithCertificateRequest;

AssociateVpnGatewayWithCertificateRequest::AssociateVpnGatewayWithCertificateRequest()
    : RpcServiceRequest("vpc", "2016-04-28", "AssociateVpnGatewayWithCertificate") {
  setMethod(HttpRequest::Method::Post);
}

AssociateVpnGatewayWithCertificateRequest::~AssociateVpnGatewayWithCertificateRequest() {}

long AssociateVpnGatewayWithCertificateRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void AssociateVpnGatewayWithCertificateRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

bool AssociateVpnGatewayWithCertificateRequest::getDryRun() const {
  return dryRun_;
}

void AssociateVpnGatewayWithCertificateRequest::setDryRun(bool dryRun) {
  dryRun_ = dryRun;
  setParameter(std::string("DryRun"), dryRun ? "true" : "false");
}

std::string AssociateVpnGatewayWithCertificateRequest::getClientToken() const {
  return clientToken_;
}

void AssociateVpnGatewayWithCertificateRequest::setClientToken(const std::string &clientToken) {
  clientToken_ = clientToken;
  setParameter(std::string("ClientToken"), clientToken);
}

std::string AssociateVpnGatewayWithCertificateRequest::getCertificateId() const {
  return certificateId_;
}

void AssociateVpnGatewayWithCertificateRequest::setCertificateId(const std::string &certificateId) {
  certificateId_ = certificateId;
  setParameter(std::string("CertificateId"), certificateId);
}

std::string AssociateVpnGatewayWithCertificateRequest::getVpnGatewayId() const {
  return vpnGatewayId_;
}

void AssociateVpnGatewayWithCertificateRequest::setVpnGatewayId(const std::string &vpnGatewayId) {
  vpnGatewayId_ = vpnGatewayId;
  setParameter(std::string("VpnGatewayId"), vpnGatewayId);
}

std::string AssociateVpnGatewayWithCertificateRequest::getCallerBid() const {
  return callerBid_;
}

void AssociateVpnGatewayWithCertificateRequest::setCallerBid(const std::string &callerBid) {
  callerBid_ = callerBid;
  setParameter(std::string("callerBid"), callerBid);
}

std::string AssociateVpnGatewayWithCertificateRequest::getCertificateType() const {
  return certificateType_;
}

void AssociateVpnGatewayWithCertificateRequest::setCertificateType(const std::string &certificateType) {
  certificateType_ = certificateType;
  setParameter(std::string("CertificateType"), certificateType);
}

std::string AssociateVpnGatewayWithCertificateRequest::getRegionId() const {
  return regionId_;
}

void AssociateVpnGatewayWithCertificateRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

