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

#include <alibabacloud/vpc/model/DeleteNatIpCidrRequest.h>

using AlibabaCloud::Vpc::Model::DeleteNatIpCidrRequest;

DeleteNatIpCidrRequest::DeleteNatIpCidrRequest()
    : RpcServiceRequest("vpc", "2016-04-28", "DeleteNatIpCidr") {
  setMethod(HttpRequest::Method::Post);
}

DeleteNatIpCidrRequest::~DeleteNatIpCidrRequest() {}

long DeleteNatIpCidrRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void DeleteNatIpCidrRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string DeleteNatIpCidrRequest::getClientToken() const {
  return clientToken_;
}

void DeleteNatIpCidrRequest::setClientToken(const std::string &clientToken) {
  clientToken_ = clientToken;
  setParameter(std::string("ClientToken"), clientToken);
}

std::string DeleteNatIpCidrRequest::getRegionId() const {
  return regionId_;
}

void DeleteNatIpCidrRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string DeleteNatIpCidrRequest::getNatGatewayId() const {
  return natGatewayId_;
}

void DeleteNatIpCidrRequest::setNatGatewayId(const std::string &natGatewayId) {
  natGatewayId_ = natGatewayId;
  setParameter(std::string("NatGatewayId"), natGatewayId);
}

bool DeleteNatIpCidrRequest::getDryRun() const {
  return dryRun_;
}

void DeleteNatIpCidrRequest::setDryRun(bool dryRun) {
  dryRun_ = dryRun;
  setParameter(std::string("DryRun"), dryRun ? "true" : "false");
}

std::string DeleteNatIpCidrRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void DeleteNatIpCidrRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string DeleteNatIpCidrRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void DeleteNatIpCidrRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

long DeleteNatIpCidrRequest::getOwnerId() const {
  return ownerId_;
}

void DeleteNatIpCidrRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

std::string DeleteNatIpCidrRequest::getNatIpCidr() const {
  return natIpCidr_;
}

void DeleteNatIpCidrRequest::setNatIpCidr(const std::string &natIpCidr) {
  natIpCidr_ = natIpCidr;
  setParameter(std::string("NatIpCidr"), natIpCidr);
}

