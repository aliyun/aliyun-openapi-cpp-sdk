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

#include <alibabacloud/vpc/model/CreateNatIpRequest.h>

using AlibabaCloud::Vpc::Model::CreateNatIpRequest;

CreateNatIpRequest::CreateNatIpRequest()
    : RpcServiceRequest("vpc", "2016-04-28", "CreateNatIp") {
  setMethod(HttpRequest::Method::Post);
}

CreateNatIpRequest::~CreateNatIpRequest() {}

long CreateNatIpRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void CreateNatIpRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string CreateNatIpRequest::getNatIpName() const {
  return natIpName_;
}

void CreateNatIpRequest::setNatIpName(const std::string &natIpName) {
  natIpName_ = natIpName;
  setParameter(std::string("NatIpName"), natIpName);
}

std::string CreateNatIpRequest::getClientToken() const {
  return clientToken_;
}

void CreateNatIpRequest::setClientToken(const std::string &clientToken) {
  clientToken_ = clientToken;
  setParameter(std::string("ClientToken"), clientToken);
}

std::string CreateNatIpRequest::getNatIpDescription() const {
  return natIpDescription_;
}

void CreateNatIpRequest::setNatIpDescription(const std::string &natIpDescription) {
  natIpDescription_ = natIpDescription;
  setParameter(std::string("NatIpDescription"), natIpDescription);
}

std::string CreateNatIpRequest::getRegionId() const {
  return regionId_;
}

void CreateNatIpRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string CreateNatIpRequest::getNatGatewayId() const {
  return natGatewayId_;
}

void CreateNatIpRequest::setNatGatewayId(const std::string &natGatewayId) {
  natGatewayId_ = natGatewayId;
  setParameter(std::string("NatGatewayId"), natGatewayId);
}

bool CreateNatIpRequest::getDryRun() const {
  return dryRun_;
}

void CreateNatIpRequest::setDryRun(bool dryRun) {
  dryRun_ = dryRun;
  setParameter(std::string("DryRun"), dryRun ? "true" : "false");
}

std::string CreateNatIpRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void CreateNatIpRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string CreateNatIpRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void CreateNatIpRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

long CreateNatIpRequest::getOwnerId() const {
  return ownerId_;
}

void CreateNatIpRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

std::string CreateNatIpRequest::getNatIpCidr() const {
  return natIpCidr_;
}

void CreateNatIpRequest::setNatIpCidr(const std::string &natIpCidr) {
  natIpCidr_ = natIpCidr;
  setParameter(std::string("NatIpCidr"), natIpCidr);
}

std::string CreateNatIpRequest::getNatIp() const {
  return natIp_;
}

void CreateNatIpRequest::setNatIp(const std::string &natIp) {
  natIp_ = natIp;
  setParameter(std::string("NatIp"), natIp);
}

