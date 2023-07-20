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

#include <alibabacloud/ens/model/CreateForwardEntryRequest.h>

using AlibabaCloud::Ens::Model::CreateForwardEntryRequest;

CreateForwardEntryRequest::CreateForwardEntryRequest()
    : RpcServiceRequest("ens", "2017-11-10", "CreateForwardEntry") {
  setMethod(HttpRequest::Method::Post);
}

CreateForwardEntryRequest::~CreateForwardEntryRequest() {}

std::string CreateForwardEntryRequest::getInternalIp() const {
  return internalIp_;
}

void CreateForwardEntryRequest::setInternalIp(const std::string &internalIp) {
  internalIp_ = internalIp;
  setParameter(std::string("InternalIp"), internalIp);
}

std::string CreateForwardEntryRequest::getExternalIp() const {
  return externalIp_;
}

void CreateForwardEntryRequest::setExternalIp(const std::string &externalIp) {
  externalIp_ = externalIp;
  setParameter(std::string("ExternalIp"), externalIp);
}

std::string CreateForwardEntryRequest::getIpProtocol() const {
  return ipProtocol_;
}

void CreateForwardEntryRequest::setIpProtocol(const std::string &ipProtocol) {
  ipProtocol_ = ipProtocol;
  setParameter(std::string("IpProtocol"), ipProtocol);
}

int CreateForwardEntryRequest::getHealthCheckPort() const {
  return healthCheckPort_;
}

void CreateForwardEntryRequest::setHealthCheckPort(int healthCheckPort) {
  healthCheckPort_ = healthCheckPort;
  setParameter(std::string("HealthCheckPort"), std::to_string(healthCheckPort));
}

std::string CreateForwardEntryRequest::getExternalPort() const {
  return externalPort_;
}

void CreateForwardEntryRequest::setExternalPort(const std::string &externalPort) {
  externalPort_ = externalPort;
  setParameter(std::string("ExternalPort"), externalPort);
}

std::string CreateForwardEntryRequest::getStandbyExternalIp() const {
  return standbyExternalIp_;
}

void CreateForwardEntryRequest::setStandbyExternalIp(const std::string &standbyExternalIp) {
  standbyExternalIp_ = standbyExternalIp;
  setParameter(std::string("StandbyExternalIp"), standbyExternalIp);
}

std::string CreateForwardEntryRequest::getNatGatewayId() const {
  return natGatewayId_;
}

void CreateForwardEntryRequest::setNatGatewayId(const std::string &natGatewayId) {
  natGatewayId_ = natGatewayId;
  setParameter(std::string("NatGatewayId"), natGatewayId);
}

std::string CreateForwardEntryRequest::getForwardEntryName() const {
  return forwardEntryName_;
}

void CreateForwardEntryRequest::setForwardEntryName(const std::string &forwardEntryName) {
  forwardEntryName_ = forwardEntryName;
  setParameter(std::string("ForwardEntryName"), forwardEntryName);
}

std::string CreateForwardEntryRequest::getInternalPort() const {
  return internalPort_;
}

void CreateForwardEntryRequest::setInternalPort(const std::string &internalPort) {
  internalPort_ = internalPort;
  setParameter(std::string("InternalPort"), internalPort);
}

