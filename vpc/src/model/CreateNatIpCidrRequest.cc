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

#include <alibabacloud/vpc/model/CreateNatIpCidrRequest.h>

using AlibabaCloud::Vpc::Model::CreateNatIpCidrRequest;

CreateNatIpCidrRequest::CreateNatIpCidrRequest()
    : RpcServiceRequest("vpc", "2016-04-28", "CreateNatIpCidr") {
  setMethod(HttpRequest::Method::Post);
}

CreateNatIpCidrRequest::~CreateNatIpCidrRequest() {}

std::string CreateNatIpCidrRequest::getNatIpCidrDescription() const {
  return natIpCidrDescription_;
}

void CreateNatIpCidrRequest::setNatIpCidrDescription(const std::string &natIpCidrDescription) {
  natIpCidrDescription_ = natIpCidrDescription;
  setParameter(std::string("NatIpCidrDescription"), natIpCidrDescription);
}

long CreateNatIpCidrRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void CreateNatIpCidrRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string CreateNatIpCidrRequest::getClientToken() const {
  return clientToken_;
}

void CreateNatIpCidrRequest::setClientToken(const std::string &clientToken) {
  clientToken_ = clientToken;
  setParameter(std::string("ClientToken"), clientToken);
}

std::string CreateNatIpCidrRequest::getRegionId() const {
  return regionId_;
}

void CreateNatIpCidrRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string CreateNatIpCidrRequest::getNatGatewayId() const {
  return natGatewayId_;
}

void CreateNatIpCidrRequest::setNatGatewayId(const std::string &natGatewayId) {
  natGatewayId_ = natGatewayId;
  setParameter(std::string("NatGatewayId"), natGatewayId);
}

bool CreateNatIpCidrRequest::getDryRun() const {
  return dryRun_;
}

void CreateNatIpCidrRequest::setDryRun(bool dryRun) {
  dryRun_ = dryRun;
  setParameter(std::string("DryRun"), dryRun ? "true" : "false");
}

std::string CreateNatIpCidrRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void CreateNatIpCidrRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string CreateNatIpCidrRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void CreateNatIpCidrRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

std::string CreateNatIpCidrRequest::getNatIpCidrName() const {
  return natIpCidrName_;
}

void CreateNatIpCidrRequest::setNatIpCidrName(const std::string &natIpCidrName) {
  natIpCidrName_ = natIpCidrName;
  setParameter(std::string("NatIpCidrName"), natIpCidrName);
}

long CreateNatIpCidrRequest::getOwnerId() const {
  return ownerId_;
}

void CreateNatIpCidrRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

std::string CreateNatIpCidrRequest::getNatIpCidr() const {
  return natIpCidr_;
}

void CreateNatIpCidrRequest::setNatIpCidr(const std::string &natIpCidr) {
  natIpCidr_ = natIpCidr;
  setParameter(std::string("NatIpCidr"), natIpCidr);
}

