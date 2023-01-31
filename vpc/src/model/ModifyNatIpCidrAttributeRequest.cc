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

#include <alibabacloud/vpc/model/ModifyNatIpCidrAttributeRequest.h>

using AlibabaCloud::Vpc::Model::ModifyNatIpCidrAttributeRequest;

ModifyNatIpCidrAttributeRequest::ModifyNatIpCidrAttributeRequest()
    : RpcServiceRequest("vpc", "2016-04-28", "ModifyNatIpCidrAttribute") {
  setMethod(HttpRequest::Method::Post);
}

ModifyNatIpCidrAttributeRequest::~ModifyNatIpCidrAttributeRequest() {}

std::string ModifyNatIpCidrAttributeRequest::getNatIpCidrId() const {
  return natIpCidrId_;
}

void ModifyNatIpCidrAttributeRequest::setNatIpCidrId(const std::string &natIpCidrId) {
  natIpCidrId_ = natIpCidrId;
  setParameter(std::string("NatIpCidrId"), natIpCidrId);
}

std::string ModifyNatIpCidrAttributeRequest::getNatIpCidrDescription() const {
  return natIpCidrDescription_;
}

void ModifyNatIpCidrAttributeRequest::setNatIpCidrDescription(const std::string &natIpCidrDescription) {
  natIpCidrDescription_ = natIpCidrDescription;
  setParameter(std::string("NatIpCidrDescription"), natIpCidrDescription);
}

long ModifyNatIpCidrAttributeRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void ModifyNatIpCidrAttributeRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string ModifyNatIpCidrAttributeRequest::getClientToken() const {
  return clientToken_;
}

void ModifyNatIpCidrAttributeRequest::setClientToken(const std::string &clientToken) {
  clientToken_ = clientToken;
  setParameter(std::string("ClientToken"), clientToken);
}

std::string ModifyNatIpCidrAttributeRequest::getRegionId() const {
  return regionId_;
}

void ModifyNatIpCidrAttributeRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string ModifyNatIpCidrAttributeRequest::getNatGatewayId() const {
  return natGatewayId_;
}

void ModifyNatIpCidrAttributeRequest::setNatGatewayId(const std::string &natGatewayId) {
  natGatewayId_ = natGatewayId;
  setParameter(std::string("NatGatewayId"), natGatewayId);
}

bool ModifyNatIpCidrAttributeRequest::getDryRun() const {
  return dryRun_;
}

void ModifyNatIpCidrAttributeRequest::setDryRun(bool dryRun) {
  dryRun_ = dryRun;
  setParameter(std::string("DryRun"), dryRun ? "true" : "false");
}

std::string ModifyNatIpCidrAttributeRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void ModifyNatIpCidrAttributeRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string ModifyNatIpCidrAttributeRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void ModifyNatIpCidrAttributeRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

std::string ModifyNatIpCidrAttributeRequest::getNatIpCidrName() const {
  return natIpCidrName_;
}

void ModifyNatIpCidrAttributeRequest::setNatIpCidrName(const std::string &natIpCidrName) {
  natIpCidrName_ = natIpCidrName;
  setParameter(std::string("NatIpCidrName"), natIpCidrName);
}

long ModifyNatIpCidrAttributeRequest::getOwnerId() const {
  return ownerId_;
}

void ModifyNatIpCidrAttributeRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

std::string ModifyNatIpCidrAttributeRequest::getNatIpCidr() const {
  return natIpCidr_;
}

void ModifyNatIpCidrAttributeRequest::setNatIpCidr(const std::string &natIpCidr) {
  natIpCidr_ = natIpCidr;
  setParameter(std::string("NatIpCidr"), natIpCidr);
}

