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

#include <alibabacloud/vpc/model/AddPublicIpAddressPoolCidrBlockRequest.h>

using AlibabaCloud::Vpc::Model::AddPublicIpAddressPoolCidrBlockRequest;

AddPublicIpAddressPoolCidrBlockRequest::AddPublicIpAddressPoolCidrBlockRequest()
    : RpcServiceRequest("vpc", "2016-04-28", "AddPublicIpAddressPoolCidrBlock") {
  setMethod(HttpRequest::Method::Post);
}

AddPublicIpAddressPoolCidrBlockRequest::~AddPublicIpAddressPoolCidrBlockRequest() {}

int AddPublicIpAddressPoolCidrBlockRequest::getCidrMask() const {
  return cidrMask_;
}

void AddPublicIpAddressPoolCidrBlockRequest::setCidrMask(int cidrMask) {
  cidrMask_ = cidrMask;
  setParameter(std::string("CidrMask"), std::to_string(cidrMask));
}

std::string AddPublicIpAddressPoolCidrBlockRequest::getPublicIpAddressPoolId() const {
  return publicIpAddressPoolId_;
}

void AddPublicIpAddressPoolCidrBlockRequest::setPublicIpAddressPoolId(const std::string &publicIpAddressPoolId) {
  publicIpAddressPoolId_ = publicIpAddressPoolId;
  setParameter(std::string("PublicIpAddressPoolId"), publicIpAddressPoolId);
}

long AddPublicIpAddressPoolCidrBlockRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void AddPublicIpAddressPoolCidrBlockRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string AddPublicIpAddressPoolCidrBlockRequest::getClientToken() const {
  return clientToken_;
}

void AddPublicIpAddressPoolCidrBlockRequest::setClientToken(const std::string &clientToken) {
  clientToken_ = clientToken;
  setParameter(std::string("ClientToken"), clientToken);
}

std::string AddPublicIpAddressPoolCidrBlockRequest::getRegionId() const {
  return regionId_;
}

void AddPublicIpAddressPoolCidrBlockRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

bool AddPublicIpAddressPoolCidrBlockRequest::getDryRun() const {
  return dryRun_;
}

void AddPublicIpAddressPoolCidrBlockRequest::setDryRun(bool dryRun) {
  dryRun_ = dryRun;
  setParameter(std::string("DryRun"), dryRun ? "true" : "false");
}

std::string AddPublicIpAddressPoolCidrBlockRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void AddPublicIpAddressPoolCidrBlockRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string AddPublicIpAddressPoolCidrBlockRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void AddPublicIpAddressPoolCidrBlockRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

long AddPublicIpAddressPoolCidrBlockRequest::getOwnerId() const {
  return ownerId_;
}

void AddPublicIpAddressPoolCidrBlockRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

std::string AddPublicIpAddressPoolCidrBlockRequest::getCidrBlock() const {
  return cidrBlock_;
}

void AddPublicIpAddressPoolCidrBlockRequest::setCidrBlock(const std::string &cidrBlock) {
  cidrBlock_ = cidrBlock;
  setParameter(std::string("CidrBlock"), cidrBlock);
}

